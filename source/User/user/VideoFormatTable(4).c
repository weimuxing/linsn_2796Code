#include "VideoFormatTable.h"
#include "inputSignal.h"
#include "usrC732.h"
#include "userpref.h"


extern BYTE ProductType;


//#define _INPUT_FORMAT (getInputFormat(INPUT_PORT_HDMI1))
BYTE GetExtInputFormat(void)
{
    return GetUserSetting()->ExtSyncFormat;
    //return GetGenlockFormat();
}
#define _INPUT_FORMAT  GetExtInputFormat()


Resolution_Struct tModeResolution[RES_INDEX_SIZE] =
{
    {720, 480},     //RES_720X480,
    {720, 576},     //RES_720X576,
    {1440, 480},    //RES_1440X480,
    {1440, 576},    //RES_1440X576,
    {1280, 720},    //RES_1280X720,
    {1920, 1080},   //RES_1920X1080,
    {640, 480},     //RES_640X480,
    {800, 600},     //RES_800X600,
    {1024, 768},    //RES_1024X768,
    {1280, 1024},   //RES_1280X1024,
    {1600, 1200},   //RES_1600X1200,
    {1280, 768},    //RES_1280X768,
    {1440, 864},    //RES_1440X864,
    {1440, 900},    //RES_1440X900,
    {1400, 1050},   //RES_1400X1050,
    {1280, 960},    //RES_1280X960,
    {1152, 864},    //RES_1152X864,
    {1920, 1200},   //RES_1920X1200,
    {1360, 768},    //RES_1360X768,
    {1366, 768},    //RES_1366X768,
    {1680, 1050},   //RES_1680X1050,
    {2048, 1152},   //RES_2048X1152,
    {2176, 544},    //RES_2176X544,
    {1152, 1152},   //RES_1152X1152,
    {1280, 1280},   //RES_1280X1280,
    {2560, 816},    //RES_2560X816,// 20121213
    {2560, 812},    //RES_2560X816,// 20121213
    {1024, 1280},   //RES_1024X1280,// 20121229
    {1024, 1920},   //RES_1024X1920,// 20121229
    {1248, 936},    //RES_1248X936,// 20130116
    {1976, 1144},   //RES_1976X1144,// 20130116
    {1872, 1040},   //RES_1872X1040,// 20130116
    {1080, 1920},   //RES_1080X1920,// 20130227
    {1280, 800},    //RES_1280X800,// 20130522
    {3840, 2160},    //RES_3840x2160, // 20170213
    {4096, 2160},    //RES_4096x2160, // 20170213
    {2560, 1600},	//	RES_2560x1600,
	{2560, 1440},	//	RES_2560x1440,
    {3840, 1080},   // RES_3840x1080, // 20170213 by anve
	

};

const VideoDefine_Struct tVideoDefine[MD_INDEX_SIZE] =
{
    //MD_720x480_60
    {
        RES_720X480, //Resolution_Struct res;
        858,    //WORD htotal;
        525,    //WORD vtotal;
        62 + 60, //WORD hstart;
        6 + 30,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        62,     //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        27000000, // pixelClock
    },
    //MD_720x576_50,
    {
        RES_720X576, //Resolution_Struct res;
        864,    //WORD htotal;
        625,    //WORD vtotal;
        64 + 68, //WORD hstart;
        5 + 39,     //WORD vstart;
        50,     //BYTE vfreq;   // Hz
        64,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        27000000, // pixelClock
    },
    //MD_1280x720_60,
    {
        RES_1280X720, //Resolution_Struct res;
        1650,   //WORD htotal;
        750,    //WORD vtotal;
        40 + 220, //WORD hstart;
        5 + 20,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        40,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        74250000, // pixelClock
    },
    //MD_1280x720_59_94,
    {
        RES_1280X720, //Resolution_Struct res;
        1650,   //WORD htotal;
        750,    //WORD vtotal;
        260,    //WORD hstart;
        25,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        40,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        74175824, // pixelClock
    },
    //MD_1280x720_50,
    {
        RES_1280X720, //Resolution_Struct res;
        1980,   //WORD htotal;
        750,    //WORD vtotal;
        260,    //WORD hstart;
        25,     //WORD vstart;
        50,     //BYTE vfreq;   // Hz
        40,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        74250000, // pixelClock
    },
    //MD_1280x720_30,
    {
        RES_1280X720, //Resolution_Struct res;
        3300,   //WORD htotal;
        750,    //WORD vtotal;
        260,    //WORD hstart;
        25,     //WORD vstart;
        30,     //BYTE vfreq;   // Hz
        40,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x720_29_97,
    {
        RES_1280X720, //Resolution_Struct res;
        3300,   //WORD htotal;
        750,    //WORD vtotal;
        260,    //WORD hstart;
        25,     //WORD vstart;
        30,     //BYTE vfreq;   // Hz
        40,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        74175824, // pixelClock
    },
    //MD_1280x720_25,
    {
        RES_1280X720, //Resolution_Struct res;
        3960,   //WORD htotal;
        750,    //WORD vtotal;
        260,    //WORD hstart;
        25,     //WORD vstart;
        25,     //BYTE vfreq;   // Hz
        40,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x720_24,
    {
        RES_1280X720, //Resolution_Struct res;
        4125,   //WORD htotal;
        750,    //WORD vtotal;
        260,    //WORD hstart;
        25,     //WORD vstart;
        24,     //BYTE vfreq;   // Hz
        40,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
    },
    //MD_1280x720_23_98,
    {
        RES_1280X720, //Resolution_Struct res;
        4125,   //WORD htotal;
        750,    //WORD vtotal;
        260,    //WORD hstart;
        25,     //WORD vstart;
        24,     //BYTE vfreq;   // Hz
        40,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        74175824, // pixelClock
    },
    //MD_1920x1080_60,
    {
        RES_1920X1080, //Resolution_Struct res;
        2200,   //WORD htotal;
        1125,   //WORD vtotal;
        44 + 148, //WORD hstart;
        5 + 36,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        148500000, // pixelClock
    },
    //MD_1920x1080_59_94,
    {
        RES_1920X1080, //Resolution_Struct res;
        2200,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        148351648, // pixelClock
    },
    //MD_1920x1080_50,
    {
        RES_1920X1080, //Resolution_Struct res;
        2640,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        50,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        148500000, // pixelClock
    },
    //MD_1920x1080_30,
    {
        RES_1920X1080, //Resolution_Struct res;
        2200,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        30,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1080_30psf,
    {
        RES_1920X1080, //Resolution_Struct res;
        2200,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        30,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1080_29_97,
    {
        RES_1920X1080, //Resolution_Struct res;
        2200,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        30,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        74175824, // pixelClock
    },
    //MD_1920x1080_29_97psf,
    {
        RES_1920X1080, //Resolution_Struct res;
        2200,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        30,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        74175824, // pixelClock
    },
    //MD_1920x1080_25,
    {
        RES_1920X1080, //Resolution_Struct res;
        2640,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        25,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1080_25psf,
    {
        RES_1920X1080, //Resolution_Struct res;
        2640,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        25,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1080_24,
    {
        RES_1920X1080, //Resolution_Struct res;
        2750,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        24,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1080_24psf,
    {
        RES_1920X1080, //Resolution_Struct res;
        2750,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        24,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1080_23_98,
    {
        RES_1920X1080, //Resolution_Struct res;
        2750,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        24,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        74175824, // pixelClock
    },
    //MD_1920x1080_23_98psf,
    {
        RES_1920X1080, //Resolution_Struct res;
        2750,   //WORD htotal;
        1125,   //WORD vtotal;
        192,    //WORD hstart;
        41,     //WORD vstart;
        24,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        74175824, // pixelClock
    },

    //MD_640x480_60,
    {
        RES_640X480, //Resolution_Struct res;
        800,    //WORD htotal;
        525,    //WORD vtotal;
        136,    //WORD hstart;
        27,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        96,     //WORD hSyncWidth;
        2,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_640x480_75,
    {
        RES_640X480, //Resolution_Struct res;
        840,    //WORD htotal;
        500,    //WORD vtotal;
        184,    //WORD hstart;
        19,     //WORD vstart;
        75,     //BYTE vfreq;   // Hz
        64,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_640x480_85,
    {
        RES_640X480, //Resolution_Struct res;
        832,    //WORD htotal;
        509,    //WORD vtotal;
        136,    //WORD hstart;
        28,     //WORD vstart;
        85,     //BYTE vfreq;   // Hz
        56,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_800x600_60,
    {
        RES_800X600, //Resolution_Struct res;
        1056,   //WORD htotal;
        628,    //WORD vtotal;
        128 + 88, //WORD hstart;
        27,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        128,        //WORD hSyncWidth;
        4,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_800x600_75,
    {
        RES_800X600, //Resolution_Struct res;
        1056,   //WORD htotal;
        625,    //WORD vtotal;
        240,    //WORD hstart;
        24,     //WORD vstart;
        75,     //BYTE vfreq;   // Hz
        80,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_800x600_85,
    {
        RES_800X600, //Resolution_Struct res;
        1048,   //WORD htotal;
        631,    //WORD vtotal;
        216,    //WORD hstart;
        30,     //WORD vstart;
        85,     //BYTE vfreq;   // Hz
        64,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1024x768_60,
    {
        RES_1024X768, //Resolution_Struct res;
        1344,   //WORD htotal;
        806,    //WORD vtotal;
        296,    //WORD hstart;
        35,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        136,    //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1024x768_75,
    {
        RES_1024X768, //Resolution_Struct res;
        1312,   //WORD htotal;
        800,    //WORD vtotal;
        272,    //WORD hstart;
        31,     //WORD vstart;
        75,     //BYTE vfreq;   // Hz
        96,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1024x768_85,
    {
        RES_1024X768, //Resolution_Struct res;
        1376,   //WORD htotal;
        808,    //WORD vtotal;
        304,    //WORD hstart;
        39,     //WORD vstart;
        85,     //BYTE vfreq;   // Hz
        96,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x1024_60,
    {
        RES_1280X1024, //Resolution_Struct res;
        1688,   //WORD htotal;
        1066,   //WORD vtotal;
        112 + 248,  //WORD hstart;
        3 + 38,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        112,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x1024_75,
    {
        RES_1280X1024, //Resolution_Struct res;
        1688,   //WORD htotal;
        1066,   //WORD vtotal;
        144 + 248, //WORD hstart;
        41,     //WORD vstart;
        75,     //BYTE vfreq;   // Hz
        144,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x1024_85,
    {
        RES_1280X1024, //Resolution_Struct res;
        1728,   //WORD htotal;
        1072,   //WORD vtotal;
        384,    //WORD hstart;
        47,     //WORD vstart;
        85,     //BYTE vfreq;   // Hz
        160,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1600x1200_60,  // 以上是GS4911 支持的格式
    {
        RES_1600X1200, //Resolution_Struct res;
        2160,   //WORD htotal;
        1250,   //WORD vtotal;
        496,    //WORD hstart;
        49,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        192,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    // 以下为新增格式
    //MD_720x480_60i,
    {
        RES_720X480, //Resolution_Struct res;
        858,    //WORD htotal;
        525,    //WORD vtotal;
        62 + 57, //WORD hstart;
        (3 + 15) * 2,   //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        62,     //WORD hSyncWidth;
        3,  // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_720x576_50i,
    {
        RES_720X576, //Resolution_Struct res;
        864,    //WORD htotal;
        625,    //WORD vtotal;
        63 + 69, //WORD hstart;
        (3 + 19) * 2,   //WORD vstart;
        50,     //BYTE vfreq;   // Hz
        63,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1080_60i,
    {
        RES_1920X1080, //Resolution_Struct res;
        2200,   //WORD htotal;
        1125,   //WORD vtotal;
        44 + 148 - 4, //WORD hstart;
        (5 + 15) + 20,  //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        148500000,      // pixelClock
    },
    //MD_1920x1080_50i,
    {
        RES_1920X1080, //Resolution_Struct res;
        2640,   //WORD htotal;
        1125,   //WORD vtotal;
        44 + 148 - 4, //WORD hstart;
        (5 + 15) + 20,  //WORD vstart;
        50,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        148500000, // pixelClock
    },
    //MD_1152x864_75,
    {
        RES_1152X864, //Resolution_Struct res;
        1600,   //WORD htotal;
        900,    //WORD vtotal;
        128 + 256,  //WORD hstart;
        3 + 32,     //WORD vstart;
        75,     //BYTE vfreq;   // Hz
        128,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x768_60, //DMT-20
    {
        RES_1280X768, //Resolution_Struct res;
        1664,   //WORD htotal;
        798,    //WORD vtotal;
        128 + 192,  //WORD hstart;
        7 + 20,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        128,        //WORD hSyncWidth;
        7,      // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x960_60,
    {
        RES_1280X960, //Resolution_Struct res;
        1800,   //WORD htotal;
        1000,   //WORD vtotal;
        112 + 312,  //WORD hstart;
        3 + 36,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        112,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x960_85,
    {
        RES_1280X960, //Resolution_Struct res;
        1728,   //WORD htotal;
        1011,   //WORD vtotal;
        160 + 224,  //WORD hstart;
        3 + 47,     //WORD vstart;
        85,     //BYTE vfreq;   // Hz
        160,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1360x768_60,
    {
        RES_1360X768, //Resolution_Struct res;
        1792,   //WORD htotal;
        795,    //WORD vtotal;
        112 + 256,  //WORD hstart;
        6 + 18,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        112,        //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1366x768_60,
    {
        RES_1366X768, //Resolution_Struct res;
        1792,   //WORD htotal;
        798,    //WORD vtotal;
        143 + 213,  //WORD hstart;
        3 + 24,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        143,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1400x1050_60, (VESA)
    {
        RES_1400X1050, //Resolution_Struct res;
        1864,   //WORD htotal;
        1089,   //WORD vtotal;
        144 + 232,  //WORD hstart;
        4 + 32,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        144,        //WORD hSyncWidth;
        4,      // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1440x900_60,
    {
        RES_1440X900, //Resolution_Struct res;
        1904,   //WORD htotal;
        934,    //WORD vtotal;
        152 + 232,  //WORD hstart;
        6 + 25,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        152,        //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },

#if 1
    //MD_2048x1152_60, (Reduced Blanking)
    {
        RES_2048X1152, //Resolution_Struct res;
        2208,   //WORD htotal;
        1185,   //WORD vtotal;
        32 + 80, //WORD hstart;
        4 + 26,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        4,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
    },
#else
    //MD_2048x1152_60, (Reduced Blanking)
    {
        RES_2048X1152, //Resolution_Struct res;
        2176,   //WORD htotal;
        1185,   //WORD vtotal;
        32 + 64, //WORD hstart;
        3 + 29,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
    },
#endif

    //MD_1680x1050_60,
    {
        RES_1680X1050, //Resolution_Struct res;
        2240,   //WORD htotal;
        1089,   //WORD vtotal;
        176 + 280,  //WORD hstart;
        6 + 30,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        176,        //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1200_60, (Reduced Blanking)
    {
        RES_1920X1200, //Resolution_Struct res;
        2080,   //WORD htotal;
        1235,   //WORD vtotal;
        32 + 80, //WORD hstart;
        6 + 26,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1600x1200_60_reduce = 51,
    {
        RES_1600X1200, //Resolution_Struct res;
        1728,   //WORD htotal;
        1235,   //WORD vtotal;
        32 + 64, //WORD hstart;
        3 + 31,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1080_60_reduce = 52,
    {
        // 20130110为了与其它处理器兼容(旧处理器不标准)
        RES_1920X1080, //Resolution_Struct res;
        2048,   //WORD htotal;
        1111,   //WORD vtotal;
        32 + 64, //WORD hstart;
        3 + 27,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1440x900_60_reduce, (Reduced Blanking)
    {
        RES_1440X900, //Resolution_Struct res;
        1600,   //WORD htotal;
        926,    //WORD vtotal;
        32 + 80, //WORD hstart;
        6 + 17,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1680x1050_60_reduce   = 54,
    {
        RES_1680X1050, //Resolution_Struct res;
        1840,   //WORD htotal;
        1080,   //WORD vtotal;
        32 + 80, //WORD hstart;
        6 + 21,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1400x1050_60_reduce, (Reduced Blanking)
    {
        RES_1400X1050, //Resolution_Struct res;
        1560,   //WORD htotal;
        1080,   //WORD vtotal;
        32 + 80, //WORD hstart;
        4 + 23,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        4,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_2176x544_60_reduce,(Reduced Blanking) NOT CVT STANDARD
    {
        RES_2176X544, //Resolution_Struct res;
        2336,   //WORD htotal;
        563,    //WORD vtotal;
        32 + 80, //WORD hstart;
        10 + 6,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1152x1152_60 = 57,
    {
        RES_1152X1152, //Resolution_Struct res;
        1552,   //WORD htotal;
        1195,   //WORD vtotal;
        120 + 200,  //WORD hstart;
        10 + 30,    //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        120,        //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x1280_60  = 58,
    {
        RES_1280X1280, //Resolution_Struct res;
        1728,   //WORD htotal;
        1327,   //WORD vtotal;
        136 + 224,  //WORD hstart;
        10 + 34,    //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        136,        //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },

    // 20121213 add
    //MD_2560x812_60            = 59,
    {
        RES_2560X812, //Resolution_Struct res;
        2720,   //WORD htotal;
        836,    //WORD vtotal;
        32 + 80, //WORD hstart;
        10 + 11,    //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_2560x816_60            = 60,
    {
        RES_2560X816, //Resolution_Struct res;
        2720,   //WORD htotal;
        840,    //WORD vtotal;
        32 + 80, //WORD hstart;
        10 + 11,    //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1280x800_60            = 61,
    {
        RES_1280X800, //Resolution_Struct res;
        1680,   //WORD htotal;
        831,    //WORD vtotal;
        128 + 200,  //WORD hstart;
        6 + 22,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        128,        //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1024x768_59_94,
    {
        RES_1024X768, //Resolution_Struct res;
        1344,   //WORD htotal;
        806,    //WORD vtotal;
        296,    //WORD hstart;
        35,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        136,    //WORD hSyncWidth;
        6,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        64930844, // pixelClock
    },
    //MD_1920x1080_59_94i,
    {
        RES_1920X1080, //Resolution_Struct res;
        2200,   //WORD htotal;
        1125,   //WORD vtotal;
        44 + 148 - 4, //WORD hstart;
        (5 + 15) + 20,  //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        44,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        0,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        148351648, // pixelClock
    },

#if 1

    // 20121229
    //MD_1024x1280_60  = 61,
    {
        RES_1024X1280, //Resolution_Struct res;
        1376,   //WORD htotal;
        1327,   //WORD vtotal;
        136 + 104,  //WORD hstart;
        34 + 10,    //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        104,        //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1024x1920_60  = 62,
    {
        RES_1024X1920, //Resolution_Struct res;
        1408,   //WORD htotal;
        1989,   //WORD vtotal;
        192 + 112,  //WORD hstart;
        56 + 10,    //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        112,        //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1920x1080_60_reduce_new  = 63, // 标准降频
    {
        RES_1920X1080, //Resolution_Struct res;
        2080,   //WORD htotal;
        1111,   //WORD vtotal;
        32 + 88, //WORD hstart;
        5 + 23,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        5,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },

    //MD_1248x936_60_reduce  = 64, //
    {
        RES_1248X936, //Resolution_Struct res;
        1408,   //WORD htotal;
        963,    //WORD vtotal;
        32 + 80, //WORD hstart;
        4 + 20,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        4,      // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1976x1144_60_reduce  = 65, //
    {
        RES_1976X1144, //Resolution_Struct res;
        2136,   //WORD htotal;
        1177,   //WORD vtotal;
        32 + 80, //WORD hstart;
        10 + 20,    //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1872x1040_60_reduce  = 66, //
    {
        RES_1872x1040, //Resolution_Struct res;
        2032,   //WORD htotal;
        1070,   //WORD vtotal;
        32 + 80, //WORD hstart;
        10 + 17,    //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        32,     //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        2,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_1080x1920_60  = 67, //
    {
        RES_1080X1920, //Resolution_Struct res;
        1480,   //WORD htotal;
        1989,   //WORD vtotal;
        112 + 200,  //WORD hstart;
        10 + 56,    //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        112,    //WORD hSyncWidth;
        10,     // WORD vSyncWidth;
        1,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },



#if  1
    //MD_720x480_60i_2 = 71
    {
        RES_1440X480, //Resolution_Struct res;
        1716,   //WORD htotal;
        525,    //WORD vtotal;
        124 + 114 - 4, //WORD hstart;
        (3 + 15) * 2,   //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        124,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },
    //MD_720x576_50i_2 = 72,
    {
        RES_1440X576, //Resolution_Struct res;
        1728,   //WORD htotal;
        625,    //WORD vtotal;
        126 + 138 - 4, //WORD hstart;
        (3 + 19) * 2,   //WORD vstart;
        50,     //BYTE vfreq;   // Hz
        126,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, // pixelClock
    },

#else

    //MD_720x480_60i_2 = 71
    {
        RES_720X480, //Resolution_Struct res;
        858,    //WORD htotal;
        263,    //WORD vtotal;
        124 + 114,  //WORD hstart;
        3 + 15,     //WORD vstart;
        60,     //BYTE vfreq;   // Hz
        124,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
    },
    //MD_720x576_50i_2 = 72,
    {
        RES_720X576, //Resolution_Struct res;
        864,    //WORD htotal;
        313,    //WORD vtotal;
        128 + 138,  //WORD hstart;
        3 + 19,     //WORD vstart;
        50,     //BYTE vfreq;   // Hz
        128,        //WORD hSyncWidth;
        3,      // WORD vSyncWidth;
        3,      //BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
    },

#endif
#endif

	//MD_3840x2160_25  = 73,
	{
        RES_3840x2160, 	//Resolution_Struct res;
        5280,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        25,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
	//MD_3840x2160_30  = 74,
	{
        RES_3840x2160, 	//Resolution_Struct res;
        4400,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        30,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
	//MD_3840x2160_50  = 75,
	{
        RES_3840x2160, 	//Resolution_Struct res;
        5280,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        50,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
	//MD_3840x2160_60  = 76,
	{
        RES_3840x2160, 	//Resolution_Struct res;
        4400,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        60,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
    //MD_3840x2160_59_94  = 77,
    {
        RES_3840x2160, 	//Resolution_Struct res;
        4400,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        60,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        593406593, 		// pixelClock
    },
   // MD_3840x2160_29_97  = 78,
   {
        RES_3840x2160, 	//Resolution_Struct res;
        4400,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        30,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        296703297, 		// pixelClock
    },
    //MD_4096x2160_25  = 79,
    {
        RES_4096x2160, 	//Resolution_Struct res;
        5280,  			//WORD htotal;
        2250,   		//WORD vtotal;
        216, 			//WORD hstart;
        82,   			//WORD vstart;
        25,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
	//MD_4096x2160_30  = 80,
	{
        RES_4096x2160, 	//Resolution_Struct res;
        4400,  			//WORD htotal;
        2250,   		//WORD vtotal;
        216, 			//WORD hstart;
        82,   			//WORD vstart;
        30,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
	//MD_4096x2160_50  = 81,
	{
        RES_4096x2160, 	//Resolution_Struct res;
        5280,  			//WORD htotal;
        2250,   		//WORD vtotal;
        216, 			//WORD hstart;
        82,   			//WORD vstart;
        50,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
	//MD_4096x2160_60  = 82,
	{
        RES_4096x2160, 	//Resolution_Struct res;
        4400,  			//WORD htotal;
        2250,   		//WORD vtotal;
        216, 			//WORD hstart;
        82,   			//WORD vstart;
        60,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
	//MD_4096x2160_59_94  = 83,
	{
        RES_4096x2160, 	//Resolution_Struct res;
        4400,  			//WORD htotal;
        2250,   		//WORD vtotal;
        216, 			//WORD hstart;
        82,   			//WORD vstart;
        60,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        593406593, 		// pixelClock
    },
	//MD_4096x2160_29_97  = 84,
	{
        RES_4096x2160, 	//Resolution_Struct res;
        4400,  			//WORD htotal;
        2250,   		//WORD vtotal;
        216, 			//WORD hstart;
        82,   			//WORD vstart;
        30,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        296703297, 		// pixelClock
    },
    //MD_3840x2160_24  = 85,
    {
        RES_3840x2160, 	//Resolution_Struct res;
        5500,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        25,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
	//MD_3840x2160_23_98  = 86,
	{
        RES_3840x2160, 	//Resolution_Struct res;
        5500,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        25,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        296703297, 		// pixelClock
    },
	//MD_4096x2160_24  = 87,
	{
        RES_4096x2160, 	//Resolution_Struct res;
        5500,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        25,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        0, 				// pixelClock
    },
	
	//MD_4096x2160_23_98  = 88,
	{
        RES_4096x2160, 	//Resolution_Struct res;
        5500,  			//WORD htotal;
        2250,   		//WORD vtotal;
        384, 			//WORD hstart;
        82,   			//WORD vstart;
        25,     		//BYTE vfreq;   // Hz
        88,        		//WORD hSyncWidth;
        10,      		// WORD vSyncWidth;
        0,      		//BYTE hvSyncPolarity;  // bit0 -- horizontal sync  bit1 -- vertical sync,  0 -- 正, 1 -- 负
        296703297, 		// pixelClock
    },

	//MD_2560x1600_60		=	89	,				
	{								
		RES_2560x1600,		//Resolution_Struct res;					
		2720,		//WORD htotal;					
		1646,		//WORD vtotal;					
		32+80,		//WORD hstart;					
		3+6,		//WORD vstart;					
		60, 	//BYTE vfreq;	// Hz					
		32, 		//WORD hSyncWidth;					
		3,		// WORD vSyncWidth; 				
		1,		//BYTE hvSyncPolarity;	// bit0 -- horizontal sync	bit1 -- vertical sync,	0 -- 正, 1 -- 负			
		0,
	},								
									
	//MD_2560x1440_60		=	90	,				
	{								
		RES_2560x1440,		//Resolution_Struct res;					
		2720,		//WORD htotal;					
		1481,		//WORD vtotal;					
		32+80,		//WORD hstart;					
		3+5,		//WORD vstart;					
		60, 	//BYTE vfreq;	// Hz					
		32, 		//WORD hSyncWidth;					
		3,		// WORD vSyncWidth; 				
		1,		//BYTE hvSyncPolarity;	// bit0 -- horizontal sync	bit1 -- vertical sync,	0 -- 正, 1 -- 负			
		0,
	},
	//MD_3840x1080_60		=	91	,				
	{								
		RES_3840x1080,		//Resolution_Struct res;					
		4092,		//WORD htotal;					
		1125,		//WORD vtotal;					
		32+80,		//WORD hstart;					
		4+24,		//WORD vstart;					
		60, 		//BYTE vfreq;	// Hz					
		32, 		//WORD hSyncWidth;					
		4,			// WORD vSyncWidth; 				
		0,			//BYTE hvSyncPolarity;	// bit0 -- horizontal sync	bit1 -- vertical sync,	0 -- 正, 1 -- 负		
		0,
	},		

};

const char *const tVideoFormatStr[MD_INDEX_SIZE + 5] =
{
    "720x480x60",       //1MD_720x480_60,
    "720x576x50",       //1MD_720x576_50,
    "1280x720x60",      //1MD_1280x720_60,
    "1280x720x59.94",   //MD_1280x720_59_94,
    "1280x720x50",      //MD_1280x720_50,
    "1280x720x30",      //MD_1280x720_30,
    "1280x720x29.97",   //MD_1280x720_29_97,
    "1280x720x25",      //MD_1280x720_25,
    "1280x720x24",      //MD_1280x720_24,
    "1280x720x23.98",   //MD_1280x720_23_98,
    "1920x1080x60",     //MD_1920x1080_60,
    "1920x1080x59.94",  //MD_1920x1080_59_94,
    "1920x1080x50",     //MD_1920x1080_50,
    "1920x1080x30",     //MD_1920x1080_30,
    "1920x1080x30s",    //MD_1920x1080_30psf,
    "1920x1080x29.97",  //MD_1920x1080_29_97,
    "1920x1080x29.9s", //MD_1920x1080_29_97psf,
    "1920x1080x25",     //MD_1920x1080_25,
    "1920x1080x25s",    //MD_1920x1080_25psf,
    "1920x1080x24",     //MD_1920x1080_24,
    "1920x1080x24s",    //MD_1920x1080_24psf,
    "1920x1080x23.98",  //MD_1920x1080_23_98,
    "1920x1080x23.9s", //MD_1920x1080_23_98psf,
    "640x480x60",       //MD_640x480_60,
    "640x480x75",       //MD_640x480_75,
    "640x480x85",       //MD_640x480_85,
    "800x600x60",       //MD_800x600_60,
    "800x600x75",       //MD_800x600_75,
    "800x600x85",       //MD_800x600_85,
    "1024x768x60",      //MD_1024x768_60,
    "1024x768x75",      //MD_1024x768_75,
    "1024x768x85",      //MD_1024x768_85,
    "1280x1024x60",     //MD_1280x1024_60,
    "1280x1024x75",     //MD_1280x1024_75,
    "1280x1024x85",     //MD_1280x1024_85,
    "1600x1200x60",     //MD_1600x1200_60,
    // 以下为新增格式
    "720x480x60i",      //MD_720x480_60i,
    "720x576x50i",      //MD_720x576_50i,
    "1920x1080x60i",    //MD_1920x1080_60i,
    "1920x1080x50i",    //MD_1920x1080_50i,
    "1152x864x75",      //MD_1152x864_75,
    "1280x768x60",      //MD_1280x768_60,
    "1280x960x60",      //MD_1280x960_60,
    "1280x960x85",      //MD_1280x960_85,
    "1360x768x60",      //MD_1360x768_60,
    "1366x768x60",      //MD_1366x768_60,
    "1400x1050x60",     //MD_1400x1050_60,
    "1440x900x60",      //MD_1440x900_60,
    "2048x1152x60",     //MD_2048x1152_60,
    "1680x1050x60",     //MD_1680x1050_60,
    "1920x1200x60",     //MD_1920x1200_60,
    "1600x1200x60_r",       //MD_1600x1200_60_reduce = 51,
    "1920x1080x60_r",       //MD_1920x1080_60_reduce = 52,
    "1440x900x60_r",        //MD_1440x900_60_no_reduce = 53,
    "1680x1050x60_r",       //MD_1680x1050_60_reduce   = 54,
    "1400x1050x60_r",       //MD_1400x1050_60_reduce   = 55,
    "2176x544x60_r",        //MD_2176x544_60_reduce = 56,
    "1152x1152x60",     //MD_1152x1152_60_reduce  = 57,
    "1280x1280x60",     //MD_1280x1280_60_reduce  = 58,


    "2560x812x60",      //MD_2560x812_60            = 59,
    "2560x816x60",      //MD_2560x816_60            = 60,
    "1280x800x60",      //MD_1280x800_60            = 61,
    "1024x768x59.94",   //MD_1024x768_59_94     = 62,
    "1920x1080x59.94i", //MD_1920x1080_59_94i       = 63,
#if 1
    "1024x1280x60",     //MD_1024x1280_60  = 64,
    "1024x1920x60",     //MD_1024x1920_60  = 65,
    "1920x1080x60",     //MD_1920x1080_60_reduce_new  = 66, // 20130112
    "1248x936x60",      //MD_1248x936_60_reduce  = 67, // 20130116
    "1976x1144x60",     //MD_1976x1144_60_reduce  = 68, // 20130116
    "1872x1040x60",     //MD_1872x1040_60  = 69, // 20130116
    "1080x1920x60",     //MD_1080x1920_60  = 70, // 20130227

    "720x480x60i_2",    //MD_720x480_60  = 71, // 20130605
    "720x576x50i_2",    //MD_720x576_50  = 72, // 20130605

	"3840x2160x25",    	//MD_3840x2160_25  = 73,
	"3840x2160x30",    	//MD_3840x2160_30  = 74,
	"3840x2160x50",    	//MD_3840x2160_50  = 75,
	"3840x2160x60",    	//MD_3840x2160_60  = 76,
	"3840x2160x59.94",  //MD_3840x2160_59_94  = 77,
	"3840x2160x29.97",  //MD_3840x2160_29_97  = 78,

	"3840x2160x24",  	//MD_3840x2160_24  = 85,
	"3840x2160x23.98",  //MD_3840x2160_23_98  = 86,
	"4096x2160x24",  	//MD_4096x2160_24  = 87,
	"4096x2160x23.98",  //MD_4096x2160_23_98  = 88,
	"2560x1600x60",  	//MD_2560x1600_60  	=89,
	"2560x1440x60",  	//MD_2560x1440_60  	=90,
	"3840x1080x60",  	//MD_3840x1080_60		=91,


#endif

    "1920x1200x60",     //MD_INDEX_SIZE,
    "MD_CUSTOM",
    "INPUT FORMAT",     //MD_INPUT_FORMAT = 125,
    "UNDEFINE",         //MD_UNDEFINE = 126,
    "NO INPUT",         //MD_NOINPUT = 127,

};

u8 tGS4911_VID_STD[] =
{
    9,      //MD_720x480_60,
    10,     //MD_720x576_50,
    11,     //MD_1280x720_60,
    12,     //MD_1280x720_59_94,
    13,     //MD_1280x720_50,
    14,     //MD_1280x720_30,
    15,     //MD_1280x720_29_97,
    16,     //MD_1280x720_25,
    17,     //MD_1280x720_24,
    18,     //MD_1280x720_23_98,
    21,     //MD_1920x1080_60,
    22,     //MD_1920x1080_59_94,
    23,     //MD_1920x1080_50,
    29,     //MD_1920x1080_30,
    30,     //MD_1920x1080_30psf,
    31,     //MD_1920x1080_29_97,
    32,     //MD_1920x1080_29_97psf,
    33,     //MD_1920x1080_25,
    34,     //MD_1920x1080_25psf,
    35,     //MD_1920x1080_24,
    36,     //MD_1920x1080_24psf,
    37,     //MD_1920x1080_23_98,
    38,     //MD_1920x1080_23_98psf,
    39,     //MD_640x480_60,
    40,     //MD_640x480_75,
    41,     //MD_640x480_85,
    42,     //MD_800x600_60,
    43,     //MD_800x600_75,
    44,     //MD_800x600_85,
    45,     //MD_1024x768_60,
    46,     //MD_1024x768_75,
    47,     //MD_1024x768_85,
    48,     //MD_1280x1024_60,
    49,     //MD_1280x1024_75,
    50,     //MD_1280x1024_85,
    51,     //MD_1600x1200_60,
    MD_INDEX_SIZE,
};

static const char * unknowFormat = "UNKNOWN";
const char * GetStrByVideoFormat(BYTE format)
{
    if(format < MD_INDEX_SIZE)
    {
        return tVideoFormatStr[format];
    }
    else if(format == MD_UNDEFINE)
    {
        return tVideoFormatStr[MD_INDEX_SIZE + 3];
    }
    else if(format == MD_NOINPUT)
    {
        return tVideoFormatStr[MD_INDEX_SIZE + 4];
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return tVideoFormatStr[MD_INDEX_SIZE + 2];
    }
    else
    {
        return unknowFormat;
    }
}



Resolution_Struct GetResByVideoFormat(BYTE format)
{
    Resolution_Struct customRes;
    if(format < MD_INDEX_SIZE)
    {
        return tModeResolution[tVideoDefine[format].res];
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetResByVideoFormat(_INPUT_FORMAT);
    }
    else if(format == MD_CUSTOM)
    {
        customRes.DisplayWidth = getCustomH();
        customRes.DisplayHeight = getCustomV();
        return customRes;
    }
    else
    {
        return tModeResolution[tVideoDefine[MD_1024x768_60].res];
    }
}

u8 GetGS4911ByVideoFormat(BYTE format)
{
    if(format <= MD_1600x1200_60)
    {
        return tGS4911_VID_STD[format];
    }
    else if(format == MD_720x480_60i_2)
    {
        return 3;
    }
    else if(format == MD_720x576_50i_2)
    {
        return 4;
    }
    else if(format == MD_720x576_50i)
    {
        return 2;
    }
    else if(format == MD_720x480_60i)
    {
        return 1;
    }
    else if(format == MD_1920x1080_50i)
    {
        return 27;
    }
    else if(format == MD_1920x1080_60i)
    {
        return 25;
    }
    else if(format == MD_1920x1080_59_94i)
    {
        return 26;
    }
    else
    {
        return tGS4911_VID_STD[MD_1024x768_60];
    }
}

u8 GetVideoFormatByGS4911(u8 format)
{
    int i;
    if(format == 0)
    {
        return MD_NOINPUT;
    }
    for(i = 0; i < sizeof(tGS4911_VID_STD); i++)
    {
        if(format == tGS4911_VID_STD[i])
        {
            return i;
        }
    }
    if(format == 3)
    {
        return MD_720x480_60i_2;
    }
    if(format == 4)
    {
        return MD_720x576_50i_2;
    }
    if(format == 25)
    {
        return MD_1920x1080_60i;
    }
    if(format == 26)
    {
        return MD_1920x1080_59_94i;
    }
    if(format == 27)
    {
        return MD_1920x1080_50i;
    }
    if(format == 1)
    {
        return MD_720x480_60i;
    }
    if(format == 2)
    {
        return MD_720x576_50i;
    }
    return MD_UNDEFINE;

}



#if 1//add by cdy
CUSTOM_RESOLUTION *GetCustomResolution(void)
{
    return &GetUserSetting()->customFormat;
}

VideoFormatSetting customFormat;

VideoFormatSetting *GetCustomFormat(void)
{
    return &customFormat;
}

void setCustomH(int value) //
{
    GetCustomResolution()->HorizontalPixel = value;
}

void setCustomV(int value) //
{
    GetCustomResolution()->VerticalPixel = value;
}
void setCustomF(int value) //
{
    GetCustomResolution()->Frequency = value;
}

WORD getCustomH(void) //
{
    return GetCustomResolution()->HorizontalPixel;
}

WORD getCustomV(void) //
{
    return GetCustomResolution()->VerticalPixel;
}
BYTE getCustomF(void) //
{
    return GetCustomResolution()->Frequency;
}

void setCustomhvSyncPolarity(int value) //
{
    GetCustomFormat()->hvSyncPolarity = value;
}

void setCustomhTotal(int value) //
{
    GetCustomFormat()->hTotal = value;
}

void setCustomvTotal(int value) //
{
    GetCustomFormat()->vTotal = value;
}

void setCustomhStart(int value) //
{
    GetCustomFormat()->hStart = value;
}

void setCustomvStart(int value) //
{
    GetCustomFormat()->vStart = value;
}

void setCustomhActive(int value) //
{
    GetCustomFormat()->hActive = value;
}

void setCustomvActive(int value) //
{
    GetCustomFormat()->vActive = value;
}

void setCustomhSyncWidth(int value) //
{
    GetCustomFormat()->hSyncWidth = value;
}

void setCustomvSyncWidth(int value) //
{
    GetCustomFormat()->vSyncWidth = value;
}

void setCustomcolorSpace(int value) //
{
    GetCustomFormat()->colorSpace = value;
}


BYTE getCustomhvSyncPolarity(void) //
{
    return GetCustomFormat()->hvSyncPolarity;
}

WORD getCustomhTotal(void) //
{
    return GetCustomFormat()->hTotal;
}

WORD getCustomvTotal(void) //
{
    return GetCustomFormat()->vTotal;
}

WORD getCustomhStart(void) //
{
    return GetCustomFormat()->hStart;
}

WORD getCustomvStart(void) //
{
    return GetCustomFormat()->vStart;
}

WORD getCustomhActive(void) //
{
    return GetCustomFormat()->hActive;
}

WORD getCustomvActive(void) //
{
    return GetCustomFormat()->vActive;
}

WORD getCustomhSyncWidth(void) //
{
    return GetCustomFormat()->hSyncWidth;
}

WORD getCustomvSyncWidth(void) //
{
    return GetCustomFormat()->vSyncWidth;
}

BYTE getCustomcolorSpace(void) //
{
    return GetCustomFormat()->colorSpace;
}


WORD GetHDEByVideoFormat(BYTE format)
{
    if(format == MD_CUSTOM)
    {
        return  getCustomhActive();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetHDEByVideoFormat(_INPUT_FORMAT);
    }
    return GetResByVideoFormat(format).DisplayWidth;

}
WORD GetVDEByVideoFormat(BYTE format)
{
    if(format == MD_CUSTOM)
    {
        return  getCustomvActive();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetVDEByVideoFormat(_INPUT_FORMAT);
    }
    return GetResByVideoFormat(format).DisplayHeight;
}


WORD GetVDEByVideoFormat2(BYTE format)
{
    if(format == MD_CUSTOM)
    {
        return  getCustomV();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetVDEByVideoFormat2(_INPUT_FORMAT);
    }

    return IsInterlaceFormat(format) ? GetResByVideoFormat(format).DisplayHeight / 2 : GetResByVideoFormat(format).DisplayHeight;
}
#endif
WORD GetHTotalByVideoFormat(BYTE format)
{
    if(format <= MD_INDEX_SIZE)
    {
        return tVideoDefine[format].htotal;
    }
    else if(format == MD_CUSTOM)
    {
        return getCustomhTotal();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetHTotalByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        return tVideoDefine[MD_1024x768_60].htotal;
    }
}
WORD GetVTotalByVideoFormat(BYTE format)
{
    if(format <= MD_INDEX_SIZE)
    {
        return tVideoDefine[format].vtotal;
    }
    else if(format == MD_CUSTOM)
    {
        return getCustomvTotal();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetVTotalByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        return tVideoDefine[MD_1024x768_60].vtotal;
    }
}


WORD GetHStartByVideoFormat(BYTE format)
{
    if(format <= MD_INDEX_SIZE)
    {
        return tVideoDefine[format].hstart;
    }
    else if(format == MD_CUSTOM)
    {
        return getCustomhStart();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetHStartByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        return tVideoDefine[MD_1024x768_60].hstart;
    }
}
WORD GetVStartByVideoFormat(BYTE format)
{
    if(format <= MD_INDEX_SIZE)
    {
        return tVideoDefine[format].vstart;
    }
    else if(format == MD_CUSTOM)
    {
        return getCustomvStart();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetVStartByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        return tVideoDefine[MD_1024x768_60].vstart;
    }
}

WORD GetHSyncWidthByVideoFormat(BYTE format)
{
    if(format <= MD_INDEX_SIZE)
    {
        return tVideoDefine[format].hSyncWidth;
    }
    else if(format == MD_CUSTOM)
    {
        return getCustomhSyncWidth();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetHSyncWidthByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        return tVideoDefine[MD_1024x768_60].hSyncWidth;
    }
}
WORD GetVSyncWidthByVideoFormat(BYTE format)
{
    if(format <= MD_INDEX_SIZE)
    {
        return tVideoDefine[format].vSyncWidth;
    }
    else if(format == MD_CUSTOM)
    {
        return getCustomvSyncWidth();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetVSyncWidthByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        return tVideoDefine[MD_1024x768_60].vSyncWidth;
    }
}

WORD GetHSyncPolarityByVideoFormat(BYTE format)  // return 0 -- 正, return 1 -- 负
{
    BYTE result;
    if(format <= MD_INDEX_SIZE)
    {
        result =  tVideoDefine[format].hvSyncPolarity;
    }
    else if(format == MD_CUSTOM)
    {
        result = getCustomhvSyncPolarity();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetHSyncPolarityByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        result =  tVideoDefine[MD_1024x768_60].hvSyncPolarity;
    }
    if(result & 0x01)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
WORD GetVSyncPolarityByVideoFormat(BYTE format)  // return 0 -- 正, return 1 -- 负
{
    BYTE result;
    if(format <= MD_INDEX_SIZE)
    {
        result =  tVideoDefine[format].hvSyncPolarity;
    }
    else if(format == MD_CUSTOM)
    {
        result = getCustomhvSyncPolarity();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetVSyncPolarityByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        result =  tVideoDefine[MD_1024x768_60].hvSyncPolarity;
    }
    if(result & 0x02)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

WORD GetVFreqByVideoFormat(BYTE format)
{
    WORD result;
    if(format <= MD_INDEX_SIZE)
    {
        result = tVideoDefine[format].vfreq;
    }
    else if(format == MD_CUSTOM)
    {
        result = getCustomF();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetVFreqByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        result =  tVideoDefine[MD_1024x768_60].vfreq;
    }
    return result;
}

int GetDlckByVideoFormat(BYTE format)
{
    int result;
    if(format <= MD_INDEX_SIZE)
    {
        if(tVideoDefine[format].pixelClock == 0)
        {
            result =  tVideoDefine[format].htotal * tVideoDefine[format].vtotal * tVideoDefine[format].vfreq;
        }
        else
        {
            result = tVideoDefine[format].pixelClock;
        }
    }
    else if(format == MD_CUSTOM)
    {
        result =  getCustomhTotal() * getCustomvTotal() * getCustomF();
    }
    else if(format == MD_INPUT_FORMAT)
    {
        return GetDlckByVideoFormat(_INPUT_FORMAT);
    }
    else
    {
        result =  tVideoDefine[MD_1024x768_60].htotal * tVideoDefine[MD_1024x768_60].vtotal * tVideoDefine[MD_1024x768_60].vfreq;;
    }
    return result;
}

#if  1 // new,  没有测试1080i50

int isInterlaceFormat(int hde, int vde, int htotal, int vtotal, int vfreq)
{
    int temp;

    temp = hde;
    hde = vde;
    vde = temp;

    if((ABS(1920 - vde) < 2) && (ABS(540 - hde) < 2)
       //  &&(ABS(121 - vfreq)<5)
       && (ABS(60 - vfreq) < 5)
       && (ABS(2200 - htotal) < 5) && (ABS(562 - vtotal) < 5))
    {
        return (MD_1920x1080_60i);
    }
    if((ABS(1920 - vde) < 2) && (ABS(540 - hde) < 2)
       //  &&(ABS(121 - vfreq)<5)
       && (ABS(60 - vfreq) < 5)
       && (ABS(2200 - htotal) < 5) && (ABS(562 - vtotal) < 5))
    {
        return (MD_1920x1080_59_94i); // test
    }
    else if((ABS(1920 - vde) < 2) && (ABS(540 - hde) < 2)
            //  &&(ABS(101 - vfreq)<5)
            && (ABS(50 - vfreq) < 5)
            && (ABS(2640 - htotal) < 5) && (ABS(562 - vtotal) < 5))
    {
        return (MD_1920x1080_50i);
    }

    else if((ABS(720 - vde) < 2) && (ABS(240 - hde) < 2)
            && (ABS(59 - vfreq) < 5)
            && (ABS(858 - htotal) < 5) && (ABS(263 - vtotal) < 5))
    {
        return (MD_720x480_60i);
    }
    else if((ABS(720 - vde) < 2) && (ABS(288 - hde) < 2)
            && (ABS(49 - vfreq) < 5)
            && (ABS(864 - htotal) < 5) && (ABS(313 - vtotal) < 5))
    {
        return (MD_720x576_50i);
    }

    else if((ABS(1440 - vde) < 2) && (ABS(240 - hde) < 2)
            && (ABS(59 - vfreq) < 5)
            && (ABS(1716 - htotal) < 5) && (ABS(263 - vtotal) < 5))
    {
        return (MD_720x480_60i_2);
    }
    else if((ABS(1440 - vde) < 2) && (ABS(288 - hde) < 2)
            && (ABS(49 - vfreq) < 5)
            && (ABS(1728 - htotal) < 5) && (ABS(313 - vtotal) < 5))
    {
        return (MD_720x576_50i_2);
    }

    else
    {
        return (MD_UNDEFINE);
    }

}

#else    // 

int isInterlaceFormat(int hde, int vde, int htotal, int vtotal, int vfreq)
{
    int temp;

    temp = hde;
    hde = vde;
    vde = temp;

    if((ABS(1920 - vde) < 2) && (ABS(540 - hde) < 2)
       && (ABS(121 - vfreq) < 5)
       && (ABS(2200 - htotal) < 5) && (ABS(562 - vtotal) < 5))
    {
        return (MD_1920x1080_60i);
    }
    if((ABS(1920 - vde) < 2) && (ABS(540 - hde) < 2)
       && (ABS(121 - vfreq) < 5)
       && (ABS(2200 - htotal) < 5) && (ABS(562 - vtotal) < 5))
    {
        return (MD_1920x1080_59_94i); // test
    }
    else if((ABS(1920 - vde) < 2) && (ABS(540 - hde) < 2)
            && (ABS(101 - vfreq) < 5)
            && (ABS(2640 - htotal) < 5) && (ABS(562 - vtotal) < 5))
    {
        return (MD_1920x1080_50i);
    }
    else if((ABS(1440 - vde) < 2) && (ABS(240 - hde) < 2)
            && (ABS(59 - vfreq) < 5)
            && (ABS(1716 - htotal) < 5) && (ABS(263 - vtotal) < 5))
    {
        return (MD_720x480_60i);
    }
    else if((ABS(1440 - vde) < 2) && (ABS(288 - hde) < 2)
            && (ABS(49 - vfreq) < 5)
            && (ABS(1728 - htotal) < 5) && (ABS(313 - vtotal) < 5))
    {
        return (MD_720x576_50i);
    }
    else
    {
        return (MD_UNDEFINE);
    }

}

#endif


int GetVideoFormat(int hde, int vde, int htotal, int vtotal, int vfreq)
{
    int i = 0;
    for(i = 0; i < MD_INDEX_SIZE; i++)
    {
        Resolution_Struct res = GetResByVideoFormat(i);
        if((ABS(res.DisplayHeight - vde) < 2) && (ABS(res.DisplayWidth - hde) < 2))
        {
            if((ABS(GetVFreqByVideoFormat(i) - vfreq) < 5))
            {
                if((ABS(GetHTotalByVideoFormat(i) - htotal) < 5)
                   && (ABS(GetVTotalByVideoFormat(i) - vtotal) < 5))
                {
                    break;
                }
            }
        }
    }

    if(i < MD_INDEX_SIZE)
    {
        return i;
    }
    else
    {
        // 20121211
        return (isInterlaceFormat(hde, vde, htotal, vtotal, vfreq));
        //return MD_UNDEFINE;
    }
}

int GetFormatByHdeVde(int hde, int vde)
{
    int i = 0;
    for(i = 0; i < MD_INDEX_SIZE; i++)
    {
        Resolution_Struct res = GetResByVideoFormat(i);
        if((res.DisplayHeight == vde) && (res.DisplayWidth == hde))
        {
            break;
        }
    }
    if(i < MD_INDEX_SIZE)
    {
        return i;
    }
    else
    {
        return MD_UNDEFINE;
    }
}

int IsInterlaceFormat(int format)
{
    switch(format)
    {
        case MD_1920x1080_50i:
        case MD_1920x1080_59_94i:
        case MD_1920x1080_60i:
        case MD_720x480_60i:
        case MD_720x576_50i:
        case MD_720x480_60i_2:
        case MD_720x576_50i_2:
            return 1;
        case MD_INPUT_FORMAT:
            return IsInterlaceFormat(_INPUT_FORMAT);
        default:
            return 0;
    }
}

int IsSDFormat(int format)
{
    switch(format)
    {
        case MD_720x480_60i:
        case MD_720x576_50i:
        case MD_720x480_60i_2:
        case MD_720x576_50i_2:
            return 1;
        default:
            return 0;
    }
}



// output format
const u8 outFormatList[12] =
{
    MD_1024x768_60,
    MD_1280x720_60,
    MD_1280x768_60,
    MD_1280x1024_60,
    MD_1280x1280_60,
    MD_1440x900_60,
    MD_1600x1200_60,
    MD_1680x1050_60,
    MD_1920x1080_60,
    MD_1920x1200_60,
    MD_2048x1152_60,
    MD_2560x816_60_reduce,// 20130112 add
};
const u8 outFormatList_extern[1] =
{
    MD_INPUT_FORMAT,
};
// others output format
const u8 outFormatList_others[48] =
{
    MD_1024x768_75,
    MD_1024x768_85,
    MD_1024x1280_60,// 20121229
    MD_1024x1920_60,// 20121229
    MD_1080x1920_60,// 20130227
    MD_1152x864_75,
    MD_1248x936_60_reduce,// 20130116
    MD_1280x720_23_98, // 一般显示器不支持
    MD_1280x720_24,// 一般显示器不支持
    MD_1280x720_25,// 一般显示器不支持
    MD_1280x720_29_97,// 一般显示器不支持
    MD_1280x720_30,// 一般显示器不支持
    MD_1280x720_50,
    MD_1280x720_59_94,
    MD_1280x800_60,
    MD_1280x960_60,
    MD_1280x960_85,
    MD_1280x1024_75,
    MD_1280x1024_85,
    MD_1360x768_60,
    MD_1366x768_60,
    MD_1400x1050_60_reduce,
    MD_1400x1050_60,
    MD_1440x900_60_reduce,
    MD_1600x1200_60_reduce,
    MD_1680x1050_60_reduce,
    MD_1872x1040_60_reduce, // 20130116
    MD_1920x1080_23_98,
    MD_1920x1080_23_98psf,
    MD_1920x1080_24,
    MD_1920x1080_24psf,
    MD_1920x1080_25,
    MD_1920x1080_25psf, //30
    MD_1920x1080_29_97,
    MD_1920x1080_29_97psf,
    MD_1920x1080_30,
    MD_1920x1080_30psf,
    MD_1920x1080_59_94,
    MD_1920x1080_50,
    MD_1920x1080_60_reduce,
    MD_1976x1144_60_reduce,// 20130116
    MD_720x480_60i,
    MD_720x576_50i,
    MD_720x480_60i_2,
    MD_720x576_50i_2,
    MD_1920x1080_50i,
    MD_1920x1080_60i,
    MD_1920x1080_59_94i,
};

#if 1  //add by cdy

u8 getCustomTimming(int h_pixels, int v_lines, int freq)
{
    // CONSTANTS:
    const int CELL_GRAN_RND = 8;
    const int MARGIN_PER = 2;
    const int MIN_V_PORCH_RND = 3;
    const int INT_RQD = 0;
    //const int IP_FREQ_RQD = 60;
    const int MARGINS_RQD = 0;
    //const int H_PIXELS = 1024;
    //const int V_LINES = 768;

    // COMMON TIMING PARAMETERS:
    int V_FIELD_RATE_RQD, H_PIXELS_RND, LEFT_MARGIN = 0, RIGHT_MARGIN = 0;
    int TOTAL_ACTIVE_PIXELS, V_LINES_RND, TOP_MARGIN, BOT_MARGIN;
    float INTERLACE;

    // Computation of CVT Timing Parameters
    // CONSTANTS
    //const int V_SYNC_RND = 3;
    const int MIN_VSYNC_BP = 550;
    //const float C_PRIME = 30;
    //const float M_PRIME = 300;

    float H_PERIOD_EST; // (kHz)
    float TOTAL_V_LINES;
    //float V_FIELD_RATE_EST, IDEAL_DUTY_CYCLE;
    int V_BACK_PORCH;// V_SYNC_BP,
    //int H_BLANK;
    int TOTAL_PIXELS;
    float ACT_PIXEL_FREQ; // (MHz)
//  float ACT_H_FREQ; // (kHz)
    //float ACT_FIELD_RATE; // (Hz)
    float ACT_FRAME_RATE; // (Hz)

    // Computation of Reduced Blanking Timing Parameters
    const float RB_MIN_V_BLANK = 460;
    const int   RB_H_BLANK = 160;
    const int RB_H_SYNC = 32;
    const int RB_V_SYNC = 4;
    const int RB_V_FPORCH = 3;

    int VBI_LINES;
    int H_BACK_PORCH;

    // Computation of Common Parameters
    V_FIELD_RATE_RQD = (INT_RQD) ? (freq * 2) : (freq); //(INT_RQD)?(IP_FREQ_RQD*2):(IP_FREQ_RQD);
    H_PIXELS_RND = h_pixels / CELL_GRAN_RND * CELL_GRAN_RND; //H_PIXELS/CELL_GRAN_RND*CELL_GRAN_RND;

    if(MARGINS_RQD)
    {
        LEFT_MARGIN = (H_PIXELS_RND * MARGIN_PER / 100 / CELL_GRAN_RND * CELL_GRAN_RND);
    }
    else
    {
        LEFT_MARGIN = 0;
    }
    RIGHT_MARGIN = LEFT_MARGIN;

    TOTAL_ACTIVE_PIXELS = H_PIXELS_RND + LEFT_MARGIN + RIGHT_MARGIN;

    V_LINES_RND = (INT_RQD) ? (v_lines / 2) : (v_lines); //(INT_RQD)?(V_LINES/2):(V_LINES);

    if(MARGINS_RQD)
    {
        TOP_MARGIN = v_lines * MARGIN_PER / 100; //V_LINES*MARGIN_PER/100;
    }
    else
    {
        TOP_MARGIN = 0;
    }
    BOT_MARGIN = TOP_MARGIN;

    INTERLACE = (INT_RQD) ? 0.5 : 0;

    // Computation of CVT Timing Parameters
    H_PERIOD_EST = ((1.0 / V_FIELD_RATE_RQD) - MIN_VSYNC_BP / 1000000);
    H_PERIOD_EST = H_PERIOD_EST / (V_LINES_RND + (2 * TOP_MARGIN) + MIN_V_PORCH_RND + INTERLACE) * 1000000;

    //V_SYNC_BP = MIN_VSYNC_BP/H_PERIOD_EST;
    //V_BACK_PORCH = V_SYNC_BP-V_SYNC_RND;
    //TOTAL_V_LINES = V_LINES_RND+TOP_MARGIN+BOT_MARGIN+V_SYNC_BP;
    //printf("V Total = %f\n", TOTAL_V_LINES);
    //TOTAL_V_LINES = TOTAL_V_LINES+INTERLACE+MIN_V_PORCH_RND;
    //V_FIELD_RATE_EST = 1000000/(H_PERIOD_EST*TOTAL_V_LINES);
    //IDEAL_DUTY_CYCLE = C_PRIME-(M_PRIME*H_PERIOD_EST/1000); // (%)

    //if(IDEAL_DUTY_CYCLE < 0.2)
    //{
    //  H_BLANK = TOTAL_ACTIVE_PIXELS*20/(100-20)/(2*CELL_GRAN_RND);
    //  H_BLANK = H_BLANK*(2*CELL_GRAN_RND);
    //}
    //else
    //{
    //  H_BLANK = TOTAL_ACTIVE_PIXELS*IDEAL_DUTY_CYCLE/(100-IDEAL_DUTY_CYCLE)/(2*CELL_GRAN_RND);
    //  H_BLANK = H_BLANK*(2*CELL_GRAN_RND);
    //}

    //TOTAL_PIXELS = TOTAL_ACTIVE_PIXELS + H_BLANK;
    //ACT_PIXEL_FREQ = ((int)(TOTAL_PIXELS/H_PERIOD_EST/0.125))*0.125;
    //ACT_H_FREQ = 1000*ACT_PIXEL_FREQ/TOTAL_PIXELS;
    //ACT_FIELD_RATE = 1000*ACT_H_FREQ/TOTAL_V_LINES;
    //ACT_FRAME_RATE = (INT_RQD)?ACT_FIELD_RATE/2:ACT_FIELD_RATE;

    //printf("Pixel Clock (MHz) = %f\n", ACT_PIXEL_FREQ);
    //printf("Frame Rate (Hz) = %f\n", ACT_FRAME_RATE);
    //printf("Line Freq (kHz) = %f\n", ACT_H_FREQ);
    //printf("H Total = %d\n", TOTAL_PIXELS);
    //printf("V Total = %f\n", TOTAL_V_LINES);

    // Computation of Reduced Blanking Timing Parameters
    H_PERIOD_EST = ((1000000.0 / V_FIELD_RATE_RQD) - RB_MIN_V_BLANK) / (V_LINES_RND + TOP_MARGIN + BOT_MARGIN);

    VBI_LINES = (RB_MIN_V_BLANK + H_PERIOD_EST - 1) / H_PERIOD_EST;

    TOTAL_V_LINES = VBI_LINES + V_LINES_RND + TOP_MARGIN + BOT_MARGIN;

    TOTAL_PIXELS = RB_H_BLANK + TOTAL_ACTIVE_PIXELS;

    ACT_PIXEL_FREQ = ((int)(V_FIELD_RATE_RQD * TOTAL_V_LINES * TOTAL_PIXELS) / 1000000 / 0.125) * 0.125;

//  ACT_H_FREQ = 1000*ACT_PIXEL_FREQ/TOTAL_PIXELS;
    ACT_FRAME_RATE = (1000000 * ACT_PIXEL_FREQ / (TOTAL_V_LINES * TOTAL_PIXELS));
#if 1
    if(ACT_PIXEL_FREQ > 165.000000)
    {
//      printf("Pixel Clock (MHz) = %f\n", ACT_PIXEL_FREQ);
        return FALSE;
    }
#endif
    if(INT_RQD)
    {
        ACT_FRAME_RATE = ACT_FRAME_RATE / 2;
    }
    H_BACK_PORCH = RB_H_BLANK / 2;
    V_BACK_PORCH = VBI_LINES - RB_V_FPORCH - RB_V_SYNC;

//  m_customVideo.hTotal = TOTAL_PIXELS;
//  m_customVideo.vTotal = (int)TOTAL_V_LINES;
//  m_customVideo.hStart = RB_H_SYNC+H_BACK_PORCH;
//  m_customVideo.vStart = RB_V_SYNC+V_BACK_PORCH;
//  m_customVideo.hSyncWidth = RB_H_SYNC;
//  m_customVideo.vSyncWidth = RB_V_SYNC;
//  m_customVideo.hvSyncPolarity = 0; //默认正极性
//  m_customVideo.hActive = h_pixels;
//  m_customVideo.vActive = v_lines;
#if 1
    setCustomhTotal(TOTAL_PIXELS);
    setCustomvTotal((int)TOTAL_V_LINES);
    setCustomhStart(RB_H_SYNC + H_BACK_PORCH);
    setCustomvStart(RB_V_SYNC + V_BACK_PORCH);
    setCustomhSyncWidth(RB_H_SYNC);
    setCustomvSyncWidth(RB_V_SYNC);
    setCustomhvSyncPolarity(0);
    setCustomhActive(h_pixels);
    setCustomvActive(v_lines);
    setCustomH(h_pixels);//
    setCustomV(v_lines);//
    setCustomF(freq);//
#endif
//  printf("\nReduced Blanking Timing\n");
//  printf("Pixel Clock (MHz) = %f\n", ACT_PIXEL_FREQ);
//  printf("Frame Rate (Hz) = %f\n", ACT_FRAME_RATE);
//  printf("Line Freq (kHz) = %f\n", ACT_H_FREQ);
//  printf("H Total  = %d\n", TOTAL_PIXELS);
//  printf("V Total  = %d\n", (int)TOTAL_V_LINES);
//  printf("H Active = %d\n", h_pixels);//H_PIXELS);
//  printf("V Active = %d\n", v_lines);//V_LINES);
//  printf("H Sync Width = %d\n", RB_H_SYNC);
//  printf("V Sync Width = %d\n", RB_V_SYNC);
//  printf("H Back Porch = %d\n", H_BACK_PORCH);
//  printf("V Back Porch = %d\n", V_BACK_PORCH);
//  printf("H Start = %d\n", RB_H_SYNC+H_BACK_PORCH);
//  printf("V Start = %d\n", RB_V_SYNC+V_BACK_PORCH);

    return TRUE;
}
#endif
