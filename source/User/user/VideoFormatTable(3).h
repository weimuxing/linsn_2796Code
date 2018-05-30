#ifndef VIDEO_FORMAT_TABLE_H
#define VIDEO_FORMAT_TABLE_H

#include "define.h"

extern const u8 outFormatList[12];
extern const u8 outFormatList_extern[1];
extern const u8 outFormatList_others[48];

typedef enum _VIDEO_FORMAT
{
	MD_720x480_60p 		= 0,
	MD_720x576_50p 		= 1,
	MD_1280x720_60 		= 2,
	MD_1280x720_59_94 	= 3,
	MD_1280x720_50 		= 4,
	MD_1280x720_30 		= 5,
	MD_1280x720_29_97 	= 6,
	MD_1280x720_25 		= 7,
	MD_1280x720_24 		= 8,
	MD_1280x720_23_98 	= 9,	
	MD_1920x1080_60 	= 10,
	MD_1920x1080_59_94 	= 11,
	MD_1920x1080_50 	= 12,
	MD_1920x1080_30 	= 13,
	MD_1920x1080_30psf 	= 14,
	MD_1920x1080_29_97 	= 15,
	MD_1920x1080_29_97psf = 16,
	MD_1920x1080_25 	= 17,
	MD_1920x1080_25psf 	= 18,
	MD_1920x1080_24 	= 19,
	MD_1920x1080_24psf 	= 20,
	MD_1920x1080_23_98 	= 21,
	MD_1920x1080_23_98psf= 22,
	MD_640x480_60 		= 23,
	MD_640x480_75 		= 24,
	MD_640x480_85 		= 25,
	MD_800x600_60 		= 26,
	MD_800x600_75 		= 27,
	MD_800x600_85 		= 28,
	MD_1024x768_60 		= 29,
	MD_1024x768_75 		= 30,
	MD_1024x768_85 		= 31,	
	MD_1280x1024_60 	= 32,
	MD_1280x1024_75 	= 33,
	MD_1280x1024_85 	= 34,
	MD_1600x1200_60 	= 35,  
	// 以上是GS4911 支持的格式
	// 以下为新增格式
	MD_720x480_60i 		= 36,
	MD_720x576_50i 		= 37,

	MD_1920x1080_60i 	= 38,
	MD_1920x1080_50i 	= 39,

	MD_1152x864_75 		= 40,
	MD_1280x768_60 		= 41,
	MD_1280x960_60 		= 42,
	MD_1280x960_85 		= 43,
	MD_1360x768_60 		= 44,
	MD_1366x768_60 		= 45,
	MD_1400x1050_60 	= 46,
	MD_1440x900_60 		= 47,
	MD_2048x1152_60 	= 48,
	MD_1680x1050_60 	= 49,
	MD_1920x1200_60 	= 50,

	MD_1600x1200_60_reduce 	= 51,
	MD_1920x1080_60_reduce	= 52,
	MD_1440x900_60_reduce 	= 53,
	MD_1680x1050_60_reduce  = 54,
	MD_1400x1050_60_reduce  = 55,
	MD_2176x544_60_reduce	= 56,  // 有问题
	MD_1152x1152_60         = 57,  // 有问题
	MD_1280x1280_60         = 58,

	// 一下格式与铁观音不一致
	MD_2560x812_60			= 59,	
	MD_2560x816_60_reduce	= 60,// 20121213
	MD_1280x800_60			= 61,
	MD_1024x768_59_94		= 62,
	
	MD_1920x1080_59_94i		= 63,// 20121213

	#if 1
	
	MD_1024x1280_60			= 64,// 20121229
	MD_1024x1920_60			= 65,// 20121229

	MD_1920x1080_60_reduce_new	= 66, // 20130112
	
	MD_1248x936_60_reduce	= 67,// 20130116
	MD_1976x1144_60_reduce	= 68,// 20130116
	MD_1872x1040_60_reduce	= 69,// 20130116
	
	MD_1080x1920_60	= 70,

	MD_720x480_60i_2 = 71,
	MD_720x576_50i_2 = 72,

	
	MD_3840x2160_25  = 73,
	MD_3840x2160_30  = 74,
	MD_3840x2160_50  = 75,
	MD_3840x2160_60  = 76,
	MD_3840x2160_59_94  = 77,
	MD_3840x2160_29_97  = 78,

	MD_4096x2160_25  = 79,
	MD_4096x2160_30  = 80,
	MD_4096x2160_50  = 81,
	MD_4096x2160_60  = 82,
	MD_4096x2160_59_94  = 83,
	MD_4096x2160_29_97  = 84,

	MD_3840x2160_24  = 85,
	MD_3840x2160_23_98  = 86,
	MD_4096x2160_24  = 87,
	MD_4096x2160_23_98  = 88,

	MD_2560x1600_60  	=89,
	MD_2560x1440_60  	=90,
	MD_3840x1080_60		=91,
	
	#endif


	


	MD_INDEX_SIZE,
	
	MD_CUSTOM=124,	
	MD_INPUT_FORMAT = 125,
	MD_UNDEFINE = 126,
	MD_NOINPUT = 127,
} VideoFormat_TypeDef;

typedef enum
{
	RES_720X480,
	RES_720X576,
	RES_1440X480,
	RES_1440X576,
	RES_1280X720,
	RES_1920X1080,
	RES_640X480,
	RES_800X600,
	RES_1024X768,
	RES_1280X1024,
	RES_1600X1200,
	RES_1280X768,
	RES_1440X864,
	RES_1440X900,
	RES_1400X1050,
	RES_1280X960,
	RES_1152X864,
	RES_1920X1200,
	RES_1360X768,
	RES_1366X768,
	RES_1680X1050,
	RES_2048X1152,
	RES_2176X544,
	RES_1152X1152,
	RES_1280X1280,
	RES_2560X816,// 20121213
	RES_2560X812,// 20121213
	RES_1024X1280,// 20121229
	RES_1024X1920,// 20121229
	RES_1248X936,// 20130116
	RES_1976X1144,// 20130116
	RES_1872x1040,// 20130116
	RES_1080X1920,// 20130227
	RES_1280X800, // 20130522
	RES_3840x2160, // 20170213 by anve
	RES_4096x2160, // 20170213 by anve
	RES_2560x1600, // 20170213 by anve
	RES_2560x1440, // 20170213 by anve
	RES_3840x1080, // 20170213 by anve
	
	RES_INDEX_SIZE,		
} Resolution_TypeDef;

typedef struct
{
	WORD DisplayWidth;
	WORD DisplayHeight;
} Resolution_Struct;

typedef struct
{
	Resolution_TypeDef res;
	WORD htotal;
	WORD vtotal;
	WORD hstart;
	WORD vstart;	
	BYTE vfreq;   // Hz	
	BYTE hSyncWidth;
	BYTE vSyncWidth;
	BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
	u32  pixelClock;
} VideoDefine_Struct;

const char * GetStrByVideoFormat(BYTE format);
Resolution_Struct GetResByVideoFormat(BYTE format);

u8 GetGS4911ByVideoFormat(BYTE format);
u8 GetVideoFormatByGS4911(u8 format);

WORD GetHDEByVideoFormat(BYTE format);
WORD GetVDEByVideoFormat(BYTE format);
WORD GetVDEByVideoFormat2(BYTE format);

WORD GetHTotalByVideoFormat(BYTE format);
WORD GetVTotalByVideoFormat(BYTE format);

WORD GetHStartByVideoFormat(BYTE format);
WORD GetVStartByVideoFormat(BYTE format);
WORD GetHSyncWidthByVideoFormat(BYTE format);
WORD GetVSyncWidthByVideoFormat(BYTE format);
WORD GetHSyncPolarityByVideoFormat(BYTE format);
WORD GetVSyncPolarityByVideoFormat(BYTE format);
WORD GetVFreqByVideoFormat(BYTE format);

 
int GetDlckByVideoFormat(BYTE format);
int GetVideoFormat(int hde, int vde, int htotal, int vtotal, int vfreq);

int GetFormatByHdeVde(int hde, int vde);

int IsInterlaceFormat(int format);

int IsSDFormat(int format);

BYTE GetExtInputFormat(void);

u8 getCustomTimming(int h_pixels,int v_lines,int freq);

WORD getCustomH(void);
WORD getCustomV(void);
BYTE getCustomF(void);







#endif // VIDEO_FORMAT_TABLE_H

