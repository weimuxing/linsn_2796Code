/*
 * rs232command.c
 *
 *  Created on: 2009-5-14
 *      Author: Administrator
 */
#define _RS232COMMAND_C_


#include "rs232command.h"
#include "pipe.h"
//#include "SysInclude.h"
#include "Global.h"
#include "Project.h"
#include "ScalerTimerFunctionInclude.h"
#include "UserCommonInclude.h"
#include "VideoFormatTable.h"

#define DEBUG_RS232 1
#define ENABLE_WRITE_EDID 1
#define USE_STDIO 1// commented to unuse stdio.h
#ifndef USE_STDIO
#define putchar(c) SerialPutChar(c)
#endif

#define DETAILED_DESCRIPTOR_OFFSET (0x36)


WORD ColorTempRed 	= (0x7a << 4);//122
WORD ColorTempGreen = (0x8a << 4);//138
WORD ColorTempBlue 	= (0x84 << 4);//132
BYTE ColorTempStatus = 0;
u8 InputCapFountion;

extern BYTE UartKeyValue;
extern StructColorProcDataType g_stColorProcData;

void Set90degreeRotationC732_Vmirror(int layer, int rotate, int mode, int Hi, int Vi, int Ho, int Vo);

//extern void SetLayerSetting_Scale(int layer);

char testhi3531 = 0;
extern BYTE InitH264Flag;
/*
 * 定义常量
 */
static char  CommandToLEDHeader[] = "<T";
static const char  CommandFromLEDHeader[] = "<F";
static char  CommandEnd[] = ">";
static char commandFrom = 0; // 0 -- rs232, 1 -- udp, 2 -- usb;

#define STR_COMMAND_LENGTH (  sizeof(CommandToLEDHeader)-1+2*sizeof(Rs232CommandToLED)+sizeof(CommandEnd)-1  )

typedef struct _ReceiveCommandType
{
    char Buffer[STR_COMMAND_LENGTH];
    BYTE Index;
} ReceiveCommandType;

/*
 * 定义局部变量
 */

static Rs232CommandToLED commandToLED;          // 存储接收的命令结构体
static char strCommandFromLED[sizeof(CommandFromLEDHeader)-1+2*sizeof(Rs232CommandFromLED)+sizeof(CommandEnd)-1+1]; // 存储要发送的命令str
static Rs232CommandFromLED commandFromLED;      // 存储要发送的命令结构体
static ReceiveCommandType g_ReceiveCommand;
static bit g_ReceiveDetected;
static u32 delayTimeCount = 0;
static u32 delayTimeStart;
static u32 delayUpdateTimeStart = 0;
static u32 delayUpdateTimeCount = 0;
BYTE  inputsource = _NO_INPUT_PORT;
static int receive129ByteFromPC(u8 *rxBuffer);

// define for FPGA program saved in SPI flash
u8 FPGA_GUID[] =  {0x62,0x05,0x7F,0x97,0x28,0x63,0x45,0xEC,0x8A,0x7B,0xD2,0xB3,0x8D,0x90,0x14,0xEC};
u8 FPGA_END_SIGN[] = {0x19,0x81,0x02,0x14};


extern BYTE  EDID_DP[256];
//extern BYTE  EDID_BUF_DP_4K2K_60[256];
//extern BYTE EDID_BUF_DP_4K2K_30[256];
//extern BYTE EDID_BUF_DP_1080P[256];
//extern BYTE code EDID_BUF_DP_4K2K_60[256];
//extern BYTE code EDID_BUF_DP_4K2K_30[256];
//extern BYTE code EDID_BUF_DP_1080P[256];



#define HTONL16(x)	(((u16)(x) & 0xff00) >> 8 | ((u16)(x)&0x00ff) << 8)

#define Swap16(s) ((((s) & 0xff) << 8) | (((s) >> 8) & 0xff))

#if 0
BYTE  EDID_DP[256]=
{
	   //00     01    02    03      04     05     06      07    08      09    0a     0b      0c      0d    0e      0f
	    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x4A, 0x8B, 0x18, 0x80, 0x45, 0x54, 0x00, 0x00,  //00
	    0x10, 0x18, 0x01, 0x04, 0xB5, 0x47, 0x28, 0x78, 0x3E, 0x76, 0x90, 0xA8, 0x54, 0x4D, 0x9F, 0x25,  //01
	    0x0E, 0x50, 0x54, 0xA5, 0x6B, 0x80, 0xD1, 0xC0, 0x81, 0xC0, 0x81, 0x00, 0x81, 0x80, 0xA9, 0xC0,  //02
	    0xB3, 0x00, 0x01, 0x01, 0x01, 0x01, 0x4D, 0xD0, 0x00, 0xA0, 0xF0, 0x70, 0x3E, 0x80, 0x30, 0x20,  //03
	    0x35, 0x00, 0xC4, 0x8F, 0x21, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x45, 0x54, 0x59,  //04
	    0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x53, 0x0A, 0x20, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x32,  //05
	    0x4C, 0x1E, 0xA0, 0x3C, 0x00, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,  //06
	    0x00, 0x42, 0x65, 0x6E, 0x51, 0x20, 0x42, 0x4C, 0x33, 0x32, 0x30, 0x31, 0x0A, 0x20, 0x01, 0x44,  //07
	    0x02, 0x03, 0x22, 0xF1, 0x4F, 0x90, 0x05, 0x04, 0x03, 0x02, 0x01, 0x11, 0x12, 0x13, 0x14, 0x06,
	    0x07, 0x15, 0x16, 0x1F, 0x23, 0x09, 0x07, 0x07, 0x65, 0x03, 0x0C, 0x00, 0x20, 0x00, 0x83, 0x01,
	    0x00, 0x00, 0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40, 0x58, 0x2C, 0x45, 0x00, 0xC4, 0x8F,
	    0x21, 0x00, 0x00, 0x1E, 0x01, 0x1D, 0x80, 0x18, 0x71, 0x1C, 0x16, 0x20, 0x58, 0x2C, 0x25, 0x00,
	    0xC4, 0x8F, 0x21, 0x00, 0x00, 0x9E, 0x01, 0x1D, 0x00, 0x72, 0x51, 0xD0, 0x1E, 0x20, 0x6E, 0x28,
	    0x55, 0x00, 0xC4, 0x8F, 0x21, 0x00, 0x00, 0x1E, 0x8C, 0x0A, 0xD0, 0x8A, 0x20, 0xE0, 0x2D, 0x10,
	    0x10, 0x3E, 0x96, 0x00, 0xC4, 0x8F, 0x21, 0x00, 0x00, 0x18, 0x56, 0x5E, 0x00, 0xA0, 0xA0, 0xA0,
	    0x29, 0x50, 0x30, 0x20, 0x35, 0x00, 0xC4, 0x8F, 0x21, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0x65,
};

#endif

#define RS232_COMMAND_BUFFER_SIZE (256)

extern BYTE g_isSiganl;
static BYTE command_buffer[RS232_COMMAND_BUFFER_SIZE];
static Pipe_t command_pipe;
extern BYTE  inputsourceport[4]; //for just input source
static bit  ReceiveCommand(BYTE value);
void printf(BYTE  *pFmt, WORD wVal);


extern StructDisplayInfo g_stMDoUserOutputData;
extern WORD MDouserHwidth;
extern WORD MDouserVheight;
extern WORD MDouserHstart;
extern WORD MDouserVstart;

extern BYTE g_ucKeyStatePrev;
extern BYTE g_ucKeyStateCurr;

void SetBufferCheckSum(BYTE * buffer, int size)
{
	BYTE sum = 0;
	int i;
	for(i=0; i<size-1; i++)
	{
		sum += buffer[i];
	}
	buffer[size-1] = sum;
}


bit CheckSum(Rs232CommandToLED *rsCom)
{
    BYTE RSchecksum = 0;

    RSchecksum = rsCom->address+rsCom->sn+rsCom->command+
                 rsCom->data_1+rsCom->data_2+rsCom->data_3+rsCom->data_4;

    if(rsCom->checksum != RSchecksum)
    {
        return _FALSE;
    }

    return _TRUE;
}

// 读取ASCII命令串，转换为Rs232CommandToLED结构
// 要求ASCII命令串结构是正确的。
// ASCII命令串  :  "<T协议数据>"
void StrToRs232Command(char *strCom, Rs232CommandToLED *rsCom)
{
    BYTE i;
    BYTE * rs;
    strCom += 2;
    rs = (BYTE *)rsCom;

    for(i=0; i<sizeof(Rs232CommandToLED); i++)
    {
        *rs = HexCharToByte(strCom);
        rs++;
        strCom += 2;
    }
}
/*
 * Function: Rs232CommandToStr
 * Usage: Rs232CommandToStr(rsFromLED, str);
 * In: rsFromLED
 * Out: str
 * ---------------------------------------------
 * 1. 计数checksum
 * 2. 把Rs232CommandFromLED结构体打包为字符串
 * ASCII命令串  :  ":FRVC协议数据\r\n"
 * 要求事先要把协议数据以外的内容填入。
 */
void Rs232CommandToStr(Rs232CommandFromLED *rsFromLED, char *str)
{
    BYTE i;
    BYTE * rsArray;
    str += sizeof(CommandFromLEDHeader)-1;
    rsArray = (BYTE *) rsFromLED;
    SetCheckSum(rsFromLED);
    for(i=0; i<sizeof(Rs232CommandFromLED); i++)
    {
        ByteToHexChar(*rsArray, str);
        rsArray++;
        str += 2;
    }
}
/*
 * Function: Rs232CommandToStr1
 * Usage: Rs232CommandToStr1(rsFromLED, str);
 * In: rsFromLED
 * Out: str
 * ---------------------------------------------
 * 1. 计数checksum
 * 2. 把Rs232CommandFromLED结构体打包为字符串
 * ASCII命令串  :  ":FRVC06协议数据的data部分\r\n"
 * 要求事先要把协议数据以外的内容填入。
 */
void Rs232CommandToStr1(Rs232CommandFromLED *rsFromLED, char *str)
{
    BYTE i;
    BYTE * rsArray;
    str += sizeof(CommandFromLEDHeader) -1;
    rsArray = (BYTE *) rsFromLED;
    rsArray += 3;
    for(i=0; i<4; i++)
    {
        ByteToHexChar(*rsArray, str);
        rsArray++;
        str += 2;
    }
    *str = '\r';
    str++;
    *str = '\n';
    str++;
    *str = '\0';
}


// char2由两个char组成 把两个ASCII码转换为一个BYTE
BYTE HexCharToByte(char *char2)
{
    BYTE value = 0;
    BYTE i = 0;

    for(i=0; i<2; i++)
    {
        value *= 16;
        if(('0' <= *char2) && (*char2 <= '9'))
        {
            value += *char2 - '0';
        }
        else if(('a' <= *char2) && (*char2 <= 'f'))
        {
            value += *char2 - 'a' + 10;
        }
        else if(('A' <= *char2) && (*char2 <= 'F'))
        {
            value += *char2 - 'A' + 10;
        }

        char2++;

    }
    return value;
}
char * ByteToHexChar(BYTE value, char *char2)
{
    BYTE value2 = value >> 4;
    if(value2 <= 9)
    {
        char2[0] = '0' + value2;
    }
    else
    {
        char2[0] = 'a' + (value2 - 10);
    }

    value2 = value & 0x0F;
    if(value2 <= 9)
    {
        char2[1] = '0' + value2;
    }
    else
    {
        char2[1] = 'a' + (value2 - 10);
    }
    return char2;

}



void SetCheckSum(Rs232CommandFromLED *rsFromLED)
{
    rsFromLED->checksum = rsFromLED->address+rsFromLED->command+rsFromLED->sn+
                          rsFromLED->data_1+rsFromLED->data_2+rsFromLED->data_3+rsFromLED->data_4;
}


/*******************************************************************************
* Function Name  : SerialPutChar
* Description    : Print a character on the HyperTerminal
* Input          : - c: The character to be printed
* Output         : None
* Return         : None
*******************************************************************************/
void SerialPutChar(BYTE c)
{
  ScalerMcuUartWrite(c);
}

/*******************************************************************************
* Function Name  : Serial_PutString
* Description    : Print a string on the HyperTerminal
* Input          : - s: The string to be printed
* Output         : None
* Return         : None
*******************************************************************************/
void Serial_PutString(BYTE*s)
{
  while (*s != '\0')
  {
    SerialPutChar(*s);
    s ++;
  }
}

/*
 * Function: InitRs232CommandVariable
 * Usage: InitRs232CommandVariable();
 * ----------------------------------------
 * 初始化全局变量
 */
void InitRs232CommandVariable(void)
{
    BYTE i;

    // Initial strCommandFromLED
    strCommandFromLED[sizeof(strCommandFromLED)-1] = '\0';
    for(i=0; i<sizeof(CommandFromLEDHeader)-1; i++)
    {
        strCommandFromLED[i] = CommandFromLEDHeader[i];
    }
    for(i=0; i<sizeof(CommandEnd)-1; i++)
    {
        strCommandFromLED[sizeof(strCommandFromLED)-sizeof(CommandEnd)+i] = CommandEnd[i];
    }

    g_ReceiveDetected = _FALSE;

    pipe_init(&command_pipe, command_buffer, sizeof(command_buffer));

}


void SendBufferToPC(BYTE * buffer, int size)
{
      Serial_PutString(buffer);
}

void UARTSendBuffer( BYTE *buffer, int size)
{
    int i;
	 for(i=0; i<size; i++)
	{
		SerialPutChar(buffer[i]);
	}
}


void SendBufferAndChecksumToPC(BYTE * buffer, int size)
{
    int i;
    u8 checksum = 0;
    // set checksum
    for(i=0; i < (size-1); i++)
    {
        checksum += buffer[i];
    }
    buffer[size-1] = checksum;
    ////////////////////////////
    UARTSendBuffer(buffer, size);
}

/*
 * Function: SendRs232Command
 * Usage: SendRs232Command();
 * ---------------------------------
 * 把commandFromLED的命令发送给上位机
 */
void SendRs232Command()
{
         char buffer[50];
          int i;
          commandFromLED.checksum = commandFromLED.data_1+commandFromLED.data_2+commandFromLED.data_3+commandFromLED.data_4+
                                     commandFromLED.address+commandFromLED.command+commandFromLED.sn;
          buffer[0] = '<';
          buffer[1] = 'F';
          for(i=0; i<sizeof(commandFromLED); i++)
          {
                  ByteToHexChar(((BYTE *)&commandFromLED)[i],&buffer[2+i*2]);
          }
          buffer[2+sizeof(commandFromLED)*2] = '>';
          buffer[2+sizeof(commandFromLED)*2+1] = 0;

         SendBufferToPC((u8 *)buffer,19);
}


void SendRs232CommandSt(Rs232CommandFromLED pCmd)
{
	char buffer[50];
	int i;
	pCmd.checksum = pCmd.data_1+pCmd.data_2+pCmd.data_3+pCmd.data_4+
	pCmd.address+pCmd.command+pCmd.sn;

	buffer[0] = '<';
	buffer[1] = 'F';
	for(i=0; i<sizeof(Rs232CommandFromLED); i++)
	{
		ByteToHexChar(((BYTE *)&pCmd)[i],&buffer[2+i*2]);
	}
	buffer[2+sizeof(Rs232CommandFromLED)*2] = '>';
	buffer[2+sizeof(Rs232CommandFromLED)*2+1] = 0;

	SendBufferToPC((u8 *)buffer,19);
}

static  WORD readDataFromPC(u8 *rxBuffer, u16 size, u16 timeout)
{
	WORD index = 0;
	u8 value;
	WORD startTime = ScalerTimerGetTimerCounter();
	while(!isSysTickTimeout(startTime,timeout))
	{
		if(pipe_read(&command_pipe, &value))
		{
			rxBuffer[index] = value;
			index++;
			if(index >= size)
			{
				break;
			}
		}
	}
	
	return index;
}

//extern StructRegionInfoType g_stRegionInfo;

//#define SET_RGN_TIMING_CON(x)               	(g_stRegionInfo.pstDisplayStatusInfo[x].enumDisplayEvent |= _DISPLAY_EVENT_TIMING_CONFIRMED)
//#define SET_RGN_TIMING_DOUBLE(x)          		(g_stRegionInfo.pstDisplayStatusInfo[x].enumDisplayEvent |= _DISPLAY_EVENT_TIMING_DOUBLE_CHECK)



//extern bit UserCommonInterfaceCheckNoSupport(EnumDisplayRegion enumDisplayRegion);



/*
 * Return: 0 -- fail, 1 -- success.
 */

static WORD receiveBufferFromPC(BYTE *rxBuffer, WORD size)
{
	WORD index;
	BYTE checksum = 0;
	index = readDataFromPC(rxBuffer,size+1, 1500);
	if(index != (size+1))  // received data not	full
	{		
		return index;
	}
	for(index=0; index<size; index++)
	{
		checksum += rxBuffer[index];
	}
	
	if(checksum != rxBuffer[size])
	{
		return 0;
	}
	return size;
}

BYTE getInputPort()
{
     BYTE inport;
    switch(SysSourceGetInputPort())
    {
         case  _D0_INPUT_PORT:
                  inport = 2;   //DP
		    break;
         case  _D1_INPUT_PORT:
                  inport = 3;   //HDMI2.0
		    break;
         case  _D2_INPUT_PORT:
                  inport = 1;   //HDMI1.4
		    break;
         case  _D4_INPUT_PORT:
                  inport = 0;   //DUAL-DVI
		    break;
    }
     return inport;
}

EnumSourceSearchPort setInputPort( BYTE input)
{
     BYTE inport;
    switch(input)
    {
         case INPUT_DVI_INDEX:
		 inport =_D4_INPUT_PORT;  //DUAL-DVI
		 break;
         case INPUT_MHL_INDEX: 
		 inport =_D2_INPUT_PORT;  //HDMI1.4
		 break;
         case INPUT_DP_INDEX:
		 inport =_D0_INPUT_PORT;  //DP
		 break;
         case INPUT_HDMI_INDEX:
		 inport =_D1_INPUT_PORT;  //HDMI2.0
		 break;
	   default:
	   	 inport =_D1_INPUT_PORT;  //HDMI2.0
		 break;
    }
     return inport;
}



u8 GetInputCapFountion(void)
{
	return InputCapFountion;
}



void SetInputCapFountion(u8 x)
{
	InputCapFountion = x;
}



void IsrReceiveCommand(int from, BYTE value)
{
    commandFrom = from;
    pipe_write(&command_pipe, value);
}


void ByteSwap(u8 *buf,int len)
{
	char i,j;
	u8 temp;
	for(i = 0;i < len/2;i++)
	{
		temp = buf[i*2];
		buf[i*2] = buf[i*2+1];
		buf[i*2+1] = temp;
	}
}



void ResetEdidChecksum(unsigned char * edid_data)
{
	int i;
	unsigned char sum = 0;
	for(i=0; i<127; i++)
	{
		sum += edid_data[i];
	}
	edid_data[127] = (~sum)+1;
}



u16 PBP_H_startAdj = 0;
u16 PBP_V_startAdj = 0;


#define VIDEO_HS_LENGTH	(48)
#define VIDEO_VS_LENGTH	(6)

#define VIDEO_POP_RIGHT_REGION_START	(1968UL)
#define VIDEO_POP_BOTTOM_REGION_START	(1086UL)
								

void SetPipLayout(BYTE layout)
{
	u16 x, y, w, h;
	x = GET_MDOUSER_FIRST_REGION_HSTART();
	y = GET_MDOUSER_FIRST_REGION_VSTART();
	w = GET_MDOUSER_OUTPUT_HWIDTH();
	h = GET_MDOUSER_OUTPUT_VHEIGHT();
	DebugMessageSystem("X = ",x);
	DebugMessageSystem("Y = ",y);
	DebugMessageSystem("W = ",w);
	DebugMessageSystem("H = ",h);
	switch(layout)
	{
#if 0
		case LAYOUT_PIP_LT:
			SET_MDOUSER_PIP_MAIN_POS_X(x);
			SET_MDOUSER_PIP_MAIN_POS_Y(y);
			SET_MDOUSER_PIP_MAIN_SIZE_X(w);
			SET_MDOUSER_PIP_MAIN_SIZE_Y(h);
			
			SET_MDOUSER_PIP_SUB_POS_X(x);
			SET_MDOUSER_PIP_SUB_POS_Y(y);
			SET_MDOUSER_PIP_SUB_SIZE_X(w*2/5);
			SET_MDOUSER_PIP_SUB_SIZE_Y(h*2/5);
		break;
		case LAYOUT_PIP_RT:
			SET_MDOUSER_PIP_MAIN_POS_X(x);
			SET_MDOUSER_PIP_MAIN_POS_Y(y);
			SET_MDOUSER_PIP_MAIN_SIZE_X(w);
			SET_MDOUSER_PIP_MAIN_SIZE_Y(h);
			
			SET_MDOUSER_PIP_SUB_POS_X(x + w*3/5);
			SET_MDOUSER_PIP_SUB_POS_Y(y);
			SET_MDOUSER_PIP_SUB_SIZE_X(w*2/5);
			SET_MDOUSER_PIP_SUB_SIZE_Y(h*2/5);
		break;
		case LAYOUT_PIP_LB:
			SET_MDOUSER_PIP_MAIN_POS_X(x);
			SET_MDOUSER_PIP_MAIN_POS_Y(y);
			SET_MDOUSER_PIP_MAIN_SIZE_X(w);
			SET_MDOUSER_PIP_MAIN_SIZE_Y(h);
			
			SET_MDOUSER_PIP_SUB_POS_X(x);
			SET_MDOUSER_PIP_SUB_POS_Y(y + h*3/5);
			SET_MDOUSER_PIP_SUB_SIZE_X(w*2/5);
			SET_MDOUSER_PIP_SUB_SIZE_Y(h*2/5);
		break;
		case LAYOUT_PIP_RB:
			SET_MDOUSER_PIP_MAIN_POS_X(x);
			SET_MDOUSER_PIP_MAIN_POS_Y(y);
			SET_MDOUSER_PIP_MAIN_SIZE_X(w);
			SET_MDOUSER_PIP_MAIN_SIZE_Y(h);
			
			SET_MDOUSER_PIP_SUB_POS_X(x + w*3/5);
			SET_MDOUSER_PIP_SUB_POS_Y(y + h*3/5);
			SET_MDOUSER_PIP_SUB_SIZE_X(w*2/5);
			SET_MDOUSER_PIP_SUB_SIZE_Y(h*2/5);
		break;
		case LAYOUT_PIP_CENT:
			SET_MDOUSER_PIP_MAIN_POS_X(x);
			SET_MDOUSER_PIP_MAIN_POS_Y(y);
			SET_MDOUSER_PIP_MAIN_SIZE_X(w);
			SET_MDOUSER_PIP_MAIN_SIZE_Y(h);
			
			SET_MDOUSER_PIP_SUB_POS_X(x + w*3/10);
			SET_MDOUSER_PIP_SUB_POS_Y(y + h*3/10);
			SET_MDOUSER_PIP_SUB_SIZE_X(w*2/5);
			SET_MDOUSER_PIP_SUB_SIZE_Y(h*2/5);
		break;
		case LAYOUT_PBP_LR:
			SET_MDOUSER_PBP_LEFT_POS_X(x);	
			SET_MDOUSER_PBP_LEFT_POS_Y(y);	
			SET_MDOUSER_PBP_LEFT_SIZE_X(w/2);	
			SET_MDOUSER_PBP_LEFT_SIZE_Y(h);

			SET_MDOUSER_PBP_RIGHT_POS_X(x + (w / 2) + 48);	
			DebugMessageSystem("SET_MDOUSER_PBP_RIGHT_POS_X",GET_MDOUSER_PBP_RIGHT_POS_X());
			SET_MDOUSER_PBP_RIGHT_POS_Y(y);	
			SET_MDOUSER_PBP_RIGHT_SIZE_X(w/2);	
			SET_MDOUSER_PBP_RIGHT_SIZE_Y(h);	
			SET_PBP_H_START_ADJ(VIDEO_POP_RIGHT_REGION_START);
		break;
		case LAYOUT_PBP_TB:
			SET_MDOUSER_PBP_TOP_POS_X(x);	
			SET_MDOUSER_PBP_TOP_POS_Y(y);	
			SET_MDOUSER_PBP_TOP_SIZE_X(w);	
			SET_MDOUSER_PBP_TOP_SIZE_Y(h/2);	

			SET_MDOUSER_PBP_BOTTOM_POS_X(x);	
			SET_MDOUSER_PBP_BOTTOM_POS_Y(y + (h / 2) + 6);	
			DebugMessageSystem("SET_MDOUSER_PBP_BOTTOM_POS_Y",GET_MDOUSER_PBP_BOTTOM_POS_Y());
			SET_MDOUSER_PBP_BOTTOM_SIZE_X(w);
			SET_MDOUSER_PBP_BOTTOM_SIZE_Y(h/2);
			SET_PBP_V_START_ADJ(VIDEO_POP_BOTTOM_REGION_START);
		break;
#endif

		case LAYOUT_PBP_LR:
			SET_MDOUSER_PBP_RIGHT_POS_X(GET_MDOUSER_PBP_RIGHT_POS_X() + 48);	
			DebugMessageSystem("SET_MDOUSER_PBP_RIGHT_POS_X",GET_MDOUSER_PBP_RIGHT_POS_X());
			SET_PBP_H_START_ADJ(VIDEO_POP_RIGHT_REGION_START);
		break;
		case LAYOUT_PBP_TB:	
			SET_MDOUSER_PBP_BOTTOM_POS_Y(GET_MDOUSER_PBP_BOTTOM_POS_Y() + 6);	
			DebugMessageSystem("SET_MDOUSER_PBP_BOTTOM_POS_Y",GET_MDOUSER_PBP_BOTTOM_POS_Y());
			SET_PBP_V_START_ADJ(VIDEO_POP_BOTTOM_REGION_START);
		break;
		default:
		break;
	}
}

void CalcPipPbpPosSize(u8 cmdIndex,EnumDisplayRegion enumDisRegion,u16 d)
{
	switch(cmdIndex)
	{
		case W_PIP_SUB_POS_X:
			switch(enumDisRegion)
			{
				case _DISPLAY_RGN_SUB:
					SET_MDOUSER_PIP_SUB_POS_X(d);
				break ;
				case _DISPLAY_RGN_MAIN:
					SET_MDOUSER_PIP_MAIN_POS_X(d);
				break;
				case _DISPLAY_RGN_LEFT:
					SET_MDOUSER_PBP_LEFT_POS_X(d);
				break ;
				case _DISPLAY_RGN_RIGHT:
					SET_MDOUSER_PBP_RIGHT_POS_X(d + VIDEO_HS_LENGTH);
				break;
				case _DISPLAY_RGN_TOP:
					SET_MDOUSER_PBP_TOP_POS_X(d);
				break ;
				case _DISPLAY_RGN_BOTTOM:
					SET_MDOUSER_PBP_BOTTOM_POS_X(d);
				break;
			}
		break;
		case W_PIP_SUB_POS_Y:
			switch(enumDisRegion)
			{
				case _DISPLAY_RGN_SUB:
					SET_MDOUSER_PIP_SUB_POS_Y(d);
				break ;
				case _DISPLAY_RGN_MAIN:
					SET_MDOUSER_PIP_MAIN_POS_Y(d);
				break;
				case _DISPLAY_RGN_LEFT:
					SET_MDOUSER_PBP_LEFT_POS_Y(d);
				break ;
				case _DISPLAY_RGN_RIGHT:
					SET_MDOUSER_PBP_RIGHT_POS_Y(d);
				break;
				case _DISPLAY_RGN_TOP:
					SET_MDOUSER_PBP_TOP_POS_Y(d);
				break ;
				case _DISPLAY_RGN_BOTTOM:
					SET_MDOUSER_PBP_BOTTOM_POS_Y(d + VIDEO_VS_LENGTH);
				break;
			}
		break;
		case W_PIP_SUB_SIZE_X:
			switch(enumDisRegion)
			{
				case _DISPLAY_RGN_SUB:
					SET_MDOUSER_PIP_SUB_SIZE_X(d);
				break ;
				case _DISPLAY_RGN_MAIN:
					SET_MDOUSER_PIP_MAIN_SIZE_X(d);
				break;
				case _DISPLAY_RGN_LEFT:
					SET_MDOUSER_PBP_LEFT_SIZE_X(d);
				break ;
				case _DISPLAY_RGN_RIGHT:
					SET_MDOUSER_PBP_RIGHT_SIZE_X(d);
				break;
				case _DISPLAY_RGN_TOP:
					SET_MDOUSER_PBP_TOP_SIZE_X(d);
				break ;
				case _DISPLAY_RGN_BOTTOM:
					SET_MDOUSER_PBP_BOTTOM_SIZE_X(d);
				break;
			}
		break;
		case W_PIP_SUB_SIZE_Y:
			switch(enumDisRegion)
			{
				case _DISPLAY_RGN_SUB:
					SET_MDOUSER_PIP_SUB_SIZE_Y(d);
				break ;
				case _DISPLAY_RGN_MAIN:
					SET_MDOUSER_PIP_MAIN_SIZE_Y(d);
				break;
				case _DISPLAY_RGN_LEFT:
					SET_MDOUSER_PBP_LEFT_SIZE_Y(d);
				break ;
				case _DISPLAY_RGN_RIGHT:
					SET_MDOUSER_PBP_RIGHT_SIZE_Y(d);
				break;
				case _DISPLAY_RGN_TOP:
					SET_MDOUSER_PBP_TOP_SIZE_X(d);
				break ;
				case _DISPLAY_RGN_BOTTOM:
					SET_MDOUSER_PBP_BOTTOM_SIZE_Y(d);
				break;
			}
		break;
		
	}
}

static void processCmdData(void)
{
	Command_TypeDef * cmd;
	SWORD value = 0;
	BYTE buffer[128+1]={1,8,99,2,1,5,6,4,5,8,};
	uint8_t checksum;
	SWORD i;
	SWORD bufferLen;
	SWORD readLen;
	WORD brightness;
	WORD cnntrast;
	WORD userHwidth;
	WORD userVheight;
	WORD userHstart;
	WORD userVstart;
	BYTE receivebuffer[43];
	cmd = &commandToLED;
	commandFromLED.command = cmd->command;
	commandFromLED.data_1 = cmd->data_1;
	commandFromLED.data_2 = cmd->data_2;
	commandFromLED.data_3 = cmd->data_3;
	commandFromLED.data_4 = cmd->data_4;
    {
        int value = 0;
		DebugMessageSystem("--cmd->command--",  cmd->command);
	  	DebugMessageSystem("--cmd->data_1--",  cmd->data_1);
		DebugMessageSystem("--cmd->data_2--",  cmd->data_2);
		DebugMessageSystem("--cmd->data_3--",  cmd->data_3);
		DebugMessageSystem("--cmd->data_4--",  cmd->data_4);
        switch(commandToLED.command)
        {
			case 0x67:
				switch(cmd->data_1)
                {
					case 0: 
						//color temp test ok
						ColorTempStatus = 0;
						SET_OSD_SELECT_REGION(cmd->data_2);
						if(GET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION()) != cmd->data_3)
						{
							SET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION(),cmd->data_3);
							RTDFactoryOsdChangColorTemp(cmd->data_3);  						//这句产生颜色效果 _CT_9300
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);  	//   保存数据
						}
					break;
					case 1:
						//gamamma test ok
						//if(GET_OSD_GAMMA(GET_OSD_SELECT_REGION()) != _GAMMA_OFF)
						//{
						DebugMessageSystem("Set gamma",  cmd->data_3);
						SET_OSD_SELECT_REGION(cmd->data_2);
						if(GET_OSD_GAMMA(GET_OSD_SELECT_REGION()) != cmd->data_3)
						{
							SET_OSD_GAMMA(GET_OSD_SELECT_REGION(), cmd->data_3);  //_CT_9300
							UserAdjustGamma(GET_OSD_SYSTEM_SELECT_REGION(), GET_OSD_GAMMA(GET_OSD_SELECT_REGION()));
							UserAdjustGammaRegionEnable(GET_OSD_SYSTEM_SELECT_REGION(), _DB_APPLY_NO_POLLING, _ON);
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);
						}
						//}	
					break;
					case 2:
						brightness = (cmd->data_3 << 8) + cmd->data_4;
						//brightness test ok
						DebugMessageSystem("Set cnntrast",brightness);
						SET_OSD_SELECT_REGION(cmd->data_2);
						if(GET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION()) != brightness)
						{
							SET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION(), brightness);
							UserAdjustBrightness(GET_OSD_SYSTEM_SELECT_REGION(), GET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION()));
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);
						}
					break;
					case 3:
						cnntrast = (cmd->data_3 << 8) + cmd->data_4;
						//contrast test ok
						DebugMessageSystem("Set brightness",cnntrast);
						SET_OSD_SELECT_REGION(cmd->data_2);
						if(GET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION()) != cnntrast)
						{
							SET_OSD_CONTRAST(GET_OSD_SELECT_REGION(), cnntrast);
							UserAdjustContrast(GET_OSD_SYSTEM_SELECT_REGION(), GET_OSD_CONTRAST(GET_OSD_SELECT_REGION()));
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);
						}
					break;
					case 4:
						//color effect
						SET_OSD_SELECT_REGION(cmd->data_2);
						if(GET_OSD_COLOR_EFFECT(GET_OSD_SELECT_REGION()) != cmd->data_3)
						{
							SET_OSD_COLOR_EFFECT(GET_OSD_SELECT_REGION(), cmd->data_3); //_COLOREFFECT_MOVIE
							UserAdjustColorEffectMode(GET_OSD_SYSTEM_SELECT_REGION());
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG); 
						}
					break;
					case 5:
						DebugMessageSystem("Get brightness",GET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION()));
					break;
					case 6:
						DebugMessageSystem("Get contrast",GET_OSD_CONTRAST(GET_OSD_SELECT_REGION()));
					break;
					case 7:
						DebugMessageSystem("Get gamma",GET_OSD_GAMMA(GET_OSD_SELECT_REGION()));
					break;

					case 0xa0:
						ColorTempStatus = 1;
						SET_OSD_SELECT_REGION(cmd->data_2);
						if(GET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION()) != cmd->data_3)
						{
							ColorTempRed = cmd->data_4;
							ColorTempRed <<= 4;
							SET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION(),cmd->data_3);
							RTDFactoryOsdChangColorTemp(cmd->data_3);  						
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);  	
						}
					break;
					case 0xa1:
						ColorTempStatus = 1;
						SET_OSD_SELECT_REGION(cmd->data_2);
						if(GET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION()) != cmd->data_3)
						{
							ColorTempGreen = cmd->data_4;
							ColorTempGreen <<= 4;
							SET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION(),cmd->data_3);
							RTDFactoryOsdChangColorTemp(cmd->data_3);  						
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);  	
						}
					break;
					case 0xa2:
						ColorTempStatus = 1;
						SET_OSD_SELECT_REGION(cmd->data_2);
						if(GET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION()) != cmd->data_3)
						{
							ColorTempBlue = cmd->data_4;
							ColorTempBlue <<= 4;
							SET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION(),cmd->data_3);
							RTDFactoryOsdChangColorTemp(cmd->data_3);  						
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);  	
						}
					break;
				}
			break;
            case 0x68:
                switch(cmd->data_1)
                {
                    case 0x01:
                        // read device type
                        commandFromLED.command = 0x68;
                        commandFromLED.data_1 = 0x01;
                        commandFromLED.data_2 = 0x62;
                        commandFromLED.data_3 = 0x01;
                        commandFromLED.data_4 = 0;
                       SendRs232Command();
                        break;

                    case 0x02:
				//UserDefineAdjustAspectRatio();
				// UserDefineAdjustAspectRatio();
				//UserDefineAdjustDispSetting();
                    break;
					
			  		case 0x06:  //reset
			  	
                    break;	  
					  	  
                    case 0xff:   //for test command
                        commandFromLED.command = 0x68;
                        commandFromLED.data_1 = 0xff;
                        commandFromLED.data_2 = 0x62;
                        commandFromLED.data_3 = 0x01;
                        commandFromLED.data_4 = 0;
					     SendRs232Command();
					     buffer[0]=GET_INPUT_TIMING_HWIDTH();
					     buffer[1]=GET_INPUT_TIMING_HWIDTH()>>8;	
					     buffer[2]=GET_INPUT_TIMING_VHEIGHT();
					     buffer[3]=GET_INPUT_TIMING_VHEIGHT()>>8;
					     buffer[4]=(GET_INPUT_TIMING_VFREQ()+(GET_INPUT_TIMING_VFREQ()>>8))/10;
					     buffer[5] =0;
					     //DebugPutString("aabb22\r\n");
					     SendBufferAndChecksumToPC(buffer,7);
			   
                    break;
					
					  
			    default:
			     break;
                	}	
		break;
            case 0x6a:
                switch(cmd->data_1)
                {
			   case 0x07:
                        commandFromLED.command = 0x6a;
                        commandFromLED.data_1 = 0x07;
                        commandFromLED.data_2 = SOFT_VERSION_HIGH;
                        commandFromLED.data_3 = SOFT_VERSION_LOW;
                        commandFromLED.data_4 = 0;
                        SendRs232Command();
                       break;
                }
		   break;
            case 0x72:
                switch(cmd->data_1)
                {
			    	case 0x01:
                        commandFromLED.command = 0x72;
                        commandFromLED.data_1 = 0x01;
                        commandFromLED.data_2 = cmd->data_2;
                        commandFromLED.data_3 = GetInputSource();
                        commandFromLED.data_4 = 0;
                        SendRs232Command();
				 
			     //SYS_RSTART();
                    break;
			   		case 0x02:
                        commandFromLED.command = 0x72;
                        commandFromLED.data_1 = 0x02;
                        commandFromLED.data_2 = 0x03;
                        commandFromLED.data_3 = g_isSiganl;
                        commandFromLED.data_4 = 0;
                        SendRs232Command();
                    break;	   
                }
		   break;
		case 0x73:
			{
			    switch(cmd->data_1)
                {
                           
                	case 0x01:
					{
                        commandFromLED.command = 0x73;
                        commandFromLED.data_1 = 0x01;
                        commandFromLED.data_2 = GetVideoFormat(GET_INPUT_TIMING_HWIDTH(), GET_INPUT_TIMING_VHEIGHT(), GET_INPUT_TIMING_HTOTAL(),GET_INPUT_TIMING_VTOTAL(), buffer[4]);
                        commandFromLED.data_3 = 0;
                        commandFromLED.data_4 = 0;
                        SendRs232Command();	
                	}
		    		break;
                	case 0x02:
					{
                        commandFromLED.command = 0x73;
                        commandFromLED.data_1 = 0x02;
                        commandFromLED.data_2 = GET_OSD_DISPLAY_MODE();
                        commandFromLED.data_3 = 0;;
                        commandFromLED.data_4 = 0;
                        SendRs232Command();	
                	}
		    		break;

					case 0x19:
						SET_OSD_4P_INPUT_SOURCE(cmd->data_3);
						UserAdjustRegionInputPort(cmd->data_2, cmd->data_3);
						SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
						inputsource = cmd->data_3;
					break;

				  	case 0x20:
					{
						switch(cmd->data_2)
						{
							#if 1
							case INPUT_DP_INDEX:

								//SetInputTimming();
								if(SysSourceGetInputPort() !=_D0_INPUT_PORT )
								{
									SET_OSD_1P_INPUT_SOURCE(_D0_INPUT_PORT);
									UserAdjustRegionInputPort(_DISPLAY_RGN_1P, _D0_INPUT_PORT);
									SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
									inputsource = _D0_INPUT_PORT;
								}	
							break;
							
							case INPUT_HDMI_INDEX:
								//SetInputTimming();
								if(SysSourceGetInputPort() !=_D1_INPUT_PORT )
								{	
									SET_OSD_1P_INPUT_SOURCE(_D1_INPUT_PORT);
									UserAdjustRegionInputPort(_DISPLAY_RGN_1P, _D1_INPUT_PORT);
									SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
									inputsource = _D1_INPUT_PORT;
								}
							break;

							case  INPUT_MHL_INDEX:
								//SetInputTimming();
								if(SysSourceGetInputPort() !=_D2_INPUT_PORT )
								{	
									inputsource = _D2_INPUT_PORT;
									SET_OSD_1P_INPUT_SOURCE(_D2_INPUT_PORT);
									UserAdjustRegionInputPort(_DISPLAY_RGN_1P, _D2_INPUT_PORT);
									SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);

								}
							break;
							
							case INPUT_DVI_INDEX:
								//SetInputTimming();
							if(SysSourceGetInputPort() !=_D4_INPUT_PORT )
							{	
								SET_OSD_1P_INPUT_SOURCE(_D4_INPUT_PORT);
								UserAdjustRegionInputPort(_DISPLAY_RGN_1P, _D4_INPUT_PORT);
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);

								//inputsource = _D4_INPUT_PORT;
								inputsource = _D4_INPUT_PORT;	  //by zyk
							}
							break;

							case INPUT_VGA_INDEX:

								//SetInputTimming();
								if(SysSourceGetInputPort() !=_A0_INPUT_PORT )
								{
									SET_OSD_1P_INPUT_SOURCE(_A0_INPUT_PORT);
									UserAdjustRegionInputPort(_DISPLAY_RGN_1P, _A0_INPUT_PORT);
									SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
									inputsource = _A0_INPUT_PORT;
								}	
							break;
							#endif
							
							case  0x04: // 4p to 1p
							{
								inputsourceport[0] = (cmd->data_3 & 0xf);
								SET_OSD_DISPLAY_MODE(_OSD_DM_1P);
								OsdDispDisableOsd();
								UserAdjustDisplayMode();
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
								SysDelayMs(1000 );
							}
							break;
							
							case  0x05:  // 1p to 4p
							{
								SET_OSD_DISPLAY_MODE(_OSD_DM_4P);
								SET_OSD_SELECT_REGION(_OSD_SR_4P_LT_INSIDE);
								inputsourceport[0] = (cmd->data_3 & 0xf);
								inputsourceport[1] = ((cmd->data_3 >> 4) & 0xf);
								inputsourceport[2] = (cmd->data_4 & 0xf);
								inputsourceport[3] = ((cmd->data_4 >> 4) & 0xf);
								OsdDispDisableOsd();
								UserAdjustDisplayMode();
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
							}
							break;     
							case  0x06:
							{
								//if(_OSD_DM_2P_LR != GET_OSD_DISPLAY_MODE())
								//{
									DebugMessageSystem("SET_OSD_DISPLAY_MODE",_OSD_DM_2P_LR);
									SetInputCapFountion(_DISABLE);
									inputsourceport[0] = (cmd->data_3 & 0xf);
									inputsourceport[1] = ((cmd->data_3 >> 4) & 0xf);
									SET_OSD_DISPLAY_MODE(_OSD_DM_2P_LR);	 			//
									SET_OSD_SELECT_REGION(_OSD_SR_2P_LR_L);
									OsdDispDisableOsd();
									UserAdjustDisplayMode();
									SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
									SysDelayMs(1000 );
								//}	 
							}
							break;
							
							case  0x07:
							{					
								//if(_OSD_DM_2P_TB != GET_OSD_DISPLAY_MODE())
								//{
									DebugMessageSystem("SET_OSD_DISPLAY_MODE",_OSD_DM_2P_TB);
									//SetInputCapFountion(_DISABLE);
									inputsourceport[0] = (cmd->data_3 & 0xf);
									inputsourceport[1] = ((cmd->data_3 >> 4) & 0xf);
									SET_OSD_DISPLAY_MODE(_OSD_DM_2P_TB);   				//
									SET_OSD_SELECT_REGION(_OSD_SR_2P_TB_T);
									OsdDispDisableOsd();
									UserAdjustDisplayMode();  
									SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
									SysDelayMs(1000);
								//}
							}
							break;
							case  0x08:
							{		
								#if 1
								DebugMessageSystem("WR_RegionInputSource",0);
								SendAckOrNack(ACK);
								DebugMessageSystem("DisplayRegion",cmd->data_3);
								DebugMessageSystem("RegionSource",cmd->data_4);
								UserAdjustRegionInputPort(cmd->data_3, cmd->data_4);
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
								#endif

							}
							break;
							case  0x09:
							{				
								DebugMessageSystem("Input cap LR ENABLE",0);
								//SetInputCapFountion(_ENABLE);
								inputsourceport[0] = (cmd->data_3 & 0xf);
								inputsourceport[1] = ((cmd->data_3 >> 4) & 0xf);
								SET_OSD_DISPLAY_MODE(_OSD_DM_2P_LR);   				//
								SET_OSD_SELECT_REGION(_OSD_SR_2P_LR_L);
								OsdDispDisableOsd();
								UserAdjustDisplayMode();  
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
								SysDelayMs(1000 );
							}
							break;
							case  0x0a:
							{		
								DebugMessageSystem("Input cap TB ENABLE",0);
								inputsourceport[0] = (cmd->data_3 & 0xf);
								inputsourceport[1] = ((cmd->data_3 >> 4) & 0xf);
								SET_OSD_DISPLAY_MODE(_OSD_DM_2P_TB);   				//
								SET_OSD_SELECT_REGION(_OSD_SR_2P_TB_T);
								OsdDispDisableOsd();
								UserAdjustDisplayMode();  
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
								SysDelayMs(1000 );
							}
							break;
							case  0x0b:
							{				
								DebugMessageSystem("SET_KEYMESSAGE",  cmd->data_3);
								UartKeyValue = cmd->data_3;
							}
							break;
							case  0x0d:
							{			
								DebugMessageSystem("_OSD_DM_2P_PIP",_OSD_DM_2P_PIP);
								DebugMessageSystem("SET_PIP_LAYOUT",cmd->data_3);
								//SetInputCapFountion(_DISABLE);
								SetPipLayout(cmd->data_3);
								inputsourceport[0] = (cmd->data_4 >> 4) & 0xf;
								inputsourceport[1] = cmd->data_4 & 0xf;
								SET_OSD_DISPLAY_MODE(_OSD_DM_2P_PIP);   				//
								SET_OSD_SELECT_REGION(_OSD_SR_2P_PIP_MAIN);
								OsdDispDisableOsd();
								UserAdjustDisplayMode();  
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
								SysDelayMs(1000);
							}
							break;
							case  0x0E:
							{			
								DebugMessageSystem("_OSD_DM_2P_LR",_OSD_DM_2P_LR);
								DebugMessageSystem("SET_PIP_LAYOUT",cmd->data_3);
								SetInputCapFountion(_DISABLE);
								SetPipLayout(cmd->data_3);
								inputsourceport[0] = (cmd->data_4 >> 4) & 0xf;
								inputsourceport[1] = cmd->data_4 & 0xf;
								SET_OSD_DISPLAY_MODE(_OSD_DM_2P_LR);   					//
								SET_OSD_SELECT_REGION(_OSD_SR_2P_LR_L);
								OsdDispDisableOsd();
								UserAdjustDisplayMode();  
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
								SysDelayMs(1000);
							}
							break;
							case  0x0F:
							{			
								DebugMessageSystem("_OSD_DM_2P_TB",_OSD_DM_2P_TB);
								DebugMessageSystem("SET_PIP_LAYOUT",cmd->data_3);
								//SetInputCapFountion(_DISABLE);
								SetPipLayout(cmd->data_3);
								inputsourceport[0] = (cmd->data_4 >> 4) & 0xf;
								inputsourceport[1] = cmd->data_4 & 0xf;
								SET_OSD_DISPLAY_MODE(_OSD_DM_2P_TB);   					//
								SET_OSD_SELECT_REGION(_OSD_SR_2P_TB_T);
								OsdDispDisableOsd();
								UserAdjustDisplayMode();  
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
								SysDelayMs(1000);
							}
							break;
							default:
								 SYS_RSTART();
							break;
				          }
				    }
	                break;	
					case 0x21:
					{
						commandFromLED.data_2 = SysSourceGetInputPort();
						SendRs232Command();
					}
					break;	
					case 0x22:
					{
						DebugMessageSystem("Set PIP Region = ",cmd->data_2);
						DebugMessageSystem("Set PIP Source = ",cmd->data_3);
						UserAdjustRegionInputPort(cmd->data_2, cmd->data_3);
						SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
					}
					break;
				}
			}
			break;
			case W_PIP_POS_SIZE:
				userHwidth = (cmd->data_4 << 8) + cmd->data_3;
				CalcPipPbpPosSize(cmd->data_1,cmd->data_2,userHwidth);
				UserCommonAdjustPipSubTimingFormat(cmd->data_2);
			break;
			case W_PIP_SUB_INPUT_SPURCE:
			break;
             case W_Sync:
			 {
			 		
			 		DebugMessageSystem("User cmd process",  cmd->command);
	                checksum = 0;
	                bufferLen = commandToLED.data_3+(commandToLED.data_4 << 8);
	                readLen = readDataFromPC(buffer,bufferLen,1000);
			  		DebugMessageSystem("bufferLen = ",  bufferLen);
			   		DebugMessageSystem("readLen = ",  readLen);
	                if(bufferLen != readLen)
	                {
	                   SendAckOrNack(NACK);
					   DebugMessageSystem("ReadLen error",  readLen);
					   DebugMessageSystem("bufferLen = ",  bufferLen);
					   DebugMessageSystem("readLen = ",  readLen);
	                    break;
	                }
	                // checksum
	                for(i=0; i < bufferLen-1; i++)
	                {
	                    checksum += buffer[i];				
				    	DebugMessageSystem(": ",  buffer[i]);
	                }
					DebugMessageSystem(": ",  buffer[i]);
	                if(checksum != buffer[bufferLen-1])
	                {
	                    SendAckOrNack(NACK);
						DebugMessageSystem("Checksum error", checksum);
						DebugMessageSystem("bufferLen-1", buffer[bufferLen-1]);
	                    break;
	                }
	                bufferLen -= 1;
	                readLen -= 1;
				  switch(commandToLED.data_1)
				  {
					case WR_InputSourceInfo:
						  buffer[0]=0x30;
						  buffer[1]=0x31;	
			              buffer[2]=0x32;
						  buffer[3]=0x33;
						  SendBufferAndChecksumToPC(buffer,4);
						  break;
					case WR_CropScale:
						SysDelayMs(300);
						break;
					case WR_InputSourceInfo_2:
						break;
					case WR_4KModeSetting:
						break;
					case WR_EDIDSetting:
					{
						for(i = 0;i < 12;i++)
						{
					       EDID_DP[DETAILED_DESCRIPTOR_OFFSET+i] = buffer[i];
						   // edid_start++;
						}
						EDID_DP[0x47] = buffer[17];   //timming.hvPolarity
						ResetEdidChecksum(EDID_DP);
						UserCommonEepromWrite(_EDID_D0_ADDRESS_EEPROM,_D0_EMBEDDED_DDCRAM_SIZE,EDID_DP);
						SET_OSD_STATE(_MENU_ADVANCE_SINGLE_DP_EDID);
						UserAdjustDpEdidTableSwitch(_D0_INPUT_PORT);
						SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_SYSTEMDATA_MSG);
						
				  	}
					break;

					//g_stMDoUserOutputData
					//extern StructFourPortSplit g_stFourPortSplitData;
					case WR_UserDisAreaSetting:
						DebugMessageSystem("User Dis Area Setting",0);
						SendAckOrNack(ACK);

						ByteSwap(buffer,sizeof(g_stFourPortSplitData)-2);
						
						memcpy((u8*)&g_stFourPortSplitData,buffer,sizeof(g_stFourPortSplitData));
						
						DebugMessageSystem("User active H width",  g_stFourPortSplitData.stActiveWidth);
						DebugMessageSystem("User active V heigh",  g_stFourPortSplitData.stActiveHeight);
						DebugMessageSystem("User first H width",  g_stFourPortSplitData.stFirstDisplayWidth);
						DebugMessageSystem("User first V heigh",  g_stFourPortSplitData.stFirstDisplayHehght);
						DebugMessageSystem("User second H width",  g_stFourPortSplitData.stSecondDisplayWidth);
						DebugMessageSystem("User second V heigh",  g_stFourPortSplitData.stSecondDisplayHehght);
						DebugMessageSystem("User third H width",  g_stFourPortSplitData.stThirdDisplayWidth);
						DebugMessageSystem("User thied V heigh",  g_stFourPortSplitData.stThirdDisplayHehght);
						DebugMessageSystem("User fourth H width",  g_stFourPortSplitData.stFourthDisplayWidth);
						DebugMessageSystem("User fourth V heigh",  g_stFourPortSplitData.stFourthDisplayHehght);

						DebugMessageSystem("User first H start",  g_stFourPortSplitData.stFirstRegionWidthStart);
						DebugMessageSystem("User first V start",  g_stFourPortSplitData.stFirstRegionHeightStart);
						DebugMessageSystem("User second H start",  g_stFourPortSplitData.stSecondRegionWidthStart);
						DebugMessageSystem("User second V start",  g_stFourPortSplitData.stSecondRegionHeightStart);

						DebugMessageSystem("User third H start",  g_stFourPortSplitData.stThirdRegionWidthStart);
						DebugMessageSystem("User third V start",  g_stFourPortSplitData.stThirdRegionHeightStart);
						DebugMessageSystem("User fourth H start",  g_stFourPortSplitData.stFourthRegionWidthStart);
						DebugMessageSystem("User fourth V start",  g_stFourPortSplitData.stFourthRegionHeightStart);

						SET_MDOUSER_PBP_LEFT_POS_X(GET_MDOUSER_FIRST_REGION_HSTART());	
						SET_MDOUSER_PBP_LEFT_POS_Y(GET_MDOUSER_FIRST_REGION_VSTART());	
						SET_MDOUSER_PBP_LEFT_SIZE_X(GET_MDOUSER_OUTPUT_HWIDTH());	
						SET_MDOUSER_PBP_LEFT_SIZE_Y(GET_MDOUSER_FIRST_VHEIGHT() + GET_MDOUSER_SECOND_VHEIGHT());	

						SET_MDOUSER_PBP_RIGHT_POS_X(GET_MDOUSER_SECOND_REGION_HSTART());
						SET_MDOUSER_PBP_RIGHT_POS_Y(GET_MDOUSER_SECOND_REGION_VSTART());	
						SET_MDOUSER_PBP_RIGHT_SIZE_X(GET_MDOUSER_OUTPUT_HWIDTH());	
						SET_MDOUSER_PBP_RIGHT_SIZE_Y(GET_MDOUSER_THIRD_VHEIGHT() + GET_MDOUSER_FOURTH_VHEIGHT());	

						SET_MDOUSER_PBP_TOP_POS_X(GET_MDOUSER_FIRST_REGION_HSTART());	
						SET_MDOUSER_PBP_TOP_POS_Y(GET_MDOUSER_FIRST_REGION_VSTART());	
						SET_MDOUSER_PBP_TOP_SIZE_X(GET_MDOUSER_FIRST_HWIDTH() + GET_MDOUSER_SECOND_HWIDTH());	
						SET_MDOUSER_PBP_TOP_SIZE_Y(GET_MDOUSER_OUTPUT_VHEIGHT());	

						SET_MDOUSER_PBP_BOTTOM_POS_X(GET_MDOUSER_SECOND_REGION_HSTART());	
						SET_MDOUSER_PBP_BOTTOM_POS_Y(GET_MDOUSER_SECOND_REGION_VSTART());	
						SET_MDOUSER_PBP_BOTTOM_SIZE_X(GET_MDOUSER_FIRST_HWIDTH() + GET_MDOUSER_SECOND_HWIDTH());
						SET_MDOUSER_PBP_BOTTOM_SIZE_Y(GET_MDOUSER_OUTPUT_VHEIGHT());
						SET_PBP_H_START_ADJ(0);
						SET_PBP_V_START_ADJ(0);
						
						DebugMessageSystem("Reset display by 232",0);
						UserCommonAdjustPipSubTimingFormat(GET_OSD_SYSTEM_DISPLAY_REGION());
						//UserAdjustResetDisplayByPort(GET_OSD_SYSTEM_DISPLAY_REGION());
					break;

					case W_PipWinParamSetting:
						DebugMessageSystem("Pip Win Param Setting",0);
						SendAckOrNack(ACK);
						ByteSwap(buffer,sizeof(g_stPipWinData)-1);
						memcpy((u8*)&g_stPipWinData,buffer,sizeof(g_stPipWinData));
						
						DebugMessageSystem("gPipMainWinPosX",		g_stPipWinData.stPipMainWinPosX);
						DebugMessageSystem("gPipMainWinPosY",		g_stPipWinData.stPipMainWinPosY);
						DebugMessageSystem("gPipMainWinSizeX",		g_stPipWinData.stPipMainWinSizeX);
						DebugMessageSystem("gPipMainWinSizeY",		g_stPipWinData.stPipMainWinSizeY);
						
						DebugMessageSystem("gPipSubWinPosX",		g_stPipWinData.stPipSubWinPosX);
						DebugMessageSystem("gPipSubWinPosY",		g_stPipWinData.stPipSubWinPosY);
						DebugMessageSystem("gPipSubWinSizeX",		g_stPipWinData.stPipSubWinSizeX);
						DebugMessageSystem("gPipSubWinSizeY",		g_stPipWinData.stPipSubWinSizeY);
						
						DebugMessageSystem("gPbpLeftWinPosX",		g_stPipWinData.stPbpLeftWinPosX);
						DebugMessageSystem("gPbpLeftWinPosY",		g_stPipWinData.stPbpLeftWinPosY);
						DebugMessageSystem("gPbpLeftWinSizeX",		g_stPipWinData.stPbpLeftWinSizeX);
						DebugMessageSystem("gPbpLeftWinSizeY",		g_stPipWinData.stPbpLeftWinSizeY);
						
						DebugMessageSystem("gPbpRightWinPosX",		g_stPipWinData.stPbpRightWinPosX);
						DebugMessageSystem("gPbpRightWinPosY",		g_stPipWinData.stPbpRightWinPosY);
						DebugMessageSystem("gPbpRightWinSizeX",		g_stPipWinData.stPbpRightWinSizeX);
						DebugMessageSystem("gPbpRightWinSizeY",		g_stPipWinData.stPbpRightWinSizeY);
						
						DebugMessageSystem("gPbpTopWinPosX",		g_stPipWinData.stPbpTopWinPosX);
						DebugMessageSystem("gPbpTopWinPosY",		g_stPipWinData.stPbpTopWinPosY);
						DebugMessageSystem("gPbpTopWinSizeX",		g_stPipWinData.stPbpTopWinSizeX);
						DebugMessageSystem("gPbpTopWinSizeY",		g_stPipWinData.stPbpTopWinSizeY);
						
						DebugMessageSystem("gPbpBottomWinPosX",		g_stPipWinData.stPbpBomWinPosX);
						DebugMessageSystem("gPbpBottomWinPosY",		g_stPipWinData.stPbpBomWinPosY);
						DebugMessageSystem("gPbpBottomWinSizeX",	g_stPipWinData.stPbpBomWinSizeX);
						DebugMessageSystem("gPbpBottomWinSizeY",	g_stPipWinData.stPbpBomWinSizeY);
					break;

					case WR_RegionInputSource:
						DebugMessageSystem("WR_RegionInputSource",0);
						SendAckOrNack(ACK);
						DebugMessageSystem("DisplayRegion",cmd->data_2);
						DebugMessageSystem("RegionSource",cmd->data_3);
						UserAdjustRegionInputPort(cmd->data_2, cmd->data_3);
						SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
					break;

					case WR_RegionSize:
						userHstart = buffer[1];
						userHstart = (userHstart << 8) + buffer[0];
						userVstart = buffer[3];
						userVstart = (userVstart << 8) + buffer[2];
						userHwidth = buffer[5];
						userHwidth = (userHwidth << 8) + buffer[4];
						userVheight = buffer[7];
						userVheight = (userVheight << 8) + buffer[6];
						switch(buffer[8])
						{
							case _OSD_SR_4P_LT_INSIDE:
								DebugMessageSystem("SET LT_INSIDE SIZE",0);
								SET_MDOUSER_FIRST_REGION_HSTART(userHstart);
								SET_MDOUSER_FIRST_REGION_VSTART(userVstart);
								SET_MDOUSER_FIRST_HWIDTH(userHwidth);
								SET_MDOUSER_FIRST_VHEIGHT(userVheight);
							break;
							case _OSD_SR_4P_LB_INSIDE:
								DebugMessageSystem("SET LB_INSIDE SIZE",0);
								SET_MDOUSER_THIRD_REGION_HSTART(userHstart);
								SET_MDOUSER_THIRD_REGION_VSTART(userVstart);
								SET_MDOUSER_THIRD_HWIDTH(userHwidth);
								SET_MDOUSER_THIRD_VHEIGHT(userVheight);
							break;
							case _OSD_SR_4P_RT_INSIDE:
								DebugMessageSystem("SET RT_INSIDE SIZE",0);
								SET_MDOUSER_SECOND_REGION_HSTART(userHstart);
								SET_MDOUSER_SECOND_REGION_VSTART(userVstart);
								SET_MDOUSER_SECOND_HWIDTH(userHwidth);
								SET_MDOUSER_SECOND_VHEIGHT(userVheight);
							break;
							case _OSD_SR_4P_RB_INSIDE:
								DebugMessageSystem("SET RB_INSIDE SIZE",0);
								SET_MDOUSER_FOURTH_REGION_HSTART(userHstart);
								SET_MDOUSER_FOURTH_REGION_VSTART(userVstart);
								SET_MDOUSER_FOURTH_HWIDTH(userHwidth);
								SET_MDOUSER_FOURTH_VHEIGHT(userVheight);
							break;
						}
						SET_OSD_SELECT_REGION(buffer[8]);
						UserCommonAdjustPipSubTimingFormat(GET_OSD_SYSTEM_DISPLAY_REGION());
						//UserAdjustResetDisplayByPort(GET_OSD_SYSTEM_DISPLAY_REGION());
					break;

					case WR_ModeSetting:

						switch(buffer[0])
						{
						    case MODE_4K2K:
							  inputsourceport[0] = buffer[2];
							  inputsourceport[1] = buffer[3];
							  inputsourceport[2] = buffer[4];
							  inputsourceport[3] = buffer[5];
								if(setInputPort(buffer[2])!= SysSourceGetInputPort())
								{
									SET_OSD_1P_INPUT_SOURCE(setInputPort(buffer[2]));
									UserAdjustRegionInputPort(_DISPLAY_RGN_1P,setInputPort(buffer[2]));
									SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
									inputsource = setInputPort(buffer[2]);	   
								}
						      break;

						    case MODE_4K1KTB:

								inputsourceport[0] = buffer[2];
								inputsourceport[1] = buffer[3];
								//inputsourceport[2] = buffer[4];
								//inputsourceport[3] = buffer[5];
				                SET_OSD_DISPLAY_MODE(_OSD_DM_2P_TB);
				                SET_OSD_SELECT_REGION(_OSD_SR_2P_TB_T);
				                OsdDispDisableOsd();
				                UserAdjustDisplayMode(); 
						      break;
						    	case MODE_4K1KLR:
				                SET_OSD_DISPLAY_MODE(_OSD_DM_2P_LR);
				                SET_OSD_SELECT_REGION(_OSD_SR_2P_LR_L);
				                OsdDispDisableOsd();
				                UserAdjustDisplayMode(); 
						      break;

						    	case MODE_2K1K4P:
				               SET_OSD_DISPLAY_MODE(_OSD_DM_4P);
				               SET_OSD_SELECT_REGION(_OSD_SR_4P_LT_INSIDE);
				               OsdDispDisableOsd();
				               UserAdjustDisplayMode();	
						      break;
						    	case MODE_2K1K1P:
								SET_OSD_DISPLAY_MODE(_OSD_DM_1P);
								OsdDispDisableOsd();
								UserAdjustDisplayMode();
								SysDelayMs(1000 );
								//EnumSourceSearchPort inputPort = setInputPort(buffer[2]);
								if(setInputPort(buffer[2])!= SysSourceGetInputPort())
								{
									SET_OSD_1P_INPUT_SOURCE(setInputPort(buffer[2]));
									UserAdjustRegionInputPort(_DISPLAY_RGN_1P,setInputPort(buffer[2]));
									SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_DISPLAYMODEDATA_MSG);
									inputsource = setInputPort(buffer[2]);	   
								}
						      break;
							  
							  
						}
                    break;
					case WR_PQSetting:			 
					{
						brightness = (buffer[7]<<8) + buffer[6] ;
						cnntrast = (buffer[9]<<8) + buffer[8] ;;
						//color temp test ok
						if(GET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION()) !=buffer[10] )
						{
							SET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION(), buffer[10]);
							RTDFactoryOsdChangColorTemp(buffer[10]);  //这句产生颜色效果 _CT_9300
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);  //   保存数据
						}
						//gamamma test ok
						if(GET_OSD_GAMMA(GET_OSD_SELECT_REGION()) != _GAMMA_OFF)
						{
							if(GET_OSD_GAMMA(GET_OSD_SELECT_REGION()) !=buffer[11] )
							{
								SET_OSD_GAMMA(GET_OSD_SELECT_REGION(), buffer[11]);  //_CT_9300
								UserAdjustGamma(GET_OSD_SYSTEM_SELECT_REGION(), GET_OSD_GAMMA(GET_OSD_SELECT_REGION()));
								UserAdjustGammaRegionEnable(GET_OSD_SYSTEM_SELECT_REGION(), _DB_APPLY_NO_POLLING, _ON);
								SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);
							}
						}	
						//brightness test ok
						if(GET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION()) != brightness)
						{
							SET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION(), brightness);
							UserAdjustBrightness(GET_OSD_SYSTEM_SELECT_REGION(), GET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION()));
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);
					    }
						//SET_OSD_SATURATION(region, x)
						//UserAdjust
						//contrast test ok
						if(GET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION()) != cnntrast)
						{
							SET_OSD_CONTRAST(GET_OSD_SELECT_REGION(), cnntrast);
							UserAdjustContrast(GET_OSD_SYSTEM_SELECT_REGION(), GET_OSD_CONTRAST(GET_OSD_SELECT_REGION()));
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG);
						}
						//color effect
						if(GET_OSD_COLOR_EFFECT(GET_OSD_SELECT_REGION()) !=buffer[5] )
						{
							SET_OSD_COLOR_EFFECT(GET_OSD_SELECT_REGION(), buffer[5] ); //_COLOREFFECT_MOVIE
							UserAdjustColorEffectMode(_COLOREFFECT_MOVIE);
							SET_OSD_EVENT_MESSAGE(_OSDEVENT_SAVE_NVRAM_REGIONDATA_MSG); 
						}
				  	}
					break;
			 	}		
             }
			 break;
		 case R_Sync:
		 	  {
   				 switch(commandToLED.data_1)
				 {
					case WR_InputSourceInfo:

						break;
					case WR_CropScale:
						{
							commandFromLED.command = R_Sync;
							commandFromLED.data_1 = WR_CropScale;
							commandFromLED.data_2 = cmd->data_2;
							commandFromLED.data_3 = 9;
							commandFromLED.data_4 = 0;
							SendRs232Command();
							buffer[0] = GET_INPUT_TIMING_HWIDTH();
							buffer[1] = GET_INPUT_TIMING_HWIDTH()>>8;	
							buffer[2] = GET_INPUT_TIMING_VHEIGHT();
							buffer[3] = GET_INPUT_TIMING_VHEIGHT()>>8;
							buffer[4] = GET_MDOMAIN_OUTPUT_HWIDTH();
							buffer[5] = GET_MDOMAIN_OUTPUT_HWIDTH()>>8;	
							buffer[6] = GET_MDOMAIN_OUTPUT_VHEIGHT();
							buffer[7] = GET_MDOMAIN_OUTPUT_VHEIGHT()>>8;
							SendBufferAndChecksumToPC(buffer,9);
						}
						break;
					case WR_InputSourceInfo_2	:
						    for(i=0;i<29;i++) buffer[i] = 0;
							commandFromLED.command = 0xf1;
							commandFromLED.data_1 = WR_InputSourceInfo_2;
							commandFromLED.data_2 = cmd->data_2;
							commandFromLED.data_3 = 30;
							commandFromLED.data_4 = 0;
							SendRs232Command();
							buffer[0] = 21;
							buffer[1] = 22;
							buffer[2] = 23;
							buffer[3] = 24;
						    if(GET_OSD_DISPLAY_MODE()==_OSD_DM_4P)
						    {
								buffer[4] = _OSD_DM_4P;
								buffer[6] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_LT);
								buffer[7] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_LT)>>8;
								buffer[8] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_RB);
								buffer[9] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_RB)>>8;
								buffer[10] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_RT);
								buffer[11] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_RT)>>8;
								buffer[12] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_LB);
								buffer[13] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_LB)>>8;

								buffer[14] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_LT);
								buffer[15] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_LT)>>8;
								buffer[16] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_RB);
								buffer[17] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_RB)>>8;
								buffer[18] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_RT);
								buffer[19] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_RT)>>8;
								buffer[20] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_LB);
								buffer[21] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_LB)>>8;

								buffer[22] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_LT);
								buffer[23] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_LT)>>8;
								
								buffer[24] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_RB);
								buffer[25] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_RB)>>8;
								
								buffer[26] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_RT);
								buffer[27] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_RT)>>8;
								
								buffer[28] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_LB);
								buffer[29] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_LB)>>8;

								DebugMessageSystem("GET_INPUT_LT_HWIDTH()",GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_LT));
								DebugMessageSystem("GET_INPUT_LT_VHEIGHT()",GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_LT));
								DebugMessageSystem("GET_INPUT_LT_VFREQ()",GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_LT));

								DebugMessageSystem("GET_INPUT_LB_HWIDTH()",GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_LB));
								DebugMessageSystem("GET_INPUT_LB_VHEIGHT()",GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_LB));
								DebugMessageSystem("GET_INPUT_LB_VFREQ()",GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_LB));

								DebugMessageSystem("GET_INPUT_RT_HWIDTH()",GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_RT));
								DebugMessageSystem("GET_INPUT_RT_VHEIGHT()",GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_RT));
								DebugMessageSystem("GET_INPUT_RT_VFREQ()",GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_RT));

								DebugMessageSystem("GET_INPUT_RB_HWIDTH()",GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_RB));
								DebugMessageSystem("GET_INPUT_RB_VHEIGHT()",GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_RB));
								DebugMessageSystem("GET_INPUT_RB_VFREQ()",GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_RB));

						    }
							else if(GET_OSD_DISPLAY_MODE()==_OSD_DM_2P_LR)
							{
								buffer[4] = _OSD_DM_2P_LR;

								buffer[6] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_LEFT);
								buffer[7] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_LEFT)>>8;
								
								buffer[8] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_RIGHT);
								buffer[9] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_RIGHT)>>8;

								buffer[10] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_LEFT);
								buffer[11] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_LEFT)>>8;
								
								buffer[12] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_RIGHT);
								buffer[13] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_RIGHT)>>8;

								buffer[14] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_LEFT);
								buffer[15] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_LEFT)>>8;
								
								buffer[16] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_RIGHT);
								buffer[17] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_RIGHT)>>8;
								
							}
							else if(GET_OSD_DISPLAY_MODE()==_OSD_DM_2P_TB)
							{
								buffer[4] = _OSD_DM_2P_TB;

								buffer[6] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_TOP);
								buffer[7] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_TOP)>>8;
								
								buffer[8] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_BOTTOM);
								buffer[9] = GET_RGN_TIMING_HWIDTH(_DISPLAY_RGN_BOTTOM)>>8;

								buffer[10] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_TOP);
								buffer[11] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_TOP)>>8;
								
								buffer[12] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_BOTTOM);
								buffer[13] = GET_RGN_TIMING_VHEIGHT(_DISPLAY_RGN_BOTTOM)>>8;

								buffer[14] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_TOP);
								buffer[15] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_TOP)>>8;
								
								buffer[16] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_BOTTOM);
								buffer[17] = GET_RGN_TIMING_VFREQ(_DISPLAY_RGN_BOTTOM)>>8;
								
							}
							else
							{
								switch(SysSourceGetInputPort())
								{
									case _D0_INPUT_PORT:
										if(GET_INPUT_TIMING_HWIDTH()>100)
										{
											//buffer[5] =GetVideoFormat(GET_INPUT_TIMING_HWIDTH(), GET_INPUT_TIMING_VHEIGHT(), GET_INPUT_TIMING_HTOTAL(),GET_INPUT_TIMING_VTOTAL(), GET_INPUT_TIMING_VFREQ());

											buffer[6] = GET_INPUT_TIMING_HWIDTH();
											buffer[7] = GET_INPUT_TIMING_HWIDTH()>>8;

											buffer[8] = GET_INPUT_TIMING_VHEIGHT();
											buffer[9] = GET_INPUT_TIMING_VHEIGHT()>>8;	

											buffer[10] = GET_INPUT_TIMING_VFREQ();
											buffer[11] = GET_INPUT_TIMING_VFREQ()>>8;

											DebugMessageSystem("GET_INPUT_TIMING_HWIDTH()",GET_INPUT_TIMING_HWIDTH());
											DebugMessageSystem("GET_INPUT_TIMING_VHEIGHT()",GET_INPUT_TIMING_VHEIGHT());
											DebugMessageSystem("GET_INPUT_TIMING_VFREQ()",GET_INPUT_TIMING_VFREQ());
										}
									break;
									case _D1_INPUT_PORT:
										if(GET_INPUT_TIMING_HWIDTH()>100)
										{
											//buffer[5] =GetVideoFormat(GET_INPUT_TIMING_HWIDTH(), GET_INPUT_TIMING_VHEIGHT(), GET_INPUT_TIMING_HTOTAL(),GET_INPUT_TIMING_VTOTAL(), GET_INPUT_TIMING_VFREQ());

											buffer[6] = GET_INPUT_TIMING_HWIDTH();
											buffer[7] = GET_INPUT_TIMING_HWIDTH()>>8;

											buffer[8] = GET_INPUT_TIMING_VHEIGHT();
											buffer[9] = GET_INPUT_TIMING_VHEIGHT()>>8;

											buffer[10] = GET_INPUT_TIMING_VFREQ();
											buffer[11] = GET_INPUT_TIMING_VFREQ()>>8;

											DebugMessageSystem("GET_INPUT_TIMING_HWIDTH()",GET_INPUT_TIMING_HWIDTH());
											DebugMessageSystem("GET_INPUT_TIMING_VHEIGHT()",GET_INPUT_TIMING_VHEIGHT());
											DebugMessageSystem("GET_INPUT_TIMING_VFREQ()",GET_INPUT_TIMING_VFREQ());
										}
									break;
									case _D2_INPUT_PORT:
										if(GET_INPUT_TIMING_HWIDTH()>100)
										{
										//buffer[5] =GetVideoFormat(GET_INPUT_TIMING_HWIDTH(), GET_INPUT_TIMING_VHEIGHT(), GET_INPUT_TIMING_HTOTAL(),GET_INPUT_TIMING_VTOTAL(), GET_INPUT_TIMING_VFREQ());

										buffer[6] = GET_INPUT_TIMING_HWIDTH();
										buffer[7] = GET_INPUT_TIMING_HWIDTH()>>8;

										buffer[8] = GET_INPUT_TIMING_VHEIGHT();
										buffer[9] = GET_INPUT_TIMING_VHEIGHT()>>8;

										buffer[10] = GET_INPUT_TIMING_VFREQ();
										buffer[11] = GET_INPUT_TIMING_VFREQ()>>8;

										DebugMessageSystem("GET_INPUT_TIMING_HWIDTH()",GET_INPUT_TIMING_HWIDTH());
										DebugMessageSystem("GET_INPUT_TIMING_VHEIGHT()",GET_INPUT_TIMING_VHEIGHT());
										DebugMessageSystem("GET_INPUT_TIMING_VFREQ()",GET_INPUT_TIMING_VFREQ());
									}
									break;
									case _D4_INPUT_PORT:
										if(GET_INPUT_TIMING_HWIDTH()>100)
										{
											//buffer[5] =GetVideoFormat(GET_INPUT_TIMING_HWIDTH(), GET_INPUT_TIMING_VHEIGHT(), GET_INPUT_TIMING_HTOTAL(),GET_INPUT_TIMING_VTOTAL(), GET_INPUT_TIMING_VFREQ());

											buffer[6] = GET_INPUT_TIMING_HWIDTH();
											buffer[7] = GET_INPUT_TIMING_HWIDTH()>>8;

											buffer[8] = GET_INPUT_TIMING_VHEIGHT();
											buffer[9] = GET_INPUT_TIMING_VHEIGHT()>>8;

											buffer[10] = GET_INPUT_TIMING_VFREQ();	
											buffer[11] = GET_INPUT_TIMING_VFREQ()>>8;

											DebugMessageSystem("GET_INPUT_TIMING_HWIDTH()",GET_INPUT_TIMING_HWIDTH());
											DebugMessageSystem("GET_INPUT_TIMING_VHEIGHT()",GET_INPUT_TIMING_VHEIGHT());
											DebugMessageSystem("GET_INPUT_TIMING_VFREQ()",GET_INPUT_TIMING_VFREQ());
										}
									break;	
								}
								buffer[4] = _OSD_DM_1P;		   
							}
							
						SendBufferAndChecksumToPC(buffer,31); 
						break;
					case WR_4KModeSetting:
						{
						     commandFromLED.command = 0xf1;
	                        commandFromLED.data_1 = WR_4KModeSetting;
	                        commandFromLED.data_2 = cmd->data_2;
	                        commandFromLED.data_3 = 15;
	                        commandFromLED.data_4 = 0;
						     SendRs232Command();
						     if(GET_OSD_DISPLAY_MODE()==_OSD_DM_4P)
							{
							     buffer[0] =2;
							     buffer[2] =0;
							     buffer[3] =0;
						     	}
						     else if(GET_OSD_DISPLAY_MODE()==_OSD_DM_1P) 
							{
							     buffer[0] =0;
							     buffer[2] =getInputPort();
							     buffer[3] =getInputPort();
						     	}
						     else
							 {
							     buffer[0] =0;
							     buffer[2] =0;
							     buffer[3] =0;
						     	 }
						        buffer[1] =0;
						      	  buffer[4]=GET_MDOMAIN_OUTPUT_HWIDTH();
							  buffer[5]=GET_MDOMAIN_OUTPUT_HWIDTH()>>8;	
				                     buffer[6]=GET_MDOMAIN_OUTPUT_VHEIGHT();
							  buffer[7]=GET_MDOMAIN_OUTPUT_VHEIGHT()>>8;    
						        buffer[8] =0x3c;	               
						        buffer[9] =0;
						        buffer[10] =0x80;	     
						        buffer[11] =0x07;	 
						        buffer[12] =0x38;	               
						        buffer[13] =0x04;    
						       SendBufferAndChecksumToPC(buffer,15); 
						}

						break;
					case WR_EDIDSetting:

						break;
					case WR_PQSetting:			 
					{
						
						   brightness = GET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION());   //brightness 
			               cnntrast = GET_OSD_BRIGHTNESS(GET_OSD_SELECT_REGION());       //contrast 
                           buffer[0] = 0;
						   buffer[1] = 0;	
                           buffer[2] = 0;
						   buffer[3] = 0;	
                           buffer[4] = 0;	
						   buffer[5] =GET_OSD_COLOR_EFFECT(GET_OSD_SELECT_REGION());  
						   buffer[6] = brightness;
						   buffer[7] = brightness>>8;
						   buffer[8] = cnntrast;
						   buffer[9] = cnntrast>>8;
						   buffer[10] = GET_COLOR_TEMP_TYPE(GET_OSD_SELECT_REGION());
						   buffer[11] = GET_OSD_GAMMA(GET_OSD_SELECT_REGION());
						   SendBufferAndChecksumToPC(buffer,13);   
				  	}
					break;
   				 }
		 	 }
		 break;
		 
        	}
    	}
}


void SendInputTiming(u16 hs,u16 vs,u16 freq)
{
	
}

static void SendAckOrNack(BYTE value)
{
    switch(value)
    {
		case ACK:
			commandFromLED.data_1 = commandToLED.data_1;
			commandFromLED.data_2 = commandToLED.data_2;
			commandFromLED.data_3 = commandToLED.data_3;
			commandFromLED.data_4 = commandToLED.data_4;
			SendRs232Command();
		break;

		case NACK:
			commandFromLED.data_1 = commandToLED.data_1;
			commandFromLED.data_2 = 0xff;
			commandFromLED.data_3 = 0xff;
			commandFromLED.data_4 = 0xff;
			SendRs232Command();
		break;
    }
}

/*
 * Function: CommandErrorTask
 * Usage: CommandErrorTask();
 * ------------------------------
 * 处理接收到的命令格式错误
 */
static void CommandErrorTask(void)
{
    commandFromLED.sn = commandToLED.sn;
    commandFromLED.address = commandToLED.address;

    commandFromLED.command = commandToLED.command;
    commandFromLED.data_1 = commandToLED.data_1;
    commandFromLED.data_2 = commandToLED.data_2;
    commandFromLED.data_3 = 0xff;
    commandFromLED.data_4 = 0xff;
    SendRs232Command();
}

extern bit isSysTickTimeout(WORD startTiming, WORD delayTimming);

void SysDelayMs(DWORD ms)
{
	DWORD startTime = ScalerTimerGetTimerCounter();
	while(!isSysTickTimeout(startTime,ms));	
}
/*
 * Function: TaskCommand
 * Usage: TaskCommand(str);
 * -------------------------------------------
 * 1. 解析命令字符串；
 * 2. 做相应的处理；
 * 3. 回复命令字符串；
 * 在调用前要调用InitRs232CommandVariable
 */
void TaskCommand(void)
{
    BYTE i, value;

    // check if is valid command string received from host
    // check header
#if DEBUG_RS232
    //printf("enter TaskCommand()\r\n", 0);
#endif
    // from pipe receive data
    while(pipe_read(&command_pipe, &value))
    {
        if(ReceiveCommand(value))
        {
            // continue do nothing
        }
        else
        {
            break;
        }
    }

    if(!g_ReceiveDetected )//没有完整的命令返回
    {
        return;
    }
    g_ReceiveDetected = _FALSE;

    // check header
    for(i=0; i<sizeof(CommandToLEDHeader)-1; i++)
    {
        if(CommandToLEDHeader[i] != g_ReceiveCommand.Buffer[i])
        {
            CommandErrorTask();

#if DEBUG_RS232
          DebugMessageSystem("----error check header---", 1);
#endif

            return;
        }
    }

    // check end
    for(i=0; i<sizeof(CommandEnd)-1; i++)
    {
        if(CommandEnd[i] != g_ReceiveCommand.Buffer[ STR_COMMAND_LENGTH - sizeof(CommandEnd)+1+i])
        {
            CommandErrorTask();
#if DEBUG_RS232
          DebugMessageSystem("----error check end---", 1);
#endif
            return;
        }
    }

    // convert str to Rs232CommandToLED struct
    StrToRs232Command(g_ReceiveCommand.Buffer, &commandToLED);
    // check data checksum
    if( !CheckSum(&commandToLED) )
    {
        CommandErrorTask();
#if DEBUG_RS232
          DebugMessageSystem("----error checksum---", 1);
#endif
        return;
    }
    processCmdData();
    return;

}


typedef enum _ReceiveCommandState
{
    RECEIVE_INIT,
    RECEIVE_HEADER,
    RECEIVE_DATA,
    RECEIVE_END,
} ReceiveCommandState;


/*
 * Function: ReceiveCommand
 * Usage: if(ReceiveCommand(value)){}else{}
 * Return: TRUE---continue receive command, FALSE--received command is full
 * ---------------------------------------
 */
bit ReceiveCommand(BYTE value)
{
    static ReceiveCommandState state = RECEIVE_INIT;
    //DebugMessageSystem("----value---", value);
    if(value == '<')
        state = RECEIVE_INIT;

    switch(state)
    {
        case RECEIVE_INIT:
            g_ReceiveCommand.Index = 0;
            state = RECEIVE_HEADER;
        // no break;

        case RECEIVE_HEADER:
            g_ReceiveCommand.Buffer[g_ReceiveCommand.Index] = value;

            if(value != CommandToLEDHeader[g_ReceiveCommand.Index])
            {
                // 数据格式不对
                state = RECEIVE_INIT;
                break;
            }

            g_ReceiveCommand.Index++;
            if(g_ReceiveCommand.Index < sizeof(CommandToLEDHeader)-1)
            {
                // 在接受头部
                break;
            }
            else
            {
                // 要接受数据区
                state = RECEIVE_DATA;
                break;
            }

        case RECEIVE_DATA:
            g_ReceiveCommand.Buffer[g_ReceiveCommand.Index] = value;
            g_ReceiveCommand.Index++;
            if(g_ReceiveCommand.Index < (sizeof(CommandToLEDHeader)-1 + 2*sizeof(Rs232CommandToLED) ))
            {
                // 在接收数区部
                break;
            }
            else
            {
                // 要接受尾部
                state = RECEIVE_END;
                break;
            }

        case RECEIVE_END:
            g_ReceiveCommand.Buffer[g_ReceiveCommand.Index] = value;
            g_ReceiveCommand.Index++;
            if(g_ReceiveCommand.Index < (sizeof(CommandToLEDHeader)-1+2*sizeof(Rs232CommandToLED)+sizeof(CommandEnd)-1))
            {
                // 在接收尾部
                break;
            }
            else
            {
                // 接收结束
                g_ReceiveDetected = _TRUE;
                state = RECEIVE_INIT;
                return _FALSE;
            }

        default:
            state = RECEIVE_INIT;
            break;
    }
    return _TRUE;
}


/*******************************************************************************
* Function Name  : Serial_PutString
* Description    : Print a string on the HyperTerminal
* Input          : - s: The string to be printed
* Output         : None
* Return         : None
*******************************************************************************/
void printf_string(BYTE  *pFmt, WORD wVal)
{
    BYTE ucBff, ucDisp;
    BOOL bNotZero= _FALSE, bHex= _FALSE;
    WORD wDivider=10000;

    while( (ucBff = *(pFmt++)) != '\0' )
    {
        if(ucBff == '%') // check special case
        {
            switch( *(pFmt++) ) // check next character
            {
                case 'x': // hexadecimal number
                case 'X':
                    wDivider = 0x1000;
                    bHex = _TRUE;
                case 'd': // decimal number
                case 'i':
                    if(wVal)
                    {
                        while(wDivider)
                      	{
                      	    ucDisp = wVal/wDivider;
                            wVal = wVal%wDivider;

                            if(ucDisp)
                          	    bNotZero= _TRUE;

                            if(bNotZero)
                          	{
                          	    if (ucDisp>9)
                                    SerialPutChar(ucDisp-0x0a+'A');
                                else
                                    SerialPutChar(ucDisp+'0');
                            }

                            if(bHex)
                          	    wDivider /= 0x10;
                            else
                          	    wDivider /= 10;
                        }
                    }
                    else
      	                SerialPutChar('0');

                    break;
            } // switch
        }
        else // general
            SerialPutChar(ucBff); // put a character
    } // while
}

BYTE  GetInputSource()
{
    switch(SysSourceGetInputPort())
    {
       case _D0_INPUT_PORT:
                 return  INPUT_DP_INDEX;
	break;
	
       case _D1_INPUT_PORT:
               return   INPUT_HDMI_INDEX;
	break;
	
       case _D2_INPUT_PORT:
              return INPUT_MHL_INDEX;
	break;
			  
       case _D4_INPUT_PORT:
      	        return INPUT_DVI_INDEX;
	break;
	default:
		return 0xff;
					
    }
}

void ReadPanelFormEEPROM()
{
/*
      BYTE buffer[43];
	Panel_TypeDef panel_info;
	ScalerMcuIICRead(0xa0, 1, 0, 43, buffer );
	panel_info.frame = buffer[0]+(buffer[1]<<8);
	panel_info.frame_min = buffer[2] + (buffer[3] <<8);
	panel_info.frame_max =buffer[4]+(buffer[5]<<8);
	panel_info.last_line_targer = buffer[6]+(buffer[7]<<8);
	panel_info.lvds_output_port = buffer[8]+(buffer[9]<<8);
	
	panel_info.hTotal = buffer[10] + (buffer[11] <<8);
	panel_info.hTotal_min =buffer[12]+(buffer[13]<<8);
	panel_info.hTotal_max = buffer[14]+(buffer[15]<<8);

	panel_info.vTotal = buffer[16] + (buffer[17] <<8);
	panel_info.vTotal_min =buffer[18]+(buffer[19]<<8);
	panel_info.vTotal_max = buffer[20]+(buffer[21]<<8);

	panel_info.hStart = buffer[22] + (buffer[23] <<8);
	panel_info.hActive =buffer[24]+(buffer[25]<<8);
	panel_info.hActive_end = buffer[26]+(buffer[27]<<8);

	panel_info.vStart = buffer[28] + (buffer[29] <<8);
	panel_info.vActive =buffer[30]+(buffer[31]<<8);
	panel_info.vActive_end = buffer[32]+(buffer[33]<<8);

	panel_info.hSyncWidth =buffer[34];
	panel_info.vSyncWidth = buffer[35];

	panel_info.pixel_clock = buffer[36] + (buffer[37] <<8);
	panel_info.pixel_clock_min =buffer[38]+(buffer[39]<<8);
	panel_info.pixel_clock_max = buffer[40]+(buffer[41]<<8);

	panel_info.hvSyncPolarity = buffer[42];
*/
}
#undef _RS232COMMAND_C_

