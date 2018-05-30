/*
 * rs232command.h
 *
 *  Created on: 2009-5-14
 *      Author: Administrator
 */

#ifndef RS232COMMAND_H_
#define RS232COMMAND_H_



#include "Global.h"

#include "Project.h"
#include "pipe.h"
#include "debug.h"
//#include "SysInclude.h"
#ifdef _RS232COMMAND_C_
    #define INTERFACE
#else
    #define INTERFACE extern
#endif

extern char testhi3531;

// define for FPGA program saved in SPI flash
//extern u8 FPGA_GUID[16];
//extern u8 FPGA_END_SIGN[4];
#define FPGA_END_SIGN_OFFSET (0x10)
#define FPGA_FLASH_ADDRESS_OFFSET (0x00)
#define FPGA_FLASH_SIZE (0x800000)  // 4MB
#define FPGA1_FLASH_ADDRESS_OFFSET (0x400000)
#define FPGA1_FLASH_SIZE (0x400000)  // 4MB

#define UPDATE_BlOCK_SIZE (1024)

#define SOFT_VERSION_HIGH  	1
#define SOFT_VERSION_LOW	18

// V1.00 初始版本可实现HDMI/DP/DUAL_DVI正常输出



/*
 * RS232 COMMANDS LED-DIRECTOR
 */

#define STX (0x02)
#define ACK (0x06)
#define NACK (0x15)
#define VC_SUCCESS (1)
#define NO_SUCCESS (0)

#define VC_ADDRESS (0x00)

#define ADDRESS_24C16   0xA0
#define PANLE_INFO_LENGTH  43


#define DEBUG_PRINT 1
#if DEBUG_PRINT 
#define DebugPutString(x) Serial_PutString((u8*)(x))
#define DebugPrintf(str, val) printf_string((u8*)(str), (u16)(val))
#else
#define DebugPutString(x)  //Serial_PutString((u8*)(x))
#define DebugPrintf(str, val)  //printf((u8*)(str), (u16)(val))
#endif


static void SendAckOrNack(BYTE value);

typedef enum 
{
	_DP_EDID_4K_2K_60 = 0,
	_DP_EDID_4K_2K_30 = 1,
	_DP_EDID_1080P_60 = 2,
	_DP_EDID_CUSTOM,//ustom

	_DP_EDID_MAX_SIZE,
}_DP_EDID_ENUM;

enum _RS232_COMMAND
{
	
	W_COMPANY_LOGO	   = 0x68,
	WR_DEVICE_REGISTER = 0x69,
	
	WR_VSP320_REGISTER = 0x82,
	R_VSP330_HDMIA	   = 0x83,
	R_VSP330_HDMIB	   = 0x84,
	WR_VSP330_SAVE	   = 0x85,
	WR_HDMIOUT_DE 	   = 0x86,
	WR_OTHER_FUN       = 0x87,
	W_IP_ADDRESS	   = 0x88,
	R_IP_ADDRESS	   = 0x89,

	
	
	SOFTWARE_UPDATE = 0x9A,
	WR_OUTPUT_FORMAT = 0xA0,
	WR_INPUT_SOURCE = 0xA1,
	R_LED_VERSION = 0x6A,
	WR_DEVICE_SETTING = 0x6B,
	W_NAME1_FRONT4 = 0x70,
	W_NAME1_BACK4 = 0x71,
	W_NAME2_FRONT4 = 0x72,
	W_NAME2_BACK4 = 0x73,

	W_PIP_POS_SIZE = 0XB0,
	
	W_PIP_SUB_POS_X,
	W_PIP_SUB_POS_Y,
	W_PIP_SUB_SIZE_X,
	W_PIP_SUB_SIZE_Y,

	W_PIP_MAIN_POS_X,
	W_PIP_MAIN_POS_Y,
	W_PIP_MAIN_SIZE_X,
	W_PIP_MAIN_SIZE_Y,
	
	W_PIP_SUB_INPUT_SPURCE,
	
	W_Sync	= 0xF0,
	R_Sync	= 0xF1,
	HDMI_DP_4K2K_Read_Write_EDID	= 0x89,
} ;

//HDMI_DP_4K2K_Read_Write_Input
typedef enum
{
	HDMI_DP_4K2K_Input_Write_Switch_Source 	= 0x00,
	HDMI_DP_4K2K_Input_Read_Switch_Source 	= 0x01,

	HDMI_DP_4K2K_Input_Read_Input_Format 	= 0x03,

	HDMI_DP_4K2K_Input_Write_Input_PosX 	= 0x04,
	HDMI_DP_4K2K_Input_Read_Input_PosX 		= 0x05,
	HDMI_DP_4K2K_Input_Write_Input_PosY 	= 0x06,
	HDMI_DP_4K2K_Input_Read_Input_PosY 		= 0x07,
	HDMI_DP_4K2K_Input_Write_Input_Width 	= 0x08,
	HDMI_DP_4K2K_Input_Read_Input_Width		= 0x09,
	HDMI_DP_4K2K_Input_Write_Input_Height 	= 0x0A,
	HDMI_DP_4K2K_Input_Read_Input_Height	= 0x0B,

	HDMI_DP_4K2K_Input_Read_Input_HActive	= 0x0f,
	HDMI_DP_4K2K_Input_Read_Input_VActive	= 0x11,
	HDMI_DP_4K2K_Input_Read_Input_VS		= 0x13,
	HDMI_DP_4K2K_Input_Read_Input_HStart	= 0x15,
	HDMI_DP_4K2K_Input_Read_Input_VStart	= 0x17,
	HDMI_DP_4K2K_Input_Read_Input_HTotal	= 0x19,
	HDMI_DP_4K2K_Input_Read_Input_VTotal	= 0x1b,
	HDMI_DP_4K2K_Input_Read_Input_HVPol		= 0x1d,
}HDMI_DP_4K2K_Read_Write_Input_TypeDef;

//HDMI_DP_4K2K_Read_Write_Output

typedef enum
{
	HDMI_DP_4K2K_Output_Write_Output_Format	= 0x00,
	HDMI_DP_4K2K_Output_Read_Output_Format 	= 0x01,
	HDMI_DP_4K2K_Output_Write_Scale_PosX	= 0x02,
	HDMI_DP_4K2K_Output_Read_Scale_PosX 	= 0x03,
	HDMI_DP_4K2K_Output_Write_Scale_PosY	= 0x04,
	HDMI_DP_4K2K_Output_Read_Scale_PosY 	= 0x05,
	HDMI_DP_4K2K_Output_Write_Scale_Width	= 0x06,
	HDMI_DP_4K2K_Output_Read_Scale_Width 	= 0x07,
	HDMI_DP_4K2K_Output_Write_Scale_Height	= 0x08,
	HDMI_DP_4K2K_Output_Read_Scale_Height 	= 0x09,
	
	HDMI_DP_4K2K_Output_Read_Output_HActive	= 0x0b,
	HDMI_DP_4K2K_Output_Read_Output_VActive	= 0x0d,
	HDMI_DP_4K2K_Output_Read_Output_VS		= 0x0f,
	HDMI_DP_4K2K_Output_Read_Output_HStart	= 0x11,
	HDMI_DP_4K2K_Output_Read_Output_VStart	= 0x13,
	HDMI_DP_4K2K_Output_Read_Output_HTotal	= 0x15,
	HDMI_DP_4K2K_Output_Read_Output_VTotal	= 0x17,
	HDMI_DP_4K2K_Output_Read_Output_HVPol		= 0x19,

}HDMI_DP_4K2K_Read_Write_Output_TypeDef;

//HDMI_DP_4K2K_Read_Write_EDID

typedef enum
{
	HDMI_DP_4K2K_Write_EDID_Pixclock 	= 0x00,
	HDMI_DP_4K2K_Read_EDID_Pixclock		= 0x01,
	HDMI_DP_4K2K_Write_EDID_hActive 	= 0x02,
	HDMI_DP_4K2K_Read_EDID_hActive		= 0x03,
	HDMI_DP_4K2K_Write_EDID_vActive 	= 0x04,
	HDMI_DP_4K2K_Read_EDID_vActive		= 0x05,
	HDMI_DP_4K2K_Write_EDID_hBlank 		= 0x06,
	HDMI_DP_4K2K_Read_EDID_hBlank		= 0x07,
	HDMI_DP_4K2K_Write_EDID_vBlank 		= 0x08,
	HDMI_DP_4K2K_Read_EDID_vBlank		= 0x09,
	HDMI_DP_4K2K_Write_EDID_hSyncOffset = 0x0a,
	HDMI_DP_4K2K_Read_EDID_hSyncOffset	= 0x0b,
	HDMI_DP_4K2K_Write_EDID_vSyncOffset = 0x0c,
	HDMI_DP_4K2K_Read_EDID_vSyncOffset	= 0x0d,
	HDMI_DP_4K2K_Write_EDID_hSyncWidth 	= 0x0e,
	HDMI_DP_4K2K_Read_EDID_hSyncWidth	= 0x0f,
	HDMI_DP_4K2K_Write_EDID_vSyncWidth 	= 0x10,
	HDMI_DP_4K2K_Read_EDID_vSyncWidth	= 0x11,
	HDMI_DP_4K2K_Write_EDID_hvPolarity 	= 0x12,
	HDMI_DP_4K2K_Read_EDID_hvPolarity	= 0x13,
	HDMI_DP_4K2K_Write_EDID_reset_EDID 	= 0x14,
	HDMI_DP_4K2K_Write_EDID_ordinary	= 0x16,
	HDMI_DP_4K2K_Write_EDID_Custom_Width= 0x20,
	HDMI_DP_4K2K_Read_EDID_Custom_Width	= 0x21,
	HDMI_DP_4K2K_Write_EDID_Custom_Height= 0x22,
	HDMI_DP_4K2K_Read_EDID_Custom_Height= 0x23,
	HDMI_DP_4K2K_Write_EDID_Custom_Freq	= 0x24,
	HDMI_DP_4K2K_Read_EDID_Custom_Freq	= 0x25,
	HDMI_DP_4K2K_Write_EDID_reset_Custom= 0x26,
	HDMI_DP_4K2K_Write_EDID_FactoryReset= 0x28,
	

}HDMI_DP_4K2K_Read_Write_EDID_TypeDef;

//=================Sync
enum Branch_WR_SYNC	
{
	WR_InputSourceInfo					= 0x03,
	WR_CropScale						= 0x09,
	WR_InputSourceInfo_2				= 0x0a,
	WR_4KModeSetting					= 0x18,
	WR_EDIDSetting						= 0x19,
	WR_ModeSetting						= 0x26,
	WR_PQSetting                        = 0x27,

	WR_UserDisAreaSetting               = 0x28,//用户显示区域大小设置
	WR_RegionInputSource,	
	WR_RegionSize,

	W_PipWinParamSetting = 0xC0,
};

typedef enum
{
	MODE_4K2K = 0,
	MODE_4K1KTB = 1,
	MODE_4K1KLR = 2,
	MODE_2K1K4P = 3,
	MODE_2K1K1P = 4,
	MODE_P2P  = 5,
	MODE_MAX,
}SplitMode_TypeDef;

typedef enum
{
	INPUT_DVI_INDEX = 0,
	INPUT_MHL_INDEX = 1,
	INPUT_HDMI_INDEX = 2,
	INPUT_DP_INDEX = 3,
	INPUT_VGA_INDEX = 12,
	INPUT_INDEX_SIZE,
} InputSourceIndex_TypeDef;

typedef enum
{
	LAYOUT_PIP_LT,
	LAYOUT_PIP_RT,	 //added by cyj
	LAYOUT_PIP_LB,	 //added by cyj
	LAYOUT_PIP_RB,	 //added by cyj
	LAYOUT_PIP_CENT, //added by cyj
	LAYOUT_PBP_LR,
	LAYOUT_PBP_TB,
	LAYOUT_SIZE,
} PipLayout_TypeDef;

/*
 * write/read i2c register value of some slaver address device
 */
//WR_DEVICE_REGISTER
void WrDeviceRegisterTask(void);

/*
 * software update 
 */
 // SOFTWARE_UPDATE
 void SoftwareUpdate(void);

void WrOutputFormat(void);
void WrLayerSetting(void);
void WrLayerSetting_splitJoint(void);
void WrOutputSetting(void);
void WrInputSource(void);
void WrInputSetting(void);
void WrSwitchSetting(void);
void Wr90degreeRotationSetting(void);



/*
 * read  version write serial number
 */
void RLedVersionTask(void);

void WrVSP320RegisterTask(void);

void ReadHdmiATask(void); 
void ReadHdmiBTask(void); 
void WRVSP330SaveTask(void);
void WRHdmiOutDeTask(void);
void WROtherFunTask(void);

void WriteCompanyLogoTask(void);

// cmd == 0x90
void VSP320_CmdTask(void);


void processCmdFromLocal(BYTE cmd, BYTE dat1, BYTE dat2, BYTE dat3, BYTE dat4);


typedef struct
{
	BYTE address;
	BYTE sn;
	BYTE command;
	BYTE data_1;
	BYTE data_2;
	BYTE data_3;
	BYTE data_4;
	BYTE checksum;
} Command_TypeDef;


/*
typedef struct 
{
      WORD frame;
      WORD frame_min;
      WORD frame_max;
	WORD last_line_targer;
	BYTE lvds_output_port;
	BYTE lvds_panel_section;
	
	WORD hTotal;
	WORD hTotal_min;
	WORD hTotal_max;
	WORD vTotal;
	WORD vTotal_min;
	WORD vTotal_max;
	
	BYTE  hStart;
	WORD hActive;
      WORD hActive_end;
	  
	BYTE  vStart;
	WORD vActive;
      WORD vActive_end;
	  
	BYTE hSyncWidth;
	BYTE vSyncWidth;

	WORD pixel_clock;
	WORD pixel_clock_min;
	WORD pixel_clock_max;

      BYTE hvSyncPolarity;
}Panel_TypeDef;
*/
typedef Command_TypeDef Rs232CommandToLED;

void SendCmdToPC(Rs232CommandToLED *cmd);


bit CheckSum(Rs232CommandToLED *rsCom);

// 读取ASCII命令串，转换为Rs232CommandToLED结构
// 要求ASCII命令串结构是正确的。
// ASCII命令串  :  ":TOVC协议数据\r\n"
void StrToRs232Command(char *str, Rs232CommandToLED *rsCom);

typedef Command_TypeDef Rs232CommandFromLED;
//typedef Command_TypeDef *pRs232CommandFromLED;


/*
 * Function: InitRs232CommandVariable
 * Usage: InitRs232CommandVariable();
 * ----------------------------------------
 * 初始化全局变量
 */
INTERFACE void InitRs232CommandVariable(void);
INTERFACE int IsUpdateSoftware(void);

static void SetCheckSum(Rs232CommandFromLED *rsFromLED);




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
void Rs232CommandToStr(Rs232CommandFromLED *rsFromLED, char *str);

//void putchar11(BYTE ucVal);  // for test

void StrToRs232Command(char *str, Rs232CommandToLED *rsCom);

// char2由两个char组成 把两个ASCII码转换为一个BYTE
 BYTE HexCharToByte(char *char2);

/*
 * Function: ByteToChar
 * Usage: ByteToChar(value, char2);
 * -------------------------------------------
 * char2指向有两个char组成的数组
 * 把一个BYTE转换为两个ASCII码
 */
char * ByteToHexChar(BYTE value, char *char2);

/*
 * Function: TaskCommand
 * Usage: TaskCommand(str);
 * -------------------------------------------
 * 1. 解析命令字符串；
 * 2. 做相应的处理；
 * 3. 回复命令字符串；
 */
INTERFACE void TaskCommand(void);

/*
 * Function: IsrReceiveCommand
 * Usage: IsrReceiveCommand
 * ---------------------------------------
 * 此函数在uart中断处理函数中调用，以接受命令。
 */
INTERFACE void IsrReceiveCommand(int from, BYTE value);

INTERFACE u16 GetChecksumFromFlash(u32 address, u32 size);
INTERFACE void Init_H264OutPut();
bit isValidFpgaFile(void);


void WrLayOutMode(void);
void WrSplitMode(void);
void WrSyncData(void);
void WrCurMode(void);
void WrTpMode(void);
void WrMaxAlpha(void);

void SetBufferCheckSum(BYTE * buffer, int size);
void SysDelayMs(DWORD ms);
void Serial_PutString(u8 *s);
void printf_string(BYTE  *pFmt, WORD wVal);
BYTE  GetInputSource();
void ReadPanelFormEEPROM();
void SetInputCapFountion(u8 x);
void SendRs232CommandSt(Rs232CommandFromLED pCmd);
void SendBufferAndChecksumToPC(BYTE * buffer, int size);
u8 GetInputCapFountion(void);


#undef INTERFACE

#endif /* RS232COMMAND_H_ */
