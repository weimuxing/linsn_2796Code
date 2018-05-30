#include "VideoFormatTable.h"

#define _INPUT_FORMAT MD_1024x768_60

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

code VideoDefine_Struct tVideoDefine[MD_INDEX_SIZE] =
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
		60, 	//BYTE vfreq;	// Hz					
		32, 		//WORD hSyncWidth;					
		4,		// WORD vSyncWidth; 				
		0,		//BYTE hvSyncPolarity;	// bit0 -- horizontal sync	bit1 -- vertical sync,	0 -- 正, 1 -- 负		
		0,
	},		

};

//char * tVideoFormatStr[MD_INDEX_SIZE+3] = 
code char *const tVideoFormatStr[MD_INDEX_SIZE + 5] =
{
	"720x480x60", 	//	//1MD_720x480_60,   0
	"720x576x50", 	//	//1MD_720x576_50,   1
	"1280x720x60", 	//	//1MD_1280x720_60,  2
	"1280x720x59.94", 	//MD_1280x720_59_94,   3
	"1280x720x50", 		//MD_1280x720_50, 4
	"1280x720x30", 		//MD_1280x720_30, 5
	"1280x720x29.97", 	//MD_1280x720_29_97,  6
	"1280x720x25", 		//MD_1280x720_25,  7
	"1280x720x24", 		//MD_1280x720_24,   8
	"1280x720x23.98", 	//MD_1280x720_23_98,   9
	"1920x1080x60", 	//MD_1920x1080_60,   10
	"1920x1080x59.94", 	//MD_1920x1080_59_94,  11
	"1920x1080x50", 	//MD_1920x1080_50,  12
	"1920x1080x30", 	//MD_1920x1080_30,  13
	"1920x1080x30s", 	//MD_1920x1080_30psf,  14
	"1920x1080x29.97", 	//MD_1920x1080_29_97, 15
	"1920x1080x29.9s", //MD_1920x1080_29_97psf,  16
	"1920x1080x25", 	//MD_1920x1080_25,  17
	"1920x1080x25s", 	//MD_1920x1080_25psf,  18
	"1920x1080x24", 	//MD_1920x1080_24,  19
	"1920x1080x24s", 	//MD_1920x1080_24psf,   20
	"1920x1080x23.98", 	//MD_1920x1080_23_98,  21
	"1920x1080x23.9s", //MD_1920x1080_23_98psf,   22
	"640x480x60", 		//MD_640x480_60,  23
	"640x480x75", 		//MD_640x480_75,  24
	"640x480x85", 		//MD_640x480_85,   25
	"800x600x60", 		//MD_800x600_60,   26
	"800x600x75", 		//MD_800x600_75,   27
	"800x600x85", 		//MD_800x600_85,  28
	"1024x768x60", 		//MD_1024x768_60,  29
	"1024x768x75", 		//MD_1024x768_75,  30
	"1024x768x85", 		//MD_1024x768_85,  31
	"1280x1024x60", 	//MD_1280x1024_60,  32
	"1280x1024x75", 	//MD_1280x1024_75,  33
	"1280x1024x85", 	//MD_1280x1024_85,  34
	"1600x1200x60", 	//MD_1600x1200_60,  35
	// 以下为新增格式
	"720x480x60i", 		//MD_720x480_60i,  36
	"720x576x50i", 		//MD_720x576_50i, 37
	//
	"1920x1080x60i", 	//MD_1920x1080_60i,  38
	"1920x1080x50i", 	//MD_1920x1080_50i,  39
	//
	"1152x864x75", 		//MD_1152x864_75,  40
	"1280x768x60", 		//MD_1280x768_60,  41
	"1280x960x60", 		//MD_1280x960_60,  42
	"1280x960x85", 		//MD_1280x960_85,  43
	"1360x768x60", 		//MD_1360x768_60,  44
	"1366x768x60", 		//MD_1366x768_60,  45
	"1400x1050x60", 	//MD_1400x1050_60,  46
	"1440x900x60", 		//MD_1440x900_60, 47
	"2048x1152x60", 	//MD_2048x1152_60,   48
	"1680x1050x60", 	//MD_1680x1050_60,  49
	"1920x1200x60", 	//MD_1920x1200_60,   50
	
	"1600x1200x60_r",		//MD_1600x1200_60_reduce = 51,
	"1920x1080x60_r",		//MD_1920x1080_60_reduce = 52,
	"1440x900x60_r",		//MD_1440x900_60_no_reduce = 53,
	"1680x1050x60_r",		//MD_1680x1050_60_reduce   = 54,
	"1400x1050x60_r",		//MD_1400x1050_60_reduce   = 55,
	"2176x544x60_r",		//MD_2176x544_60_reduce	= 56,
	"1152x1152x60",		//MD_1152x1152_60_reduce  = 57,
	"1280x1280x60",		//MD_1280x1280_60_reduce  = 58,
	"2560x812x60",		//MD_2560x812_60			= 59,
	"2560x816x60",		//MD_2560x816_60			= 60,
	"1280x800x60",		//MD_1280x800_60			= 61,
	"1024x768x59.94",		//MD_1024x768_59_94       = 62, //added for 8028 v0.40
	"1920x1080x59.94i",		//MD_1920x1080_59_94i     = 63, //added for 8028 v0.40
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
	9,		//MD_720x480_60,
	10,		//MD_720x576_50,
	11,		//MD_1280x720_60,
	12,		//MD_1280x720_59_94,
	13,		//MD_1280x720_50,
	14,		//MD_1280x720_30,
	15,		//MD_1280x720_29_97,
	16,		//MD_1280x720_25,
	17,		//MD_1280x720_24,
	18,		//MD_1280x720_23_98,
	21,		//MD_1920x1080_60,
	22,		//MD_1920x1080_59_94,
	23,		//MD_1920x1080_50,
	29,		//MD_1920x1080_30,
	30,		//MD_1920x1080_30psf,
	31,		//MD_1920x1080_29_97,
	32,		//MD_1920x1080_29_97psf,
	33,		//MD_1920x1080_25,
	34,		//MD_1920x1080_25psf,
	35,		//MD_1920x1080_24,
	36,		//MD_1920x1080_24psf,
	37,		//MD_1920x1080_23_98,
	38,		//MD_1920x1080_23_98psf,
	39,		//MD_640x480_60,
	40,		//MD_640x480_75,
	41,		//MD_640x480_85,
	42,		//MD_800x600_60,
	43,		//MD_800x600_75,
	44,		//MD_800x600_85,
	45,		//MD_1024x768_60,
	46,		//MD_1024x768_75,
	47,		//MD_1024x768_85,
	48,		//MD_1280x1024_60,
	49,		//MD_1280x1024_75,
	50,		//MD_1280x1024_85,
	51,		//MD_1600x1200_60,
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
	if(format < MD_INDEX_SIZE)
	{
		return tModeResolution[tVideoDefine[format].res];
	}
	else if(format == MD_INPUT_FORMAT)
	{
		return GetResByVideoFormat(_INPUT_FORMAT);
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

WORD GetHDEByVideoFormat(BYTE format)
{
	return GetResByVideoFormat(format).DisplayWidth;
}
WORD GetVDEByVideoFormat(BYTE format)
{
	return GetResByVideoFormat(format).DisplayHeight;
}

WORD GetHTotalByVideoFormat(BYTE format)
{
	if(format <= MD_INDEX_SIZE)
	{
		return tVideoDefine[format].htotal;
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
		result =  tVideoDefine[format].htotal*tVideoDefine[format].vtotal*tVideoDefine[format].vfreq;
	}
	else if(format == MD_INPUT_FORMAT)
	{
		return GetDlckByVideoFormat(_INPUT_FORMAT);
	}
	else
	{
		result =  tVideoDefine[MD_1024x768_60].htotal*tVideoDefine[MD_1024x768_60].vtotal*tVideoDefine[MD_1024x768_60].vfreq;;
	}
	return result;
}
#ifndef _ABS
#define _ABS(a) (((a)>0)?(a):(-(a)))
#endif

int GetVideoFormat(int hde, int vde, int htotal, int vtotal, int vfreq)
{
	int i = 0;
	Resolution_Struct res;
	if(hde<100 || vde<100)
	{
		return MD_NOINPUT;
	}
	for(i=0; i<MD_INDEX_SIZE; i++)
	{
		res = GetResByVideoFormat(i);
		if((_ABS((int)res.DisplayHeight - vde)<2) && (_ABS((int)res.DisplayWidth - hde)<2))
		{
			if((_ABS((int)GetVFreqByVideoFormat(i)-vfreq)<2))
			{
				if((_ABS((int)GetHTotalByVideoFormat(i)-htotal)<5)
					&&(_ABS((int)GetVTotalByVideoFormat(i)-vtotal)<5))
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
		return MD_UNDEFINE;
	}
}

int  isInterlaceFormat(int  hde, int  vde, int  htotal, int  vtotal, int  vfreq)
{
	int temp;

	temp = hde;
	hde = vde;
	vde = temp;
		
	if((_ABS(1920 - vde)<2) && (_ABS(540 - hde)<2)
	//==============20130604
	//	&&(ABS(121 - vfreq)<5)
		&&(_ABS(60 - vfreq)<5)
	//==============20130604 END
		&&(_ABS(2200-htotal)<5)&&(_ABS(562-vtotal)<5))
	{
		return (MD_1920x1080_60i);
	}
	if((_ABS(1920 - vde)<2) && (_ABS(540 - hde)<2)
	//==============20130604
	//	&&(ABS(121 - vfreq)<5)
		&&(_ABS(59 - vfreq)<5)
	//==============20130604 END
		&&(_ABS(2200-htotal)<5)&&(_ABS(562-vtotal)<5))
	{
		return (MD_1920x1080_59_94i); // test
	}
	else if((_ABS(1920 - vde)<2) && (_ABS(540 - hde)<2)
	//==============20130604
	//	&&(ABS(101 - vfreq)<5)
		&&(_ABS(50 - vfreq)<5)
	//==============20130604 END
		&&(_ABS(2640-htotal)<5)&&(_ABS(562-vtotal)<5))
	{
		return (MD_1920x1080_50i);
	}
	else if((_ABS(1440 - vde)<2) && (_ABS(240 - hde)<2)
		&&(_ABS(59 - vfreq)<5)
		&&(_ABS(1716-htotal)<5)&&(_ABS(263-vtotal)<5))
	{
		return (MD_720x480_60i);
	}
	else if((_ABS(1440 - vde)<2) && (_ABS(288 - hde)<2)
		&&(_ABS(49 - vfreq)<5)
		&&(_ABS(1728-htotal)<5)&&(_ABS(313-vtotal)<5))
	{
		return (MD_720x576_50i);
	}
	//==============20130604

	else if((_ABS(720 - vde)<2) && (_ABS(240 - hde)<2)
		&&(_ABS(59 - vfreq)<5)
		&&(_ABS(858-htotal)<5)&&(_ABS(263-vtotal)<5))
	{
		return (MD_720x480_60i);
	}
	else if((_ABS(720 - vde)<2) && (_ABS(288 - hde)<2)
		&&(_ABS(49 - vfreq)<5)
		&&(_ABS(864-htotal)<5)&&(_ABS(313-vtotal)<5))
	{
		return (MD_720x576_50i);
	}
	//==============20130604 END
	else
		{return (MD_UNDEFINE);}

}

SWORD getVideoFormatByTotal(int hde, int vde, int htotal, int vtotal, int vfreq)
{
	SWORD i = 0;
	for(i=0; i<MD_INDEX_SIZE; i++)
	{
		Resolution_Struct res;
		res = GetResByVideoFormat(i);
		if((_ABS(res.DisplayHeight - vde)<2) && (_ABS(res.DisplayWidth - hde)<2))
		{
			if((_ABS(GetVFreqByVideoFormat(i)-vfreq)<5))
			{
				if((_ABS(GetHTotalByVideoFormat(i)-htotal)<5)
					&&(_ABS(GetVTotalByVideoFormat(i)-vtotal)<5))
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
		return (isInterlaceFormat(hde, vde, htotal, vtotal, vfreq));
		//return MD_UNDEFINE;
	}
}


SWORD GetFormatByHdeVde(int hde, int vde, int vfreq)
{
	SWORD i = 0;
	Resolution_Struct res;
	for(i=0; i<MD_INDEX_SIZE; i++)
	{
		 res = GetResByVideoFormat(i);
		if((res.DisplayHeight == vde) && (res.DisplayWidth == hde))
		{
			if((_ABS((int)GetVFreqByVideoFormat(i)-vfreq)<2))
			{
				
				break;
			}
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

