/********************************************************************************/
/*   The  Software  is  proprietary,  confidential,  and  valuable to Realtek   */
/*   Semiconductor  Corporation  ("Realtek").  All  rights, including but not   */
/*   limited  to  copyrights,  patents,  trademarks, trade secrets, mask work   */
/*   rights, and other similar rights and interests, are reserved to Realtek.   */
/*   Without  prior  written  consent  from  Realtek,  copying, reproduction,   */
/*   modification,  distribution,  or  otherwise  is strictly prohibited. The   */
/*   Software  shall  be  kept  strictly  in  confidence,  and  shall  not be   */
/*   disclosed to or otherwise accessed by any third party.                     */
/*   c<2003> - <2011>                                                           */
/*   The Software is provided "AS IS" without any warranty of any kind,         */
/*   express, implied, statutory or otherwise.                                  */
/********************************************************************************/

//----------------------------------------------------------------------------------------------------
// ID Code      : RL6193_Series_RegCommonInclude.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------


//****************************************************************************
// LAYER DEFINITIONS / MACROS
//****************************************************************************
//--------------------------------------------------
// Definitions of  Control Register Address
//--------------------------------------------------

//--------------------------------------------------
// M1 Scaling Down Control (Page 0)
//--------------------------------------------------
#define _P0_25_PT_00_V_SD_INIT_M1                         0x00
#define _P0_25_PT_01_V_SD_FACTOR_H_M1                     0x01
#define _P0_25_PT_02_V_SD_FACTOR_M_M1                     0x02
#define _P0_25_PT_03_V_SD_FACTOR_L_M1                     0x03
#define _P0_25_PT_04_H_SD_INIT_M1                         0x04
#define _P0_25_PT_05_H_SD_FACTOR_H_M1                     0x05
#define _P0_25_PT_06_H_SD_FACTOR_M_M1                     0x06
#define _P0_25_PT_07_H_SD_FACTOR_L_M1                     0x07
#define _P0_25_PT_08_H_SD_ACC_H_M1                        0x08
#define _P0_25_PT_09_H_SD_ACC_M_M1                        0x09
#define _P0_25_PT_0A_H_SD_ACC_WIDTH_H_M1                  0x0A
#define _P0_25_PT_0B_H_SD_ACC_WIDTH_L_M1                  0x0B
#define _P0_25_PT_0C_SD_FLAT_WIDTH_H_M1                   0x0C
#define _P0_25_PT_0D_SD_FLAT_WIDTH_L_M1                   0x0D
#define _P0_25_PT_0E_H_SD_ACC_L_M1                        0x0E


//--------------------------------------------------
// M1 I Domain Pattern Generator (Page 0)
//--------------------------------------------------
#define _P0_25_PT_10_I_PG_CTRL_0_M1                       0x10
#define _P0_25_PT_11_I_PG_CTRL_1_M1                       0x11
#define _P0_25_PT_12_INITIAL_R_L_M1                       0x12
#define _P0_25_PT_13_INITIAL_G_L_M1                       0x13
#define _P0_25_PT_14_INITIAL_B_L_M1                       0x14
#define _P0_25_PT_15_INITIAL_RGB_M_M1                     0x15
#define _P0_25_PT_16_INITIAL_RGB_H_M1                     0x16
#define _P0_25_PT_17_PATTERN_RESET_M1                     0x17


//--------------------------------------------------
// M1 Scaling Down Control (Page 0)
//--------------------------------------------------
#define _P0_25_PT_36_SD_OUT_WID_M_M1                      0x36
#define _P0_25_PT_37_SD_OUT_WID_L_M1                      0x37
#define _P0_25_PT_38_SD_OUT_LEN_M_M1                      0x38
#define _P0_25_PT_39_SD_OUT_LEN_L_M1                      0x39
#define _P0_25_PT_40_V_SD_INIT_M_M1                       0x40
#define _P0_25_PT_41_V_SD_INIT_L_M1                       0x41
#define _P0_25_PT_42_V_SD_FACTOR_L1_M1                    0x42
#define _P0_25_PT_43_H_SD_INIT_M_M1                       0x43
#define _P0_25_PT_44_H_SD_INIT_L_M_M1                     0x44
#define _P0_25_PT_45_SD_BIST_CTRL0_M1                     0x45
#define _P0_25_PT_46_SD_BIST_CTRL1_M1                     0x46


//--------------------------------------------------
// Display Format (Page 0)
//--------------------------------------------------
#define _P0_2B_PT_00_DISPLAY_HOR_TOTAL_H                  0x00
#define _P0_2B_PT_01_DISPLAY_HOR_TOTAL_L                  0x01
#define _P0_2B_PT_02_DISPLAY_HOR_SYNC_END                 0x02
#define _P0_2B_PT_03_DISPLAY_HOR_BG_STA_H                 0x03
#define _P0_2B_PT_04_DISPLAY_HOR_BG_STA_L                 0x04
#define _P0_2B_PT_05_DISPLAY_HOR_ACT_STA_H                0x05
#define _P0_2B_PT_06_DISPLAY_HOR_ACT_STA_L                0x06
#define _P0_2B_PT_07_DISPLAY_HOR_ACT_END_H                0x07
#define _P0_2B_PT_08_DISPLAY_HOR_ACT_END_L                0x08
#define _P0_2B_PT_09_DISPLAY_HOR_BG_END_H                 0x09
#define _P0_2B_PT_0A_DISPLAY_HOR_BG_END_L                 0x0A
#define _P0_2B_PT_0B_DISPLAY_VER_TOTAL_H                  0x0B
#define _P0_2B_PT_0C_DISPLAY_VER_TOTAL_L                  0x0C
#define _P0_2B_PT_0D_DISPLAY_VER_SYNC_END                 0x0D
#define _P0_2B_PT_0E_DISPLAY_VER_BG_STA_H                 0x0E
#define _P0_2B_PT_0F_DISPLAY_VER_BG_STA_L                 0x0F
#define _P0_2B_PT_10_DISPLAY_VER_ACT_STA_H                0x10
#define _P0_2B_PT_11_DISPLAY_VER_ACT_STA_L                0x11
#define _P0_2B_PT_12_DISPLAY_VER_ACT_END_H                0x12
#define _P0_2B_PT_13_DISPLAY_VER_ACT_END_L                0x13
#define _P0_2B_PT_14_DISPLAY_VER_BG_END_H                 0x14
#define _P0_2B_PT_15_DISPLAY_VER_BG_END_L                 0x15
#define _P0_2B_PT_16_DISPLAY_HOR_ACT_STA_H_M2             0x16
#define _P0_2B_PT_17_DISPLAY_HOR_ACT_STA_L_M2             0x17
#define _P0_2B_PT_18_DISPLAY_HOR_ACT_END_H_M2             0x18
#define _P0_2B_PT_19_DISPLAY_HOR_ACT_END_L_M2             0x19
#define _P0_2B_PT_1A_DISPLAY_VER_ACT_STA_H_M2             0x1A
#define _P0_2B_PT_1B_DISPLAY_VER_ACT_STA_L_M2             0x1B
#define _P0_2B_PT_1C_DISPLAY_VER_ACT_END_H_M2             0x1C
#define _P0_2B_PT_1D_DISPLAY_VER_ACT_END_L_M2             0x1D


//--------------------------------------------------
// Display Fine Tune (Page 0)
//--------------------------------------------------
#define _P0_2B_PT_20_DISPLAY_CLOCK_FINE_TUNE              0x20
#define _P0_2B_PT_21_OSD_REF_DEN                          0x21
#define _P0_2B_PT_22_DUMMY_REGISTER1                      0x22
#define _P0_2B_PT_23_DUMMY_REGISTER2                      0x23
#define _P0_2B_PT_24_DISP_MAIN_FIFO_LEN_CTRL              0x24
#define _P0_2B_PT_25_MN_FRAME_RATE_EN                     0x25
#define _P0_2B_PT_26_M_FOR_MN_FRAME_RATE                  0x26
#define _P0_2B_PT_27_N_FOR_MN_FRAME_RATE                  0x27
#define _P0_2B_PT_28_FREE_RUN_DVS_CNT                     0x28
#define _P0_2B_PT_29_FRAME_SYNC_DVS_FLAG                  0x29
#define _P0_2B_PT_30_FIXED_DVTOTAL_MSB                    0x30
#define _P0_2B_PT_31_FIXED_DVTOTAL_LSB                    0x31
#define _P0_2B_PT_32_FIXED_LAST_LINE_MSB                  0x32
#define _P0_2B_PT_33_FIXED_LAST_LINE_LSB                  0x33
#define _P0_2B_PT_34_TRANSIENT_DVTOTAL_MSB                0x34
#define _P0_2B_PT_35_TRANSIENT_DVTOTAL_LSB                0x35
#define _P0_2B_PT_36_DVS_DIFF_LOBD_MSB                    0x36
#define _P0_2B_PT_37_DVS_DIFF_LOBD_LSB                    0x37
#define _P0_2B_PT_38_DVS_DIFF_UPBD_MSB                    0x38
#define _P0_2B_PT_39_DVS_DIFF_UPBD_LSB                    0x39
#define _P0_2B_PT_40_EVEN_BIST_CTRL                       0x40
#define _P0_2B_PT_41_EVEN_BIST_RESULT                     0x41
#define _P0_2B_PT_42_ODD_BIST_CTRL                        0x42
#define _P0_2B_PT_43_ODD_BIST_RESULT                      0x43
#define _P0_2B_PT_44_SUB_BIST_CTRL                        0x44
#define _P0_2B_PT_45_SUB_BIST_RESULT                      0x45
#define _P0_2B_PT_46_FIFO_BIST_CTRL                       0x46
#define _P0_2B_PT_47_FIFO_BIST_RESULT                     0x47
#define _P0_2B_PT_48_D_DOMAIN_TESTOUT                     0x48


//--------------------------------------------------
// FIFO Window (Page 0)
//--------------------------------------------------
#define _P0_31_PT_00_DISPLAY_READ_WID_BSU_H               0x00
#define _P0_31_PT_01_DISPLAY_READ_WID_BSU_L               0x01
#define _P0_31_PT_02_DISPLAY_READ_LEN_BSU_L               0x02
#define _P0_31_PT_03_DISPLAY_READ_WID_LEN_BSU_H           0x03
#define _P0_31_PT_04_DISPLAY_READ_WID_BSU_H_M2            0x04
#define _P0_31_PT_05_DISPLAY_READ_WID_BSU_L_M2            0x05
#define _P0_31_PT_06_DISPLAY_READ_LEN_BSU_L_M2            0x06
#define _P0_31_PT_07_DISPLAY_READ_WID_LEN_BSU_H_M2        0x07


//--------------------------------------------------
// M1 Scaling Up Function (Page 0)
//--------------------------------------------------
#define _P0_34_PT_00_HOR_SCALE_FACTOR_H                   0x00
#define _P0_34_PT_01_HOR_SCALE_FACTOR_M                   0x01
#define _P0_34_PT_02_HOR_SCALE_FACTOR_L                   0x02
#define _P0_34_PT_03_VER_SCALE_FACTOR_H                   0x03
#define _P0_34_PT_04_VER_SCALE_FACTOR_M                   0x04
#define _P0_34_PT_05_VER_SCALE_FACTOR_L                   0x05
#define _P0_34_PT_06_HOR_SCALE_FACTOR_SEG1_H              0x06
#define _P0_34_PT_07_HOR_SCALE_FACTOR_SEG1_L              0x07
#define _P0_34_PT_08_HOR_SCALE_FACTOR_SEG2_H              0x08
#define _P0_34_PT_09_HOR_SCALE_FACTOR_SEG2_L              0x09
#define _P0_34_PT_0A_HOR_SCALE_FACTOR_SEG3_H              0x0A
#define _P0_34_PT_0B_HOR_SCALE_FACTOR_SEG3_L              0x0B
#define _P0_34_PT_0C_HOR_SCALE_FACTOR_DELTA1_H            0x0C
#define _P0_34_PT_0D_HOR_SCALE_FACTOR_DELTA1_L            0x0D
#define _P0_34_PT_0E_HOR_SCALE_FACTOR_DELTA2_H            0x0E
#define _P0_34_PT_0F_HOR_SCALE_FACTOR_DELTA2_L            0x0F
#define _P0_34_PT_10_HOR_FILTER_COEF_INI                  0x10
#define _P0_34_PT_11_VER_FILTER_COEF_INI                  0x11
#define _P0_34_PT_14_HOR_FILTER_COEF_INI_M                0x14
#define _P0_34_PT_15_HOR_FILTER_COEF_INI_L                0x15
#define _P0_34_PT_16_VER_FILTER_COEF_INI_M                0x16
#define _P0_34_PT_17_VER_FILTER_COEF_INI_L                0x17


//--------------------------------------------------
// Sync Processor Overview (Page 0)
//--------------------------------------------------
#define _P0_5D_PT_00_G_CLAMP_START                        0x00
#define _P0_5D_PT_01_G_CLAMP_END                          0x01
#define _P0_5D_PT_02_BR_CLAMP_START                       0x02
#define _P0_5D_PT_03_BR_CLAMP_END                         0x03
#define _P0_5D_PT_04_CLAMP_CTRL0                          0x04
#define _P0_5D_PT_05_CLAMP_CTRL1                          0x05
#define _P0_5D_PT_06_CLAMP_CTRL2                          0x06
#define _P0_5D_PT_07_COAST_CTRL                           0x07
#define _P0_5D_PT_08_CAPTURE_WINDOW_SETTING               0x08
#define _P0_5D_PT_09_DETECTION_TOLERANCE_SETTING          0x09
#define _P0_5D_PT_0A_DEVS_CAP_NUM_H                       0x0A
#define _P0_5D_PT_0B_DEVS_CAP_NUM_L                       0x0B
#define _P0_5D_PT_0C_HSYNC_GLITCH_COUNTER_CTRL            0x0C
#define _P0_5D_PT_0D_G_CLAMP_START_H                      0x0D
#define _P0_5D_PT_0E_BR_CLAMP_START_H                     0x0E
#define _P0_5D_PT_0F_CLAMP_POS_H                          0x0F
#define _P0_5D_PT_10_MACROVISIONCONTROL                   0x10
#define _P0_5D_PT_11_MACROVISIONSTARTLINEINEVENFIELD      0x11
#define _P0_5D_PT_12_MACROVISIONENDLINEINEVENFIELD        0x12
#define _P0_5D_PT_13_MACROVISIONSTARTLINEINODDFIELD       0x13
#define _P0_5D_PT_14_MACROVISIONENDLINEINODDFIELD         0x14
#define _P0_5D_PT_15_MACROVISIONETECTDEBOUNCE             0x15
#define _P0_5D_PT_18_SYNC_PROCESSOR_TEST_MODE             0x18
#define _P0_5D_PT_19_HS_DETECT_SETTING                    0x19


//--------------------------------------------------
// Highlight window (Page 0)
//--------------------------------------------------
#define _P0_61_PT_00_HLW_HOR_START_H                      0x00
#define _P0_61_PT_01_HLW_HOR_START_L                      0x01
#define _P0_61_PT_02_HLW_HOR_END_H                        0x02
#define _P0_61_PT_03_HLW_HOR_END_L                        0x03
#define _P0_61_PT_04_HLW_VER_START_H                      0x04
#define _P0_61_PT_05_HLW_VER_START_L                      0x05
#define _P0_61_PT_06_HLW_VER_END_H                        0x06
#define _P0_61_PT_07_HLW_VER_END_L                        0x07
#define _P0_61_PT_08_HLW_BORDER_WIDTH                     0x08
#define _P0_61_PT_09_HLW_BORDER_RED                       0x09
#define _P0_61_PT_0A_HLW_BORDER_GRN                       0x0A
#define _P0_61_PT_0B_HLW_BORDER_BLU                       0x0B
#define _P0_61_PT_0C_HLW_BORDER_EN                        0x0C
#define _P0_61_PT_0D_HLW_CONTROL1                         0x0D
#define _P0_61_PT_0E_HLW_CONTROL0                         0x0E
#define _P0_61_PT_0F_HLW_CONTROL2                         0x0F
#define _P0_61_PT_10_HLW_CONTROL3                         0x10
#define _P0_61_PT_11_HLW_SETSEL0                          0x11
#define _P0_61_PT_12_HLW_SETSEL1                          0x12


//--------------------------------------------------
// Contrast & Brightness (Page 0)
//--------------------------------------------------
#define _P0_65_PT_00_BRI_RED_COE_SETA_H                   0x00
#define _P0_65_PT_01_BRI_GRN_COE_SETA_H                   0x01
#define _P0_65_PT_02_BRI_BLU_COE_SETA_H                   0x02
#define _P0_65_PT_03_CTS_RED_COE_SETA_H                   0x03
#define _P0_65_PT_04_CTS_GRN_COE_SETA_H                   0x04
#define _P0_65_PT_05_CTS_BLU_COE_SETA_H                   0x05
#define _P0_65_PT_06_BRI_RED_COE_SETB_H                   0x06
#define _P0_65_PT_07_BRI_GRN_COE_SETB_H                   0x07
#define _P0_65_PT_08_BRI_BLU_COE_SETB_H                   0x08
#define _P0_65_PT_09_CTS_RED_COE_SETB_H                   0x09
#define _P0_65_PT_0A_CTS_GRN_COE_SETB_H                   0x0A
#define _P0_65_PT_0B_CTS_BLU_COE_SETB_H                   0x0B
#define _P0_65_PT_20_BRI_COE_SETA_L                       0x20
#define _P0_65_PT_21_CTS_COE_SETA_RG_L                    0x21
#define _P0_65_PT_22_CTS_COE_SETA_B_L                     0x22
#define _P0_65_PT_23_BRI_COE_SETB_L                       0x23
#define _P0_65_PT_24_CTS_COE_SETB_RG_L                    0x24
#define _P0_65_PT_25_CTS_COE_SETB_B_L                     0x25
#define _P0_65_PT_26_CTS_BRI_SWAP                         0x26
#define _P0_65_PT_27_CTS_BRI_SET                          0x27


//--------------------------------------------------
// M1 Color Processor Control (page 0)
//--------------------------------------------------
#define _P0_65_PT_28_SRGB_DUMMY                           0x28


//--------------------------------------------------
// Dithering Control (For Display Domain) (Page 0)
//--------------------------------------------------
#define _P0_69_PT_00_D_DITHER_COMMON_SET0                 0x00
#define _P0_69_PT_01_D_DITHER_COMMON_SET1                 0x01
#define _P0_69_PT_02_D_DITHER_COMMON_SET2                 0x02
#define _P0_69_PT_03_D_DITHER_COMMON_SET3                 0x03
#define _P0_69_PT_0D_D_DITHER_COMMON_CTRL2                0x0D
#define _P0_69_PT_10_THDSET1_MIN_VALUE_THD_H              0x10
#define _P0_69_PT_11_THDSET1_MIN_VALUE_THD_L              0x11
#define _P0_69_PT_12_THDSET1_MAX_VALUE_THD_H              0x12
#define _P0_69_PT_13_THDSET1_MAX_VALUE_THD_L              0x13
#define _P0_69_PT_16_D_DITHER_THDSET1_CTRL1               0x16
#define _P0_69_PT_17_D_DITHER_THDSET1_CTRL2               0x17
#define _P0_69_PT_1A_THDSET2_MIN_VALUE_THD_H              0x1A
#define _P0_69_PT_1B_THDSET2_MIN_VALUE_THD_L              0x1B
#define _P0_69_PT_1C_THDSET2_MAX_VALUE_THD_H              0x1C
#define _P0_69_PT_1D_THDSET2_MAX_VALUE_THD_L              0x1D
#define _P0_69_PT_20_D_DITHER_THDSET2_CTRL1               0x20
#define _P0_69_PT_21_D_DITHER_THDSET2_CTRL2               0x21
#define _P0_69_PT_24_THDSET3_MIN_VALUE_THD_H              0x24
#define _P0_69_PT_25_THDSET3_MIN_VALUE_THD_L              0x25
#define _P0_69_PT_26_THDSET3_MAX_VALUE_THD_H              0x26
#define _P0_69_PT_27_THDSET3_MAX_VALUE_THD_L              0x27
#define _P0_69_PT_2A_D_DITHER_THDSET3_CTRL1               0x2A
#define _P0_69_PT_2B_D_DITHER_THDSET3_CTRL2               0x2B
#define _P0_69_PT_80_D_DITHER_REALIGN_SET_R0              0x80
#define _P0_69_PT_81_D_DITHER_REALIGN_SET_R1              0x81
#define _P0_69_PT_82_D_DITHER_REALIGN_SET_R2              0x82
#define _P0_69_PT_83_D_DITHER_REALIGN_SET_R3              0x83
#define _P0_69_PT_84_D_DITHER_REALIGN_SET_R4              0x84
#define _P0_69_PT_85_D_DITHER_REALIGN_SET_R5              0x85
#define _P0_69_PT_86_D_DITHER_REALIGN_SET_R6              0x86
#define _P0_69_PT_87_D_DITHER_REALIGN_SET_R7              0x87
#define _P0_69_PT_88_D_DITHER_REALIGN_SET_R8              0x88
#define _P0_69_PT_89_D_DITHER_REALIGN_SET_R9              0x89
#define _P0_69_PT_8A_D_DITHER_REALIGN_SET_R10             0x8A
#define _P0_69_PT_8B_D_DITHER_REALIGN_SET_R11             0x8B
#define _P0_69_PT_8C_D_DITHER_REALIGN_SET_R12             0x8C
#define _P0_69_PT_8D_D_DITHER_REALIGN_SET_R13             0x8D
#define _P0_69_PT_8E_D_DITHER_REALIGN_SET_R14             0x8E
#define _P0_69_PT_8F_D_DITHER_REALIGN_SET_R15             0x8F
#define _P0_69_PT_90_D_DITHER_REALIGN_SET_G0              0x90
#define _P0_69_PT_91_D_DITHER_REALIGN_SET_G1              0x91
#define _P0_69_PT_92_D_DITHER_REALIGN_SET_G2              0x92
#define _P0_69_PT_93_D_DITHER_REALIGN_SET_G3              0x93
#define _P0_69_PT_94_D_DITHER_REALIGN_SET_G4              0x94
#define _P0_69_PT_95_D_DITHER_REALIGN_SET_G5              0x95
#define _P0_69_PT_96_D_DITHER_REALIGN_SET_G6              0x96
#define _P0_69_PT_97_D_DITHER_REALIGN_SET_G7              0x97
#define _P0_69_PT_98_D_DITHER_REALIGN_SET_G8              0x98
#define _P0_69_PT_99_D_DITHER_REALIGN_SET_G9              0x99
#define _P0_69_PT_9A_D_DITHER_REALIGN_SET_G10             0x9A
#define _P0_69_PT_9B_D_DITHER_REALIGN_SET_G11             0x9B
#define _P0_69_PT_9C_D_DITHER_REALIGN_SET_G12             0x9C
#define _P0_69_PT_9D_D_DITHER_REALIGN_SET_G13             0x9D
#define _P0_69_PT_9E_D_DITHER_REALIGN_SET_G14             0x9E
#define _P0_69_PT_9F_D_DITHER_REALIGN_SET_G15             0x9F
#define _P0_69_PT_A0_D_DITHER_REALIGN_SET_B0              0xA0
#define _P0_69_PT_A1_D_DITHER_REALIGN_SET_B1              0xA1
#define _P0_69_PT_A2_D_DITHER_REALIGN_SET_B2              0xA2
#define _P0_69_PT_A3_D_DITHER_REALIGN_SET_B3              0xA3
#define _P0_69_PT_A4_D_DITHER_REALIGN_SET_B4              0xA4
#define _P0_69_PT_A5_D_DITHER_REALIGN_SET_B5              0xA5
#define _P0_69_PT_A6_D_DITHER_REALIGN_SET_B6              0xA6
#define _P0_69_PT_A7_D_DITHER_REALIGN_SET_B7              0xA7
#define _P0_69_PT_A8_D_DITHER_REALIGN_SET_B8              0xA8
#define _P0_69_PT_A9_D_DITHER_REALIGN_SET_B9              0xA9
#define _P0_69_PT_AA_D_DITHER_REALIGN_SET_B10             0xAA
#define _P0_69_PT_AB_D_DITHER_REALIGN_SET_B11             0xAB
#define _P0_69_PT_AC_D_DITHER_REALIGN_SET_B12             0xAC
#define _P0_69_PT_AD_D_DITHER_REALIGN_SET_B13             0xAD
#define _P0_69_PT_AE_D_DITHER_REALIGN_SET_B14             0xAE
#define _P0_69_PT_AF_D_DITHER_REALIGN_SET_B15             0xAF
#define _P0_69_PT_B0_D_DITHER_REALIGN_OFFSET0             0xB0
#define _P0_69_PT_B1_D_DITHER_REALIGN_OFFSET1             0xB1
#define _P0_69_PT_B2_D_DITHER_REALIGN_OFFSET2             0xB2
#define _P0_69_PT_B3_D_DITHER_REALIGN_OFFSET3             0xB3
#define _P0_69_PT_B4_D_DITHER_REALIGN_OFFSET4             0xB4
#define _P0_69_PT_B5_D_DITHER_REALIGN_OFFSET5             0xB5
#define _P0_69_PT_B6_D_DITHER_REALIGN_OFFSET6             0xB6
#define _P0_69_PT_B7_D_DITHER_REALIGN_OFFSET7             0xB7
#define _P0_69_PT_C0_D_DITHER_LSB_TABLE0                  0xC0
#define _P0_69_PT_C1_D_DITHER_LSB_TABLE1                  0xC1
#define _P0_69_PT_C2_D_DITHER_LSB_TABLE2                  0xC2
#define _P0_69_PT_C3_D_DITHER_LSB_TABLE3                  0xC3
#define _P0_69_PT_C4_D_DITHER_LSB_TABLE4                  0xC4
#define _P0_69_PT_C5_D_DITHER_LSB_TABLE5                  0xC5
#define _P0_69_PT_C6_D_DITHER_LSB_TABLE6                  0xC6
#define _P0_69_PT_C7_D_DITHER_LSB_TABLE7                  0xC7
#define _P0_69_PT_C8_D_DITHER_LSB_TABLE8                  0xC8
#define _P0_69_PT_C9_D_DITHER_LSB_TABLE9                  0xC9
#define _P0_69_PT_CA_D_DITHER_LSB_TABLE10                 0xCA
#define _P0_69_PT_CB_D_DITHER_LSB_TABLE11                 0xCB
#define _P0_69_PT_CC_D_DITHER_LSB_TABLE12                 0xCC
#define _P0_69_PT_CD_D_DITHER_LSB_TABLE13                 0xCD
#define _P0_69_PT_CE_D_DITHER_LSB_TABLE14                 0xCE
#define _P0_69_PT_CF_D_DITHER_LSB_TABLE15                 0xCF


//--------------------------------------------------
// M1 Back ground color (Page 0)
//--------------------------------------------------
#define _P0_6D_PT_00_BG_COLOR_VALUE_R_M1                  0x00
#define _P0_6D_PT_01_BG_COLOR_VALUE_G_M1                  0x01
#define _P0_6D_PT_02_BG_COLOR_VALUE_B_M1                  0x02
#define _P0_6D_PT_03_BG_COLOR_VALUE_RGB_M1                0x03


//--------------------------------------------------
// Test Function (Page 0)
//--------------------------------------------------
#define _P0_8E_PT_00_TEST_MODE                            0x00
#define _P0_8E_PT_01_TEST_MODE_CTRL                       0x01
#define _P0_8E_PT_02_TST_CLK_CTRL0                        0x02
#define _P0_8E_PT_03_TST_CLK_CTRL2                        0x03
#define _P0_8E_PT_04_TST_CLK_CTRL3                        0x04
#define _P0_8E_PT_05_TST_CLK_CTRL4                        0x05
#define _P0_8E_PT_06_TST_CLK_CTRL5                        0x06
#define _P0_8E_PT_07_TST_CLK_CTRL6                        0x07
#define _P0_8E_PT_08_TST_CLK_CTRL7                        0x08
#define _P0_8E_PT_09_TST_CLK_CTRL8                        0x09
#define _P0_8E_PT_0A_TST_CLK_CTRL9                        0x0A
#define _P0_8E_PT_0B_TST_CLK_CTRLA                        0x0B
#define _P0_8E_PT_0C_TST_CLK_CTRLB                        0x0C
#define _P0_8E_PT_10_SELECT_TSTINCLOCK                    0x10
#define _P0_8E_PT_20_TESTOUT_SEL0                         0x20
#define _P0_8E_PT_21_TESTOUT_SEL1                         0x21
#define _P0_8E_PT_22_TESTOUT_SEL2                         0x22
#define _P0_8E_PT_23_TESTOUT_SEL3                         0x23
#define _P0_8E_PT_27_ADC_TEST_MODE                        0x27
#define _P0_8E_PT_28_ADC_TEST_MODE_ADDR_MSB               0x28
#define _P0_8E_PT_29_ADC_TEST_MODE_ADDR_LSB               0x29
#define _P0_8E_PT_30_EMCU_EN                              0x30


//--------------------------------------------------
// OSD Access Port (Page 0)
//--------------------------------------------------
#define _P0_92_PT_100_WIN0_ADR0_LSB                       0x1000
#define _P0_92_PT_100_WIN0_ADR0_MSB                       0x1001
#define _P0_92_PT_100_WIN0_ADR0_HSB                       0x1002
#define _P0_92_PT_101_WIN0_ADR1_LSB                       0x1010
#define _P0_92_PT_101_WIN0_ADR1_MSB                       0x1011
#define _P0_92_PT_101_WIN0_ADR1_HSB                       0x1012
#define _P0_92_PT_102_WIN0_ADR2_LSB                       0x1020
#define _P0_92_PT_102_WIN0_ADR2_MSB                       0x1021
#define _P0_92_PT_102_WIN0_ADR2_HSB                       0x1022
#define _P0_92_PT_103_WIN0_ADR3_LSB                       0x1030
#define _P0_92_PT_103_WIN0_ADR3_MSB                       0x1031
#define _P0_92_PT_103_WIN0_ADR3_HSB                       0x1032
#define _P0_92_PT_104_WIN1_ADR0_LSB                       0x1040
#define _P0_92_PT_104_WIN1_ADR0_MSB                       0x1041
#define _P0_92_PT_104_WIN1_ADR0_HSB                       0x1042
#define _P0_92_PT_105_WIN1_ADR1_LSB                       0x1050
#define _P0_92_PT_105_WIN1_ADR1_MSB                       0x1051
#define _P0_92_PT_105_WIN1_ADR1_HSB                       0x1052
#define _P0_92_PT_106_WIN1_ADR2_LSB                       0x1060
#define _P0_92_PT_106_WIN1_ADR2_MSB                       0x1061
#define _P0_92_PT_106_WIN1_ADR2_HSB                       0x1062
#define _P0_92_PT_107_WIN1_ADR3_LSB                       0x1070
#define _P0_92_PT_107_WIN1_ADR3_MSB                       0x1071
#define _P0_92_PT_107_WIN1_ADR3_HSB                       0x1072
#define _P0_92_PT_108_WIN2_ADR0_LSB                       0x1080
#define _P0_92_PT_108_WIN2_ADR0_MSB                       0x1081
#define _P0_92_PT_108_WIN2_ADR0_HSB                       0x1082
#define _P0_92_PT_109_WIN2_ADR1_LSB                       0x1090
#define _P0_92_PT_109_WIN2_ADR1_MSB                       0x1091
#define _P0_92_PT_109_WIN2_ADR1_HSB                       0x1092
#define _P0_92_PT_10A_WIN2_ADR2_LSB                       0x10A0
#define _P0_92_PT_10A_WIN2_ADR2_MSB                       0x10A1
#define _P0_92_PT_10A_WIN2_ADR2_HSB                       0x10A2
#define _P0_92_PT_10B_WIN2_ADR3_LSB                       0x10B0
#define _P0_92_PT_10B_WIN2_ADR3_MSB                       0x10B1
#define _P0_92_PT_10B_WIN2_ADR3_HSB                       0x10B2
#define _P0_92_PT_10C_WIN3_ADR0_LSB                       0x10C0
#define _P0_92_PT_10C_WIN3_ADR0_MSB                       0x10C1
#define _P0_92_PT_10C_WIN3_ADR0_HSB                       0x10C2
#define _P0_92_PT_10D_WIN3_ADR1_LSB                       0x10D0
#define _P0_92_PT_10D_WIN3_ADR1_MSB                       0x10D1
#define _P0_92_PT_10D_WIN3_ADR1_HSB                       0x10D2
#define _P0_92_PT_10E_WIN3_ADR2_LSB                       0x10E0
#define _P0_92_PT_10E_WIN3_ADR2_MSB                       0x10E1
#define _P0_92_PT_10E_WIN3_ADR2_HSB                       0x10E2
#define _P0_92_PT_10F_WIN3_ADR3_LSB                       0x10F0
#define _P0_92_PT_10F_WIN3_ADR3_MSB                       0x10F1
#define _P0_92_PT_10F_WIN3_ADR3_HSB                       0x10F2
#define _P0_92_PT_110_WIN4_ADR0_LSB                       0x1100
#define _P0_92_PT_110_WIN4_ADR0_MSB                       0x1101
#define _P0_92_PT_110_WIN4_ADR0_HSB                       0x1102
#define _P0_92_PT_111_WIN4_ADR1_LSB                       0x1110
#define _P0_92_PT_111_WIN4_ADR1_MSB                       0x1111
#define _P0_92_PT_111_WIN4_ADR1_HSB                       0x1112
#define _P0_92_PT_112_WIN4_ADR2_LSB                       0x1120
#define _P0_92_PT_112_WIN4_ADR2_MSB                       0x1121
#define _P0_92_PT_112_WIN4_ADR2_HSB                       0x1122
#define _P0_92_PT_113_WIN4_ADR3_LSB                       0x1130
#define _P0_92_PT_113_WIN4_ADR3_MSB                       0x1131
#define _P0_92_PT_113_WIN4_ADR3_HSB                       0x1132
#define _P0_92_PT_114_WIN5_ADR0_LSB                       0x1140
#define _P0_92_PT_114_WIN5_ADR0_MSB                       0x1141
#define _P0_92_PT_114_WIN5_ADR0_HSB                       0x1142
#define _P0_92_PT_115_WIN5_ADR1_LSB                       0x1150
#define _P0_92_PT_115_WIN5_ADR1_MSB                       0x1151
#define _P0_92_PT_115_WIN5_ADR1_HSB                       0x1152
#define _P0_92_PT_116_WIN5_ADR2_LSB                       0x1160
#define _P0_92_PT_116_WIN5_ADR2_MSB                       0x1161
#define _P0_92_PT_116_WIN5_ADR2_HSB                       0x1162
#define _P0_92_PT_117_WIN5_ADR3_LSB                       0x1170
#define _P0_92_PT_117_WIN5_ADR3_MSB                       0x1171
#define _P0_92_PT_117_WIN5_ADR3_HSB                       0x1172
#define _P0_92_PT_118_WIN6_ADR0_LSB                       0x1180
#define _P0_92_PT_118_WIN6_ADR0_MSB                       0x1181
#define _P0_92_PT_118_WIN6_ADR0_HSB                       0x1182
#define _P0_92_PT_119_WIN6_ADR1_LSB                       0x1190
#define _P0_92_PT_119_WIN6_ADR1_MSB                       0x1191
#define _P0_92_PT_119_WIN6_ADR1_HSB                       0x1192
#define _P0_92_PT_11A_WIN6_ADR2_LSB                       0x11A0
#define _P0_92_PT_11A_WIN6_ADR2_MSB                       0x11A1
#define _P0_92_PT_11A_WIN6_ADR2_HSB                       0x11A2
#define _P0_92_PT_11B_WIN6_ADR3_LSB                       0x11B0
#define _P0_92_PT_11B_WIN6_ADR3_MSB                       0x11B1
#define _P0_92_PT_11B_WIN6_ADR3_HSB                       0x11B2
#define _P0_92_PT_11C_WIN7_ADR0_LSB                       0x11C0
#define _P0_92_PT_11C_WIN7_ADR0_MSB                       0x11C1
#define _P0_92_PT_11C_WIN7_ADR0_HSB                       0x11C2
#define _P0_92_PT_11D_WIN7_ADR1_LSB                       0x11D0
#define _P0_92_PT_11D_WIN7_ADR1_MSB                       0x11D1
#define _P0_92_PT_11D_WIN7_ADR1_HSB                       0x11D2
#define _P0_92_PT_11E_WIN7_ADR2_LSB                       0x11E0
#define _P0_92_PT_11E_WIN7_ADR2_MSB                       0x11E1
#define _P0_92_PT_11E_WIN7_ADR2_HSB                       0x11E2
#define _P0_92_PT_11F_WIN7_ADR3_LSB                       0x11F0
#define _P0_92_PT_11F_WIN7_ADR3_MSB                       0x11F1
#define _P0_92_PT_11F_WIN7_ADR3_HSB                       0x11F2
#define _P0_92_PT_120_WIN8_ADR0_LSB                       0x1200
#define _P0_92_PT_120_WIN8_ADR0_MSB                       0x1201
#define _P0_92_PT_120_WIN8_ADR0_HSB                       0x1202
#define _P0_92_PT_121_WIN8_ADR1_LSB                       0x1210
#define _P0_92_PT_121_WIN8_ADR1_MSB                       0x1211
#define _P0_92_PT_121_WIN8_ADR1_HSB                       0x1212
#define _P0_92_PT_122_WIN8_ADR2_LSB                       0x1220
#define _P0_92_PT_122_WIN8_ADR2_MSB                       0x1221
#define _P0_92_PT_122_WIN8_ADR2_HSB                       0x1222
#define _P0_92_PT_123_WIN8_ADR3_LSB                       0x1230
#define _P0_92_PT_123_WIN8_ADR3_MSB                       0x1231
#define _P0_92_PT_123_WIN8_ADR3_HSB                       0x1232
#define _P0_92_PT_124_WIN9_ADR0_LSB                       0x1240
#define _P0_92_PT_124_WIN9_ADR0_MSB                       0x1241
#define _P0_92_PT_124_WIN9_ADR0_HSB                       0x1242
#define _P0_92_PT_125_WIN9_ADR1_LSB                       0x1250
#define _P0_92_PT_125_WIN9_ADR1_MSB                       0x1251
#define _P0_92_PT_125_WIN9_ADR1_HSB                       0x1252
#define _P0_92_PT_126_WIN9_ADR2_LSB                       0x1260
#define _P0_92_PT_126_WIN9_ADR2_MSB                       0x1261
#define _P0_92_PT_126_WIN9_ADR2_HSB                       0x1262
#define _P0_92_PT_127_WIN9_ADR3_LSB                       0x1270
#define _P0_92_PT_127_WIN9_ADR3_MSB                       0x1271
#define _P0_92_PT_127_WIN9_ADR3_HSB                       0x1272
#define _P0_92_PT_200_WIN4_1_ADR0_LSB                     0x2000
#define _P0_92_PT_200_WIN4_1_ADR0_MSB                     0x2001
#define _P0_92_PT_200_WIN4_1_ADR0_HSB                     0x2002
#define _P0_92_PT_201_WIN4_1_ADR1_LSB                     0x2010
#define _P0_92_PT_201_WIN4_1_ADR1_MSB                     0x2011
#define _P0_92_PT_201_WIN4_1_ADR1_HSB                     0x2012
#define _P0_92_PT_202_WIN4_1_ADR2_LSB                     0x2020
#define _P0_92_PT_202_WIN4_1_ADR2_MSB                     0x2021
#define _P0_92_PT_202_WIN4_1_ADR2_HSB                     0x2022
#define _P0_92_PT_203_WIN4_1_ADR3_LSB                     0x2030
#define _P0_92_PT_203_WIN4_1_ADR3_MSB                     0x2031
#define _P0_92_PT_203_WIN4_1_ADR3_HSB                     0x2032
#define _P0_92_PT_204_WIN4_2_ADR0_LSB                     0x2040
#define _P0_92_PT_204_WIN4_2_ADR0_MSB                     0x2041
#define _P0_92_PT_204_WIN4_2_ADR0_HSB                     0x2042
#define _P0_92_PT_205_WIN4_2_ADR1_LSB                     0x2050
#define _P0_92_PT_205_WIN4_2_ADR1_MSB                     0x2051
#define _P0_92_PT_205_WIN4_2_ADR1_HSB                     0x2052
#define _P0_92_PT_206_WIN4_2_ADR2_LSB                     0x2060
#define _P0_92_PT_206_WIN4_2_ADR2_MSB                     0x2061
#define _P0_92_PT_206_WIN4_2_ADR2_HSB                     0x2062
#define _P0_92_PT_207_WIN4_2_ADR3_LSB                     0x2070
#define _P0_92_PT_207_WIN4_2_ADR3_MSB                     0x2071
#define _P0_92_PT_207_WIN4_2_ADR3_HSB                     0x2072
#define _P0_92_PT_208_WIN4_3_ADR0_LSB                     0x2080
#define _P0_92_PT_208_WIN4_3_ADR0_MSB                     0x2081
#define _P0_92_PT_208_WIN4_3_ADR0_HSB                     0x2082
#define _P0_92_PT_209_WIN4_3_ADR1_LSB                     0x2090
#define _P0_92_PT_209_WIN4_3_ADR1_MSB                     0x2091
#define _P0_92_PT_209_WIN4_3_ADR1_HSB                     0x2092
#define _P0_92_PT_20A_WIN4_3_ADR2_LSB                     0x20A0
#define _P0_92_PT_20A_WIN4_3_ADR2_MSB                     0x20A1
#define _P0_92_PT_20A_WIN4_3_ADR2_HSB                     0x20A2
#define _P0_92_PT_20B_WIN4_3_ADR3_LSB                     0x20B0
#define _P0_92_PT_20B_WIN4_3_ADR3_MSB                     0x20B1
#define _P0_92_PT_20B_WIN4_3_ADR3_HSB                     0x20B2
#define _P0_92_PT_20C_WIN4_4_ADR0_LSB                     0x20C0
#define _P0_92_PT_20C_WIN4_4_ADR0_MSB                     0x20C1
#define _P0_92_PT_20C_WIN4_4_ADR0_HSB                     0x20C2
#define _P0_92_PT_20D_WIN4_4_ADR1_LSB                     0x20D0
#define _P0_92_PT_20D_WIN4_4_ADR1_MSB                     0x20D1
#define _P0_92_PT_20D_WIN4_4_ADR1_HSB                     0x20D2
#define _P0_92_PT_20E_WIN4_4_ADR2_LSB                     0x20E0
#define _P0_92_PT_20E_WIN4_4_ADR2_MSB                     0x20E1
#define _P0_92_PT_20E_WIN4_4_ADR2_HSB                     0x20E2
#define _P0_92_PT_20F_WIN4_4_ADR3_LSB                     0x20F0
#define _P0_92_PT_20F_WIN4_4_ADR3_MSB                     0x20F1
#define _P0_92_PT_20F_WIN4_4_ADR3_HSB                     0x20F2
#define _P0_92_PT_210_WIN4_5_ADR0_LSB                     0x2100
#define _P0_92_PT_210_WIN4_5_ADR0_MSB                     0x2101
#define _P0_92_PT_210_WIN4_5_ADR0_HSB                     0x2102
#define _P0_92_PT_211_WIN4_5_ADR1_LSB                     0x2110
#define _P0_92_PT_211_WIN4_5_ADR1_MSB                     0x2111
#define _P0_92_PT_211_WIN4_5_ADR1_HSB                     0x2112
#define _P0_92_PT_212_WIN4_5_ADR2_LSB                     0x2120
#define _P0_92_PT_212_WIN4_5_ADR2_MSB                     0x2121
#define _P0_92_PT_212_WIN4_5_ADR2_HSB                     0x2122
#define _P0_92_PT_213_WIN4_5_ADR3_LSB                     0x2130
#define _P0_92_PT_213_WIN4_5_ADR3_MSB                     0x2131
#define _P0_92_PT_213_WIN4_5_ADR3_HSB                     0x2132
#define _P0_92_PT_214_WIN4_6_ADR0_LSB                     0x2140
#define _P0_92_PT_214_WIN4_6_ADR0_MSB                     0x2141
#define _P0_92_PT_214_WIN4_6_ADR0_HSB                     0x2142
#define _P0_92_PT_215_WIN4_6_ADR1_LSB                     0x2150
#define _P0_92_PT_215_WIN4_6_ADR1_MSB                     0x2151
#define _P0_92_PT_215_WIN4_6_ADR1_HSB                     0x2152
#define _P0_92_PT_216_WIN4_6_ADR2_LSB                     0x2160
#define _P0_92_PT_216_WIN4_6_ADR2_MSB                     0x2161
#define _P0_92_PT_216_WIN4_6_ADR2_HSB                     0x2162
#define _P0_92_PT_217_WIN4_6_ADR3_LSB                     0x2170
#define _P0_92_PT_217_WIN4_6_ADR3_MSB                     0x2171
#define _P0_92_PT_217_WIN4_6_ADR3_HSB                     0x2172
#define _P0_92_PT_218_WIN4_7_ADR0_LSB                     0x2180
#define _P0_92_PT_218_WIN4_7_ADR0_MSB                     0x2181
#define _P0_92_PT_218_WIN4_7_ADR0_HSB                     0x2182
#define _P0_92_PT_219_WIN4_7_ADR1_LSB                     0x2190
#define _P0_92_PT_219_WIN4_7_ADR1_MSB                     0x2191
#define _P0_92_PT_219_WIN4_7_ADR1_HSB                     0x2192
#define _P0_92_PT_21A_WIN4_7_ADR2_LSB                     0x21A0
#define _P0_92_PT_21A_WIN4_7_ADR2_MSB                     0x21A1
#define _P0_92_PT_21A_WIN4_7_ADR2_HSB                     0x21A2
#define _P0_92_PT_21B_WIN4_7_ADR3_LSB                     0x21B0
#define _P0_92_PT_21B_WIN4_7_ADR3_MSB                     0x21B1
#define _P0_92_PT_21B_WIN4_7_ADR3_HSB                     0x21B2
#define _P0_92_PT_21C_WIN4_8_ADR0_LSB                     0x21C0
#define _P0_92_PT_21C_WIN4_8_ADR0_MSB                     0x21C1
#define _P0_92_PT_21C_WIN4_8_ADR0_HSB                     0x21C2
#define _P0_92_PT_21D_WIN4_8_ADR1_LSB                     0x21D0
#define _P0_92_PT_21D_WIN4_8_ADR1_MSB                     0x21D1
#define _P0_92_PT_21D_WIN4_8_ADR1_HSB                     0x21D2
#define _P0_92_PT_21E_WIN4_8_ADR2_LSB                     0x21E0
#define _P0_92_PT_21E_WIN4_8_ADR2_MSB                     0x21E1
#define _P0_92_PT_21E_WIN4_8_ADR2_HSB                     0x21E2
#define _P0_92_PT_21F_WIN4_8_ADR3_LSB                     0x21F0
#define _P0_92_PT_21F_WIN4_8_ADR3_MSB                     0x21F1
#define _P0_92_PT_21F_WIN4_8_ADR3_HSB                     0x21F2
#define _P0_92_PT_220_WIN5_1_ADR0_LSB                     0x2200
#define _P0_92_PT_220_WIN5_1_ADR0_MSB                     0x2201
#define _P0_92_PT_220_WIN5_1_ADR0_HSB                     0x2202
#define _P0_92_PT_221_WIN5_1_ADR1_LSB                     0x2210
#define _P0_92_PT_221_WIN5_1_ADR1_MSB                     0x2211
#define _P0_92_PT_221_WIN5_1_ADR1_HSB                     0x2212
#define _P0_92_PT_222_WIN5_1_ADR2_LSB                     0x2220
#define _P0_92_PT_222_WIN5_1_ADR2_MSB                     0x2221
#define _P0_92_PT_222_WIN5_1_ADR2_HSB                     0x2222
#define _P0_92_PT_223_WIN5_1_ADR3_LSB                     0x2230
#define _P0_92_PT_223_WIN5_1_ADR3_MSB                     0x2231
#define _P0_92_PT_223_WIN5_1_ADR3_HSB                     0x2232
#define _P0_92_PT_224_WIN5_2_ADR0_LSB                     0x2240
#define _P0_92_PT_224_WIN5_2_ADR0_MSB                     0x2241
#define _P0_92_PT_224_WIN5_2_ADR0_HSB                     0x2242
#define _P0_92_PT_225_WIN5_2_ADR1_LSB                     0x2250
#define _P0_92_PT_225_WIN5_2_ADR1_MSB                     0x2251
#define _P0_92_PT_225_WIN5_2_ADR1_HSB                     0x2252
#define _P0_92_PT_226_WIN5_2_ADR2_LSB                     0x2260
#define _P0_92_PT_226_WIN5_2_ADR2_MSB                     0x2261
#define _P0_92_PT_226_WIN5_2_ADR2_HSB                     0x2262
#define _P0_92_PT_227_WIN5_2_ADR3_LSB                     0x2270
#define _P0_92_PT_227_WIN5_2_ADR3_MSB                     0x2271
#define _P0_92_PT_227_WIN5_2_ADR3_HSB                     0x2272
#define _P0_92_PT_228_WIN5_3_ADR0_LSB                     0x2280
#define _P0_92_PT_228_WIN5_3_ADR0_MSB                     0x2281
#define _P0_92_PT_228_WIN5_3_ADR0_HSB                     0x2282
#define _P0_92_PT_229_WIN5_3_ADR1_LSB                     0x2290
#define _P0_92_PT_229_WIN5_3_ADR1_MSB                     0x2291
#define _P0_92_PT_229_WIN5_3_ADR1_HSB                     0x2292
#define _P0_92_PT_22A_WIN5_3_ADR2_LSB                     0x22A0
#define _P0_92_PT_22A_WIN5_3_ADR2_MSB                     0x22A1
#define _P0_92_PT_22A_WIN5_3_ADR2_HSB                     0x22A2
#define _P0_92_PT_22B_WIN5_3_ADR3_LSB                     0x22B0
#define _P0_92_PT_22B_WIN5_3_ADR3_MSB                     0x22B1
#define _P0_92_PT_22B_WIN5_3_ADR3_HSB                     0x22B2
#define _P0_92_PT_22C_WIN5_4_ADR0_LSB                     0x22C0
#define _P0_92_PT_22C_WIN5_4_ADR0_MSB                     0x22C1
#define _P0_92_PT_22C_WIN5_4_ADR0_HSB                     0x22C2
#define _P0_92_PT_22D_WIN5_4_ADR1_LSB                     0x22D0
#define _P0_92_PT_22D_WIN5_4_ADR1_MSB                     0x22D1
#define _P0_92_PT_22D_WIN5_4_ADR1_HSB                     0x22D2
#define _P0_92_PT_22E_WIN5_4_ADR2_LSB                     0x22E0
#define _P0_92_PT_22E_WIN5_4_ADR2_MSB                     0x22E1
#define _P0_92_PT_22E_WIN5_4_ADR2_HSB                     0x22E2
#define _P0_92_PT_22F_WIN5_4_ADR3_LSB                     0x22F0
#define _P0_92_PT_22F_WIN5_4_ADR3_MSB                     0x22F1
#define _P0_92_PT_22F_WIN5_4_ADR3_HSB                     0x22F2
#define _P0_92_PT_230_WIN5_5_ADR0_LSB                     0x2300
#define _P0_92_PT_230_WIN5_5_ADR0_MSB                     0x2301
#define _P0_92_PT_230_WIN5_5_ADR0_HSB                     0x2302
#define _P0_92_PT_231_WIN5_5_ADR1_LSB                     0x2310
#define _P0_92_PT_231_WIN5_5_ADR1_MSB                     0x2311
#define _P0_92_PT_231_WIN5_5_ADR1_HSB                     0x2312
#define _P0_92_PT_232_WIN5_5_ADR2_LSB                     0x2320
#define _P0_92_PT_232_WIN5_5_ADR2_MSB                     0x2321
#define _P0_92_PT_232_WIN5_5_ADR2_HSB                     0x2322
#define _P0_92_PT_233_WIN5_5_ADR3_LSB                     0x2330
#define _P0_92_PT_233_WIN5_5_ADR3_MSB                     0x2331
#define _P0_92_PT_233_WIN5_5_ADR3_HSB                     0x2332
#define _P0_92_PT_234_WIN5_6_ADR0_LSB                     0x2340
#define _P0_92_PT_234_WIN5_6_ADR0_MSB                     0x2341
#define _P0_92_PT_234_WIN5_6_ADR0_HSB                     0x2342
#define _P0_92_PT_235_WIN5_6_ADR1_LSB                     0x2350
#define _P0_92_PT_235_WIN5_6_ADR1_MSB                     0x2351
#define _P0_92_PT_235_WIN5_6_ADR1_HSB                     0x2352
#define _P0_92_PT_236_WIN5_6_ADR2_LSB                     0x2360
#define _P0_92_PT_236_WIN5_6_ADR2_MSB                     0x2361
#define _P0_92_PT_236_WIN5_6_ADR2_HSB                     0x2362
#define _P0_92_PT_237_WIN5_6_ADR3_LSB                     0x2370
#define _P0_92_PT_237_WIN5_6_ADR3_MSB                     0x2371
#define _P0_92_PT_237_WIN5_6_ADR3_HSB                     0x2372
#define _P0_92_PT_238_WIN5_7_ADR0_LSB                     0x2380
#define _P0_92_PT_238_WIN5_7_ADR0_MSB                     0x2381
#define _P0_92_PT_238_WIN5_7_ADR0_HSB                     0x2382
#define _P0_92_PT_239_WIN5_7_ADR1_LSB                     0x2390
#define _P0_92_PT_239_WIN5_7_ADR1_MSB                     0x2391
#define _P0_92_PT_239_WIN5_7_ADR1_HSB                     0x2392
#define _P0_92_PT_23A_WIN5_7_ADR2_LSB                     0x23A0
#define _P0_92_PT_23A_WIN5_7_ADR2_MSB                     0x23A1
#define _P0_92_PT_23A_WIN5_7_ADR2_HSB                     0x23A2
#define _P0_92_PT_23B_WIN5_7_ADR3_LSB                     0x23B0
#define _P0_92_PT_23B_WIN5_7_ADR3_MSB                     0x23B1
#define _P0_92_PT_23B_WIN5_7_ADR3_HSB                     0x23B2
#define _P0_92_PT_23C_WIN5_8_ADR0_LSB                     0x23C0
#define _P0_92_PT_23C_WIN5_8_ADR0_MSB                     0x23C1
#define _P0_92_PT_23C_WIN5_8_ADR0_HSB                     0x23C2
#define _P0_92_PT_23D_WIN5_8_ADR1_LSB                     0x23D0
#define _P0_92_PT_23D_WIN5_8_ADR1_MSB                     0x23D1
#define _P0_92_PT_23D_WIN5_8_ADR1_HSB                     0x23D2
#define _P0_92_PT_23E_WIN5_8_ADR2_LSB                     0x23E0
#define _P0_92_PT_23E_WIN5_8_ADR2_MSB                     0x23E1
#define _P0_92_PT_23E_WIN5_8_ADR2_HSB                     0x23E2
#define _P0_92_PT_23F_WIN5_8_ADR3_LSB                     0x23F0
#define _P0_92_PT_23F_WIN5_8_ADR3_MSB                     0x23F1
#define _P0_92_PT_23F_WIN5_8_ADR3_HSB                     0x23F2
#define _P0_92_PT_150_WIN0_ADR4_LSB                       0x1500
#define _P0_92_PT_150_WIN0_ADR4_MSB                       0x1501
#define _P0_92_PT_150_WIN0_ADR4_HSB                       0x1502
#define _P0_92_PT_15A_WIN5_ADR4_LSB                       0x15A0
#define _P0_92_PT_15A_WIN5_ADR4_MSB                       0x15A1
#define _P0_92_PT_15A_WIN5_ADR4_HSB                       0x15A2
#define _P0_92_PT_15C_WIN6_ADR4_LSB                       0x15C0
#define _P0_92_PT_15C_WIN6_ADR4_MSB                       0x15C1
#define _P0_92_PT_15C_WIN6_ADR4_HSB                       0x15C2
#define _P0_92_PT_15E_WIN7_ADR4_LSB                       0x15E0
#define _P0_92_PT_15E_WIN7_ADR4_MSB                       0x15E1
#define _P0_92_PT_15E_WIN7_ADR4_HSB                       0x15E2
#define _P0_92_PT_160_WIN8_ADR4_LSB                       0x1600
#define _P0_92_PT_160_WIN8_ADR4_MSB                       0x1601
#define _P0_92_PT_160_WIN8_ADR4_HSB                       0x1602
#define _P0_92_PT_162_WIN9_ADR4_LSB                       0x1620
#define _P0_92_PT_162_WIN9_ADR4_MSB                       0x1621
#define _P0_92_PT_162_WIN9_ADR4_HSB                       0x1622
#define _P0_92_PT_164_WIN4_1_ADR4_LSB                     0x1640
#define _P0_92_PT_164_WIN4_1_ADR4_MSB                     0x1641
#define _P0_92_PT_164_WIN4_1_ADR4_HSB                     0x1642
#define _P0_92_PT_166_WIN4_2_ADR4_LSB                     0x1660
#define _P0_92_PT_166_WIN4_2_ADR4_MSB                     0x1661
#define _P0_92_PT_166_WIN4_2_ADR4_HSB                     0x1662
#define _P0_92_PT_168_WIN4_3_ADR4_LSB                     0x1680
#define _P0_92_PT_168_WIN4_3_ADR4_MSB                     0x1681
#define _P0_92_PT_168_WIN4_3_ADR4_HSB                     0x1682
#define _P0_92_PT_16A_WIN4_4_ADR4_LSB                     0x16A0
#define _P0_92_PT_16A_WIN4_4_ADR4_MSB                     0x16A1
#define _P0_92_PT_16A_WIN4_4_ADR4_HSB                     0x16A2
#define _P0_92_PT_16C_WIN4_5_ADR4_LSB                     0x16C0
#define _P0_92_PT_16C_WIN4_5_ADR4_MSB                     0x16C1
#define _P0_92_PT_16C_WIN4_5_ADR4_HSB                     0x16C2
#define _P0_92_PT_16E_WIN4_6_ADR4_LSB                     0x16E0
#define _P0_92_PT_16E_WIN4_6_ADR4_MSB                     0x16E1
#define _P0_92_PT_16E_WIN4_6_ADR4_HSB                     0x16E2
#define _P0_92_PT_170_WIN4_7_ADR4_LSB                     0x1700
#define _P0_92_PT_170_WIN4_7_ADR4_MSB                     0x1701
#define _P0_92_PT_170_WIN4_7_ADR4_HSB                     0x1702
#define _P0_92_PT_172_WIN4_8_ADR4_LSB                     0x1720
#define _P0_92_PT_172_WIN4_8_ADR4_MSB                     0x1721
#define _P0_92_PT_172_WIN4_8_ADR4_HSB                     0x1722
#define _P0_92_PT_2A0_WIN5_1_ADR4_LSB                     0x2A00
#define _P0_92_PT_2A0_WIN5_1_ADR4_MSB                     0x2A01
#define _P0_92_PT_2A0_WIN5_1_ADR4_HSB                     0x2A02
#define _P0_92_PT_2AA_WIN5_2_ADR4_LSB                     0x2AA0
#define _P0_92_PT_2AA_WIN5_2_ADR4_MSB                     0x2AA1
#define _P0_92_PT_2AA_WIN5_2_ADR4_HSB                     0x2AA2
#define _P0_92_PT_2B4_WIN5_3_ADR4_LSB                     0x2B40
#define _P0_92_PT_2B4_WIN5_3_ADR4_MSB                     0x2B41
#define _P0_92_PT_2B4_WIN5_3_ADR4_HSB                     0x2B42
#define _P0_92_PT_2BE_WIN5_4_ADR4_LSB                     0x2BE0
#define _P0_92_PT_2BE_WIN5_4_ADR4_MSB                     0x2BE1
#define _P0_92_PT_2BE_WIN5_4_ADR4_HSB                     0x2BE2
#define _P0_92_PT_2C8_WIN5_5_ADR4_LSB                     0x2C80
#define _P0_92_PT_2C8_WIN5_5_ADR4_MSB                     0x2C81
#define _P0_92_PT_2C8_WIN5_5_ADR4_HSB                     0x2C82
#define _P0_92_PT_2D2_WIN5_6_ADR4_LSB                     0x2D20
#define _P0_92_PT_2D2_WIN5_6_ADR4_MSB                     0x2D21
#define _P0_92_PT_2D2_WIN5_6_ADR4_HSB                     0x2D22
#define _P0_92_PT_2DC_WIN5_7_ADR4_LSB                     0x2DC0
#define _P0_92_PT_2DC_WIN5_7_ADR4_MSB                     0x2DC1
#define _P0_92_PT_2DC_WIN5_7_ADR4_HSB                     0x2DC2
#define _P0_92_PT_2E6_WIN5_8_ADR4_LSB                     0x2E60
#define _P0_92_PT_2E6_WIN5_8_ADR4_MSB                     0x2E61
#define _P0_92_PT_2E6_WIN5_8_ADR4_HSB                     0x2E62
#define _P0_92_PT_161_WIN8_ADR5_LSB                       0x1610
#define _P0_92_PT_161_WIN8_ADR5_MSB                       0x1611
#define _P0_92_PT_161_WIN8_ADR5_HSB                       0x1612
#define _P0_92_PT_163_WIN9_ADR5_LSB                       0x1630
#define _P0_92_PT_163_WIN9_ADR5_MSB                       0x1631
#define _P0_92_PT_163_WIN9_ADR5_HSB                       0x1632
#define _P0_92_PT_174_WIN0_ADR6_LSB                       0x1740
#define _P0_92_PT_174_WIN0_ADR6_MSB                       0x1741
#define _P0_92_PT_174_WIN0_ADR6_HSB                       0x1742
#define _P0_92_PT_197_WIN5_ADR6_LSB                       0x1970
#define _P0_92_PT_197_WIN5_ADR6_MSB                       0x1971
#define _P0_92_PT_197_WIN5_ADR6_HSB                       0x1972
#define _P0_92_PT_19E_WIN6_ADR6_LSB                       0x19E0
#define _P0_92_PT_19E_WIN6_ADR6_MSB                       0x19E1
#define _P0_92_PT_19E_WIN6_ADR6_HSB                       0x19E2
#define _P0_92_PT_1A5_WIN7_ADR6_LSB                       0x1A50
#define _P0_92_PT_1A5_WIN7_ADR6_MSB                       0x1A51
#define _P0_92_PT_1A5_WIN7_ADR6_HSB                       0x1A52
#define _P0_92_PT_1AC_WIN8_ADR6_LSB                       0x1AC0
#define _P0_92_PT_1AC_WIN8_ADR6_MSB                       0x1AC1
#define _P0_92_PT_1AC_WIN8_ADR6_HSB                       0x1AC2
#define _P0_92_PT_1B3_WIN9_ADR6_LSB                       0x1B30
#define _P0_92_PT_1B3_WIN9_ADR6_MSB                       0x1B31
#define _P0_92_PT_1B3_WIN9_ADR6_HSB                       0x1B32
#define _P0_92_PT_183_WIN2_ADR7_LSB                       0x1830
#define _P0_92_PT_183_WIN2_ADR7_MSB                       0x1831
#define _P0_92_PT_183_WIN2_ADR7_HSB                       0x1832
#define _P0_92_PT_184_WIN2_ADR8_LSB                       0x1840
#define _P0_92_PT_184_WIN2_ADR8_MSB                       0x1841
#define _P0_92_PT_184_WIN2_ADR8_HSB                       0x1842
#define _P0_92_PT_18A_WIN3_ADR7_LSB                       0x18A0
#define _P0_92_PT_18A_WIN3_ADR7_MSB                       0x18A1
#define _P0_92_PT_18A_WIN3_ADR7_HSB                       0x18A2
#define _P0_92_PT_18B_WIN3_ADR8_LSB                       0x18B0
#define _P0_92_PT_18B_WIN3_ADR8_MSB                       0x18B1
#define _P0_92_PT_18B_WIN3_ADR8_HSB                       0x18B2
#define _P0_92_PT_191_WIN4_ADR7_LSB                       0x1910
#define _P0_92_PT_191_WIN4_ADR7_MSB                       0x1911
#define _P0_92_PT_191_WIN4_ADR7_HSB                       0x1912
#define _P0_92_PT_192_WIN4_ADR8_LSB                       0x1920
#define _P0_92_PT_192_WIN4_ADR8_MSB                       0x1921
#define _P0_92_PT_192_WIN4_ADR8_HSB                       0x1922
#define _P0_92_PT_176_WIN0_ADR8_LSB                       0x1760
#define _P0_92_PT_176_WIN0_ADR8_MSB                       0x1761
#define _P0_92_PT_176_WIN0_ADR8_HSB                       0x1762
#define _P0_92_PT_199_WIN5_ADR8_LSB                       0x1990
#define _P0_92_PT_199_WIN5_ADR8_MSB                       0x1991
#define _P0_92_PT_199_WIN5_ADR8_HSB                       0x1992
#define _P0_92_PT_1A0_WIN6_ADR8_LSB                       0x1A00
#define _P0_92_PT_1A0_WIN6_ADR8_MSB                       0x1A01
#define _P0_92_PT_1A0_WIN6_ADR8_HSB                       0x1A02
#define _P0_92_PT_1A7_WIN7_ADR8_LSB                       0x1A70
#define _P0_92_PT_1A7_WIN7_ADR8_MSB                       0x1A71
#define _P0_92_PT_1A7_WIN7_ADR8_HSB                       0x1A72
#define _P0_92_PT_1AE_WIN8_ADR8_LSB                       0x1AE0
#define _P0_92_PT_1AE_WIN8_ADR8_MSB                       0x1AE1
#define _P0_92_PT_1AE_WIN8_ADR8_HSB                       0x1AE2
#define _P0_92_PT_1B5_WIN9_ADR8_LSB                       0x1B50
#define _P0_92_PT_1B5_WIN9_ADR8_MSB                       0x1B51
#define _P0_92_PT_1B5_WIN9_ADR8_HSB                       0x1B52
#define _P0_92_PT_177_WIN0_ADR9_LSB                       0x1770
#define _P0_92_PT_177_WIN0_ADR9_MSB                       0x1771
#define _P0_92_PT_177_WIN0_ADR9_HSB                       0x1772
#define _P0_92_PT_17E_WIN1_ADR9_LSB                       0x17E0
#define _P0_92_PT_17E_WIN1_ADR9_MSB                       0x17E1
#define _P0_92_PT_17E_WIN1_ADR9_HSB                       0x17E2
#define _P0_92_PT_185_WIN2_ADR9_LSB                       0x1850
#define _P0_92_PT_185_WIN2_ADR9_MSB                       0x1851
#define _P0_92_PT_185_WIN2_ADR9_HSB                       0x1852
#define _P0_92_PT_18C_WIN3_ADR9_LSB                       0x18C0
#define _P0_92_PT_18C_WIN3_ADR9_MSB                       0x18C1
#define _P0_92_PT_18C_WIN3_ADR9_HSB                       0x18C2
#define _P0_92_PT_193_WIN4_ADR9_LSB                       0x1930
#define _P0_92_PT_193_WIN4_ADR9_MSB                       0x1931
#define _P0_92_PT_193_WIN4_ADR9_HSB                       0x1932
#define _P0_92_PT_19A_WIN5_ADR9_LSB                       0x19A0
#define _P0_92_PT_19A_WIN5_ADR9_MSB                       0x19A1
#define _P0_92_PT_19A_WIN5_ADR9_HSB                       0x19A2
#define _P0_92_PT_1A1_WIN6_ADR9_LSB                       0x1A10
#define _P0_92_PT_1A1_WIN6_ADR9_MSB                       0x1A11
#define _P0_92_PT_1A1_WIN6_ADR9_HSB                       0x1A12
#define _P0_92_PT_1A8_WIN7_ADR9_LSB                       0x1A80
#define _P0_92_PT_1A8_WIN7_ADR9_MSB                       0x1A81
#define _P0_92_PT_1A8_WIN7_ADR9_HSB                       0x1A82
#define _P0_92_PT_1AF_WIN8_ADR9_LSB                       0x1AF0
#define _P0_92_PT_1AF_WIN8_ADR9_MSB                       0x1AF1
#define _P0_92_PT_1AF_WIN8_ADR9_HSB                       0x1AF2
#define _P0_92_PT_1B6_WIN9_ADR9_LSB                       0x1B60
#define _P0_92_PT_1B6_WIN9_ADR9_MSB                       0x1B61
#define _P0_92_PT_1B6_WIN9_ADR9_HSB                       0x1B62
#define _P0_92_PT_1BD_WIN4_1_ADR9_LSB                     0x1BD0
#define _P0_92_PT_1BD_WIN4_1_ADR9_MSB                     0x1BD1
#define _P0_92_PT_1BD_WIN4_1_ADR9_HSB                     0x1BD2
#define _P0_92_PT_1C4_WIN4_2_ADR9_LSB                     0x1C40
#define _P0_92_PT_1C4_WIN4_2_ADR9_MSB                     0x1C41
#define _P0_92_PT_1C4_WIN4_2_ADR9_HSB                     0x1C42
#define _P0_92_PT_1CB_WIN4_3_ADR9_LSB                     0x1CB0
#define _P0_92_PT_1CB_WIN4_3_ADR9_MSB                     0x1CB1
#define _P0_92_PT_1CB_WIN4_3_ADR9_HSB                     0x1CB2
#define _P0_92_PT_1D2_WIN4_4_ADR9_LSB                     0x1D20
#define _P0_92_PT_1D2_WIN4_4_ADR9_MSB                     0x1D21
#define _P0_92_PT_1D2_WIN4_4_ADR9_HSB                     0x1D22
#define _P0_92_PT_1D9_WIN4_5_ADR9_LSB                     0x1D90
#define _P0_92_PT_1D9_WIN4_5_ADR9_MSB                     0x1D91
#define _P0_92_PT_1D9_WIN4_5_ADR9_HSB                     0x1D92
#define _P0_92_PT_1E0_WIN4_6_ADR9_LSB                     0x1E00
#define _P0_92_PT_1E0_WIN4_6_ADR9_MSB                     0x1E01
#define _P0_92_PT_1E0_WIN4_6_ADR9_HSB                     0x1E02
#define _P0_92_PT_1E7_WIN4_7_ADR9_LSB                     0x1E70
#define _P0_92_PT_1E7_WIN4_7_ADR9_MSB                     0x1E71
#define _P0_92_PT_1E7_WIN4_7_ADR9_HSB                     0x1E72
#define _P0_92_PT_1EE_WIN4_8_ADR9_LSB                     0x1EE0
#define _P0_92_PT_1EE_WIN4_8_ADR9_MSB                     0x1EE1
#define _P0_92_PT_1EE_WIN4_8_ADR9_HSB                     0x1EE2
#define _P0_92_PT_2A5_WIN5_1_ADR9_LSB                     0x2A50
#define _P0_92_PT_2A5_WIN5_1_ADR9_MSB                     0x2A51
#define _P0_92_PT_2A5_WIN5_1_ADR9_HSB                     0x2A52
#define _P0_92_PT_2AF_WIN5_2_ADR9_LSB                     0x2AF0
#define _P0_92_PT_2AF_WIN5_2_ADR9_MSB                     0x2AF1
#define _P0_92_PT_2AF_WIN5_2_ADR9_HSB                     0x2AF2
#define _P0_92_PT_2B9_WIN5_3_ADR9_LSB                     0x2B90
#define _P0_92_PT_2B9_WIN5_3_ADR9_MSB                     0x2B91
#define _P0_92_PT_2B9_WIN5_3_ADR9_HSB                     0x2B92
#define _P0_92_PT_2C3_WIN5_4_ADR9_LSB                     0x2C30
#define _P0_92_PT_2C3_WIN5_4_ADR9_MSB                     0x2C31
#define _P0_92_PT_2C3_WIN5_4_ADR9_HSB                     0x2C32
#define _P0_92_PT_2CD_WIN5_5_ADR9_LSB                     0x2CD0
#define _P0_92_PT_2CD_WIN5_5_ADR9_MSB                     0x2CD1
#define _P0_92_PT_2CD_WIN5_5_ADR9_HSB                     0x2CD2
#define _P0_92_PT_2D7_WIN5_6_ADR9_LSB                     0x2D70
#define _P0_92_PT_2D7_WIN5_6_ADR9_MSB                     0x2D71
#define _P0_92_PT_2D7_WIN5_6_ADR9_HSB                     0x2D72
#define _P0_92_PT_2E1_WIN5_7_ADR9_LSB                     0x2E10
#define _P0_92_PT_2E1_WIN5_7_ADR9_MSB                     0x2E11
#define _P0_92_PT_2E1_WIN5_7_ADR9_HSB                     0x2E12
#define _P0_92_PT_2EB_WIN5_8_ADR9_LSB                     0x2EB0
#define _P0_92_PT_2EB_WIN5_8_ADR9_MSB                     0x2EB1
#define _P0_92_PT_2EB_WIN5_8_ADR9_HSB                     0x2EB2
#define _P0_92_PT_178_WIN0_ADR10_LSB                      0x1780
#define _P0_92_PT_178_WIN0_ADR10_MSB                      0x1781
#define _P0_92_PT_178_WIN0_ADR10_HSB                      0x1782
#define _P0_92_PT_19B_WIN5_ADR10_LSB                      0x19B0
#define _P0_92_PT_19B_WIN5_ADR10_MSB                      0x19B1
#define _P0_92_PT_19B_WIN5_ADR10_HSB                      0x19B2
#define _P0_92_PT_1BE_WIN4_1_ADR10_LSB                    0x1BE0
#define _P0_92_PT_1BE_WIN4_1_ADR10_MSB                    0x1BE1
#define _P0_92_PT_1BE_WIN4_1_ADR10_HSB                    0x1BE2
#define _P0_92_PT_1C5_WIN4_2_ADR10_LSB                    0x1C50
#define _P0_92_PT_1C5_WIN4_2_ADR10_MSB                    0x1C51
#define _P0_92_PT_1C5_WIN4_2_ADR10_HSB                    0x1C52
#define _P0_92_PT_1CC_WIN4_3_ADR10_LSB                    0x1CC0
#define _P0_92_PT_1CC_WIN4_3_ADR10_MSB                    0x1CC1
#define _P0_92_PT_1CC_WIN4_3_ADR10_HSB                    0x1CC2
#define _P0_92_PT_1D3_WIN4_4_ADR10_LSB                    0x1D30
#define _P0_92_PT_1D3_WIN4_4_ADR10_MSB                    0x1D31
#define _P0_92_PT_1D3_WIN4_4_ADR10_HSB                    0x1D32
#define _P0_92_PT_1DA_WIN4_5_ADR10_LSB                    0x1DA0
#define _P0_92_PT_1DA_WIN4_5_ADR10_MSB                    0x1DA1
#define _P0_92_PT_1DA_WIN4_5_ADR10_HSB                    0x1DA2
#define _P0_92_PT_1E1_WIN4_6_ADR10_LSB                    0x1E10
#define _P0_92_PT_1E1_WIN4_6_ADR10_MSB                    0x1E11
#define _P0_92_PT_1E1_WIN4_6_ADR10_HSB                    0x1E12
#define _P0_92_PT_1E8_WIN4_7_ADR10_LSB                    0x1E80
#define _P0_92_PT_1E8_WIN4_7_ADR10_MSB                    0x1E81
#define _P0_92_PT_1E8_WIN4_7_ADR10_HSB                    0x1E82
#define _P0_92_PT_1EF_WIN4_8_ADR10_LSB                    0x1EF0
#define _P0_92_PT_1EF_WIN4_8_ADR10_MSB                    0x1EF1
#define _P0_92_PT_1EF_WIN4_8_ADR10_HSB                    0x1EF2
#define _P0_92_PT_2A6_WIN5_1_ADR10_LSB                    0x2A60
#define _P0_92_PT_2A6_WIN5_1_ADR10_MSB                    0x2A61
#define _P0_92_PT_2A6_WIN5_1_ADR10_HSB                    0x2A62
#define _P0_92_PT_2B0_WIN5_2_ADR10_LSB                    0x2B00
#define _P0_92_PT_2B0_WIN5_2_ADR10_MSB                    0x2B01
#define _P0_92_PT_2B0_WIN5_2_ADR10_HSB                    0x2B02
#define _P0_92_PT_2BA_WIN5_3_ADR10_LSB                    0x2BA0
#define _P0_92_PT_2BA_WIN5_3_ADR10_MSB                    0x2BA1
#define _P0_92_PT_2BA_WIN5_3_ADR10_HSB                    0x2BA2
#define _P0_92_PT_2C4_WIN5_4_ADR10_LSB                    0x2C40
#define _P0_92_PT_2C4_WIN5_4_ADR10_MSB                    0x2C41
#define _P0_92_PT_2C4_WIN5_4_ADR10_HSB                    0x2C42
#define _P0_92_PT_2CE_WIN5_5_ADR10_LSB                    0x2CE0
#define _P0_92_PT_2CE_WIN5_5_ADR10_MSB                    0x2CE1
#define _P0_92_PT_2CE_WIN5_5_ADR10_HSB                    0x2CE2
#define _P0_92_PT_2D8_WIN5_6_ADR10_LSB                    0x2D80
#define _P0_92_PT_2D8_WIN5_6_ADR10_MSB                    0x2D81
#define _P0_92_PT_2D8_WIN5_6_ADR10_HSB                    0x2D82
#define _P0_92_PT_2E2_WIN5_7_ADR10_LSB                    0x2E20
#define _P0_92_PT_2E2_WIN5_7_ADR10_MSB                    0x2E21
#define _P0_92_PT_2E2_WIN5_7_ADR10_HSB                    0x2E22
#define _P0_92_PT_2EC_WIN5_8_ADR10_LSB                    0x2EC0
#define _P0_92_PT_2EC_WIN5_8_ADR10_MSB                    0x2EC1
#define _P0_92_PT_2EC_WIN5_8_ADR10_HSB                    0x2EC2


//--------------------------------------------------
// Digital Filter (Page 0)
//--------------------------------------------------
#define _P0_99_PT_01_DIGITAL_PHASE_CTRL                   0x01
#define _P0_99_PT_02_DIGITAL_NEGATIVE_SMEAR_CTRL          0x02
#define _P0_99_PT_03_DIGITAL_POSITIVE_SMEAR_CTRL          0x03
#define _P0_99_PT_04_DIGITAL_NEGATIVE_RINGING_CTRL        0x04
#define _P0_99_PT_05_DIGITAL_POSITIVE_RINGING_CTRL        0x05
#define _P0_99_PT_06_DIGITAL_MISMATCH_CTRL                0x06
#define _P0_99_PT_07_DIGITAL_COLOR_CTRL                   0x07
#define _P0_99_PT_08_DIGITAL_NOISE_CTRL                   0x08
#define _P0_99_PT_09_DIGITAL_OLD_PHASE_THD                0x09
#define _P0_99_PT_01_DIGITAL_NEW_PHASE_CTRL               0x01
#define _P0_99_PT_02_DIGITAL_NEW_PHASE_THD1_R             0x02
#define _P0_99_PT_03_DIGITAL_NEW_PHASE_THD_OFF_R          0x03
#define _P0_99_PT_04_DIGITAL_NEW_PHASE_GAIN_R             0x04
#define _P0_99_PT_05_DIGITAL_NEW_PHASE_THD1_G             0x05
#define _P0_99_PT_06_DIGITAL_NEW_PHASE_THD_OFF_G          0x06
#define _P0_99_PT_07_DIGITAL_NEW_PHASE_GAIN_G             0x07
#define _P0_99_PT_08_DIGITAL_NEW_PHASE_THD1_B             0x08
#define _P0_99_PT_09_DIGITAL_NEW_PHASE_THD_OFF_B          0x09
#define _P0_99_PT_0A_DIGITAL_NEW_PHASE_GAIN_B             0x0A


//--------------------------------------------------
// Color Conversion 每 RGBtoYCC before IDLTI 12bit In / 12bit Out (Page 0)
//--------------------------------------------------
#define _P0_9D_PT_00_H00_HIGH_BYTE                        0x00
#define _P0_9D_PT_01_H00_MIDDLE_BYTE                      0x01
#define _P0_9D_PT_02_H01_HIGH_BYTE                        0x02
#define _P0_9D_PT_03_H01_MIDDLE_BYTE                      0x03
#define _P0_9D_PT_04_H02_HIGH_BYTE                        0x04
#define _P0_9D_PT_05_H02_MIDDLE_BYTE                      0x05
#define _P0_9D_PT_06_H10_HIGH_BYTE                        0x06
#define _P0_9D_PT_07_H10_MIDDLE_BYTE                      0x07
#define _P0_9D_PT_08_H11_HIGH_BYTE                        0x08
#define _P0_9D_PT_09_H11_MIDDLE_BYTE                      0x09
#define _P0_9D_PT_0A_H12_HIGH_BYTE                        0x0A
#define _P0_9D_PT_0B_H12_MIDDLE_BYTE                      0x0B
#define _P0_9D_PT_0C_H20_HIGH_BYTE                        0x0C
#define _P0_9D_PT_0D_H20_MIDDLE_BYTE                      0x0D
#define _P0_9D_PT_0E_H21_HIGH_BYTE                        0x0E
#define _P0_9D_PT_0F_H21_MIDDLE_BYTE                      0x0F
#define _P0_9D_PT_10_H22_HIGH_BYTE                        0x10
#define _P0_9D_PT_11_H22_MIDDLE_BYTE                      0x11
#define _P0_9D_PT_12_H00_H01_LOW_BYTE                     0x12
#define _P0_9D_PT_13_H02_H10_LOW_BYTE                     0x13
#define _P0_9D_PT_14_H11_H12_LOW_BYTE                     0x14
#define _P0_9D_PT_15_H20_H21_LOW_BYTE                     0x15
#define _P0_9D_PT_16_H22_LOW_BYTE                         0x16


//--------------------------------------------------
// HDMI2.0 Function (Page 2)
//--------------------------------------------------
#define _P2_3A_PT_01_PORT_PAGE2_HDMI_SCDC_01              0x01
#define _P2_3A_PT_02_PORT_PAGE2_HDMI_SCDC_02              0x02
#define _P2_3A_PT_10_PORT_PAGE2_HDMI_SCDC_10              0x10
#define _P2_3A_PT_11_PORT_PAGE2_HDMI_SCDC_11              0x11
#define _P2_3A_PT_20_PORT_PAGE2_HDMI_SCDC_20              0x20
#define _P2_3A_PT_21_PORT_PAGE2_HDMI_SCDC_21              0x21
#define _P2_3A_PT_30_PORT_PAGE2_HDMI_SCDC_30              0x30
#define _P2_3A_PT_40_PORT_PAGE2_HDMI_SCDC_40              0x40
#define _P2_3A_PT_41_PORT_PAGE2_HDMI_SCDC_41              0x41
#define _P2_3A_PT_50_PORT_PAGE2_HDMI_SCDC_50              0x50
#define _P2_3A_PT_51_PORT_PAGE2_HDMI_SCDC_51              0x51
#define _P2_3A_PT_52_PORT_PAGE2_HDMI_SCDC_52              0x52
#define _P2_3A_PT_53_PORT_PAGE2_HDMI_SCDC_53              0x53
#define _P2_3A_PT_54_PORT_PAGE2_HDMI_SCDC_54              0x54
#define _P2_3A_PT_55_PORT_PAGE2_HDMI_SCDC_55              0x55
#define _P2_3A_PT_56_PORT_PAGE2_HDMI_SCDC_56              0x56
#define _P2_3A_PT_C0_PORT_PAGE2_HDMI_SCDC_C0              0xC0
#define _P2_3A_PT_D0_PORT_PAGE2_HDMI_SCDC_D0              0xD0
#define _P2_3A_PT_D1_PORT_PAGE2_HDMI_SCDC_D1              0xD1
#define _P2_3A_PT_D2_PORT_PAGE2_HDMI_SCDC_D2              0xD2
#define _P2_3A_PT_D3_PORT_PAGE2_HDMI_SCDC_D3              0xD3
#define _P2_3A_PT_D4_PORT_PAGE2_HDMI_SCDC_D4              0xD4
#define _P2_3A_PT_D5_PORT_PAGE2_HDMI_SCDC_D5              0xD5
#define _P2_3A_PT_D6_PORT_PAGE2_HDMI_SCDC_D6              0xD6
#define _P2_3A_PT_D7_PORT_PAGE2_HDMI_SCDC_D7              0xD7
#define _P2_3A_PT_D8_PORT_PAGE2_HDMI_SCDC_D8              0xD8
#define _P2_3A_PT_D9_PORT_PAGE2_HDMI_SCDC_D9              0xD9
#define _P2_3A_PT_DA_PORT_PAGE2_HDMI_SCDC_DA              0xDA
#define _P2_3A_PT_DB_PORT_PAGE2_HDMI_SCDC_DB              0xDB
#define _P2_3A_PT_DC_PORT_PAGE2_HDMI_SCDC_DC              0xDC
#define _P2_3A_PT_DD_PORT_PAGE2_HDMI_SCDC_DD              0xDD
#define _P2_3A_PT_DE_PORT_PAGE2_HDMI_SCDC_DE              0xDE
#define _P2_3A_PT_DF_PORT_PAGE2_HDMI_SCDC_DF              0xDF
#define _P2_3A_PT_E0_PORT_PAGE2_HDMI_SCDC_E0              0xE0
#define _P2_3A_PT_E1_PORT_PAGE2_HDMI_SCDC_E1              0xE1
#define _P2_3A_PT_E2_PORT_PAGE2_HDMI_SCDC_E2              0xE2
#define _P2_3A_PT_E3_PORT_PAGE2_HDMI_SCDC_E3              0xE3
#define _P2_3A_PT_E4_PORT_PAGE2_HDMI_SCDC_E4              0xE4
#define _P2_3A_PT_E5_PORT_PAGE2_HDMI_SCDC_E5              0xE5
#define _P2_3A_PT_E6_PORT_PAGE2_HDMI_SCDC_E6              0xE6
#define _P2_3A_PT_E7_PORT_PAGE2_HDMI_SCDC_E7              0xE7
#define _P2_3A_PT_E8_PORT_PAGE2_HDMI_SCDC_E8              0xE8
#define _P2_3A_PT_E9_PORT_PAGE2_HDMI_SCDC_E9              0xE9
#define _P2_3A_PT_EA_PORT_PAGE2_HDMI_SCDC_EA              0xEA
#define _P2_3A_PT_EB_PORT_PAGE2_HDMI_SCDC_EB              0xEB
#define _P2_3A_PT_EC_PORT_PAGE2_HDMI_SCDC_EC              0xEC
#define _P2_3A_PT_ED_PORT_PAGE2_HDMI_SCDC_ED              0xED
#define _P2_3A_PT_EE_PORT_PAGE2_HDMI_SCDC_EE              0xEE
#define _P2_3A_PT_EF_PORT_PAGE2_HDMI_SCDC_EF              0xEF
#define _P2_3A_PT_F0_PORT_PAGE2_HDMI_SCDC_F0              0xF0
#define _P2_3A_PT_F1_PORT_PAGE2_HDMI_SCDC_F1              0xF1
#define _P2_3A_PT_F2_PORT_PAGE2_HDMI_SCDC_F2              0xF2
#define _P2_3A_PT_F3_PORT_PAGE2_HDMI_SCDC_F3              0xF3
#define _P2_3A_PT_F4_PORT_PAGE2_HDMI_SCDC_F4              0xF4
#define _P2_3A_PT_F5_PORT_PAGE2_HDMI_SCDC_F5              0xF5
#define _P2_3A_PT_F6_PORT_PAGE2_HDMI_SCDC_F6              0xF6
#define _P2_3A_PT_F7_PORT_PAGE2_HDMI_SCDC_F7              0xF7
#define _P2_3A_PT_F8_PORT_PAGE2_HDMI_SCDC_F8              0xF8
#define _P2_3A_PT_F9_PORT_PAGE2_HDMI_SCDC_F9              0xF9
#define _P2_3A_PT_FA_PORT_PAGE2_HDMI_SCDC_FA              0xFA
#define _P2_3A_PT_FB_PORT_PAGE2_HDMI_SCDC_FB              0xFB
#define _P2_3A_PT_FC_PORT_PAGE2_HDMI_SCDC_FC              0xFC
#define _P2_3A_PT_FD_PORT_PAGE2_HDMI_SCDC_FD              0xFD
#define _P2_3A_PT_FE_PORT_PAGE2_HDMI_SCDC_FE              0xFE
#define _P2_3A_PT_FF_PORT_PAGE2_HDMI_SCDC_FF              0xFF
#define _P2_C4_PT_00_PORT_PAGE2_BKSV0                     0x00
#define _P2_C4_PT_01_PORT_PAGE2_BKSV1                     0x01
#define _P2_C4_PT_02_PORT_PAGE2_BKSV2                     0x02
#define _P2_C4_PT_03_PORT_PAGE2_BKSV3                     0x03
#define _P2_C4_PT_04_PORT_PAGE2_BKSV4                     0x04
#define _P2_C4_PT_08_PORT_PAGE2_RI0                       0x08
#define _P2_C4_PT_09_PORT_PAGE2_RI1                       0x09
#define _P2_C4_PT_0A_PORT_PAGE2_PJ                        0x0A
#define _P2_C4_PT_10_PORT_PAGE2_AKSV0                     0x10
#define _P2_C4_PT_11_PORT_PAGE2_AKSV1                     0x11
#define _P2_C4_PT_12_PORT_PAGE2_AKSV2                     0x12
#define _P2_C4_PT_13_PORT_PAGE2_AKSV3                     0x13
#define _P2_C4_PT_14_PORT_PAGE2_AKSV4                     0x14
#define _P2_C4_PT_15_PORT_PAGE2_AINFO                     0x15
#define _P2_C4_PT_18_PORT_PAGE2_AN0                       0x18
#define _P2_C4_PT_19_PORT_PAGE2_AN1                       0x19
#define _P2_C4_PT_1A_PORT_PAGE2_AN2                       0x1A
#define _P2_C4_PT_1B_PORT_PAGE2_AN3                       0x1B
#define _P2_C4_PT_1C_PORT_PAGE2_AN4                       0x1C
#define _P2_C4_PT_1D_PORT_PAGE2_AN5                       0x1D
#define _P2_C4_PT_1E_PORT_PAGE2_AN6                       0x1E
#define _P2_C4_PT_1F_PORT_PAGE2_AN7                       0x1F
#define _P2_C4_PT_40_PORT_PAGE2_BCAPS                     0x40
#define _P2_C4_PT_41_PORT_PAGE2_BSTATUS                   0x41
#define _P2_C4_PT_43_PORT_PAGE2_KSV_FIFO                  0x43
#define _P2_C4_PT_C0_PORT_PAGE2_HDCP_FCR                  0xC0
#define _P2_C4_PT_C1_PORT_PAGE2_HDCP_SIR                  0xC1
#define _P2_C4_PT_C2_PORT_PAGE2_HDCP_SLAVE_ADD            0xC2
#define _P2_CA_PT_00_PORT_PAGE2_HDMI_SCR                  0x00
#define _P2_CA_PT_01_PORT_PAGE2_HDMI_N_VAL                0x01
#define _P2_CA_PT_02_PORT_PAGE2_HDMI_BCHCR                0x02
#define _P2_CA_PT_03_PORT_PAGE2_HDMI_AFCR                 0x03
#define _P2_CA_PT_04_PORT_PAGE2_HDMI_AFSR                 0x04
#define _P2_CA_PT_05_PORT_PAGE2_HDMI_MAGCR1               0x05
#define _P2_CA_PT_06_PORT_PAGE2_HDMI_MAGCR2               0x06
#define _P2_CA_PT_07_PORT_PAGE2_HDMI_MAG_M_FINAL          0x07
#define _P2_CA_PT_08_PORT_PAGE2_HDMI_MAG_L_FINAL          0x08
#define _P2_CA_PT_09_PORT_PAGE2_HDMI_MAG_R_FINAL          0x09
#define _P2_CA_PT_0A_PORT_PAGE2_AUDIO_LD_P_TIME_M         0x0A
#define _P2_CA_PT_0B_PORT_PAGE2_AUDIO_LD_P_TIME_N         0x0B
#define _P2_CA_PT_0C_PORT_PAGE2_ZCD_CTRL                  0x0C
#define _P2_CA_PT_0D_PORT_PAGE2_ZCD_TIMEOUT               0x0D
#define _P2_CA_PT_0E_PORT_PAGE2_ZCD_STATUS                0x0E
#define _P2_CA_PT_10_PORT_PAGE2_HDMI_CMCR                 0x10
#define _P2_CA_PT_11_PORT_PAGE2_HDMI_MCAPR                0x11
#define _P2_CA_PT_12_PORT_PAGE2_HDMI_SCAPR                0x12
#define _P2_CA_PT_13_PORT_PAGE2_HDMI_DCAPR0               0x13
#define _P2_CA_PT_14_PORT_PAGE2_HDMI_DCAPR1               0x14
#define _P2_CA_PT_15_PORT_PAGE2_HDMI_PSCR                 0x15
#define _P2_CA_PT_16_PORT_PAGE2_HDMI_FDDR                 0x16
#define _P2_CA_PT_17_PORT_PAGE2_HDMI_FDDF                 0x17
#define _P2_CA_PT_18_PORT_PAGE2_HDMI_MFDDR                0x18
#define _P2_CA_PT_19_PORT_PAGE2_HDMI_MFDDF                0x19
#define _P2_CA_PT_1A_PORT_PAGE2_HDMI_FTR                  0x1A
#define _P2_CA_PT_1B_PORT_PAGE2_HDMI_FBR                  0x1B
#define _P2_CA_PT_1C_PORT_PAGE2_HDMI_ICPSNCR0             0x1C
#define _P2_CA_PT_1D_PORT_PAGE2_HDMI_ICPSNCR1             0x1D
#define _P2_CA_PT_1E_PORT_PAGE2_HDMI_PCPSNCR0             0x1E
#define _P2_CA_PT_1F_PORT_PAGE2_HDMI_PCPSNCR1             0x1F
#define _P2_CA_PT_20_PORT_PAGE2_HDMI_ICTPSR0              0x20
#define _P2_CA_PT_21_PORT_PAGE2_HDMI_ICTPSR1              0x21
#define _P2_CA_PT_22_PORT_PAGE2_HDMI_PCTPSR0              0x22
#define _P2_CA_PT_23_PORT_PAGE2_HDMI_PCTPSR1              0x23
#define _P2_CA_PT_24_PORT_PAGE2_HDMI_ICBPSR0              0x24
#define _P2_CA_PT_25_PORT_PAGE2_HDMI_ICBPSR1              0x25
#define _P2_CA_PT_26_PORT_PAGE2_HDMI_PCBPSR0              0x26
#define _P2_CA_PT_27_PORT_PAGE2_HDMI_PCBPSR1              0x27
#define _P2_CA_PT_28_PORT_PAGE2_HDMI_NTX1024TR0           0x28
#define _P2_CA_PT_29_PORT_PAGE2_HDMI_NTX1024TR1           0x29
#define _P2_CA_PT_2A_PORT_PAGE2_HDMI_STBPR                0x2A
#define _P2_CA_PT_2B_PORT_PAGE2_HDMI_NCPER                0x2B
#define _P2_CA_PT_2C_PORT_PAGE2_HDMI_PETR                 0x2C
#define _P2_CA_PT_2D_PORT_PAGE2_HDMI_AAPNR                0x2D
#define _P2_CA_PT_2E_PORT_PAGE2_HDMI_APDMCR               0x2E
#define _P2_CA_PT_30_PORT_PAGE2_HDMI_AVMCR                0x30
#define _P2_CA_PT_31_PORT_PAGE2_HDMI_WDCR0                0x31
#define _P2_CA_PT_32_PORT_PAGE2_HDMI_WDCR1                0x32
#define _P2_CA_PT_33_PORT_PAGE2_HDMI_WDCR2                0x33
#define _P2_CA_PT_34_PORT_PAGE2_HDMI_DBCR                 0x34
#define _P2_CA_PT_35_PORT_PAGE2_HDMI_APTMCR0              0x35
#define _P2_CA_PT_36_PORT_PAGE2_HDMI_APTMCR1              0x36
#define _P2_CA_PT_38_PORT_PAGE2_HDMI_DPCR0                0x38
#define _P2_CA_PT_39_PORT_PAGE2_HDMI_DPCR1                0x39
#define _P2_CA_PT_3A_PORT_PAGE2_HDMI_DPCR2                0x3A
#define _P2_CA_PT_3B_PORT_PAGE2_HDMI_DPCR3                0x3B
#define _P2_CA_PT_3C_PORT_PAGE2_HDMI_SUMCM                0x3C
#define _P2_CA_PT_3D_PORT_PAGE2_HDMI_SUMCL                0x3D
#define _P2_CA_PT_3E_PORT_PAGE2_DPLL_M_N_MSB              0x3E
#define _P2_CA_PT_3F_PORT_PAGE2_DPLL_LDO                  0x3F
#define _P2_CA_PT_40_PORT_PAGE2_HDMI_AWDSR                0x40
#define _P2_CA_PT_41_PORT_PAGE2_HDMI_VWDSR                0x41
#define _P2_CA_PT_42_PORT_PAGE2_HDMI_PAMICR               0x42
#define _P2_CA_PT_43_PORT_PAGE2_HDMI_PTRSV0               0x43
#define _P2_CA_PT_44_PORT_PAGE2_HDMI_PTRSV1               0x44
#define _P2_CA_PT_45_PORT_PAGE2_HDMI_PVGCR0               0x45
#define _P2_CA_PT_46_PORT_PAGE2_HDMI_PVGCR1               0x46
#define _P2_CA_PT_47_PORT_PAGE2_HDMI_PVGCR2               0x47
#define _P2_CA_PT_48_PORT_PAGE2_HDMI_PVSR0                0x48
#define _P2_CA_PT_49_PORT_PAGE2_HDMI_PVSR1                0x49
#define _P2_CA_PT_4A_PORT_PAGE2_HDMI_PVSR2                0x4A
#define _P2_CA_PT_50_PORT_PAGE2_HDMI_VCR                  0x50
#define _P2_CA_PT_51_PORT_PAGE2_HDMI_ACRCR                0x51
#define _P2_CA_PT_52_PORT_PAGE2_HDMI_ACRSR0               0x52
#define _P2_CA_PT_53_PORT_PAGE2_HDMI_ACRSR1               0x53
#define _P2_CA_PT_54_PORT_PAGE2_HDMI_ACRSR2               0x54
#define _P2_CA_PT_55_PORT_PAGE2_HDMI_ACRSR3               0x55
#define _P2_CA_PT_56_PORT_PAGE2_HDMI_ACRSR4               0x56
#define _P2_CA_PT_57_PORT_PAGE2_HDMI_ACS0                 0x57
#define _P2_CA_PT_58_PORT_PAGE2_HDMI_ACS1                 0x58
#define _P2_CA_PT_59_PORT_PAGE2_HDMI_ACS2                 0x59
#define _P2_CA_PT_5A_PORT_PAGE2_HDMI_ACS3                 0x5A
#define _P2_CA_PT_5B_PORT_PAGE2_HDMI_ACS4                 0x5B
#define _P2_CA_PT_60_PORT_PAGE2_HDMI_INTCR                0x60
#define _P2_CA_PT_61_PORT_PAGE2_HDMI_ALCR                 0x61
#define _P2_CA_PT_62_PORT_PAGE2_HDMI_AOCR                 0x62
#define _P2_CA_PT_70_PORT_PAGE2_HDMI_BCSR                 0x70
#define _P2_CA_PT_71_PORT_PAGE2_HDMI_ASR0                 0x71
#define _P2_CA_PT_72_PORT_PAGE2_HDMI_ASR1                 0x72
#define _P2_CA_PT_80_PORT_PAGE2_HDMI_DPC_SET0             0x80
#define _P2_CA_PT_81_PORT_PAGE2_HDMI_DPC_SET1             0x81
#define _P2_CA_PT_82_PORT_PAGE2_HDMI_DPC_SET2             0x82
#define _P2_CA_PT_83_PORT_PAGE2_HDMI_DPC_SET3             0x83
#define _P2_CA_PT_84_PORT_PAGE2_HDMI_DET_0                0x84
#define _P2_CA_PT_85_PORT_PAGE2_HDMI_DET_1                0x85
#define _P2_CA_PT_86_PORT_PAGE2_HDMI_DET_2                0x86
#define _P2_CA_PT_87_PORT_PAGE2_HDMI_DET_3                0x87
#define _P2_CA_PT_88_PORT_PAGE2_HDMI_DET_4                0x88
#define _P2_CA_PT_8A_PORT_PAGE2_AUDIO_FREQDET             0x8A
#define _P2_CA_PT_8B_PORT_PAGE2_AUDIO_FREQ_RESULT         0x8B
#define _P2_CA_PT_8C_PORT_PAGE2_AUDIO_FREQ_RESULT_M       0x8C
#define _P2_CA_PT_8D_PORT_PAGE2_AUDIO_FREQ_RESULT_L       0x8D
#define _P2_CA_PT_8E_PORT_PAGE2_XTAL_DIV                  0x8E
#define _P2_CA_PT_8F_PORT_PAGE2_TH0                       0x8F
#define _P2_CA_PT_90_PORT_PAGE2_TH1                       0x90
#define _P2_CA_PT_91_PORT_PAGE2_TH2                       0x91
#define _P2_CA_PT_92_PORT_PAGE2_TH3                       0x92
#define _P2_CA_PT_93_PORT_PAGE2_TH4                       0x93
#define _P2_CA_PT_94_PORT_PAGE2_TH5                       0x94
#define _P2_CA_PT_95_PORT_PAGE2_PRESET_S_CODE0            0x95
#define _P2_CA_PT_96_PORT_PAGE2_PRESET_S_CODE1            0x96
#define _P2_CA_PT_97_PORT_PAGE2_PRESET_S_CODE2            0x97
#define _P2_CA_PT_98_PORT_PAGE2_PRESET_S2_CODE            0x98
#define _P2_CA_PT_99_PORT_PAGE2_PRESET_D_CODE_0           0x99
#define _P2_CA_PT_9A_PORT_PAGE2_PRESET_D_CODE_1           0x9A
#define _P2_CA_PT_9B_PORT_PAGE2_PRESET_D_CODE_2           0x9B
#define _P2_CA_PT_9C_PORT_PAGE2_PRESET_D_CODE_3           0x9C
#define _P2_CA_PT_9D_PORT_PAGE2_PRESET_D_CODE_4           0x9D
#define _P2_CA_PT_9E_PORT_PAGE2_PRESET_D_CODE_5           0x9E
#define _P2_CA_PT_9F_PORT_PAGE2_PRESET_AFSM_MOD           0x9F
#define _P2_CA_PT_A4_PORT_PAGE2_HDMI_PTRSV_2              0xA4
#define _P2_CA_PT_A5_PORT_PAGE2_HDMI_PTRSV_3              0xA5
#define _P2_CA_PT_A6_PORT_PAGE2_HDMI_PARSV                0xA6
#define _P2_CA_PT_A7_PORT_PAGE2_HDMI_GPVS_0               0xA7
#define _P2_CA_PT_A8_PORT_PAGE2_HDMI_PVSR_3               0xA8
#define _P2_CA_PT_A9_PORT_PAGE2_HDMI_PVSR_4               0xA9
#define _P2_CA_PT_AA_PORT_PAGE2_HDMI_PVGCR3               0xAA
#define _P2_CA_PT_AB_PORT_PAGE2_HDMI_PVGCR4               0xAB
#define _P2_CA_PT_AE_PORT_PAGE2_HDMI_GDI_TEST_FUNC        0xAE
#define _P2_CA_PT_AF_PORT_PAGE2_HDMI_BED_FUNC_0           0xAF
#define _P2_CA_PT_B0_PORT_PAGE2_HDMI_BED_FUNC_1           0xB0
#define _P2_CA_PT_B1_PORT_PAGE2_HDMI_BED_FUNC_2           0xB1
#define _P2_CA_PT_B2_PORT_PAGE2_HDMI_BED_FUNC_3           0xB2
#define _P2_CA_PT_B3_PORT_PAGE2_HDMI_BED_FUNC_4           0xB3
#define _P2_CA_PT_B4_PORT_PAGE2_HDMI_BED_FUNC_5           0xB4
#define _P2_CA_PT_B5_PORT_PAGE2_HDMI_BED_FUNC_6           0xB5
#define _P2_CA_PT_B6_PORT_PAGE2_HDMI_BED_FUNC_7           0xB6
#define _P2_CA_PT_B7_PORT_PAGE2_HDMI_BED_FUNC_8           0xB7
#define _P2_CA_PT_B8_PORT_PAGE2_HDMI_BED_FUNC_9           0xB8


//--------------------------------------------------
// DCC (Page 7)
//--------------------------------------------------
#define _P7_CA_PT_00_PORT_PAGE0_NOR_FACTOR_H              0x00
#define _P7_CA_PT_01_PORT_PAGE0_NOR_FACTOR_M              0x01
#define _P7_CA_PT_02_PORT_PAGE0_NOR_FACTOR_L              0x02
#define _P7_CA_PT_03_PORT_PAGE0_BBE_CTRL                  0x03
#define _P7_CA_PT_04_PORT_PAGE0_NFLT_CTRL                 0x04
#define _P7_CA_PT_05_PORT_PAGE0_HIST_CTRL                 0x05
#define _P7_CA_PT_06_PORT_PAGE0_SOFT_CLAMP                0x06
#define _P7_CA_PT_07_PORT_PAGE0_Y_MAX_LB_H                0x07
#define _P7_CA_PT_08_PORT_PAGE0_Y_MIN_HB_H                0x08
#define _P7_CA_PT_09_PORT_PAGE0_SCG_PERIOD                0x09
#define _P7_CA_PT_0A_PORT_PAGE0_SCG_LB                    0x0A
#define _P7_CA_PT_0B_PORT_PAGE0_SCG_HB                    0x0B
#define _P7_CA_PT_0C_PORT_PAGE0_POPUP_CTRL                0x0C
#define _P7_CA_PT_0D_PORT_PAGE0_SCG_DIFF                  0x0D
#define _P7_CA_PT_0E_PORT_PAGE0_Y_MAX_VAL_H               0x0E
#define _P7_CA_PT_0F_PORT_PAGE0_Y_MIN_VAL_H               0x0F
#define _P7_CA_PT_10_PORT_PAGE0_S0_VALUE                  0x10
#define _P7_CA_PT_11_PORT_PAGE0_S1_VALUE                  0x11
#define _P7_CA_PT_12_PORT_PAGE0_S2_VALUE                  0x12
#define _P7_CA_PT_13_PORT_PAGE0_S3_VALUE                  0x13
#define _P7_CA_PT_14_PORT_PAGE0_S4_VALUE                  0x14
#define _P7_CA_PT_15_PORT_PAGE0_S5_VALUE                  0x15
#define _P7_CA_PT_16_PORT_PAGE0_S6_VALUE                  0x16
#define _P7_CA_PT_17_PORT_PAGE0_YHL_THD                   0x17
#define _P7_CA_PT_18_PORT_PAGE0_BBE_THD_L                 0x18
#define _P7_CA_PT_19_PORT_PAGE0_YNFLT_THD_L               0x19
#define _P7_CA_PT_1A_PORT_PAGE0_Y_MAX_LB_L                0x1A
#define _P7_CA_PT_1B_PORT_PAGE0_Y_MIN_HB_L                0x1B
#define _P7_CA_PT_1C_PORT_PAGE0_Y_MAX_VAL_L               0x1C
#define _P7_CA_PT_1D_PORT_PAGE0_Y_MIN_VAL_L               0x1D
#define _P7_CA_PT_1E_PORT_PAGE0_READY_TO_READ             0x1E
#define _P7_CA_PT_00_PORT_PAGE1_DEF_CRV01_H               0x00
#define _P7_CA_PT_01_PORT_PAGE1_DEF_CRV02_H               0x01
#define _P7_CA_PT_02_PORT_PAGE1_DEF_CRV03_H               0x02
#define _P7_CA_PT_03_PORT_PAGE1_DEF_CRV04_H               0x03
#define _P7_CA_PT_04_PORT_PAGE1_DEF_CRV05_H               0x04
#define _P7_CA_PT_05_PORT_PAGE1_DEF_CRV06_H               0x05
#define _P7_CA_PT_06_PORT_PAGE1_DEF_CRV07_H               0x06
#define _P7_CA_PT_07_PORT_PAGE1_DEF_CRV08_H               0x07
#define _P7_CA_PT_08_PORT_PAGE1_DEF_CRV09_H               0x08
#define _P7_CA_PT_09_PORT_PAGE1_DEF_CRV10_H               0x09
#define _P7_CA_PT_0A_PORT_PAGE1_DEF_CRV11_H               0x0A
#define _P7_CA_PT_0B_PORT_PAGE1_DEF_CRV12_H               0x0B
#define _P7_CA_PT_0C_PORT_PAGE1_DEF_CRV13_H               0x0C
#define _P7_CA_PT_0D_PORT_PAGE1_DEF_CRV14_H               0x0D
#define _P7_CA_PT_0E_PORT_PAGE1_DEF_CRV15_H               0x0E
#define _P7_CA_PT_0F_PORT_PAGE1_DEF_CRV16_H               0x0F
#define _P7_CA_PT_10_PORT_PAGE1_Y_BL_BIAS_H               0x10
#define _P7_CA_PT_11_PORT_PAGE1_Y_WL_BIAS_H               0x11
#define _P7_CA_PT_12_PORT_PAGE1_SAT_FACTOR                0x12
#define _P7_CA_PT_13_PORT_PAGE1_BLD_UB_H                  0x13
#define _P7_CA_PT_14_PORT_PAGE1_BLD_LB_H                  0x14
#define _P7_CA_PT_15_PORT_PAGE1_DEV_FACTOR_H              0x15
#define _P7_CA_PT_16_PORT_PAGE1_BLD_VAL_SEL               0x16
#define _P7_CA_PT_17_PORT_PAGE1_BLD_VAL_H                 0x17
#define _P7_CA_PT_18_PORT_PAGE1_DEV_VAL_HI                0x18
#define _P7_CA_PT_19_PORT_PAGE1_DEV_VAL_LO                0x19
#define _P7_CA_PT_1A_PORT_PAGE1_BLD_VAL_L                 0x1A
#define _P7_CA_PT_1B_PORT_PAGE1_DEF_CRV00_HALF_H          0x1B
#define _P7_CA_PT_1C_PORT_PAGE1_DEF_CRV00_HALF_L          0x1C
#define _P7_CA_PT_1D_PORT_PAGE1_DEF_CRV01_L               0x1D
#define _P7_CA_PT_1E_PORT_PAGE1_DEF_CRV01_HALF_H          0x1E
#define _P7_CA_PT_1F_PORT_PAGE1_DEF_CRV01_HALF_L          0x1F
#define _P7_CA_PT_20_PORT_PAGE1_DEF_CRV02_L               0x20
#define _P7_CA_PT_21_PORT_PAGE1_DEF_CRV02_HALF_H          0x21
#define _P7_CA_PT_22_PORT_PAGE1_DEF_CRV02_HALF_L          0x22
#define _P7_CA_PT_23_PORT_PAGE1_DEF_CRV03_L               0x23
#define _P7_CA_PT_24_PORT_PAGE1_DEF_CRV03_HALF_H          0x24
#define _P7_CA_PT_25_PORT_PAGE1_DEF_CRV03_HALF_L          0x25
#define _P7_CA_PT_26_PORT_PAGE1_DEF_CRV04_L               0x26
#define _P7_CA_PT_27_PORT_PAGE1_DEF_CRV04_HALF_H          0x27
#define _P7_CA_PT_28_PORT_PAGE1_DEF_CRV04_HALF_L          0x28
#define _P7_CA_PT_29_PORT_PAGE1_DEF_CRV05_L               0x29
#define _P7_CA_PT_2A_PORT_PAGE1_DEF_CRV05_HALF_H          0x2A
#define _P7_CA_PT_2B_PORT_PAGE1_DEF_CRV05_HALF_L          0x2B
#define _P7_CA_PT_2C_PORT_PAGE1_DEF_CRV06_L               0x2C
#define _P7_CA_PT_2D_PORT_PAGE1_DEF_CRV06_HALF_H          0x2D
#define _P7_CA_PT_2E_PORT_PAGE1_DEF_CRV06_HALF_L          0x2E
#define _P7_CA_PT_2F_PORT_PAGE1_DEF_CRV07_L               0x2F
#define _P7_CA_PT_30_PORT_PAGE1_DEF_CRV07_HALF_H          0x30
#define _P7_CA_PT_31_PORT_PAGE1_DEF_CRV07_HALF_L          0x31
#define _P7_CA_PT_32_PORT_PAGE1_DEF_CRV08_L               0x32
#define _P7_CA_PT_33_PORT_PAGE1_DEF_CRV08_HALF_H          0x33
#define _P7_CA_PT_34_PORT_PAGE1_DEF_CRV08_HALF_L          0x34
#define _P7_CA_PT_35_PORT_PAGE1_DEF_CRV09_L               0x35
#define _P7_CA_PT_36_PORT_PAGE1_DEF_CRV09_HALF_H          0x36
#define _P7_CA_PT_37_PORT_PAGE1_DEF_CRV09_HALF_L          0x37
#define _P7_CA_PT_38_PORT_PAGE1_DEF_CRV10_L               0x38
#define _P7_CA_PT_39_PORT_PAGE1_DEF_CRV10_HALF_H          0x39
#define _P7_CA_PT_3A_PORT_PAGE1_DEF_CRV10_HALF_L          0x3A
#define _P7_CA_PT_3B_PORT_PAGE1_DEF_CRV11_L               0x3B
#define _P7_CA_PT_3C_PORT_PAGE1_DEF_CRV11_HALF_H          0x3C
#define _P7_CA_PT_3D_PORT_PAGE1_DEF_CRV11_HALF_L          0x3D
#define _P7_CA_PT_3E_PORT_PAGE1_DEF_CRV12_L               0x3E
#define _P7_CA_PT_3F_PORT_PAGE1_DEF_CRV12_HALF_H          0x3F
#define _P7_CA_PT_40_PORT_PAGE1_DEF_CRV12_HALF_L          0x40
#define _P7_CA_PT_41_PORT_PAGE1_DEF_CRV13_L               0x41
#define _P7_CA_PT_42_PORT_PAGE1_DEF_CRV13_HALF_H          0x42
#define _P7_CA_PT_43_PORT_PAGE1_DEF_CRV13_HALF_L          0x43
#define _P7_CA_PT_44_PORT_PAGE1_DEF_CRV14_L               0x44
#define _P7_CA_PT_45_PORT_PAGE1_DEF_CRV14_HALF_H          0x45
#define _P7_CA_PT_46_PORT_PAGE1_DEF_CRV14_HALF_L          0x46
#define _P7_CA_PT_47_PORT_PAGE1_DEF_CRV15_L               0x47
#define _P7_CA_PT_48_PORT_PAGE1_DEF_CRV15_HALF_H          0x48
#define _P7_CA_PT_49_PORT_PAGE1_DEF_CRV15_HALF_L          0x49
#define _P7_CA_PT_4A_PORT_PAGE1_DEF_CRV16_L               0x4A
#define _P7_CA_PT_4B_PORT_PAGE1_Y_BL_BIAS_L               0x4B
#define _P7_CA_PT_4C_PORT_PAGE1_Y_WL_BIAS_L               0x4C
#define _P7_CA_PT_4D_PORT_PAGE1_BLD_UB_L                  0x4D
#define _P7_CA_PT_4E_PORT_PAGE1_BLD_LB_L                  0x4E
#define _P7_CA_PT_4F_PORT_PAGE1_DEV_FACTOR_L              0x4F
#define _P7_CA_PT_50_PORT_PAGE1_BLD_RANGE_L               0x50
#define _P7_CA_PT_51_PORT_PAGE1_DUMMY                     0x51
#define _P7_CA_PT_00_PORT_PAGE2_SRAM_INITIAL_VAL          0x00
#define _P7_CA_PT_00_PORT_PAGE3_SRAM_BIST                 0x00
#define _P7_CA_PT_01_PORT_PAGE3_SRAM_DRF_BIST             0x01


//--------------------------------------------------
// ICM (Page 7)
//--------------------------------------------------
#define _P7_CF_PT_00_PORT_SCMN_SATURATION_SET_1           0x00
#define _P7_CF_PT_01_PORT_SCMN_SATURATION_SET_2           0x01
#define _P7_CF_PT_02_PORT_SCMN_SATURATION_SET_3           0x02
#define _P7_CF_PT_03_PORT_SCMN_RBUF_HUE_H                 0x03
#define _P7_CF_PT_04_PORT_SCMN_RBUF_HUE_M                 0x04
#define _P7_CF_PT_05_PORT_SCMN_RWID_RANGE_H               0x05
#define _P7_CF_PT_06_PORT_SCMN_RWID_RANGE_M               0x06
#define _P7_CF_PT_07_PORT_SCMN_LWID_RANGE_H               0x07
#define _P7_CF_PT_08_PORT_SCMN_LWID_RANGE_M               0x08
#define _P7_CF_PT_09_PORT_SCMN_LBUF_RANGE_H               0x09
#define _P7_CF_PT_0A_PORT_SCMN_LBUF_RANGE_M               0x0A
#define _P7_CF_PT_0B_PORT_SCMN_MST_D_DU_H                 0x0B
#define _P7_CF_PT_0C_PORT_SCMN_MST_D_DV_H                 0x0C
#define _P7_CF_PT_0D_PORT_SCMN_MST_C_DU_H                 0x0D
#define _P7_CF_PT_0E_PORT_SCMN_MST_C_DV_H                 0x0E
#define _P7_CF_PT_0F_PORT_SCMN_MST_B_DU_H                 0x0F
#define _P7_CF_PT_10_PORT_SCMN_MST_B_DV_H                 0x10
#define _P7_CF_PT_11_PORT_SCMN_MST_A_DU_H                 0x11
#define _P7_CF_PT_12_PORT_SCMN_MST_A_DV_H                 0x12
#define _P7_CF_PT_13_PORT_SCMN_RWID_D_DU_H                0x13
#define _P7_CF_PT_14_PORT_SCMN_RWID_D_DV_H                0x14
#define _P7_CF_PT_15_PORT_SCMN_RWID_C_DU_H                0x15
#define _P7_CF_PT_16_PORT_SCMN_RWID_C_DV_H                0x16
#define _P7_CF_PT_17_PORT_SCMN_RWID_B_DU_H                0x17
#define _P7_CF_PT_18_PORT_SCMN_RWID_B_DV_H                0x18
#define _P7_CF_PT_19_PORT_SCMN_RWID_A_DU_H                0x19
#define _P7_CF_PT_1A_PORT_SCMN_RWID_A_DV_H                0x1A
#define _P7_CF_PT_1B_PORT_SCMN_LWID_D_DU_H                0x1B
#define _P7_CF_PT_1C_PORT_SCMN_LWID_D_DV_H                0x1C
#define _P7_CF_PT_1D_PORT_SCMN_LWID_C_DU_H                0x1D
#define _P7_CF_PT_1E_PORT_SCMN_LWID_C_DV_H                0x1E
#define _P7_CF_PT_1F_PORT_SCMN_LWID_B_DU_H                0x1F
#define _P7_CF_PT_20_PORT_SCMN_LWID_B_DV_H                0x20
#define _P7_CF_PT_21_PORT_SCMN_LWID_A_DU_H                0x21
#define _P7_CF_PT_22_PORT_SCMN_LWID_A_DV_H                0x22
#define _P7_CF_PT_23_PORT_SCMN_RBUF_D_DU_H                0x23
#define _P7_CF_PT_24_PORT_SCMN_RBUF_D_DV_H                0x24
#define _P7_CF_PT_25_PORT_SCMN_RBUF_C_DU_H                0x25
#define _P7_CF_PT_26_PORT_SCMN_RBUF_C_DV_H                0x26
#define _P7_CF_PT_27_PORT_SCMN_RBUF_B_DU_H                0x27
#define _P7_CF_PT_28_PORT_SCMN_RBUF_B_DV_H                0x28
#define _P7_CF_PT_29_PORT_SCMN_RBUF_A_DU_H                0x29
#define _P7_CF_PT_2A_PORT_SCMN_RBUF_A_DV_H                0x2A
#define _P7_CF_PT_2B_PORT_SCMN_LBUF_D_DU_H                0x2B
#define _P7_CF_PT_2C_PORT_SCMN_LBUF_D_DV_H                0x2C
#define _P7_CF_PT_2D_PORT_SCMN_LBUF_C_DU_H                0x2D
#define _P7_CF_PT_2E_PORT_SCMN_LBUF_C_DV_H                0x2E
#define _P7_CF_PT_2F_PORT_SCMN_LBUF_B_DU_H                0x2F
#define _P7_CF_PT_30_PORT_SCMN_LBUF_B_DV_H                0x30
#define _P7_CF_PT_31_PORT_SCMN_LBUF_A_DU_H                0x31
#define _P7_CF_PT_32_PORT_SCMN_LBUF_A_DV_H                0x32
#define _P7_CF_PT_33_PORT_SCMN_BRI_ENABLE                 0x33
#define _P7_CF_PT_34_PORT_SCMN_M_AXIS_DELY_H              0x34
#define _P7_CF_PT_35_PORT_SCMN_M_AXIS_DELY_M              0x35
#define _P7_CF_PT_36_PORT_SCMN_R_AXIS_DELY_H              0x36
#define _P7_CF_PT_37_PORT_SCMN_R_AXIS_DELY_M              0x37
#define _P7_CF_PT_38_PORT_SCMN_L_AXIS_DELY_H              0x38
#define _P7_CF_PT_39_PORT_SCMN_L_AXIS_DELY_M              0x39
#define _P7_CF_PT_3A_PORT_SCMN_RBUF_AXIS_DELY_H           0x3A
#define _P7_CF_PT_3B_PORT_SCMN_RBUF_AXIS_DELY_M           0x3B
#define _P7_CF_PT_3C_PORT_SCMN_LBUF_AXIS_DELY_H           0x3C
#define _P7_CF_PT_3D_PORT_SCMN_LBUF_AXIS_DELY_M           0x3D
#define _P7_CF_PT_3E_PORT_SCMN_BLOCK_DELY_H               0x3E
#define _P7_CF_PT_3F_PORT_SCMN_BLOCK_DELY_M               0x3F
#define _P7_CF_PT_40_PORT_SCMN_MST_DC_DUDV_L              0x40
#define _P7_CF_PT_41_PORT_SCMN_MST_BA_DUDV_L              0x41
#define _P7_CF_PT_42_PORT_SCMN_RWID_DC_DUDV_L             0x42
#define _P7_CF_PT_43_PORT_SCMN_RWID_BA_DUDV_L             0x43
#define _P7_CF_PT_44_PORT_SCMN_LWID_DC_DUDV_L             0x44
#define _P7_CF_PT_45_PORT_SCMN_LWID_BA_DUDV_L             0x45
#define _P7_CF_PT_46_PORT_SCMN_RBUF_DC_DUDV_L             0x46
#define _P7_CF_PT_47_PORT_SCMN_RBUF_BA_DUDV_L             0x47
#define _P7_CF_PT_48_PORT_SCMN_LBUF_DC_DUDV_L             0x48
#define _P7_CF_PT_49_PORT_SCMN_LBUF_BA_DUDV_L             0x49
#define _P7_CF_PT_4A_PORT_SCMN_SATURATION_SET_4           0x4A
#define _P7_CF_PT_4B_PORT_SCMN_RBUF_HUE_L                 0x4B
#define _P7_CF_PT_4C_PORT_SCMN_AXIS_DELY1_L               0x4C
#define _P7_CF_PT_4D_PORT_SCMN_AXIS_DELY0_L               0x4D
#define _P7_D3_PT_03_PORT_CMN_MST_00_DU_H                 0x03
#define _P7_D3_PT_04_PORT_CMN_MST_00_DV_H                 0x04
#define _P7_D3_PT_05_PORT_CMN_MST_01_DU_H                 0x05
#define _P7_D3_PT_06_PORT_CMN_MST_01_DV_H                 0x06
#define _P7_D3_PT_07_PORT_CMN_MST_02_DU_H                 0x07
#define _P7_D3_PT_08_PORT_CMN_MST_02_DV_H                 0x08
#define _P7_D3_PT_09_PORT_CMN_MST_03_DU_H                 0x09
#define _P7_D3_PT_0A_PORT_CMN_MST_03_DV_H                 0x0A
#define _P7_D3_PT_0B_PORT_CMN_MST_04_DU_H                 0x0B
#define _P7_D3_PT_0C_PORT_CMN_MST_04_DV_H                 0x0C
#define _P7_D3_PT_0D_PORT_CMN_MST_05_DU_H                 0x0D
#define _P7_D3_PT_0E_PORT_CMN_MST_05_DV_H                 0x0E
#define _P7_D3_PT_0F_PORT_CMN_MST_06_DU_H                 0x0F
#define _P7_D3_PT_10_PORT_CMN_MST_06_DV_H                 0x10
#define _P7_D3_PT_11_PORT_CMN_MST_07_DU_H                 0x11
#define _P7_D3_PT_12_PORT_CMN_MST_07_DV_H                 0x12
#define _P7_D3_PT_13_PORT_CMN_RWID_00_DU_H                0x13
#define _P7_D3_PT_14_PORT_CMN_RWID_00_DV_H                0x14
#define _P7_D3_PT_15_PORT_CMN_RWID_01_DU_H                0x15
#define _P7_D3_PT_16_PORT_CMN_RWID_01_DV_H                0x16
#define _P7_D3_PT_17_PORT_CMN_RWID_02_DU_H                0x17
#define _P7_D3_PT_18_PORT_CMN_RWID_02_DV_H                0x18
#define _P7_D3_PT_19_PORT_CMN_RWID_03_DU_H                0x19
#define _P7_D3_PT_1A_PORT_CMN_RWID_03_DV_H                0x1A
#define _P7_D3_PT_1B_PORT_CMN_RWID_04_DU_H                0x1B
#define _P7_D3_PT_1C_PORT_CMN_RWID_04_DV_H                0x1C
#define _P7_D3_PT_1D_PORT_CMN_RWID_05_DU_H                0x1D
#define _P7_D3_PT_1E_PORT_CMN_RWID_05_DV_H                0x1E
#define _P7_D3_PT_1F_PORT_CMN_RWID_06_DU_H                0x1F
#define _P7_D3_PT_20_PORT_CMN_RWID_06_DV_H                0x20
#define _P7_D3_PT_21_PORT_CMN_RWID_07_DU_H                0x21
#define _P7_D3_PT_22_PORT_CMN_RWID_07_DV_H                0x22
#define _P7_D3_PT_23_PORT_CMN_LWID_00_DU_H                0x23
#define _P7_D3_PT_24_PORT_CMN_LWID_00_DV_H                0x24
#define _P7_D3_PT_25_PORT_CMN_LWID_01_DU_H                0x25
#define _P7_D3_PT_26_PORT_CMN_LWID_01_DV_H                0x26
#define _P7_D3_PT_27_PORT_CMN_LWID_02_DU_H                0x27
#define _P7_D3_PT_28_PORT_CMN_LWID_02_DV_H                0x28
#define _P7_D3_PT_29_PORT_CMN_LWID_03_DU_H                0x29
#define _P7_D3_PT_2A_PORT_CMN_LWID_03_DV_H                0x2A
#define _P7_D3_PT_2B_PORT_CMN_LWID_04_DU_H                0x2B
#define _P7_D3_PT_2C_PORT_CMN_LWID_04_DV_H                0x2C
#define _P7_D3_PT_2D_PORT_CMN_LWID_05_DU_H                0x2D
#define _P7_D3_PT_2E_PORT_CMN_LWID_05_DV_H                0x2E
#define _P7_D3_PT_2F_PORT_CMN_LWID_06_DU_H                0x2F
#define _P7_D3_PT_30_PORT_CMN_LWID_06_DV_H                0x30
#define _P7_D3_PT_31_PORT_CMN_LWID_07_DU_H                0x31
#define _P7_D3_PT_32_PORT_CMN_LWID_07_DV_H                0x32
#define _P7_D3_PT_33_PORT_CMN_RBUF_00_DU_H                0x33
#define _P7_D3_PT_34_PORT_CMN_RBUF_00_DV_H                0x34
#define _P7_D3_PT_35_PORT_CMN_RBUF_01_DU_H                0x35
#define _P7_D3_PT_36_PORT_CMN_RBUF_01_DV_H                0x36
#define _P7_D3_PT_37_PORT_CMN_RBUF_02_DU_H                0x37
#define _P7_D3_PT_38_PORT_CMN_RBUF_02_DV_H                0x38
#define _P7_D3_PT_39_PORT_CMN_RBUF_03_DU_H                0x39
#define _P7_D3_PT_3A_PORT_CMN_RBUF_03_DV_H                0x3A
#define _P7_D3_PT_3B_PORT_CMN_RBUF_04_DU_H                0x3B
#define _P7_D3_PT_3C_PORT_CMN_RBUF_04_DV_H                0x3C
#define _P7_D3_PT_3D_PORT_CMN_RBUF_05_DU_H                0x3D
#define _P7_D3_PT_3E_PORT_CMN_RBUF_05_DV_H                0x3E
#define _P7_D3_PT_3F_PORT_CMN_RBUF_06_DU_H                0x3F
#define _P7_D3_PT_40_PORT_CMN_RBUF_06_DV_H                0x40
#define _P7_D3_PT_41_PORT_CMN_RBUF_07_DU_H                0x41
#define _P7_D3_PT_42_PORT_CMN_RBUF_07_DV_H                0x42
#define _P7_D3_PT_43_PORT_CMN_LBUF_00_DU_H                0x43
#define _P7_D3_PT_44_PORT_CMN_LBUF_00_DV_H                0x44
#define _P7_D3_PT_45_PORT_CMN_LBUF_01_DU_H                0x45
#define _P7_D3_PT_46_PORT_CMN_LBUF_01_DV_H                0x46
#define _P7_D3_PT_47_PORT_CMN_LBUF_02_DU_H                0x47
#define _P7_D3_PT_48_PORT_CMN_LBUF_02_DV_H                0x48
#define _P7_D3_PT_49_PORT_CMN_LBUF_03_DU_H                0x49
#define _P7_D3_PT_4A_PORT_CMN_LBUF_03_DV_H                0x4A
#define _P7_D3_PT_4B_PORT_CMN_LBUF_04_DU_H                0x4B
#define _P7_D3_PT_4C_PORT_CMN_LBUF_04_DV_H                0x4C
#define _P7_D3_PT_4D_PORT_CMN_LBUF_05_DU_H                0x4D
#define _P7_D3_PT_4E_PORT_CMN_LBUF_05_DV_H                0x4E
#define _P7_D3_PT_4F_PORT_CMN_LBUF_06_DU_H                0x4F
#define _P7_D3_PT_50_PORT_CMN_LBUF_06_DV_H                0x50
#define _P7_D3_PT_51_PORT_CMN_LBUF_07_DU_H                0x51
#define _P7_D3_PT_52_PORT_CMN_LBUF_07_DV_H                0x52
#define _P7_D3_PT_53_PORT_CMN_MST_UMAX_H                  0x53
#define _P7_D3_PT_54_PORT_CMN_MST_UMAX_M                  0x54
#define _P7_D3_PT_55_PORT_CMN_RWID_UMAX_H                 0x55
#define _P7_D3_PT_56_PORT_CMN_RWID_UMAX_M                 0x56
#define _P7_D3_PT_57_PORT_CMN_LWID_UMAX_H                 0x57
#define _P7_D3_PT_58_PORT_CMN_LWID_UMAX_M                 0x58
#define _P7_D3_PT_59_PORT_CMN_RBUF_UMAX_H                 0x59
#define _P7_D3_PT_5A_PORT_CMN_RBUF_UMAX_M                 0x5A
#define _P7_D3_PT_5B_PORT_CMN_LBUF_UMAX_H                 0x5B
#define _P7_D3_PT_5C_PORT_CMN_LBUF_UMAX_M                 0x5C
#define _P7_D3_PT_5D_PORT_CMN_RBUF_HUE_H                  0x5D
#define _P7_D3_PT_5E_PORT_CMN_RBUF_HUE_M                  0x5E
#define _P7_D3_PT_5F_PORT_CMN_RWID_RANGE_H                0x5F
#define _P7_D3_PT_60_PORT_CMN_RWID_RANGE_M                0x60
#define _P7_D3_PT_61_PORT_CMN_MST_RANGE_H                 0x61
#define _P7_D3_PT_62_PORT_CMN_MST_RANGE_M                 0x62
#define _P7_D3_PT_63_PORT_CMN_LWID_RANGE_H                0x63
#define _P7_D3_PT_64_PORT_CMN_LWID_RANGE_M                0x64
#define _P7_D3_PT_65_PORT_CMN_LBUF_RANGE_H                0x65
#define _P7_D3_PT_66_PORT_CMN_LBUF_RANGE_M                0x66
#define _P7_D3_PT_67_PORT_CMN_BRI_RANGE                   0x67
#define _P7_D3_PT_68_PORT_CMN_BRI_BUF_EN                  0x68
#define _P7_D3_PT_69_PORT_CMN_M_AXIS_DELY_H               0x69
#define _P7_D3_PT_6A_PORT_CMN_M_AXIS_DELY_L               0x6A
#define _P7_D3_PT_6B_PORT_CMN_R_AXIS_DELY_H               0x6B
#define _P7_D3_PT_6C_PORT_CMN_R_AXIS_DELY_L               0x6C
#define _P7_D3_PT_6D_PORT_CMN_L_AXIS_DELY_H               0x6D
#define _P7_D3_PT_6E_PORT_CMN_L_AXIS_DELY_L               0x6E
#define _P7_D3_PT_6F_PORT_CMN_MST_00_01_UV_OFFSET_L       0x6F
#define _P7_D3_PT_70_PORT_CMN_MST_02_03_UV_OFFSET_L       0x70
#define _P7_D3_PT_71_PORT_CMN_MST_04_05_UV_OFFSET_L       0x71
#define _P7_D3_PT_72_PORT_CMN_MST_06_07_UV_OFFSET_L       0x72
#define _P7_D3_PT_73_PORT_CMN_RWID_00_01_UV_OFFSET_L      0x73
#define _P7_D3_PT_74_PORT_CMN_RWID_02_03_UV_OFFSET_L      0x74
#define _P7_D3_PT_75_PORT_CMN_RWID_04_05_UV_OFFSET_L      0x75
#define _P7_D3_PT_76_PORT_CMN_RWID_06_07_UV_OFFSET_L      0x76
#define _P7_D3_PT_77_PORT_CMN_LWID_00_01_UV_OFFSET_L      0x77
#define _P7_D3_PT_78_PORT_CMN_LWID_02_03_UV_OFFSET_L      0x78
#define _P7_D3_PT_79_PORT_CMN_LWID_04_05_UV_OFFSET_L      0x79
#define _P7_D3_PT_7A_PORT_CMN_LWID_06_07_UV_OFFSET_L      0x7A
#define _P7_D3_PT_7B_PORT_CMN_RBUF_00_01_UV_OFFSET_L      0x7B
#define _P7_D3_PT_7C_PORT_CMN_RBUF_02_03_UV_OFFSET_L      0x7C
#define _P7_D3_PT_7D_PORT_CMN_RBUF_04_05_UV_OFFSET_L      0x7D
#define _P7_D3_PT_7E_PORT_CMN_RBUF_06_07_UV_OFFSET_L      0x7E
#define _P7_D3_PT_7F_PORT_CMN_LBUF_00_01_UV_OFFSET_L      0x7F
#define _P7_D3_PT_80_PORT_CMN_LBUF_02_03_UV_OFFSET_L      0x80
#define _P7_D3_PT_81_PORT_CMN_LBUF_04_05_UV_OFFSET_L      0x81
#define _P7_D3_PT_82_PORT_CMN_LBUF_06_07_UV_OFFSET_L      0x82
#define _P7_D3_PT_83_PORT_CMN_MST_WID_UMAX_L              0x83
#define _P7_D3_PT_84_PORT_CMN_BUFFER_UMAX_L               0x84
#define _P7_D3_PT_85_PORT_CMN_HUE_SET1_L                  0x85
#define _P7_D3_PT_86_PORT_CMN_HUE_SET0_L                  0x86
#define _P7_D3_PT_87_PORT_CMN_AXIS_DELY_L                 0x87


//--------------------------------------------------
// DCR (Page 7)
//--------------------------------------------------
#define _P7_D9_PT_00_DCR_THESHOLD1_1                      0x00
#define _P7_D9_PT_01_DCR_THESHOLD2_1                      0x01
#define _P7_D9_PT_02_DCR_ABOVE_TH1_NUM_2                  0x02
#define _P7_D9_PT_03_DCR_ABOVE_TH1_NUM_1                  0x03
#define _P7_D9_PT_04_DCR_ABOVE_TH1_NUM_0                  0x04
#define _P7_D9_PT_05_DCR_ABOVE_TH1_VAL_4                  0x05
#define _P7_D9_PT_06_DCR_ABOVE_TH1_VAL_3                  0x06
#define _P7_D9_PT_07_DCR_ABOVE_TH1_VAL_2                  0x07
#define _P7_D9_PT_08_DCR_ABOVE_TH1_VAL_1                  0x08
#define _P7_D9_PT_09_DCR_ABOVE_TH2_NUM_2                  0x09
#define _P7_D9_PT_0A_DCR_ABOVE_TH2_NUM_1                  0x0A
#define _P7_D9_PT_0B_DCR_ABOVE_TH2_NUM_0                  0x0B
#define _P7_D9_PT_0C_DCR_ABOVE_TH2_VAL_4                  0x0C
#define _P7_D9_PT_0D_DCR_ABOVE_TH2_VAL_3                  0x0D
#define _P7_D9_PT_0E_DCR_ABOVE_TH2_VAL_2                  0x0E
#define _P7_D9_PT_0F_DCR_ABOVE_TH2_VAL_1                  0x0F
#define _P7_D9_PT_10_DCR_HIGH_LV_NUM_R_1                  0x10
#define _P7_D9_PT_11_DCR_HIGH_LV_NUM_R_0                  0x11
#define _P7_D9_PT_12_DCR_LOW_LV_NUM_R_1                   0x12
#define _P7_D9_PT_13_DCR_LOW_LV_NUM_R_0                   0x13
#define _P7_D9_PT_14_DCR_HIGH_LV_VAL_R_1                  0x14
#define _P7_D9_PT_15_DCR_LOW_LV_VAL_R_1                   0x15
#define _P7_D9_PT_16_DCR_HIGH_LV_NUM_G_1                  0x16
#define _P7_D9_PT_17_DCR_HIGH_LV_NUM_G_0                  0x17
#define _P7_D9_PT_18_DCR_LOW_LV_NUM_G_1                   0x18
#define _P7_D9_PT_19_DCR_LOW_LV_NUM_G_0                   0x19
#define _P7_D9_PT_1A_DCR_HIGH_LV_VAL_G_1                  0x1A
#define _P7_D9_PT_1B_DCR_LOW_LV_VAL_G_1                   0x1B
#define _P7_D9_PT_1C_DCR_HIGH_LV_NUM_B_1                  0x1C
#define _P7_D9_PT_1D_DCR_HIGH_LV_NUM_B_0                  0x1D
#define _P7_D9_PT_1E_DCR_LOW_LV_NUM_B_1                   0x1E
#define _P7_D9_PT_1F_DCR_LOW_LV_NUM_B_0                   0x1F
#define _P7_D9_PT_20_DCR_HIGH_LV_VAL_B_1                  0x20
#define _P7_D9_PT_21_DCR_LOW_LV_VAL_B_1                   0x21
#define _P7_D9_PT_22_DCR_HIGH_LV_NUM_R_2                  0x22
#define _P7_D9_PT_23_DCR_LOW_LV_NUM_R_2                   0x23
#define _P7_D9_PT_24_DCR_HIGH_LV_NUM_G_2                  0x24
#define _P7_D9_PT_25_DCR_LOW_LV_NUM_G_2                   0x25
#define _P7_D9_PT_26_DCR_HIGH_LV_NUM_B_2                  0x26
#define _P7_D9_PT_27_DCR_LOW_LV_NUM_B_2                   0x27
#define _P7_D9_PT_28_DCR_Y_MAX_1                          0x28
#define _P7_D9_PT_29_DCR_Y_MIN_1                          0x29
#define _P7_D9_PT_2A_DCR_ABOVE_TH_VAL_5                   0x2A
#define _P7_D9_PT_2B_DCR_ABOVE_TH_VAL_0                   0x2B
#define _P7_D9_PT_2C_DCR_HIGH_LV_VAL_R_0                  0x2C
#define _P7_D9_PT_2D_DCR_LOW_LV_VAL_R_0                   0x2D
#define _P7_D9_PT_2E_DCR_HIGH_LV_VAL_G_0                  0x2E
#define _P7_D9_PT_2F_DCR_LOW_LV_VAL_G_0                   0x2F
#define _P7_D9_PT_30_DCR_HIGH_LV_VAL_B_0                  0x30
#define _P7_D9_PT_31_DCR_LOW_LV_VAL_B_0                   0x31
#define _P7_D9_PT_32_DCR_Y_MAX_0                          0x32
#define _P7_D9_PT_33_DCR_Y_MIN_0                          0x33
#define _P7_D9_PT_38_DCR_THESHOLD1_0                      0x38
#define _P7_D9_PT_39_DCR_THESHOLD2_0                      0x39


//--------------------------------------------------
// Embedded Timing Controller (Page 15)
//--------------------------------------------------
#define _P15_A4_PT_00_TC_CTRL0                            0x00
#define _P15_A4_PT_01_TC_CTRL1                            0x01
#define _P15_A4_PT_02_FLICK_CTRL0                         0x02
#define _P15_A4_PT_03_FLICK_CTRL1                         0x03
#define _P15_A4_PT_04_FLICK_CTRL2                         0x04
#define _P15_A4_PT_05_FLICK_CTRL3                         0x05
#define _P15_A4_PT_06_TC_CTRL2                            0x06
#define _P15_A4_PT_07_TC_CTRL3                            0x07
#define _P15_A4_PT_08_TC_CTRL4                            0x08
#define _P15_A4_PT_09_TC_CTRL5                            0x09
#define _P15_A4_PT_10_TC0_VS_MSB                          0x10
#define _P15_A4_PT_11_TC0_VS_LSB                          0x11
#define _P15_A4_PT_12_TC0_VE_MSB                          0x12
#define _P15_A4_PT_13_TC0_VE_LSB                          0x13
#define _P15_A4_PT_14_TC0_HS_MSB                          0x14
#define _P15_A4_PT_15_TC0_HS_LSB                          0x15
#define _P15_A4_PT_16_TC0_HE_MSB                          0x16
#define _P15_A4_PT_17_TC0_HE_LSB                          0x17
#define _P15_A4_PT_18_TC0_CTRL                            0x18
#define _P15_A4_PT_19_TC0_RESERVE                         0x19
#define _P15_A4_PT_20_TC1_VS_MSB                          0x20
#define _P15_A4_PT_21_TC1_VS_LSB                          0x21
#define _P15_A4_PT_22_TC1_VE_MSB                          0x22
#define _P15_A4_PT_23_TC1_VE_LSB                          0x23
#define _P15_A4_PT_24_TC1_HS_MSB                          0x24
#define _P15_A4_PT_25_TC1_HS_LSB                          0x25
#define _P15_A4_PT_26_TC1_HE_MSB                          0x26
#define _P15_A4_PT_27_TC1_HE_LSB                          0x27
#define _P15_A4_PT_28_TC1_CTRL                            0x28
#define _P15_A4_PT_29_TC1_RESERVE                         0x29
#define _P15_A4_PT_30_TC2_VS_MSB                          0x30
#define _P15_A4_PT_31_TC2_VS_LSB                          0x31
#define _P15_A4_PT_32_TC2_VE_MSB                          0x32
#define _P15_A4_PT_33_TC2_VE_LSB                          0x33
#define _P15_A4_PT_34_TC2_HS_MSB                          0x34
#define _P15_A4_PT_35_TC2_HS_LSB                          0x35
#define _P15_A4_PT_36_TC2_HE_MSB                          0x36
#define _P15_A4_PT_37_TC2_HE_LSB                          0x37
#define _P15_A4_PT_38_TC2_CTRL                            0x38
#define _P15_A4_PT_39_TC2_RESERVE                         0x39
#define _P15_A4_PT_40_TC3_VS_MSB                          0x40
#define _P15_A4_PT_41_TC3_VS_LSB                          0x41
#define _P15_A4_PT_42_TC3_VE_MSB                          0x42
#define _P15_A4_PT_43_TC3_VE_LSB                          0x43
#define _P15_A4_PT_44_TC3_HS_MSB                          0x44
#define _P15_A4_PT_45_TC3_HS_LSB                          0x45
#define _P15_A4_PT_46_TC3_HE_MSB                          0x46
#define _P15_A4_PT_47_TC3_HE_LSB                          0x47
#define _P15_A4_PT_48_TC3_CTRL                            0x48
#define _P15_A4_PT_49_TC3_RESERVE                         0x49
#define _P15_A4_PT_50_TC4_VS_MSB                          0x50
#define _P15_A4_PT_51_TC4_VS_LSB                          0x51
#define _P15_A4_PT_52_TC4_VE_MSB                          0x52
#define _P15_A4_PT_53_TC4_VE_LSB                          0x53
#define _P15_A4_PT_54_TC4_HS_MSB                          0x54
#define _P15_A4_PT_55_TC4_HS_LSB                          0x55
#define _P15_A4_PT_56_TC4_HE_MSB                          0x56
#define _P15_A4_PT_57_TC4_HE_LSB                          0x57
#define _P15_A4_PT_58_TC4_CTRL                            0x58
#define _P15_A4_PT_59_TC4_RESERVE                         0x59
#define _P15_A4_PT_60_TC5_VS_MSB                          0x60
#define _P15_A4_PT_61_TC5_VS_LSB                          0x61
#define _P15_A4_PT_62_TC5_VE_MSB                          0x62
#define _P15_A4_PT_63_TC5_VE_LSB                          0x63
#define _P15_A4_PT_64_TC5_HS_MSB                          0x64
#define _P15_A4_PT_65_TC5_HS_LSB                          0x65
#define _P15_A4_PT_66_TC5_HE_MSB                          0x66
#define _P15_A4_PT_67_TC5_HE_LSB                          0x67
#define _P15_A4_PT_68_TC5_CTRL                            0x68
#define _P15_A4_PT_69_TC5_RESERVE                         0x69
#define _P15_A4_PT_70_TC6_VS_MSB                          0x70
#define _P15_A4_PT_71_TC6_VS_LSB                          0x71
#define _P15_A4_PT_72_TC6_VE_MSB                          0x72
#define _P15_A4_PT_73_TC6_VE_LSB                          0x73
#define _P15_A4_PT_74_TC6_HS_MSB                          0x74
#define _P15_A4_PT_75_TC6_HS_LSB                          0x75
#define _P15_A4_PT_76_TC6_HE_MSB                          0x76
#define _P15_A4_PT_77_TC6_HE_LSB                          0x77
#define _P15_A4_PT_78_TC6_CTRL                            0x78
#define _P15_A4_PT_79_TC6_RESERVE                         0x79
#define _P15_A4_PT_80_TC7_VS_MSB                          0x80
#define _P15_A4_PT_81_TC7_VS_LSB                          0x81
#define _P15_A4_PT_82_TC7_VE_MSB                          0x82
#define _P15_A4_PT_83_TC7_VE_LSB                          0x83
#define _P15_A4_PT_84_TC7_HS_MSB                          0x84
#define _P15_A4_PT_85_TC7_HS_LSB                          0x85
#define _P15_A4_PT_86_TC7_HE_MSB                          0x86
#define _P15_A4_PT_87_TC7_HE_LSB                          0x87
#define _P15_A4_PT_88_TC7_CTRL                            0x88
#define _P15_A4_PT_89_TC7_RESERVE                         0x89
#define _P15_A4_PT_90_TC8_VS_MSB                          0x90
#define _P15_A4_PT_91_TC8_VS_LSB                          0x91
#define _P15_A4_PT_92_TC8_VE_MSB                          0x92
#define _P15_A4_PT_93_TC8_VE_LSB                          0x93
#define _P15_A4_PT_94_TC8_HS_MSB                          0x94
#define _P15_A4_PT_95_TC8_HS_LSB                          0x95
#define _P15_A4_PT_96_TC8_HE_MSB                          0x96
#define _P15_A4_PT_97_TC8_HE_LSB                          0x97
#define _P15_A4_PT_98_TC8_CTRL                            0x98
#define _P15_A4_PT_99_TC8_RESERVE                         0x99
#define _P15_A4_PT_A0_TC9_VS_MSB                          0xA0
#define _P15_A4_PT_A1_TC9_VS_LSB                          0xA1
#define _P15_A4_PT_A2_TC9_VE_MSB                          0xA2
#define _P15_A4_PT_A3_TC9_VE_LSB                          0xA3
#define _P15_A4_PT_A4_TC9_HS_MSB                          0xA4
#define _P15_A4_PT_A5_TC9_HS_LSB                          0xA5
#define _P15_A4_PT_A6_TC9_HE_MSB                          0xA6
#define _P15_A4_PT_A7_TC9_HE_LSB                          0xA7
#define _P15_A4_PT_A8_TC9_CTRL                            0xA8
#define _P15_A4_PT_A9_TC9_RESERVE                         0xA9
#define _P15_A4_PT_B0_TC10_VS_MSB                         0xB0
#define _P15_A4_PT_B1_TC10_VS_LSB                         0xB1
#define _P15_A4_PT_B2_TC10_VE_MSB                         0xB2
#define _P15_A4_PT_B3_TC10_VE_LSB                         0xB3
#define _P15_A4_PT_B4_TC10_HS_MSB                         0xB4
#define _P15_A4_PT_B5_TC10_HS_LSB                         0xB5
#define _P15_A4_PT_B6_TC10_HE_MSB                         0xB6
#define _P15_A4_PT_B7_TC10_HE_LSB                         0xB7
#define _P15_A4_PT_B8_TC10_CTRL                           0xB8
#define _P15_A4_PT_B9_TC10_DOT_MASK                       0xB9
#define _P15_A4_PT_BA_TC10_RESERVE                        0xBA
#define _P15_A4_PT_C0_TC11_VS_MSB                         0xC0
#define _P15_A4_PT_C1_TC11_VS_LSB                         0xC1
#define _P15_A4_PT_C2_TC11_VE_MSB                         0xC2
#define _P15_A4_PT_C3_TC11_VE_LSB                         0xC3
#define _P15_A4_PT_C4_TC11_HS_MSB                         0xC4
#define _P15_A4_PT_C5_TC11_HS_LSB                         0xC5
#define _P15_A4_PT_C6_TC11_HE_MSB                         0xC6
#define _P15_A4_PT_C7_TC11_HE_LSB                         0xC7
#define _P15_A4_PT_C8_TC11_CTRL                           0xC8
#define _P15_A4_PT_C9_TC11_DOT_MASK                       0xC9
#define _P15_A4_PT_CA_TC11_RESERVE                        0xCA
#define _P15_A4_PT_D0_TC12_VS_MSB                         0xD0
#define _P15_A4_PT_D1_TC12_VS_LSB                         0xD1
#define _P15_A4_PT_D2_TC12_VE_MSB                         0xD2
#define _P15_A4_PT_D3_TC12_VE_LSB                         0xD3
#define _P15_A4_PT_D4_TC12_HS_MSB                         0xD4
#define _P15_A4_PT_D5_TC12_HS_LSB                         0xD5
#define _P15_A4_PT_D6_TC12_HE_MSB                         0xD6
#define _P15_A4_PT_D7_TC12_HE_LSB                         0xD7
#define _P15_A4_PT_D8_TC12_CTRL                           0xD8
#define _P15_A4_PT_D9_TC12_DOT_MASK                       0xD9
#define _P15_A4_PT_DA_TC12_RESERVE                        0xDA
#define _P15_A4_PT_E0_TC13_VS_MSB                         0xE0
#define _P15_A4_PT_E1_TC13_VS_LSB                         0xE1
#define _P15_A4_PT_E2_TC13_VE_MSB                         0xE2
#define _P15_A4_PT_E3_TC13_VE_LSB                         0xE3
#define _P15_A4_PT_E4_TC13_HS_MSB                         0xE4
#define _P15_A4_PT_E5_TC13_HS_LSB                         0xE5
#define _P15_A4_PT_E6_TC13_HE_MSB                         0xE6
#define _P15_A4_PT_E7_TC13_HE_LSB                         0xE7
#define _P15_A4_PT_E8_TC13_CTRL                           0xE8
#define _P15_A4_PT_E9_TC13_DOT_MASK                       0xE9
#define _P15_A4_PT_EA_TC13_RESERVE                        0xEA


//--------------------------------------------------
// CBUS0 MAC (Page 28)
//--------------------------------------------------
#define _P28_AD_PT_00_MSC_REG_00                          0x00
#define _P28_AD_PT_01_MSC_REG_01                          0x01
#define _P28_AD_PT_02_MSC_REG_02                          0x02
#define _P28_AD_PT_03_MSC_REG_03                          0x03
#define _P28_AD_PT_04_MSC_REG_04                          0x04
#define _P28_AD_PT_05_MSC_REG_05                          0x05
#define _P28_AD_PT_06_MSC_REG_06                          0x06
#define _P28_AD_PT_07_MSC_REG_07                          0x07
#define _P28_AD_PT_08_MSC_REG_08                          0x08
#define _P28_AD_PT_09_MSC_REG_09                          0x09
#define _P28_AD_PT_0A_MSC_REG_0A                          0x0A
#define _P28_AD_PT_0B_MSC_REG_0B                          0x0B
#define _P28_AD_PT_0C_MSC_REG_0C                          0x0C
#define _P28_AD_PT_0D_MSC_REG_0D                          0x0D
#define _P28_AD_PT_0E_MSC_REG_0E                          0x0E
#define _P28_AD_PT_0F_MSC_REG_0F                          0x0F
#define _P28_AD_PT_20_MSC_REG_20                          0x20
#define _P28_AD_PT_21_MSC_REG_21                          0x21
#define _P28_AD_PT_22_MSC_REG_22                          0x22
#define _P28_AD_PT_23_MSC_REG_23                          0x23
#define _P28_AD_PT_24_MSC_REG_24                          0x24
#define _P28_AD_PT_25_MSC_REG_25                          0x25
#define _P28_AD_PT_26_MSC_REG_26                          0x26
#define _P28_AD_PT_27_MSC_REG_27                          0x27
#define _P28_AD_PT_30_MSC_REG_30                          0x30
#define _P28_AD_PT_31_MSC_REG_31                          0x31
#define _P28_AD_PT_32_MSC_REG_32                          0x32
#define _P28_AD_PT_33_MSC_REG_33                          0x33
#define _P28_AD_PT_34_MSC_REG_34                          0x34
#define _P28_AD_PT_35_MSC_REG_35                          0x35
#define _P28_AD_PT_36_MSC_REG_36                          0x36
#define _P28_AD_PT_37_MSC_REG_37                          0x37
#define _P28_AD_PT_40_MSC_REG_40                          0x40
#define _P28_AD_PT_41_MSC_REG_41                          0x41
#define _P28_AD_PT_42_MSC_REG_42                          0x42
#define _P28_AD_PT_43_MSC_REG_43                          0x43
#define _P28_AD_PT_44_MSC_REG_44                          0x44
#define _P28_AD_PT_45_MSC_REG_45                          0x45
#define _P28_AD_PT_46_MSC_REG_46                          0x46
#define _P28_AD_PT_47_MSC_REG_47                          0x47
#define _P28_AD_PT_48_MSC_REG_48                          0x48
#define _P28_AD_PT_49_MSC_REG_49                          0x49
#define _P28_AD_PT_4A_MSC_REG_4A                          0x4A
#define _P28_AD_PT_4B_MSC_REG_4B                          0x4B
#define _P28_AD_PT_4C_MSC_REG_4C                          0x4C
#define _P28_AD_PT_4D_MSC_REG_4D                          0x4D
#define _P28_AD_PT_4E_MSC_REG_4E                          0x4E
#define _P28_AD_PT_4F_MSC_REG_4F                          0x4F
#define _P28_AD_PT_50_MSC_REG_50                          0x50
#define _P28_AD_PT_51_MSC_REG_51                          0x51
#define _P28_AD_PT_52_MSC_REG_52                          0x52
#define _P28_AD_PT_53_MSC_REG_53                          0x53
#define _P28_AD_PT_54_MSC_REG_54                          0x54
#define _P28_AD_PT_55_MSC_REG_55                          0x55
#define _P28_AD_PT_56_MSC_REG_56                          0x56
#define _P28_AD_PT_57_MSC_REG_57                          0x57
#define _P28_AD_PT_58_MSC_REG_58                          0x58
#define _P28_AD_PT_59_MSC_REG_59                          0x59
#define _P28_AD_PT_5A_MSC_REG_5A                          0x5A
#define _P28_AD_PT_5B_MSC_REG_5B                          0x5B
#define _P28_AD_PT_5C_MSC_REG_5C                          0x5C
#define _P28_AD_PT_5D_MSC_REG_5D                          0x5D
#define _P28_AD_PT_5E_MSC_REG_5E                          0x5E
#define _P28_AD_PT_5F_MSC_REG_5F                          0x5F
#define _P28_FC_PT_00_MISC_CTRL_00                        0x00
#define _P28_FC_PT_01_MISC_CTRL_01                        0x01
#define _P28_FC_PT_02_MISC_CTRL_02                        0x02
#define _P28_FC_PT_03_MISC_CTRL_03                        0x03
#define _P28_FC_PT_04_MISC_CTRL_04                        0x04
#define _P28_FC_PT_08_MISC_CTRL_08                        0x08
#define _P28_FC_PT_09_MISC_CTRL_09                        0x09
#define _P28_FC_PT_0A_MISC_CTRL_0A                        0x0A
#define _P28_FC_PT_0B_MISC_CTRL_0B                        0x0B
#define _P28_FC_PT_0C_MISC_CTRL_0C                        0x0C
#define _P28_FC_PT_0D_MISC_CTRL_0D                        0x0D
#define _P28_FC_PT_0E_MISC_CTRL_0E                        0x0E
#define _P28_FC_PT_10_MISC_CTRL_10                        0x10
#define _P28_FC_PT_11_MISC_CTRL_11                        0x11
#define _P28_FC_PT_12_MISC_CTRL_12                        0x12
#define _P28_FC_PT_13_MISC_CTRL_13                        0x13
#define _P28_FC_PT_14_MISC_CTRL_14                        0x14
#define _P28_FC_PT_15_MISC_CTRL_15                        0x15
#define _P28_FC_PT_16_MISC_CTRL_16                        0x16
#define _P28_FC_PT_17_MISC_CTRL_17                        0x17
#define _P28_FC_PT_18_MISC_CTRL_18                        0x18
#define _P28_FC_PT_20_MISC_CTRL_20                        0x20
#define _P28_FC_PT_21_MISC_CTRL_21                        0x21
#define _P28_FC_PT_22_MISC_CTRL_22                        0x22
#define _P28_FC_PT_23_MISC_CTRL_23                        0x23
#define _P28_FC_PT_24_MISC_CTRL_24                        0x24
#define _P28_FC_PT_25_MISC_CTRL_25                        0x25
#define _P28_FC_PT_26_MISC_CTRL_26                        0x26
#define _P28_FC_PT_27_MISC_CTRL_27                        0x27
#define _P28_FC_PT_30_MISC_CTRL_30                        0x30
#define _P28_FC_PT_31_MISC_CTRL_31                        0x31
#define _P28_FC_PT_32_MISC_CTRL_32                        0x32
#define _P28_FC_PT_40_MISC_CTRL_40                        0x40
#define _P28_FC_PT_41_MISC_CTRL_41                        0x41
#define _P28_FC_PT_42_MISC_CTRL_42                        0x42
#define _P28_FC_PT_45_MISC_CTRL_43                        0x45
#define _P28_FC_PT_46_MISC_CTRL_44                        0x46
#define _P28_FC_PT_47_MISC_CTRL_45                        0x47
#define _P28_FC_PT_48_MISC_CTRL_46                        0x48
#define _P28_FC_PT_49_MISC_CTRL_47                        0x49
#define _P28_FC_PT_4A_MISC_CTRL_48                        0x4A
#define _P28_FC_PT_4B_MISC_CTRL_49                        0x4B


//--------------------------------------------------
// CBUS1 MAC (Page 29)
//--------------------------------------------------
#define _P29_AD_PT_00_MSC_REG_00                          0x00
#define _P29_AD_PT_01_MSC_REG_01                          0x01
#define _P29_AD_PT_02_MSC_REG_02                          0x02
#define _P29_AD_PT_03_MSC_REG_03                          0x03
#define _P29_AD_PT_04_MSC_REG_04                          0x04
#define _P29_AD_PT_05_MSC_REG_05                          0x05
#define _P29_AD_PT_06_MSC_REG_06                          0x06
#define _P29_AD_PT_07_MSC_REG_07                          0x07
#define _P29_AD_PT_08_MSC_REG_08                          0x08
#define _P29_AD_PT_09_MSC_REG_09                          0x09
#define _P29_AD_PT_0A_MSC_REG_0A                          0x0A
#define _P29_AD_PT_0B_MSC_REG_0B                          0x0B
#define _P29_AD_PT_0C_MSC_REG_0C                          0x0C
#define _P29_AD_PT_0D_MSC_REG_0D                          0x0D
#define _P29_AD_PT_0E_MSC_REG_0E                          0x0E
#define _P29_AD_PT_0F_MSC_REG_0F                          0x0F
#define _P29_AD_PT_20_MSC_REG_20                          0x20
#define _P29_AD_PT_21_MSC_REG_21                          0x21
#define _P29_AD_PT_22_MSC_REG_22                          0x22
#define _P29_AD_PT_23_MSC_REG_23                          0x23
#define _P29_AD_PT_24_MSC_REG_24                          0x24
#define _P29_AD_PT_25_MSC_REG_25                          0x25
#define _P29_AD_PT_26_MSC_REG_26                          0x26
#define _P29_AD_PT_27_MSC_REG_27                          0x27
#define _P29_AD_PT_30_MSC_REG_30                          0x30
#define _P29_AD_PT_31_MSC_REG_31                          0x31
#define _P29_AD_PT_32_MSC_REG_32                          0x32
#define _P29_AD_PT_33_MSC_REG_33                          0x33
#define _P29_AD_PT_34_MSC_REG_34                          0x34
#define _P29_AD_PT_35_MSC_REG_35                          0x35
#define _P29_AD_PT_36_MSC_REG_36                          0x36
#define _P29_AD_PT_37_MSC_REG_37                          0x37
#define _P29_AD_PT_40_MSC_REG_40                          0x40
#define _P29_AD_PT_41_MSC_REG_41                          0x41
#define _P29_AD_PT_42_MSC_REG_42                          0x42
#define _P29_AD_PT_43_MSC_REG_43                          0x43
#define _P29_AD_PT_44_MSC_REG_44                          0x44
#define _P29_AD_PT_45_MSC_REG_45                          0x45
#define _P29_AD_PT_46_MSC_REG_46                          0x46
#define _P29_AD_PT_47_MSC_REG_47                          0x47
#define _P29_AD_PT_48_MSC_REG_48                          0x48
#define _P29_AD_PT_49_MSC_REG_49                          0x49
#define _P29_AD_PT_4A_MSC_REG_4A                          0x4A
#define _P29_AD_PT_4B_MSC_REG_4B                          0x4B
#define _P29_AD_PT_4C_MSC_REG_4C                          0x4C
#define _P29_AD_PT_4D_MSC_REG_4D                          0x4D
#define _P29_AD_PT_4E_MSC_REG_4E                          0x4E
#define _P29_AD_PT_4F_MSC_REG_4F                          0x4F
#define _P29_AD_PT_50_MSC_REG_50                          0x50
#define _P29_AD_PT_51_MSC_REG_51                          0x51
#define _P29_AD_PT_52_MSC_REG_52                          0x52
#define _P29_AD_PT_53_MSC_REG_53                          0x53
#define _P29_AD_PT_54_MSC_REG_54                          0x54
#define _P29_AD_PT_55_MSC_REG_55                          0x55
#define _P29_AD_PT_56_MSC_REG_56                          0x56
#define _P29_AD_PT_57_MSC_REG_57                          0x57
#define _P29_AD_PT_58_MSC_REG_58                          0x58
#define _P29_AD_PT_59_MSC_REG_59                          0x59
#define _P29_AD_PT_5A_MSC_REG_5A                          0x5A
#define _P29_AD_PT_5B_MSC_REG_5B                          0x5B
#define _P29_AD_PT_5C_MSC_REG_5C                          0x5C
#define _P29_AD_PT_5D_MSC_REG_5D                          0x5D
#define _P29_AD_PT_5E_MSC_REG_5E                          0x5E
#define _P29_AD_PT_5F_MSC_REG_5F                          0x5F
#define _P29_FC_PT_00_MISC_CTRL_00                        0x00
#define _P29_FC_PT_01_MISC_CTRL_01                        0x01
#define _P29_FC_PT_02_MISC_CTRL_02                        0x02
#define _P29_FC_PT_03_MISC_CTRL_03                        0x03
#define _P29_FC_PT_04_MISC_CTRL_04                        0x04
#define _P29_FC_PT_08_MISC_CTRL_08                        0x08
#define _P29_FC_PT_09_MISC_CTRL_09                        0x09
#define _P29_FC_PT_0A_MISC_CTRL_0A                        0x0A
#define _P29_FC_PT_0B_MISC_CTRL_0B                        0x0B
#define _P29_FC_PT_0C_MISC_CTRL_0C                        0x0C
#define _P29_FC_PT_0D_MISC_CTRL_0D                        0x0D
#define _P29_FC_PT_0E_MISC_CTRL_0E                        0x0E
#define _P29_FC_PT_10_MISC_CTRL_10                        0x10
#define _P29_FC_PT_11_MISC_CTRL_11                        0x11
#define _P29_FC_PT_12_MISC_CTRL_12                        0x12
#define _P29_FC_PT_13_MISC_CTRL_13                        0x13
#define _P29_FC_PT_14_MISC_CTRL_14                        0x14
#define _P29_FC_PT_15_MISC_CTRL_15                        0x15
#define _P29_FC_PT_16_MISC_CTRL_16                        0x16
#define _P29_FC_PT_17_MISC_CTRL_17                        0x17
#define _P29_FC_PT_18_MISC_CTRL_18                        0x18
#define _P29_FC_PT_20_MISC_CTRL_20                        0x20
#define _P29_FC_PT_21_MISC_CTRL_21                        0x21
#define _P29_FC_PT_22_MISC_CTRL_22                        0x22
#define _P29_FC_PT_23_MISC_CTRL_23                        0x23
#define _P29_FC_PT_24_MISC_CTRL_24                        0x24
#define _P29_FC_PT_25_MISC_CTRL_25                        0x25
#define _P29_FC_PT_26_MISC_CTRL_26                        0x26
#define _P29_FC_PT_27_MISC_CTRL_27                        0x27
#define _P29_FC_PT_30_MISC_CTRL_30                        0x30
#define _P29_FC_PT_31_MISC_CTRL_31                        0x31
#define _P29_FC_PT_32_MISC_CTRL_32                        0x32
#define _P29_FC_PT_40_MISC_CTRL_40                        0x40
#define _P29_FC_PT_41_MISC_CTRL_41                        0x41
#define _P29_FC_PT_42_MISC_CTRL_42                        0x42
#define _P29_FC_PT_45_MISC_CTRL_43                        0x45
#define _P29_FC_PT_46_MISC_CTRL_44                        0x46
#define _P29_FC_PT_47_MISC_CTRL_45                        0x47
#define _P29_FC_PT_48_MISC_CTRL_46                        0x48
#define _P29_FC_PT_49_MISC_CTRL_47                        0x49
#define _P29_FC_PT_4A_MISC_CTRL_48                        0x4A
#define _P29_FC_PT_4B_MISC_CTRL_49                        0x4B


//--------------------------------------------------
// CBUS2 MAC (Page 2A)
//--------------------------------------------------
#define _P2A_AD_PT_00_MSC_REG_00                          0x00
#define _P2A_AD_PT_01_MSC_REG_01                          0x01
#define _P2A_AD_PT_02_MSC_REG_02                          0x02
#define _P2A_AD_PT_03_MSC_REG_03                          0x03
#define _P2A_AD_PT_04_MSC_REG_04                          0x04
#define _P2A_AD_PT_05_MSC_REG_05                          0x05
#define _P2A_AD_PT_06_MSC_REG_06                          0x06
#define _P2A_AD_PT_07_MSC_REG_07                          0x07
#define _P2A_AD_PT_08_MSC_REG_08                          0x08
#define _P2A_AD_PT_09_MSC_REG_09                          0x09
#define _P2A_AD_PT_0A_MSC_REG_0A                          0x0A
#define _P2A_AD_PT_0B_MSC_REG_0B                          0x0B
#define _P2A_AD_PT_0C_MSC_REG_0C                          0x0C
#define _P2A_AD_PT_0D_MSC_REG_0D                          0x0D
#define _P2A_AD_PT_0E_MSC_REG_0E                          0x0E
#define _P2A_AD_PT_0F_MSC_REG_0F                          0x0F
#define _P2A_AD_PT_20_MSC_REG_20                          0x20
#define _P2A_AD_PT_21_MSC_REG_21                          0x21
#define _P2A_AD_PT_22_MSC_REG_22                          0x22
#define _P2A_AD_PT_23_MSC_REG_23                          0x23
#define _P2A_AD_PT_24_MSC_REG_24                          0x24
#define _P2A_AD_PT_25_MSC_REG_25                          0x25
#define _P2A_AD_PT_26_MSC_REG_26                          0x26
#define _P2A_AD_PT_27_MSC_REG_27                          0x27
#define _P2A_AD_PT_30_MSC_REG_30                          0x30
#define _P2A_AD_PT_31_MSC_REG_31                          0x31
#define _P2A_AD_PT_32_MSC_REG_32                          0x32
#define _P2A_AD_PT_33_MSC_REG_33                          0x33
#define _P2A_AD_PT_34_MSC_REG_34                          0x34
#define _P2A_AD_PT_35_MSC_REG_35                          0x35
#define _P2A_AD_PT_36_MSC_REG_36                          0x36
#define _P2A_AD_PT_37_MSC_REG_37                          0x37
#define _P2A_AD_PT_40_MSC_REG_40                          0x40
#define _P2A_AD_PT_41_MSC_REG_41                          0x41
#define _P2A_AD_PT_42_MSC_REG_42                          0x42
#define _P2A_AD_PT_43_MSC_REG_43                          0x43
#define _P2A_AD_PT_44_MSC_REG_44                          0x44
#define _P2A_AD_PT_45_MSC_REG_45                          0x45
#define _P2A_AD_PT_46_MSC_REG_46                          0x46
#define _P2A_AD_PT_47_MSC_REG_47                          0x47
#define _P2A_AD_PT_48_MSC_REG_48                          0x48
#define _P2A_AD_PT_49_MSC_REG_49                          0x49
#define _P2A_AD_PT_4A_MSC_REG_4A                          0x4A
#define _P2A_AD_PT_4B_MSC_REG_4B                          0x4B
#define _P2A_AD_PT_4C_MSC_REG_4C                          0x4C
#define _P2A_AD_PT_4D_MSC_REG_4D                          0x4D
#define _P2A_AD_PT_4E_MSC_REG_4E                          0x4E
#define _P2A_AD_PT_4F_MSC_REG_4F                          0x4F
#define _P2A_AD_PT_50_MSC_REG_50                          0x50
#define _P2A_AD_PT_51_MSC_REG_51                          0x51
#define _P2A_AD_PT_52_MSC_REG_52                          0x52
#define _P2A_AD_PT_53_MSC_REG_53                          0x53
#define _P2A_AD_PT_54_MSC_REG_54                          0x54
#define _P2A_AD_PT_55_MSC_REG_55                          0x55
#define _P2A_AD_PT_56_MSC_REG_56                          0x56
#define _P2A_AD_PT_57_MSC_REG_57                          0x57
#define _P2A_AD_PT_58_MSC_REG_58                          0x58
#define _P2A_AD_PT_59_MSC_REG_59                          0x59
#define _P2A_AD_PT_5A_MSC_REG_5A                          0x5A
#define _P2A_AD_PT_5B_MSC_REG_5B                          0x5B
#define _P2A_AD_PT_5C_MSC_REG_5C                          0x5C
#define _P2A_AD_PT_5D_MSC_REG_5D                          0x5D
#define _P2A_AD_PT_5E_MSC_REG_5E                          0x5E
#define _P2A_AD_PT_5F_MSC_REG_5F                          0x5F
#define _P2A_FC_PT_00_MISC_CTRL_00                        0x00
#define _P2A_FC_PT_01_MISC_CTRL_01                        0x01
#define _P2A_FC_PT_02_MISC_CTRL_02                        0x02
#define _P2A_FC_PT_03_MISC_CTRL_03                        0x03
#define _P2A_FC_PT_04_MISC_CTRL_04                        0x04
#define _P2A_FC_PT_08_MISC_CTRL_08                        0x08
#define _P2A_FC_PT_09_MISC_CTRL_09                        0x09
#define _P2A_FC_PT_0A_MISC_CTRL_0A                        0x0A
#define _P2A_FC_PT_0B_MISC_CTRL_0B                        0x0B
#define _P2A_FC_PT_0C_MISC_CTRL_0C                        0x0C
#define _P2A_FC_PT_0D_MISC_CTRL_0D                        0x0D
#define _P2A_FC_PT_0E_MISC_CTRL_0E                        0x0E
#define _P2A_FC_PT_10_MISC_CTRL_10                        0x10
#define _P2A_FC_PT_11_MISC_CTRL_11                        0x11
#define _P2A_FC_PT_12_MISC_CTRL_12                        0x12
#define _P2A_FC_PT_13_MISC_CTRL_13                        0x13
#define _P2A_FC_PT_14_MISC_CTRL_14                        0x14
#define _P2A_FC_PT_15_MISC_CTRL_15                        0x15
#define _P2A_FC_PT_16_MISC_CTRL_16                        0x16
#define _P2A_FC_PT_17_MISC_CTRL_17                        0x17
#define _P2A_FC_PT_18_MISC_CTRL_18                        0x18
#define _P2A_FC_PT_20_MISC_CTRL_20                        0x20
#define _P2A_FC_PT_21_MISC_CTRL_21                        0x21
#define _P2A_FC_PT_22_MISC_CTRL_22                        0x22
#define _P2A_FC_PT_23_MISC_CTRL_23                        0x23
#define _P2A_FC_PT_24_MISC_CTRL_24                        0x24
#define _P2A_FC_PT_25_MISC_CTRL_25                        0x25
#define _P2A_FC_PT_26_MISC_CTRL_26                        0x26
#define _P2A_FC_PT_27_MISC_CTRL_27                        0x27
#define _P2A_FC_PT_30_MISC_CTRL_30                        0x30
#define _P2A_FC_PT_31_MISC_CTRL_31                        0x31
#define _P2A_FC_PT_32_MISC_CTRL_32                        0x32
#define _P2A_FC_PT_40_MISC_CTRL_40                        0x40
#define _P2A_FC_PT_41_MISC_CTRL_41                        0x41
#define _P2A_FC_PT_42_MISC_CTRL_42                        0x42
#define _P2A_FC_PT_45_MISC_CTRL_43                        0x45
#define _P2A_FC_PT_46_MISC_CTRL_44                        0x46
#define _P2A_FC_PT_47_MISC_CTRL_45                        0x47
#define _P2A_FC_PT_48_MISC_CTRL_46                        0x48
#define _P2A_FC_PT_49_MISC_CTRL_47                        0x49
#define _P2A_FC_PT_4A_MISC_CTRL_48                        0x4A
#define _P2A_FC_PT_4B_MISC_CTRL_49                        0x4B


//--------------------------------------------------
// M2 Scaling Down Control (Page 40)
//--------------------------------------------------
#define _P40_25_PT_00_V_SD_INIT_M2                        0x00
#define _P40_25_PT_01_V_SD_FACTOR_H_M2                    0x01
#define _P40_25_PT_02_V_SD_FACTOR_M_M2                    0x02
#define _P40_25_PT_03_V_SD_FACTOR_L_M2                    0x03
#define _P40_25_PT_04_H_SD_INIT_M2                        0x04
#define _P40_25_PT_05_H_SD_FACTOR_H_M2                    0x05
#define _P40_25_PT_06_H_SD_FACTOR_M_M2                    0x06
#define _P40_25_PT_07_H_SD_FACTOR_L_M2                    0x07
#define _P40_25_PT_08_H_SD_ACC_H_M2                       0x08
#define _P40_25_PT_09_H_SD_ACC_M_M2                       0x09
#define _P40_25_PT_0A_H_SD_ACC_WIDTH_H_M2                 0x0A
#define _P40_25_PT_0B_H_SD_ACC_WIDTH_L_M2                 0x0B
#define _P40_25_PT_0C_SD_FLAT_WIDTH_H_M2                  0x0C
#define _P40_25_PT_0D_SD_FLAT_WIDTH_L_M2                  0x0D
#define _P40_25_PT_0E_H_SD_ACC_L_M2                       0x0E


//--------------------------------------------------
// M2 I Domain Pattern Generator (Page 40)
//--------------------------------------------------
#define _P40_25_PT_10_I_PG_CTRL_0_M2                      0x10
#define _P40_25_PT_11_I_PG_CTRL_1_M2                      0x11
#define _P40_25_PT_12_INITIAL_R_L_M2                      0x12
#define _P40_25_PT_13_INITIAL_G_L_M2                      0x13
#define _P40_25_PT_14_INITIAL_B_L_M2                      0x14
#define _P40_25_PT_15_INITIAL_RGB_M_M2                    0x15
#define _P40_25_PT_16_INITIAL_RGB_H_M2                    0x16
#define _P40_25_PT_17_PATTERN_RESET_M2                    0x17


//--------------------------------------------------
// M2 Scaling Down Control (Page 40)
//--------------------------------------------------
#define _P40_25_PT_36_SD_OUT_WID_M_M2                     0x36
#define _P40_25_PT_37_SD_OUT_WID_L_M2                     0x37
#define _P40_25_PT_38_SD_OUT_LEN_M_M2                     0x38
#define _P40_25_PT_39_SD_OUT_LEN_L_M2                     0x39
#define _P40_25_PT_40_V_SD_INIT_M_M2                      0x40
#define _P40_25_PT_41_V_SD_INIT_L_M2                      0x41
#define _P40_25_PT_42_V_SD_FACTOR_L1_M2                   0x42
#define _P40_25_PT_43_H_SD_INIT_M_M2                      0x43
#define _P40_25_PT_44_H_SD_INIT_L_M2                      0x44
#define _P40_25_PT_45_SD_BIST_CTRL0_M2                    0x45
#define _P40_25_PT_46_SD_BIST_CTRL1_M2                    0x46


//--------------------------------------------------
// M2 Scaling Up Function (Page 40)
//--------------------------------------------------
#define _P40_34_PT_00_HOR_SCALE_FACTOR_H_M2               0x00
#define _P40_34_PT_01_HOR_SCALE_FACTOR_M_M2               0x01
#define _P40_34_PT_02_HOR_SCALE_FACTOR_L_M2               0x02
#define _P40_34_PT_03_VER_SCALE_FACTOR_H_M2               0x03
#define _P40_34_PT_04_VER_SCALE_FACTOR_M_M2               0x04
#define _P40_34_PT_05_VER_SCALE_FACTOR_L_M2               0x05
#define _P40_34_PT_06_HOR_SCALE_FACTOR_SEG1_H_M2          0x06
#define _P40_34_PT_07_HOR_SCALE_FACTOR_SEG1_L_M2          0x07
#define _P40_34_PT_08_HOR_SCALE_FACTOR_SEG2_H_M2          0x08
#define _P40_34_PT_09_HOR_SCALE_FACTOR_SEG2_L_M2          0x09
#define _P40_34_PT_0A_HOR_SCALE_FACTOR_SEG3_H_M2          0x0A
#define _P40_34_PT_0B_HOR_SCALE_FACTOR_SEG3_L_M2          0x0B
#define _P40_34_PT_0C_HOR_SCALE_FACTOR_DELTA1_H_M2        0x0C
#define _P40_34_PT_0D_HOR_SCALE_FACTOR_DELTA1_L_M2        0x0D
#define _P40_34_PT_0E_HOR_SCALE_FACTOR_DELTA2_H_M2        0x0E
#define _P40_34_PT_0F_HOR_SCALE_FACTOR_DELTA2_L_M2        0x0F
#define _P40_34_PT_10_HOR_FILTER_COEF_INI_M2              0x10
#define _P40_34_PT_11_VER_FILTER_COEF_INI_M2              0x11


//--------------------------------------------------
// M2 Back ground color (Page 40)
//--------------------------------------------------
#define _P40_6D_PT_00_BG_COLOR_VALUE_R_M2                 0x00
#define _P40_6D_PT_01_BG_COLOR_VALUE_G_M2                 0x01
#define _P40_6D_PT_02_BG_COLOR_VALUE_B_M2                 0x02
#define _P40_6D_PT_03_BG_COLOR_VALUE_RGB_M2               0x03


//--------------------------------------------------
// Color Conversion 每 RGBtoYCC before IDLTI 12bit In / 12bit Out (Page 40)
//--------------------------------------------------
#define _P40_9D_PT_00_H00_HIGH_BYTE_M2                    0x00
#define _P40_9D_PT_01_H00_MIDDLE_BYTE_M2                  0x01
#define _P40_9D_PT_02_H01_HIGH_BYTE_M2                    0x02
#define _P40_9D_PT_03_H01_MIDDLE_BYTE_M2                  0x03
#define _P40_9D_PT_04_H02_HIGH_BYTE_M2                    0x04
#define _P40_9D_PT_05_H02_MIDDLE_BYTE_M2                  0x05
#define _P40_9D_PT_06_H10_HIGH_BYTE_M2                    0x06
#define _P40_9D_PT_07_H10_MIDDLE_BYTE_M2                  0x07
#define _P40_9D_PT_08_H11_HIGH_BYTE_M2                    0x08
#define _P40_9D_PT_09_H11_MIDDLE_BYTE_M2                  0x09
#define _P40_9D_PT_0A_H12_HIGH_BYTE_M2                    0x0A
#define _P40_9D_PT_0B_H12_MIDDLE_BYTE_M2                  0x0B
#define _P40_9D_PT_0C_H20_HIGH_BYTE_M2                    0x0C
#define _P40_9D_PT_0D_H20_MIDDLE_BYTE_M2                  0x0D
#define _P40_9D_PT_0E_H21_HIGH_BYTE_M2                    0x0E
#define _P40_9D_PT_0F_H21_MIDDLE_BYTE_M2                  0x0F
#define _P40_9D_PT_10_H22_HIGH_BYTE_M2                    0x10
#define _P40_9D_PT_11_H22_MIDDLE_BYTE_M2                  0x11
#define _P40_9D_PT_12_H00_H01_LOW_BYTE_M2                 0x12
#define _P40_9D_PT_13_H02_H10_LOW_BYTE_M2                 0x13
#define _P40_9D_PT_14_H11_H12_LOW_BYTE_M2                 0x14
#define _P40_9D_PT_15_H20_H21_LOW_BYTE_M2                 0x15
#define _P40_9D_PT_16_H22_LOW_BYTE_M2                     0x16


//--------------------------------------------------
// DCC (Page 47)
//--------------------------------------------------
#define _P47_CA_PT_06_PORT_PAGE0_SOFT_CLAMP_S             0x06
#define _P47_CA_PT_00_PORT_PAGE1_DEF_CRV01_H_S            0x00
#define _P47_CA_PT_01_PORT_PAGE1_DEF_CRV02_H_S            0x01
#define _P47_CA_PT_02_PORT_PAGE1_DEF_CRV03_H_S            0x02
#define _P47_CA_PT_03_PORT_PAGE1_DEF_CRV04_H_S            0x03
#define _P47_CA_PT_04_PORT_PAGE1_DEF_CRV05_H_S            0x04
#define _P47_CA_PT_05_PORT_PAGE1_DEF_CRV06_H_S            0x05
#define _P47_CA_PT_06_PORT_PAGE1_DEF_CRV07_H_S            0x06
#define _P47_CA_PT_07_PORT_PAGE1_DEF_CRV08_H_S            0x07
#define _P47_CA_PT_08_PORT_PAGE1_DEF_CRV09_H_S            0x08
#define _P47_CA_PT_09_PORT_PAGE1_DEF_CRV10_H_S            0x09
#define _P47_CA_PT_0A_PORT_PAGE1_DEF_CRV11_H_S            0x0A
#define _P47_CA_PT_0B_PORT_PAGE1_DEF_CRV12_H_S            0x0B
#define _P47_CA_PT_0C_PORT_PAGE1_DEF_CRV13_H_S            0x0C
#define _P47_CA_PT_0D_PORT_PAGE1_DEF_CRV14_H_S            0x0D
#define _P47_CA_PT_0E_PORT_PAGE1_DEF_CRV15_H_S            0x0E
#define _P47_CA_PT_0F_PORT_PAGE1_DEF_CRV16_H_S            0x0F
#define _P47_CA_PT_10_PORT_PAGE1_Y_BL_BIAS_H_S            0x10
#define _P47_CA_PT_11_PORT_PAGE1_Y_WL_BIAS_H_S            0x11
#define _P47_CA_PT_12_PORT_PAGE1_SAT_FACTOR_S             0x12
#define _P47_CA_PT_13_PORT_PAGE1_BLD_UB_H_S               0x13
#define _P47_CA_PT_14_PORT_PAGE1_BLD_LB_H_S               0x14
#define _P47_CA_PT_15_PORT_PAGE1_DEV_FACTOR_H_S           0x15
#define _P47_CA_PT_16_PORT_PAGE1_BLD_VAL_SEL_S            0x16
#define _P47_CA_PT_17_PORT_PAGE1_BLD_VAL_H_S              0x17
#define _P47_CA_PT_1A_PORT_PAGE1_BLD_VAL_L_S              0x1A
#define _P47_CA_PT_1B_PORT_PAGE1_DEF_CRV00_HALF_H_S       0x1B
#define _P47_CA_PT_1C_PORT_PAGE1_DEF_CRV00_HALF_L_S       0x1C
#define _P47_CA_PT_1D_PORT_PAGE1_DEF_CRV01_L_S            0x1D
#define _P47_CA_PT_1E_PORT_PAGE1_DEF_CRV01_HALF_H_S       0x1E
#define _P47_CA_PT_1F_PORT_PAGE1_DEF_CRV01_HALF_L_S       0x1F
#define _P47_CA_PT_20_PORT_PAGE1_DEF_CRV02_L_S            0x20
#define _P47_CA_PT_21_PORT_PAGE1_DEF_CRV02_HALF_H_S       0x21
#define _P47_CA_PT_22_PORT_PAGE1_DEF_CRV02_HALF_L_S       0x22
#define _P47_CA_PT_23_PORT_PAGE1_DEF_CRV03_L_S            0x23
#define _P47_CA_PT_24_PORT_PAGE1_DEF_CRV03_HALF_H_S       0x24
#define _P47_CA_PT_25_PORT_PAGE1_DEF_CRV03_HALF_L_S       0x25
#define _P47_CA_PT_26_PORT_PAGE1_DEF_CRV04_L_S            0x26
#define _P47_CA_PT_27_PORT_PAGE1_DEF_CRV04_HALF_H_S       0x27
#define _P47_CA_PT_28_PORT_PAGE1_DEF_CRV04_HALF_L_S       0x28
#define _P47_CA_PT_29_PORT_PAGE1_DEF_CRV05_L_S            0x29
#define _P47_CA_PT_2A_PORT_PAGE1_DEF_CRV05_HALF_H_S       0x2A
#define _P47_CA_PT_2B_PORT_PAGE1_DEF_CRV05_HALF_L_S       0x2B
#define _P47_CA_PT_2C_PORT_PAGE1_DEF_CRV06_L_S            0x2C
#define _P47_CA_PT_2D_PORT_PAGE1_DEF_CRV06_HALF_H_S       0x2D
#define _P47_CA_PT_2E_PORT_PAGE1_DEF_CRV06_HALF_L_S       0x2E
#define _P47_CA_PT_2F_PORT_PAGE1_DEF_CRV07_L_S            0x2F
#define _P47_CA_PT_30_PORT_PAGE1_DEF_CRV07_HALF_H_S       0x30
#define _P47_CA_PT_31_PORT_PAGE1_DEF_CRV07_HALF_L_S       0x31
#define _P47_CA_PT_32_PORT_PAGE1_DEF_CRV08_L_S            0x32
#define _P47_CA_PT_33_PORT_PAGE1_DEF_CRV08_HALF_H_S       0x33
#define _P47_CA_PT_34_PORT_PAGE1_DEF_CRV08_HALF_L_S       0x34
#define _P47_CA_PT_35_PORT_PAGE1_DEF_CRV09_L_S            0x35
#define _P47_CA_PT_36_PORT_PAGE1_DEF_CRV09_HALF_H_S       0x36
#define _P47_CA_PT_37_PORT_PAGE1_DEF_CRV09_HALF_L_S       0x37
#define _P47_CA_PT_38_PORT_PAGE1_DEF_CRV10_L_S            0x38
#define _P47_CA_PT_39_PORT_PAGE1_DEF_CRV10_HALF_H_S       0x39
#define _P47_CA_PT_3A_PORT_PAGE1_DEF_CRV10_HALF_L_S       0x3A
#define _P47_CA_PT_3B_PORT_PAGE1_DEF_CRV11_L_S            0x3B
#define _P47_CA_PT_3C_PORT_PAGE1_DEF_CRV11_HALF_H_S       0x3C
#define _P47_CA_PT_3D_PORT_PAGE1_DEF_CRV11_HALF_L_S       0x3D
#define _P47_CA_PT_3E_PORT_PAGE1_DEF_CRV12_L_S            0x3E
#define _P47_CA_PT_3F_PORT_PAGE1_DEF_CRV12_HALF_H_S       0x3F
#define _P47_CA_PT_40_PORT_PAGE1_DEF_CRV12_HALF_L_S       0x40
#define _P47_CA_PT_41_PORT_PAGE1_DEF_CRV13_L_S            0x41
#define _P47_CA_PT_42_PORT_PAGE1_DEF_CRV13_HALF_H_S       0x42
#define _P47_CA_PT_43_PORT_PAGE1_DEF_CRV13_HALF_L_S       0x43
#define _P47_CA_PT_44_PORT_PAGE1_DEF_CRV14_L_S            0x44
#define _P47_CA_PT_45_PORT_PAGE1_DEF_CRV14_HALF_H_S       0x45
#define _P47_CA_PT_46_PORT_PAGE1_DEF_CRV14_HALF_L_S       0x46
#define _P47_CA_PT_47_PORT_PAGE1_DEF_CRV15_L_S            0x47
#define _P47_CA_PT_48_PORT_PAGE1_DEF_CRV15_HALF_H_S       0x48
#define _P47_CA_PT_49_PORT_PAGE1_DEF_CRV15_HALF_L_S       0x49
#define _P47_CA_PT_4A_PORT_PAGE1_DEF_CRV16_L_S            0x4A
#define _P47_CA_PT_4B_PORT_PAGE1_Y_BL_BIAS_L_S            0x4B
#define _P47_CA_PT_4C_PORT_PAGE1_Y_WL_BIAS_L_S            0x4C
#define _P47_CA_PT_4D_PORT_PAGE1_BLD_UB_L_S               0x4D
#define _P47_CA_PT_4E_PORT_PAGE1_BLD_LB_L_S               0x4E
#define _P47_CA_PT_4F_PORT_PAGE1_DEV_FACTOR_L_S           0x4F
#define _P47_CA_PT_50_PORT_PAGE1_BLD_RANGE_L_S            0x50


//--------------------------------------------------
// ICM (Page 47)
//--------------------------------------------------
#define _P47_CF_PT_00_PORT_SCMN_SATURATION_SET_1_M2       0x00
#define _P47_CF_PT_01_PORT_SCMN_SATURATION_SET_2_M2       0x01
#define _P47_CF_PT_02_PORT_SCMN_SATURATION_SET_3_M2       0x02
#define _P47_CF_PT_03_PORT_SCMN_RBUF_HUE_H_M2             0x03
#define _P47_CF_PT_04_PORT_SCMN_RBUF_HUE_M_M2             0x04
#define _P47_CF_PT_05_PORT_SCMN_RWID_RANGE_H_M2           0x05
#define _P47_CF_PT_06_PORT_SCMN_RWID_RANGE_M_M2           0x06
#define _P47_CF_PT_07_PORT_SCMN_LWID_RANGE_H_M2           0x07
#define _P47_CF_PT_08_PORT_SCMN_LWID_RANGE_M_M2           0x08
#define _P47_CF_PT_09_PORT_SCMN_LBUF_RANGE_H_M2           0x09
#define _P47_CF_PT_0A_PORT_SCMN_LBUF_RANGE_M_M2           0x0A
#define _P47_CF_PT_0B_PORT_SCMN_MST_D_DU_H_M2             0x0B
#define _P47_CF_PT_0C_PORT_SCMN_MST_D_DV_H_M2             0x0C
#define _P47_CF_PT_0D_PORT_SCMN_MST_C_DU_H_M2             0x0D
#define _P47_CF_PT_0E_PORT_SCMN_MST_C_DV_H_M2             0x0E
#define _P47_CF_PT_0F_PORT_SCMN_MST_B_DU_H_M2             0x0F
#define _P47_CF_PT_10_PORT_SCMN_MST_B_DV_H_M2             0x10
#define _P47_CF_PT_11_PORT_SCMN_MST_A_DU_H_M2             0x11
#define _P47_CF_PT_12_PORT_SCMN_MST_A_DV_H_M2             0x12
#define _P47_CF_PT_13_PORT_SCMN_RWID_D_DU_H_M2            0x13
#define _P47_CF_PT_14_PORT_SCMN_RWID_D_DV_H_M2            0x14
#define _P47_CF_PT_15_PORT_SCMN_RWID_C_DU_H_M2            0x15
#define _P47_CF_PT_16_PORT_SCMN_RWID_C_DV_H_M2            0x16
#define _P47_CF_PT_17_PORT_SCMN_RWID_B_DU_H_M2            0x17
#define _P47_CF_PT_18_PORT_SCMN_RWID_B_DV_H_M2            0x18
#define _P47_CF_PT_19_PORT_SCMN_RWID_A_DU_H_M2            0x19
#define _P47_CF_PT_1A_PORT_SCMN_RWID_A_DV_H_M2            0x1A
#define _P47_CF_PT_1B_PORT_SCMN_LWID_D_DU_H_M2            0x1B
#define _P47_CF_PT_1C_PORT_SCMN_LWID_D_DV_H_M2            0x1C
#define _P47_CF_PT_1D_PORT_SCMN_LWID_C_DU_H_M2            0x1D
#define _P47_CF_PT_1E_PORT_SCMN_LWID_C_DV_H_M2            0x1E
#define _P47_CF_PT_1F_PORT_SCMN_LWID_B_DU_H_M2            0x1F
#define _P47_CF_PT_20_PORT_SCMN_LWID_B_DV_H_M2            0x20
#define _P47_CF_PT_21_PORT_SCMN_LWID_A_DU_H_M2            0x21
#define _P47_CF_PT_22_PORT_SCMN_LWID_A_DV_H_M2            0x22
#define _P47_CF_PT_23_PORT_SCMN_RBUF_D_DU_H_M2            0x23
#define _P47_CF_PT_24_PORT_SCMN_RBUF_D_DV_H_M2            0x24
#define _P47_CF_PT_25_PORT_SCMN_RBUF_C_DU_H_M2            0x25
#define _P47_CF_PT_26_PORT_SCMN_RBUF_C_DV_H_M2            0x26
#define _P47_CF_PT_27_PORT_SCMN_RBUF_B_DU_H_M2            0x27
#define _P47_CF_PT_28_PORT_SCMN_RBUF_B_DV_H_M2            0x28
#define _P47_CF_PT_29_PORT_SCMN_RBUF_A_DU_H_M2            0x29
#define _P47_CF_PT_2A_PORT_SCMN_RBUF_A_DV_H_M2            0x2A
#define _P47_CF_PT_2B_PORT_SCMN_LBUF_D_DU_H_M2            0x2B
#define _P47_CF_PT_2C_PORT_SCMN_LBUF_D_DV_H_M2            0x2C
#define _P47_CF_PT_2D_PORT_SCMN_LBUF_C_DU_H_M2            0x2D
#define _P47_CF_PT_2E_PORT_SCMN_LBUF_C_DV_H_M2            0x2E
#define _P47_CF_PT_2F_PORT_SCMN_LBUF_B_DU_H_M2            0x2F
#define _P47_CF_PT_30_PORT_SCMN_LBUF_B_DV_H_M2            0x30
#define _P47_CF_PT_31_PORT_SCMN_LBUF_A_DU_H_M2            0x31
#define _P47_CF_PT_32_PORT_SCMN_LBUF_A_DV_H_M2            0x32
#define _P47_CF_PT_33_PORT_SCMN_BRI_ENABLE_M2             0x33
#define _P47_CF_PT_34_PORT_SCMN_M_AXIS_DELY_H_M2          0x34
#define _P47_CF_PT_35_PORT_SCMN_M_AXIS_DELY_M_M2          0x35
#define _P47_CF_PT_36_PORT_SCMN_R_AXIS_DELY_H_M2          0x36
#define _P47_CF_PT_37_PORT_SCMN_R_AXIS_DELY_M_M2          0x37
#define _P47_CF_PT_38_PORT_SCMN_L_AXIS_DELY_H_M2          0x38
#define _P47_CF_PT_39_PORT_SCMN_L_AXIS_DELY_M_M2          0x39
#define _P47_CF_PT_3A_PORT_SCMN_RBUF_AXIS_DELY_H_M2       0x3A
#define _P47_CF_PT_3B_PORT_SCMN_RBUF_AXIS_DELY_M_M2       0x3B
#define _P47_CF_PT_3C_PORT_SCMN_LBUF_AXIS_DELY_H_M2       0x3C
#define _P47_CF_PT_3D_PORT_SCMN_LBUF_AXIS_DELY_M_M2       0x3D
#define _P47_CF_PT_3E_PORT_SCMN_BLOCK_DELY_H_M2           0x3E
#define _P47_CF_PT_3F_PORT_SCMN_BLOCK_DELY_M_M2           0x3F
#define _P47_CF_PT_40_PORT_SCMN_MST_DC_DUDV_L_M2          0x40
#define _P47_CF_PT_41_PORT_SCMN_MST_BA_DUDV_L_M2          0x41
#define _P47_CF_PT_42_PORT_SCMN_RWID_DC_DUDV_L_M2         0x42
#define _P47_CF_PT_43_PORT_SCMN_RWID_BA_DUDV_L_M2         0x43
#define _P47_CF_PT_44_PORT_SCMN_LWID_DC_DUDV_L_M2         0x44
#define _P47_CF_PT_45_PORT_SCMN_LWID_BA_DUDV_L_M2         0x45
#define _P47_CF_PT_46_PORT_SCMN_RBUF_DC_DUDV_L_M2         0x46
#define _P47_CF_PT_47_PORT_SCMN_RBUF_BA_DUDV_L_M2         0x47
#define _P47_CF_PT_48_PORT_SCMN_LBUF_DC_DUDV_L_M2         0x48
#define _P47_CF_PT_49_PORT_SCMN_LBUF_BA_DUDV_L_M2         0x49
#define _P47_CF_PT_4A_PORT_SCMN_SATURATION_SET_4_M2       0x4A
#define _P47_CF_PT_4B_PORT_SCMN_RBUF_HUE_L_M2             0x4B
#define _P47_CF_PT_4C_PORT_SCMN_AXIS_DELY1_L_M2           0x4C
#define _P47_CF_PT_4D_PORT_SCMN_AXIS_DELY0_L_M2           0x4D
#define _P47_D3_PT_03_PORT_CMN_MST_00_DU_H_M2             0x03
#define _P47_D3_PT_04_PORT_CMN_MST_00_DV_H_M2             0x04
#define _P47_D3_PT_05_PORT_CMN_MST_01_DU_H_M2             0x05
#define _P47_D3_PT_06_PORT_CMN_MST_01_DV_H_M2             0x06
#define _P47_D3_PT_07_PORT_CMN_MST_02_DU_H_M2             0x07
#define _P47_D3_PT_08_PORT_CMN_MST_02_DV_H_M2             0x08
#define _P47_D3_PT_09_PORT_CMN_MST_03_DU_H_M2             0x09
#define _P47_D3_PT_0A_PORT_CMN_MST_03_DV_H_M2             0x0A
#define _P47_D3_PT_0B_PORT_CMN_MST_04_DU_H_M2             0x0B
#define _P47_D3_PT_0C_PORT_CMN_MST_04_DV_H_M2             0x0C
#define _P47_D3_PT_0D_PORT_CMN_MST_05_DU_H_M2             0x0D
#define _P47_D3_PT_0E_PORT_CMN_MST_05_DV_H_M2             0x0E
#define _P47_D3_PT_0F_PORT_CMN_MST_06_DU_H_M2             0x0F
#define _P47_D3_PT_10_PORT_CMN_MST_06_DV_H_M2             0x10
#define _P47_D3_PT_11_PORT_CMN_MST_07_DU_H_M2             0x11
#define _P47_D3_PT_12_PORT_CMN_MST_07_DV_H_M2             0x12
#define _P47_D3_PT_13_PORT_CMN_RWID_00_DU_H_M2            0x13
#define _P47_D3_PT_14_PORT_CMN_RWID_00_DV_H_M2            0x14
#define _P47_D3_PT_15_PORT_CMN_RWID_01_DU_H_M2            0x15
#define _P47_D3_PT_16_PORT_CMN_RWID_01_DV_H_M2            0x16
#define _P47_D3_PT_17_PORT_CMN_RWID_02_DU_H_M2            0x17
#define _P47_D3_PT_18_PORT_CMN_RWID_02_DV_H_M2            0x18
#define _P47_D3_PT_19_PORT_CMN_RWID_03_DU_H_M2            0x19
#define _P47_D3_PT_1A_PORT_CMN_RWID_03_DV_H_M2            0x1A
#define _P47_D3_PT_1B_PORT_CMN_RWID_04_DU_H_M2            0x1B
#define _P47_D3_PT_1C_PORT_CMN_RWID_04_DV_H_M2            0x1C
#define _P47_D3_PT_1D_PORT_CMN_RWID_05_DU_H_M2            0x1D
#define _P47_D3_PT_1E_PORT_CMN_RWID_05_DV_H_M2            0x1E
#define _P47_D3_PT_1F_PORT_CMN_RWID_06_DU_H_M2            0x1F
#define _P47_D3_PT_20_PORT_CMN_RWID_06_DV_H_M2            0x20
#define _P47_D3_PT_21_PORT_CMN_RWID_07_DU_H_M2            0x21
#define _P47_D3_PT_22_PORT_CMN_RWID_07_DV_H_M2            0x22
#define _P47_D3_PT_23_PORT_CMN_LWID_00_DU_H_M2            0x23
#define _P47_D3_PT_24_PORT_CMN_LWID_00_DV_H_M2            0x24
#define _P47_D3_PT_25_PORT_CMN_LWID_01_DU_H_M2            0x25
#define _P47_D3_PT_26_PORT_CMN_LWID_01_DV_H_M2            0x26
#define _P47_D3_PT_27_PORT_CMN_LWID_02_DU_H_M2            0x27
#define _P47_D3_PT_28_PORT_CMN_LWID_02_DV_H_M2            0x28
#define _P47_D3_PT_29_PORT_CMN_LWID_03_DU_H_M2            0x29
#define _P47_D3_PT_2A_PORT_CMN_LWID_03_DV_H_M2            0x2A
#define _P47_D3_PT_2B_PORT_CMN_LWID_04_DU_H_M2            0x2B
#define _P47_D3_PT_2C_PORT_CMN_LWID_04_DV_H_M2            0x2C
#define _P47_D3_PT_2D_PORT_CMN_LWID_05_DU_H_M2            0x2D
#define _P47_D3_PT_2E_PORT_CMN_LWID_05_DV_H_M2            0x2E
#define _P47_D3_PT_2F_PORT_CMN_LWID_06_DU_H_M2            0x2F
#define _P47_D3_PT_30_PORT_CMN_LWID_06_DV_H_M2            0x30
#define _P47_D3_PT_31_PORT_CMN_LWID_07_DU_H_M2            0x31
#define _P47_D3_PT_32_PORT_CMN_LWID_07_DV_H_M2            0x32
#define _P47_D3_PT_33_PORT_CMN_RBUF_00_DU_H_M2            0x33
#define _P47_D3_PT_34_PORT_CMN_RBUF_00_DV_H_M2            0x34
#define _P47_D3_PT_35_PORT_CMN_RBUF_01_DU_H_M2            0x35
#define _P47_D3_PT_36_PORT_CMN_RBUF_01_DV_H_M2            0x36
#define _P47_D3_PT_37_PORT_CMN_RBUF_02_DU_H_M2            0x37
#define _P47_D3_PT_38_PORT_CMN_RBUF_02_DV_H_M2            0x38
#define _P47_D3_PT_39_PORT_CMN_RBUF_03_DU_H_M2            0x39
#define _P47_D3_PT_3A_PORT_CMN_RBUF_03_DV_H_M2            0x3A
#define _P47_D3_PT_3B_PORT_CMN_RBUF_04_DU_H_M2            0x3B
#define _P47_D3_PT_3C_PORT_CMN_RBUF_04_DV_H_M2            0x3C
#define _P47_D3_PT_3D_PORT_CMN_RBUF_05_DU_H_M2            0x3D
#define _P47_D3_PT_3E_PORT_CMN_RBUF_05_DV_H_M2            0x3E
#define _P47_D3_PT_3F_PORT_CMN_RBUF_06_DU_H_M2            0x3F
#define _P47_D3_PT_40_PORT_CMN_RBUF_06_DV_H_M2            0x40
#define _P47_D3_PT_41_PORT_CMN_RBUF_07_DU_H_M2            0x41
#define _P47_D3_PT_42_PORT_CMN_RBUF_07_DV_H_M2            0x42
#define _P47_D3_PT_43_PORT_CMN_LBUF_00_DU_H_M2            0x43
#define _P47_D3_PT_44_PORT_CMN_LBUF_00_DV_H_M2            0x44
#define _P47_D3_PT_45_PORT_CMN_LBUF_01_DU_H_M2            0x45
#define _P47_D3_PT_46_PORT_CMN_LBUF_01_DV_H_M2            0x46
#define _P47_D3_PT_47_PORT_CMN_LBUF_02_DU_H_M2            0x47
#define _P47_D3_PT_48_PORT_CMN_LBUF_02_DV_H_M2            0x48
#define _P47_D3_PT_49_PORT_CMN_LBUF_03_DU_H_M2            0x49
#define _P47_D3_PT_4A_PORT_CMN_LBUF_03_DV_H_M2            0x4A
#define _P47_D3_PT_4B_PORT_CMN_LBUF_04_DU_H_M2            0x4B
#define _P47_D3_PT_4C_PORT_CMN_LBUF_04_DV_H_M2            0x4C
#define _P47_D3_PT_4D_PORT_CMN_LBUF_05_DU_H_M2            0x4D
#define _P47_D3_PT_4E_PORT_CMN_LBUF_05_DV_H_M2            0x4E
#define _P47_D3_PT_4F_PORT_CMN_LBUF_06_DU_H_M2            0x4F
#define _P47_D3_PT_50_PORT_CMN_LBUF_06_DV_H_M2            0x50
#define _P47_D3_PT_51_PORT_CMN_LBUF_07_DU_H_M2            0x51
#define _P47_D3_PT_52_PORT_CMN_LBUF_07_DV_H_M2            0x52
#define _P47_D3_PT_53_PORT_CMN_MST_UMAX_H_M2              0x53
#define _P47_D3_PT_54_PORT_CMN_MST_UMAX_M_M2              0x54
#define _P47_D3_PT_55_PORT_CMN_RWID_UMAX_H_M2             0x55
#define _P47_D3_PT_56_PORT_CMN_RWID_UMAX_M_M2             0x56
#define _P47_D3_PT_57_PORT_CMN_LWID_UMAX_H_M2             0x57
#define _P47_D3_PT_58_PORT_CMN_LWID_UMAX_M_M2             0x58
#define _P47_D3_PT_59_PORT_CMN_RBUF_UMAX_H_M2             0x59
#define _P47_D3_PT_5A_PORT_CMN_RBUF_UMAX_M_M2             0x5A
#define _P47_D3_PT_5B_PORT_CMN_LBUF_UMAX_H_M2             0x5B
#define _P47_D3_PT_5C_PORT_CMN_LBUF_UMAX_M_M2             0x5C
#define _P47_D3_PT_5D_PORT_CMN_RBUF_HUE_H_M2              0x5D
#define _P47_D3_PT_5E_PORT_CMN_RBUF_HUE_M_M2              0x5E
#define _P47_D3_PT_5F_PORT_CMN_RWID_RANGE_H_M2            0x5F
#define _P47_D3_PT_60_PORT_CMN_RWID_RANGE_M_M2            0x60
#define _P47_D3_PT_61_PORT_CMN_MST_RANGE_H_M2             0x61
#define _P47_D3_PT_62_PORT_CMN_MST_RANGE_M_M2             0x62
#define _P47_D3_PT_63_PORT_CMN_LWID_RANGE_H_M2            0x63
#define _P47_D3_PT_64_PORT_CMN_LWID_RANGE_M_M2            0x64
#define _P47_D3_PT_65_PORT_CMN_LBUF_RANGE_H_M2            0x65
#define _P47_D3_PT_66_PORT_CMN_LBUF_RANGE_M_M2            0x66
#define _P47_D3_PT_67_PORT_CMN_BRI_RANGE_M2               0x67
#define _P47_D3_PT_68_PORT_CMN_BRI_BUF_EN_M2              0x68
#define _P47_D3_PT_69_PORT_CMN_M_AXIS_DELY_H_M2           0x69
#define _P47_D3_PT_6A_PORT_CMN_M_AXIS_DELY_L_M2           0x6A
#define _P47_D3_PT_6B_PORT_CMN_R_AXIS_DELY_H_M2           0x6B
#define _P47_D3_PT_6C_PORT_CMN_R_AXIS_DELY_L_M2           0x6C
#define _P47_D3_PT_6D_PORT_CMN_L_AXIS_DELY_H_M2           0x6D
#define _P47_D3_PT_6E_PORT_CMN_L_AXIS_DELY_L_M2           0x6E
#define _P47_D3_PT_6F_PORT_CMN_MST_00_01_DUDV_L_M2        0x6F
#define _P47_D3_PT_70_PORT_CMN_MST_02_03_DUDV_L_M2        0x70
#define _P47_D3_PT_71_PORT_CMN_MST_04_05_DUDV_L_M2        0x71
#define _P47_D3_PT_72_PORT_CMN_MST_06_07_DUDV_L_M2        0x72
#define _P47_D3_PT_73_PORT_CMN_RWID_00_01_UV_DUDV_L_M2    0x73
#define _P47_D3_PT_74_PORT_CMN_RWID_02_03_DUDV_L_M2       0x74
#define _P47_D3_PT_75_PORT_CMN_RWID_04_05_DUDV_L_M2       0x75
#define _P47_D3_PT_76_PORT_CMN_RWID_06_07_DUDV_L_M2       0x76
#define _P47_D3_PT_77_PORT_CMN_LWID_00_01_DUDV_L_M2       0x77
#define _P47_D3_PT_78_PORT_CMN_LWID_02_03_DUDV_L_M2       0x78
#define _P47_D3_PT_79_PORT_CMN_LWID_04_05_DUDV_L_M2       0x79
#define _P47_D3_PT_7A_PORT_CMN_LWID_06_07_DUDV_L_M2       0x7A
#define _P47_D3_PT_7B_PORT_CMN_RBUF_00_01_DUDV_L_M2       0x7B
#define _P47_D3_PT_7C_PORT_CMN_RBUF_02_03_DUDV_L_M2       0x7C
#define _P47_D3_PT_7D_PORT_CMN_RBUF_04_05_DUDV_L_M2       0x7D
#define _P47_D3_PT_7E_PORT_CMN_RBUF_06_07_DUDV_L_M2       0x7E
#define _P47_D3_PT_7F_PORT_CMN_LBUF_00_01_DUDV_L_M2       0x7F
#define _P47_D3_PT_80_PORT_CMN_LBUF_02_03_DUDV_L_M2       0x80
#define _P47_D3_PT_81_PORT_CMN_LBUF_04_05_DUDV_L_M2       0x81
#define _P47_D3_PT_82_PORT_CMN_LBUF_06_07_DUDV_L_M2       0x82
#define _P47_D3_PT_83_PORT_CMN_MST_WID_UMAX_L_M2          0x83
#define _P47_D3_PT_84_PORT_CMN_BUFFER_UMAX_L_M2           0x84
#define _P47_D3_PT_85_PORT_CMN_HUE_SET1_L_M2              0x85
#define _P47_D3_PT_86_PORT_CMN_HUE_SET0_L_M2              0x86
#define _P47_D3_PT_87_PORT_CMN_AXIS_DELY_L_M2             0x87


//--------------------------------------------------
// CBUS3 MAC (Page 68)
//--------------------------------------------------
#define _P68_AD_PT_00_MSC_REG_00                          0x00
#define _P68_AD_PT_01_MSC_REG_01                          0x01
#define _P68_AD_PT_02_MSC_REG_02                          0x02
#define _P68_AD_PT_03_MSC_REG_03                          0x03
#define _P68_AD_PT_04_MSC_REG_04                          0x04
#define _P68_AD_PT_05_MSC_REG_05                          0x05
#define _P68_AD_PT_06_MSC_REG_06                          0x06
#define _P68_AD_PT_07_MSC_REG_07                          0x07
#define _P68_AD_PT_08_MSC_REG_08                          0x08
#define _P68_AD_PT_09_MSC_REG_09                          0x09
#define _P68_AD_PT_0A_MSC_REG_0A                          0x0A
#define _P68_AD_PT_0B_MSC_REG_0B                          0x0B
#define _P68_AD_PT_0C_MSC_REG_0C                          0x0C
#define _P68_AD_PT_0D_MSC_REG_0D                          0x0D
#define _P68_AD_PT_0E_MSC_REG_0E                          0x0E
#define _P68_AD_PT_0F_MSC_REG_0F                          0x0F
#define _P68_AD_PT_20_MSC_REG_20                          0x20
#define _P68_AD_PT_21_MSC_REG_21                          0x21
#define _P68_AD_PT_22_MSC_REG_22                          0x22
#define _P68_AD_PT_23_MSC_REG_23                          0x23
#define _P68_AD_PT_24_MSC_REG_24                          0x24
#define _P68_AD_PT_25_MSC_REG_25                          0x25
#define _P68_AD_PT_26_MSC_REG_26                          0x26
#define _P68_AD_PT_27_MSC_REG_27                          0x27
#define _P68_AD_PT_30_MSC_REG_30                          0x30
#define _P68_AD_PT_31_MSC_REG_31                          0x31
#define _P68_AD_PT_32_MSC_REG_32                          0x32
#define _P68_AD_PT_33_MSC_REG_33                          0x33
#define _P68_AD_PT_34_MSC_REG_34                          0x34
#define _P68_AD_PT_35_MSC_REG_35                          0x35
#define _P68_AD_PT_36_MSC_REG_36                          0x36
#define _P68_AD_PT_37_MSC_REG_37                          0x37
#define _P68_AD_PT_40_MSC_REG_40                          0x40
#define _P68_AD_PT_41_MSC_REG_41                          0x41
#define _P68_AD_PT_42_MSC_REG_42                          0x42
#define _P68_AD_PT_43_MSC_REG_43                          0x43
#define _P68_AD_PT_44_MSC_REG_44                          0x44
#define _P68_AD_PT_45_MSC_REG_45                          0x45
#define _P68_AD_PT_46_MSC_REG_46                          0x46
#define _P68_AD_PT_47_MSC_REG_47                          0x47
#define _P68_AD_PT_48_MSC_REG_48                          0x48
#define _P68_AD_PT_49_MSC_REG_49                          0x49
#define _P68_AD_PT_4A_MSC_REG_4A                          0x4A
#define _P68_AD_PT_4B_MSC_REG_4B                          0x4B
#define _P68_AD_PT_4C_MSC_REG_4C                          0x4C
#define _P68_AD_PT_4D_MSC_REG_4D                          0x4D
#define _P68_AD_PT_4E_MSC_REG_4E                          0x4E
#define _P68_AD_PT_4F_MSC_REG_4F                          0x4F
#define _P68_AD_PT_50_MSC_REG_50                          0x50
#define _P68_AD_PT_51_MSC_REG_51                          0x51
#define _P68_AD_PT_52_MSC_REG_52                          0x52
#define _P68_AD_PT_53_MSC_REG_53                          0x53
#define _P68_AD_PT_54_MSC_REG_54                          0x54
#define _P68_AD_PT_55_MSC_REG_55                          0x55
#define _P68_AD_PT_56_MSC_REG_56                          0x56
#define _P68_AD_PT_57_MSC_REG_57                          0x57
#define _P68_AD_PT_58_MSC_REG_58                          0x58
#define _P68_AD_PT_59_MSC_REG_59                          0x59
#define _P68_AD_PT_5A_MSC_REG_5A                          0x5A
#define _P68_AD_PT_5B_MSC_REG_5B                          0x5B
#define _P68_AD_PT_5C_MSC_REG_5C                          0x5C
#define _P68_AD_PT_5D_MSC_REG_5D                          0x5D
#define _P68_AD_PT_5E_MSC_REG_5E                          0x5E
#define _P68_AD_PT_5F_MSC_REG_5F                          0x5F
#define _P68_FC_PT_00_MISC_CTRL_00                        0x00
#define _P68_FC_PT_01_MISC_CTRL_01                        0x01
#define _P68_FC_PT_02_MISC_CTRL_02                        0x02
#define _P68_FC_PT_03_MISC_CTRL_03                        0x03
#define _P68_FC_PT_04_MISC_CTRL_04                        0x04
#define _P68_FC_PT_08_MISC_CTRL_08                        0x08
#define _P68_FC_PT_09_MISC_CTRL_09                        0x09
#define _P68_FC_PT_0A_MISC_CTRL_0A                        0x0A
#define _P68_FC_PT_0B_MISC_CTRL_0B                        0x0B
#define _P68_FC_PT_0C_MISC_CTRL_0C                        0x0C
#define _P68_FC_PT_0D_MISC_CTRL_0D                        0x0D
#define _P68_FC_PT_0E_MISC_CTRL_0E                        0x0E
#define _P68_FC_PT_10_MISC_CTRL_10                        0x10
#define _P68_FC_PT_11_MISC_CTRL_11                        0x11
#define _P68_FC_PT_12_MISC_CTRL_12                        0x12
#define _P68_FC_PT_13_MISC_CTRL_13                        0x13
#define _P68_FC_PT_14_MISC_CTRL_14                        0x14
#define _P68_FC_PT_15_MISC_CTRL_15                        0x15
#define _P68_FC_PT_16_MISC_CTRL_16                        0x16
#define _P68_FC_PT_17_MISC_CTRL_17                        0x17
#define _P68_FC_PT_18_MISC_CTRL_18                        0x18
#define _P68_FC_PT_20_MISC_CTRL_20                        0x20
#define _P68_FC_PT_21_MISC_CTRL_21                        0x21
#define _P68_FC_PT_22_MISC_CTRL_22                        0x22
#define _P68_FC_PT_23_MISC_CTRL_23                        0x23
#define _P68_FC_PT_24_MISC_CTRL_24                        0x24
#define _P68_FC_PT_25_MISC_CTRL_25                        0x25
#define _P68_FC_PT_26_MISC_CTRL_26                        0x26
#define _P68_FC_PT_27_MISC_CTRL_27                        0x27
#define _P68_FC_PT_30_MISC_CTRL_30                        0x30
#define _P68_FC_PT_31_MISC_CTRL_31                        0x31
#define _P68_FC_PT_32_MISC_CTRL_32                        0x32
#define _P68_FC_PT_40_MISC_CTRL_40                        0x40
#define _P68_FC_PT_41_MISC_CTRL_41                        0x41
#define _P68_FC_PT_42_MISC_CTRL_42                        0x42
#define _P68_FC_PT_45_MISC_CTRL_43                        0x45
#define _P68_FC_PT_46_MISC_CTRL_44                        0x46
#define _P68_FC_PT_47_MISC_CTRL_45                        0x47
#define _P68_FC_PT_48_MISC_CTRL_46                        0x48
#define _P68_FC_PT_49_MISC_CTRL_47                        0x49
#define _P68_FC_PT_4A_MISC_CTRL_48                        0x4A
#define _P68_FC_PT_4B_MISC_CTRL_49                        0x4B


//--------------------------------------------------
// CBUS4 MAC (Page 69)
//--------------------------------------------------
#define _P69_AD_PT_00_MSC_REG_00                          0x00
#define _P69_AD_PT_01_MSC_REG_01                          0x01
#define _P69_AD_PT_02_MSC_REG_02                          0x02
#define _P69_AD_PT_03_MSC_REG_03                          0x03
#define _P69_AD_PT_04_MSC_REG_04                          0x04
#define _P69_AD_PT_05_MSC_REG_05                          0x05
#define _P69_AD_PT_06_MSC_REG_06                          0x06
#define _P69_AD_PT_07_MSC_REG_07                          0x07
#define _P69_AD_PT_08_MSC_REG_08                          0x08
#define _P69_AD_PT_09_MSC_REG_09                          0x09
#define _P69_AD_PT_0A_MSC_REG_0A                          0x0A
#define _P69_AD_PT_0B_MSC_REG_0B                          0x0B
#define _P69_AD_PT_0C_MSC_REG_0C                          0x0C
#define _P69_AD_PT_0D_MSC_REG_0D                          0x0D
#define _P69_AD_PT_0E_MSC_REG_0E                          0x0E
#define _P69_AD_PT_0F_MSC_REG_0F                          0x0F
#define _P69_AD_PT_20_MSC_REG_20                          0x20
#define _P69_AD_PT_21_MSC_REG_21                          0x21
#define _P69_AD_PT_22_MSC_REG_22                          0x22
#define _P69_AD_PT_23_MSC_REG_23                          0x23
#define _P69_AD_PT_24_MSC_REG_24                          0x24
#define _P69_AD_PT_25_MSC_REG_25                          0x25
#define _P69_AD_PT_26_MSC_REG_26                          0x26
#define _P69_AD_PT_27_MSC_REG_27                          0x27
#define _P69_AD_PT_30_MSC_REG_30                          0x30
#define _P69_AD_PT_31_MSC_REG_31                          0x31
#define _P69_AD_PT_32_MSC_REG_32                          0x32
#define _P69_AD_PT_33_MSC_REG_33                          0x33
#define _P69_AD_PT_34_MSC_REG_34                          0x34
#define _P69_AD_PT_35_MSC_REG_35                          0x35
#define _P69_AD_PT_36_MSC_REG_36                          0x36
#define _P69_AD_PT_37_MSC_REG_37                          0x37
#define _P69_AD_PT_40_MSC_REG_40                          0x40
#define _P69_AD_PT_41_MSC_REG_41                          0x41
#define _P69_AD_PT_42_MSC_REG_42                          0x42
#define _P69_AD_PT_43_MSC_REG_43                          0x43
#define _P69_AD_PT_44_MSC_REG_44                          0x44
#define _P69_AD_PT_45_MSC_REG_45                          0x45
#define _P69_AD_PT_46_MSC_REG_46                          0x46
#define _P69_AD_PT_47_MSC_REG_47                          0x47
#define _P69_AD_PT_48_MSC_REG_48                          0x48
#define _P69_AD_PT_49_MSC_REG_49                          0x49
#define _P69_AD_PT_4A_MSC_REG_4A                          0x4A
#define _P69_AD_PT_4B_MSC_REG_4B                          0x4B
#define _P69_AD_PT_4C_MSC_REG_4C                          0x4C
#define _P69_AD_PT_4D_MSC_REG_4D                          0x4D
#define _P69_AD_PT_4E_MSC_REG_4E                          0x4E
#define _P69_AD_PT_4F_MSC_REG_4F                          0x4F
#define _P69_AD_PT_50_MSC_REG_50                          0x50
#define _P69_AD_PT_51_MSC_REG_51                          0x51
#define _P69_AD_PT_52_MSC_REG_52                          0x52
#define _P69_AD_PT_53_MSC_REG_53                          0x53
#define _P69_AD_PT_54_MSC_REG_54                          0x54
#define _P69_AD_PT_55_MSC_REG_55                          0x55
#define _P69_AD_PT_56_MSC_REG_56                          0x56
#define _P69_AD_PT_57_MSC_REG_57                          0x57
#define _P69_AD_PT_58_MSC_REG_58                          0x58
#define _P69_AD_PT_59_MSC_REG_59                          0x59
#define _P69_AD_PT_5A_MSC_REG_5A                          0x5A
#define _P69_AD_PT_5B_MSC_REG_5B                          0x5B
#define _P69_AD_PT_5C_MSC_REG_5C                          0x5C
#define _P69_AD_PT_5D_MSC_REG_5D                          0x5D
#define _P69_AD_PT_5E_MSC_REG_5E                          0x5E
#define _P69_AD_PT_5F_MSC_REG_5F                          0x5F
#define _P69_FC_PT_00_MISC_CTRL_00                        0x00
#define _P69_FC_PT_01_MISC_CTRL_01                        0x01
#define _P69_FC_PT_02_MISC_CTRL_02                        0x02
#define _P69_FC_PT_03_MISC_CTRL_03                        0x03
#define _P69_FC_PT_04_MISC_CTRL_04                        0x04
#define _P69_FC_PT_08_MISC_CTRL_08                        0x08
#define _P69_FC_PT_09_MISC_CTRL_09                        0x09
#define _P69_FC_PT_0A_MISC_CTRL_0A                        0x0A
#define _P69_FC_PT_0B_MISC_CTRL_0B                        0x0B
#define _P69_FC_PT_0C_MISC_CTRL_0C                        0x0C
#define _P69_FC_PT_0D_MISC_CTRL_0D                        0x0D
#define _P69_FC_PT_0E_MISC_CTRL_0E                        0x0E
#define _P69_FC_PT_10_MISC_CTRL_10                        0x10
#define _P69_FC_PT_11_MISC_CTRL_11                        0x11
#define _P69_FC_PT_12_MISC_CTRL_12                        0x12
#define _P69_FC_PT_13_MISC_CTRL_13                        0x13
#define _P69_FC_PT_14_MISC_CTRL_14                        0x14
#define _P69_FC_PT_15_MISC_CTRL_15                        0x15
#define _P69_FC_PT_16_MISC_CTRL_16                        0x16
#define _P69_FC_PT_17_MISC_CTRL_17                        0x17
#define _P69_FC_PT_18_MISC_CTRL_18                        0x18
#define _P69_FC_PT_20_MISC_CTRL_20                        0x20
#define _P69_FC_PT_21_MISC_CTRL_21                        0x21
#define _P69_FC_PT_22_MISC_CTRL_22                        0x22
#define _P69_FC_PT_23_MISC_CTRL_23                        0x23
#define _P69_FC_PT_24_MISC_CTRL_24                        0x24
#define _P69_FC_PT_25_MISC_CTRL_25                        0x25
#define _P69_FC_PT_26_MISC_CTRL_26                        0x26
#define _P69_FC_PT_27_MISC_CTRL_27                        0x27
#define _P69_FC_PT_30_MISC_CTRL_30                        0x30
#define _P69_FC_PT_31_MISC_CTRL_31                        0x31
#define _P69_FC_PT_32_MISC_CTRL_32                        0x32
#define _P69_FC_PT_40_MISC_CTRL_40                        0x40
#define _P69_FC_PT_41_MISC_CTRL_41                        0x41
#define _P69_FC_PT_42_MISC_CTRL_42                        0x42
#define _P69_FC_PT_45_MISC_CTRL_43                        0x45
#define _P69_FC_PT_46_MISC_CTRL_44                        0x46
#define _P69_FC_PT_47_MISC_CTRL_45                        0x47
#define _P69_FC_PT_48_MISC_CTRL_46                        0x48
#define _P69_FC_PT_49_MISC_CTRL_47                        0x49
#define _P69_FC_PT_4A_MISC_CTRL_48                        0x4A
#define _P69_FC_PT_4B_MISC_CTRL_49                        0x4B


//--------------------------------------------------
// CBUS5 MAC (Page 6A)
//--------------------------------------------------
#define _P6A_AD_PT_00_MSC_REG_00                          0x00
#define _P6A_AD_PT_01_MSC_REG_01                          0x01
#define _P6A_AD_PT_02_MSC_REG_02                          0x02
#define _P6A_AD_PT_03_MSC_REG_03                          0x03
#define _P6A_AD_PT_04_MSC_REG_04                          0x04
#define _P6A_AD_PT_05_MSC_REG_05                          0x05
#define _P6A_AD_PT_06_MSC_REG_06                          0x06
#define _P6A_AD_PT_07_MSC_REG_07                          0x07
#define _P6A_AD_PT_08_MSC_REG_08                          0x08
#define _P6A_AD_PT_09_MSC_REG_09                          0x09
#define _P6A_AD_PT_0A_MSC_REG_0A                          0x0A
#define _P6A_AD_PT_0B_MSC_REG_0B                          0x0B
#define _P6A_AD_PT_0C_MSC_REG_0C                          0x0C
#define _P6A_AD_PT_0D_MSC_REG_0D                          0x0D
#define _P6A_AD_PT_0E_MSC_REG_0E                          0x0E
#define _P6A_AD_PT_0F_MSC_REG_0F                          0x0F
#define _P6A_AD_PT_20_MSC_REG_20                          0x20
#define _P6A_AD_PT_21_MSC_REG_21                          0x21
#define _P6A_AD_PT_22_MSC_REG_22                          0x22
#define _P6A_AD_PT_23_MSC_REG_23                          0x23
#define _P6A_AD_PT_24_MSC_REG_24                          0x24
#define _P6A_AD_PT_25_MSC_REG_25                          0x25
#define _P6A_AD_PT_26_MSC_REG_26                          0x26
#define _P6A_AD_PT_27_MSC_REG_27                          0x27
#define _P6A_AD_PT_30_MSC_REG_30                          0x30
#define _P6A_AD_PT_31_MSC_REG_31                          0x31
#define _P6A_AD_PT_32_MSC_REG_32                          0x32
#define _P6A_AD_PT_33_MSC_REG_33                          0x33
#define _P6A_AD_PT_34_MSC_REG_34                          0x34
#define _P6A_AD_PT_35_MSC_REG_35                          0x35
#define _P6A_AD_PT_36_MSC_REG_36                          0x36
#define _P6A_AD_PT_37_MSC_REG_37                          0x37
#define _P6A_AD_PT_40_MSC_REG_40                          0x40
#define _P6A_AD_PT_41_MSC_REG_41                          0x41
#define _P6A_AD_PT_42_MSC_REG_42                          0x42
#define _P6A_AD_PT_43_MSC_REG_43                          0x43
#define _P6A_AD_PT_44_MSC_REG_44                          0x44
#define _P6A_AD_PT_45_MSC_REG_45                          0x45
#define _P6A_AD_PT_46_MSC_REG_46                          0x46
#define _P6A_AD_PT_47_MSC_REG_47                          0x47
#define _P6A_AD_PT_48_MSC_REG_48                          0x48
#define _P6A_AD_PT_49_MSC_REG_49                          0x49
#define _P6A_AD_PT_4A_MSC_REG_4A                          0x4A
#define _P6A_AD_PT_4B_MSC_REG_4B                          0x4B
#define _P6A_AD_PT_4C_MSC_REG_4C                          0x4C
#define _P6A_AD_PT_4D_MSC_REG_4D                          0x4D
#define _P6A_AD_PT_4E_MSC_REG_4E                          0x4E
#define _P6A_AD_PT_4F_MSC_REG_4F                          0x4F
#define _P6A_AD_PT_50_MSC_REG_50                          0x50
#define _P6A_AD_PT_51_MSC_REG_51                          0x51
#define _P6A_AD_PT_52_MSC_REG_52                          0x52
#define _P6A_AD_PT_53_MSC_REG_53                          0x53
#define _P6A_AD_PT_54_MSC_REG_54                          0x54
#define _P6A_AD_PT_55_MSC_REG_55                          0x55
#define _P6A_AD_PT_56_MSC_REG_56                          0x56
#define _P6A_AD_PT_57_MSC_REG_57                          0x57
#define _P6A_AD_PT_58_MSC_REG_58                          0x58
#define _P6A_AD_PT_59_MSC_REG_59                          0x59
#define _P6A_AD_PT_5A_MSC_REG_5A                          0x5A
#define _P6A_AD_PT_5B_MSC_REG_5B                          0x5B
#define _P6A_AD_PT_5C_MSC_REG_5C                          0x5C
#define _P6A_AD_PT_5D_MSC_REG_5D                          0x5D
#define _P6A_AD_PT_5E_MSC_REG_5E                          0x5E
#define _P6A_AD_PT_5F_MSC_REG_5F                          0x5F
#define _P6A_FC_PT_00_MISC_CTRL_00                        0x00
#define _P6A_FC_PT_01_MISC_CTRL_01                        0x01
#define _P6A_FC_PT_02_MISC_CTRL_02                        0x02
#define _P6A_FC_PT_03_MISC_CTRL_03                        0x03
#define _P6A_FC_PT_04_MISC_CTRL_04                        0x04
#define _P6A_FC_PT_08_MISC_CTRL_08                        0x08
#define _P6A_FC_PT_09_MISC_CTRL_09                        0x09
#define _P6A_FC_PT_0A_MISC_CTRL_0A                        0x0A
#define _P6A_FC_PT_0B_MISC_CTRL_0B                        0x0B
#define _P6A_FC_PT_0C_MISC_CTRL_0C                        0x0C
#define _P6A_FC_PT_0D_MISC_CTRL_0D                        0x0D
#define _P6A_FC_PT_0E_MISC_CTRL_0E                        0x0E
#define _P6A_FC_PT_10_MISC_CTRL_10                        0x10
#define _P6A_FC_PT_11_MISC_CTRL_11                        0x11
#define _P6A_FC_PT_12_MISC_CTRL_12                        0x12
#define _P6A_FC_PT_13_MISC_CTRL_13                        0x13
#define _P6A_FC_PT_14_MISC_CTRL_14                        0x14
#define _P6A_FC_PT_15_MISC_CTRL_15                        0x15
#define _P6A_FC_PT_16_MISC_CTRL_16                        0x16
#define _P6A_FC_PT_17_MISC_CTRL_17                        0x17
#define _P6A_FC_PT_18_MISC_CTRL_18                        0x18
#define _P6A_FC_PT_20_MISC_CTRL_20                        0x20
#define _P6A_FC_PT_21_MISC_CTRL_21                        0x21
#define _P6A_FC_PT_22_MISC_CTRL_22                        0x22
#define _P6A_FC_PT_23_MISC_CTRL_23                        0x23
#define _P6A_FC_PT_24_MISC_CTRL_24                        0x24
#define _P6A_FC_PT_25_MISC_CTRL_25                        0x25
#define _P6A_FC_PT_26_MISC_CTRL_26                        0x26
#define _P6A_FC_PT_27_MISC_CTRL_27                        0x27
#define _P6A_FC_PT_30_MISC_CTRL_30                        0x30
#define _P6A_FC_PT_31_MISC_CTRL_31                        0x31
#define _P6A_FC_PT_32_MISC_CTRL_32                        0x32
#define _P6A_FC_PT_40_MISC_CTRL_40                        0x40
#define _P6A_FC_PT_41_MISC_CTRL_41                        0x41
#define _P6A_FC_PT_42_MISC_CTRL_42                        0x42
#define _P6A_FC_PT_45_MISC_CTRL_43                        0x45
#define _P6A_FC_PT_46_MISC_CTRL_44                        0x46
#define _P6A_FC_PT_47_MISC_CTRL_45                        0x47
#define _P6A_FC_PT_48_MISC_CTRL_46                        0x48
#define _P6A_FC_PT_49_MISC_CTRL_47                        0x49
#define _P6A_FC_PT_4A_MISC_CTRL_48                        0x4A
#define _P6A_FC_PT_4B_MISC_CTRL_49                        0x4B


//--------------------------------------------------
// HDMI2.0 Function (Page 70)
//--------------------------------------------------
#define _P70_3A_PT_01_PORT_PAGE70_HDMI_SCDC_01            0x01
#define _P70_3A_PT_02_PORT_PAGE70_HDMI_SCDC_02            0x02
#define _P70_3A_PT_10_PORT_PAGE70_HDMI_SCDC_10            0x10
#define _P70_3A_PT_11_PORT_PAGE70_HDMI_SCDC_11            0x11
#define _P70_3A_PT_20_PORT_PAGE70_HDMI_SCDC_20            0x20
#define _P70_3A_PT_21_PORT_PAGE70_HDMI_SCDC_21            0x21
#define _P70_3A_PT_30_PORT_PAGE70_HDMI_SCDC_30            0x30
#define _P70_3A_PT_40_PORT_PAGE70_HDMI_SCDC_40            0x40
#define _P70_3A_PT_41_PORT_PAGE70_HDMI_SCDC_41            0x41
#define _P70_3A_PT_50_PORT_PAGE70_HDMI_SCDC_50            0x50
#define _P70_3A_PT_51_PORT_PAGE70_HDMI_SCDC_51            0x51
#define _P70_3A_PT_52_PORT_PAGE70_HDMI_SCDC_52            0x52
#define _P70_3A_PT_53_PORT_PAGE70_HDMI_SCDC_53            0x53
#define _P70_3A_PT_54_PORT_PAGE70_HDMI_SCDC_54            0x54
#define _P70_3A_PT_55_PORT_PAGE70_HDMI_SCDC_55            0x55
#define _P70_3A_PT_56_PORT_PAGE70_HDMI_SCDC_56            0x56
#define _P70_3A_PT_C0_PORT_PAGE70_HDMI_SCDC_C0            0xC0
#define _P70_3A_PT_D0_PORT_PAGE70_HDMI_SCDC_D0            0xD0
#define _P70_3A_PT_D1_PORT_PAGE70_HDMI_SCDC_D1            0xD1
#define _P70_3A_PT_D2_PORT_PAGE70_HDMI_SCDC_D2            0xD2
#define _P70_3A_PT_D3_PORT_PAGE70_HDMI_SCDC_D3            0xD3
#define _P70_3A_PT_D4_PORT_PAGE70_HDMI_SCDC_D4            0xD4
#define _P70_3A_PT_D5_PORT_PAGE70_HDMI_SCDC_D5            0xD5
#define _P70_3A_PT_D6_PORT_PAGE70_HDMI_SCDC_D6            0xD6
#define _P70_3A_PT_D7_PORT_PAGE70_HDMI_SCDC_D7            0xD7
#define _P70_3A_PT_D8_PORT_PAGE70_HDMI_SCDC_D8            0xD8
#define _P70_3A_PT_D9_PORT_PAGE70_HDMI_SCDC_D9            0xD9
#define _P70_3A_PT_DA_PORT_PAGE70_HDMI_SCDC_DA            0xDA
#define _P70_3A_PT_DB_PORT_PAGE70_HDMI_SCDC_DB            0xDB
#define _P70_3A_PT_DC_PORT_PAGE70_HDMI_SCDC_DC            0xDC
#define _P70_3A_PT_DD_PORT_PAGE70_HDMI_SCDC_DD            0xDD
#define _P70_3A_PT_DE_PORT_PAGE70_HDMI_SCDC_DE            0xDE
#define _P70_3A_PT_DF_PORT_PAGE70_HDMI_SCDC_DF            0xDF
#define _P70_3A_PT_E0_PORT_PAGE70_HDMI_SCDC_E0            0xE0
#define _P70_3A_PT_E1_PORT_PAGE70_HDMI_SCDC_E1            0xE1
#define _P70_3A_PT_E2_PORT_PAGE70_HDMI_SCDC_E2            0xE2
#define _P70_3A_PT_E3_PORT_PAGE70_HDMI_SCDC_E3            0xE3
#define _P70_3A_PT_E4_PORT_PAGE70_HDMI_SCDC_E4            0xE4
#define _P70_3A_PT_E5_PORT_PAGE70_HDMI_SCDC_E5            0xE5
#define _P70_3A_PT_E6_PORT_PAGE70_HDMI_SCDC_E6            0xE6
#define _P70_3A_PT_E7_PORT_PAGE70_HDMI_SCDC_E7            0xE7
#define _P70_3A_PT_E8_PORT_PAGE70_HDMI_SCDC_E8            0xE8
#define _P70_3A_PT_E9_PORT_PAGE70_HDMI_SCDC_E9            0xE9
#define _P70_3A_PT_EA_PORT_PAGE70_HDMI_SCDC_EA            0xEA
#define _P70_3A_PT_EB_PORT_PAGE70_HDMI_SCDC_EB            0xEB
#define _P70_3A_PT_EC_PORT_PAGE70_HDMI_SCDC_EC            0xEC
#define _P70_3A_PT_ED_PORT_PAGE70_HDMI_SCDC_ED            0xED
#define _P70_3A_PT_EE_PORT_PAGE70_HDMI_SCDC_EE            0xEE
#define _P70_3A_PT_EF_PORT_PAGE70_HDMI_SCDC_EF            0xEF
#define _P70_3A_PT_F0_PORT_PAGE70_HDMI_SCDC_F0            0xF0
#define _P70_3A_PT_F1_PORT_PAGE70_HDMI_SCDC_F1            0xF1
#define _P70_3A_PT_F2_PORT_PAGE70_HDMI_SCDC_F2            0xF2
#define _P70_3A_PT_F3_PORT_PAGE70_HDMI_SCDC_F3            0xF3
#define _P70_3A_PT_F4_PORT_PAGE70_HDMI_SCDC_F4            0xF4
#define _P70_3A_PT_F5_PORT_PAGE70_HDMI_SCDC_F5            0xF5
#define _P70_3A_PT_F6_PORT_PAGE70_HDMI_SCDC_F6            0xF6
#define _P70_3A_PT_F7_PORT_PAGE70_HDMI_SCDC_F7            0xF7
#define _P70_3A_PT_F8_PORT_PAGE70_HDMI_SCDC_F8            0xF8
#define _P70_3A_PT_F9_PORT_PAGE70_HDMI_SCDC_F9            0xF9
#define _P70_3A_PT_FA_PORT_PAGE70_HDMI_SCDC_FA            0xFA
#define _P70_3A_PT_FB_PORT_PAGE70_HDMI_SCDC_FB            0xFB
#define _P70_3A_PT_FC_PORT_PAGE70_HDMI_SCDC_FC            0xFC
#define _P70_3A_PT_FD_PORT_PAGE70_HDMI_SCDC_FD            0xFD
#define _P70_3A_PT_FE_PORT_PAGE70_HDMI_SCDC_FE            0xFE
#define _P70_3A_PT_FF_PORT_PAGE70_HDMI_SCDC_FF            0xFF
#define _P70_C4_PT_00_PORT_PAGE70_BKSV0                   0x00
#define _P70_C4_PT_01_PORT_PAGE70_BKSV1                   0x01
#define _P70_C4_PT_02_PORT_PAGE70_BKSV2                   0x02
#define _P70_C4_PT_03_PORT_PAGE70_BKSV3                   0x03
#define _P70_C4_PT_04_PORT_PAGE70_BKSV4                   0x04
#define _P70_C4_PT_08_PORT_PAGE70_RI0                     0x08
#define _P70_C4_PT_09_PORT_PAGE70_RI1                     0x09
#define _P70_C4_PT_0A_PORT_PAGE70_PJ                      0x0A
#define _P70_C4_PT_10_PORT_PAGE70_AKSV0                   0x10
#define _P70_C4_PT_11_PORT_PAGE70_AKSV1                   0x11
#define _P70_C4_PT_12_PORT_PAGE70_AKSV2                   0x12
#define _P70_C4_PT_13_PORT_PAGE70_AKSV3                   0x13
#define _P70_C4_PT_14_PORT_PAGE70_AKSV4                   0x14
#define _P70_C4_PT_15_PORT_PAGE70_AINFO                   0x15
#define _P70_C4_PT_18_PORT_PAGE70_AN0                     0x18
#define _P70_C4_PT_19_PORT_PAGE70_AN1                     0x19
#define _P70_C4_PT_1A_PORT_PAGE70_AN2                     0x1A
#define _P70_C4_PT_1B_PORT_PAGE70_AN3                     0x1B
#define _P70_C4_PT_1C_PORT_PAGE70_AN4                     0x1C
#define _P70_C4_PT_1D_PORT_PAGE70_AN5                     0x1D
#define _P70_C4_PT_1E_PORT_PAGE70_AN6                     0x1E
#define _P70_C4_PT_1F_PORT_PAGE70_AN7                     0x1F
#define _P70_C4_PT_40_PORT_PAGE70_BCAPS                   0x40
#define _P70_C4_PT_41_PORT_PAGE70_BSTATUS                 0x41
#define _P70_C4_PT_43_PORT_PAGE70_KSV_FIFO                0x43
#define _P70_C4_PT_C0_PORT_PAGE70_HDCP_FCR                0xC0
#define _P70_C4_PT_C1_PORT_PAGE70_HDCP_SIR                0xC1
#define _P70_C4_PT_C2_PORT_PAGE70_HDCP_SLAVE_ADD          0xC2
#define _P70_CA_PT_00_PORT_PAGE70_HDMI_SCR                0x00
#define _P70_CA_PT_01_PORT_PAGE70_HDMI_N_VAL              0x01
#define _P70_CA_PT_02_PORT_PAGE70_HDMI_BCHCR              0x02
#define _P70_CA_PT_03_PORT_PAGE70_HDMI_AFCR               0x03
#define _P70_CA_PT_04_PORT_PAGE70_HDMI_AFSR               0x04
#define _P70_CA_PT_05_PORT_PAGE70_HDMI_MAGCR1             0x05
#define _P70_CA_PT_06_PORT_PAGE70_HDMI_MAGCR2             0x06
#define _P70_CA_PT_07_PORT_PAGE70_HDMI_MAG_M_FINAL        0x07
#define _P70_CA_PT_08_PORT_PAGE70_HDMI_MAG_L_FINAL        0x08
#define _P70_CA_PT_09_PORT_PAGE70_HDMI_MAG_R_FINAL        0x09
#define _P70_CA_PT_0A_PORT_PAGE70_AUDIO_LD_P_TIME_M       0x0A
#define _P70_CA_PT_0B_PORT_PAGE70_AUDIO_LD_P_TIME_N       0x0B
#define _P70_CA_PT_0C_PORT_PAGE70_ZCD_CTRL                0x0C
#define _P70_CA_PT_0D_PORT_PAGE70_ZCD_TIMEOUT             0x0D
#define _P70_CA_PT_0E_PORT_PAGE70_ZCD_STATUS              0x0E
#define _P70_CA_PT_10_PORT_PAGE70_HDMI_CMCR               0x10
#define _P70_CA_PT_11_PORT_PAGE70_HDMI_MCAPR              0x11
#define _P70_CA_PT_12_PORT_PAGE70_HDMI_SCAPR              0x12
#define _P70_CA_PT_13_PORT_PAGE70_HDMI_DCAPR0             0x13
#define _P70_CA_PT_14_PORT_PAGE70_HDMI_DCAPR1             0x14
#define _P70_CA_PT_15_PORT_PAGE70_HDMI_PSCR               0x15
#define _P70_CA_PT_16_PORT_PAGE70_HDMI_FDDR               0x16
#define _P70_CA_PT_17_PORT_PAGE70_HDMI_FDDF               0x17
#define _P70_CA_PT_18_PORT_PAGE70_HDMI_MFDDR              0x18
#define _P70_CA_PT_19_PORT_PAGE70_HDMI_MFDDF              0x19
#define _P70_CA_PT_1A_PORT_PAGE70_HDMI_FTR                0x1A
#define _P70_CA_PT_1B_PORT_PAGE70_HDMI_FBR                0x1B
#define _P70_CA_PT_1C_PORT_PAGE70_HDMI_ICPSNCR0           0x1C
#define _P70_CA_PT_1D_PORT_PAGE70_HDMI_ICPSNCR1           0x1D
#define _P70_CA_PT_1E_PORT_PAGE70_HDMI_PCPSNCR0           0x1E
#define _P70_CA_PT_1F_PORT_PAGE70_HDMI_PCPSNCR1           0x1F
#define _P70_CA_PT_20_PORT_PAGE70_HDMI_ICTPSR0            0x20
#define _P70_CA_PT_21_PORT_PAGE70_HDMI_ICTPSR1            0x21
#define _P70_CA_PT_22_PORT_PAGE70_HDMI_PCTPSR0            0x22
#define _P70_CA_PT_23_PORT_PAGE70_HDMI_PCTPSR1            0x23
#define _P70_CA_PT_24_PORT_PAGE70_HDMI_ICBPSR0            0x24
#define _P70_CA_PT_25_PORT_PAGE70_HDMI_ICBPSR1            0x25
#define _P70_CA_PT_26_PORT_PAGE70_HDMI_PCBPSR0            0x26
#define _P70_CA_PT_27_PORT_PAGE70_HDMI_PCBPSR1            0x27
#define _P70_CA_PT_28_PORT_PAGE70_HDMI_NTX1024TR0         0x28
#define _P70_CA_PT_29_PORT_PAGE70_HDMI_NTX1024TR1         0x29
#define _P70_CA_PT_2A_PORT_PAGE70_HDMI_STBPR              0x2A
#define _P70_CA_PT_2B_PORT_PAGE70_HDMI_NCPER              0x2B
#define _P70_CA_PT_2C_PORT_PAGE70_HDMI_PETR               0x2C
#define _P70_CA_PT_2D_PORT_PAGE70_HDMI_AAPNR              0x2D
#define _P70_CA_PT_2E_PORT_PAGE70_HDMI_APDMCR             0x2E
#define _P70_CA_PT_30_PORT_PAGE70_HDMI_AVMCR              0x30
#define _P70_CA_PT_31_PORT_PAGE70_HDMI_WDCR0              0x31
#define _P70_CA_PT_32_PORT_PAGE70_HDMI_WDCR1              0x32
#define _P70_CA_PT_33_PORT_PAGE70_HDMI_WDCR2              0x33
#define _P70_CA_PT_34_PORT_PAGE70_HDMI_DBCR               0x34
#define _P70_CA_PT_35_PORT_PAGE70_HDMI_APTMCR0            0x35
#define _P70_CA_PT_36_PORT_PAGE70_HDMI_APTMCR1            0x36
#define _P70_CA_PT_38_PORT_PAGE70_HDMI_DPCR0              0x38
#define _P70_CA_PT_39_PORT_PAGE70_HDMI_DPCR1              0x39
#define _P70_CA_PT_3A_PORT_PAGE70_HDMI_DPCR2              0x3A
#define _P70_CA_PT_3B_PORT_PAGE70_HDMI_DPCR3              0x3B
#define _P70_CA_PT_3C_PORT_PAGE70_HDMI_SUMCM              0x3C
#define _P70_CA_PT_3D_PORT_PAGE70_HDMI_SUMCL              0x3D
#define _P70_CA_PT_3E_PORT_PAGE70_DPLL_M_N_MSB            0x3E
#define _P70_CA_PT_3F_PORT_PAGE70_DPLL_LDO                0x3F
#define _P70_CA_PT_40_PORT_PAGE70_HDMI_AWDSR              0x40
#define _P70_CA_PT_41_PORT_PAGE70_HDMI_VWDSR              0x41
#define _P70_CA_PT_42_PORT_PAGE70_HDMI_PAMICR             0x42
#define _P70_CA_PT_43_PORT_PAGE70_HDMI_PTRSV0             0x43
#define _P70_CA_PT_44_PORT_PAGE70_HDMI_PTRSV1             0x44
#define _P70_CA_PT_45_PORT_PAGE70_HDMI_PVGCR0             0x45
#define _P70_CA_PT_46_PORT_PAGE70_HDMI_PVGCR1             0x46
#define _P70_CA_PT_47_PORT_PAGE70_HDMI_PVGCR2             0x47
#define _P70_CA_PT_48_PORT_PAGE70_HDMI_PVSR0              0x48
#define _P70_CA_PT_49_PORT_PAGE70_HDMI_PVSR1              0x49
#define _P70_CA_PT_4A_PORT_PAGE70_HDMI_PVSR2              0x4A
#define _P70_CA_PT_50_PORT_PAGE70_HDMI_VCR                0x50
#define _P70_CA_PT_51_PORT_PAGE70_HDMI_ACRCR              0x51
#define _P70_CA_PT_52_PORT_PAGE70_HDMI_ACRSR0             0x52
#define _P70_CA_PT_53_PORT_PAGE70_HDMI_ACRSR1             0x53
#define _P70_CA_PT_54_PORT_PAGE70_HDMI_ACRSR2             0x54
#define _P70_CA_PT_55_PORT_PAGE70_HDMI_ACRSR3             0x55
#define _P70_CA_PT_56_PORT_PAGE70_HDMI_ACRSR4             0x56
#define _P70_CA_PT_57_PORT_PAGE70_HDMI_ACS0               0x57
#define _P70_CA_PT_58_PORT_PAGE70_HDMI_ACS1               0x58
#define _P70_CA_PT_59_PORT_PAGE70_HDMI_ACS2               0x59
#define _P70_CA_PT_5A_PORT_PAGE70_HDMI_ACS3               0x5A
#define _P70_CA_PT_5B_PORT_PAGE70_HDMI_ACS4               0x5B
#define _P70_CA_PT_60_PORT_PAGE70_HDMI_INTCR              0x60
#define _P70_CA_PT_61_PORT_PAGE70_HDMI_ALCR               0x61
#define _P70_CA_PT_62_PORT_PAGE70_HDMI_AOCR               0x62
#define _P70_CA_PT_70_PORT_PAGE70_HDMI_BCSR               0x70
#define _P70_CA_PT_71_PORT_PAGE70_HDMI_ASR0               0x71
#define _P70_CA_PT_72_PORT_PAGE70_HDMI_ASR1               0x72
#define _P70_CA_PT_80_PORT_PAGE70_HDMI_DPC_SET0           0x80
#define _P70_CA_PT_81_PORT_PAGE70_HDMI_DPC_SET1           0x81
#define _P70_CA_PT_82_PORT_PAGE70_HDMI_DPC_SET2           0x82
#define _P70_CA_PT_83_PORT_PAGE70_HDMI_DPC_SET3           0x83
#define _P70_CA_PT_84_PORT_PAGE70_HDMI_DET_0              0x84
#define _P70_CA_PT_85_PORT_PAGE70_HDMI_DET_1              0x85
#define _P70_CA_PT_86_PORT_PAGE70_HDMI_DET_2              0x86
#define _P70_CA_PT_87_PORT_PAGE70_HDMI_DET_3              0x87
#define _P70_CA_PT_88_PORT_PAGE70_HDMI_DET_4              0x88
#define _P70_CA_PT_8A_PORT_PAGE70_AUDIO_FREQDET            0x8A
#define _P70_CA_PT_8B_PORT_PAGE70_AUDIO_FREQ_RESULT        0x8B
#define _P70_CA_PT_8C_PORT_PAGE70_AUDIO_FREQ_RESULT_M      0x8C
#define _P70_CA_PT_8D_PORT_PAGE70_AUDIO_FREQ_RESULT_L      0x8D
#define _P70_CA_PT_8E_PORT_PAGE70_XTAL_DIV                 0x8E
#define _P70_CA_PT_8F_PORT_PAGE70_TH0                      0x8F
#define _P70_CA_PT_90_PORT_PAGE70_TH1                      0x90
#define _P70_CA_PT_91_PORT_PAGE70_TH2                      0x91
#define _P70_CA_PT_92_PORT_PAGE70_TH3                      0x92
#define _P70_CA_PT_93_PORT_PAGE70_TH4                      0x93
#define _P70_CA_PT_94_PORT_PAGE70_TH5                      0x94
#define _P70_CA_PT_95_PORT_PAGE70_PRESET_S_CODE0           0x95
#define _P70_CA_PT_96_PORT_PAGE70_PRESET_S_CODE1           0x96
#define _P70_CA_PT_97_PORT_PAGE70_PRESET_S_CODE2           0x97
#define _P70_CA_PT_98_PORT_PAGE70_PRESET_S2_CODE           0x98
#define _P70_CA_PT_99_PORT_PAGE70_PRESET_D_CODE_0          0x99
#define _P70_CA_PT_9A_PORT_PAGE70_PRESET_D_CODE_1          0x9A
#define _P70_CA_PT_9B_PORT_PAGE70_PRESET_D_CODE_2          0x9B
#define _P70_CA_PT_9C_PORT_PAGE70_PRESET_D_CODE_3          0x9C
#define _P70_CA_PT_9D_PORT_PAGE70_PRESET_D_CODE_4          0x9D
#define _P70_CA_PT_9E_PORT_PAGE70_PRESET_D_CODE_5          0x9E
#define _P70_CA_PT_9F_PORT_PAGE70_PRESET_AFSM_MOD          0x9F
#define _P70_CA_PT_A4_PORT_PAGE70_HDMI_PTRSV_2            0xA4
#define _P70_CA_PT_A5_PORT_PAGE70_HDMI_PTRSV_3            0xA5
#define _P70_CA_PT_A6_PORT_PAGE70_HDMI_PARSV              0xA6
#define _P70_CA_PT_A7_PORT_PAGE70_HDMI_GPVS_0             0xA7
#define _P70_CA_PT_A8_PORT_PAGE70_HDMI_PVSR_3             0xA8
#define _P70_CA_PT_A9_PORT_PAGE70_HDMI_PVSR_4             0xA9
#define _P70_CA_PT_AA_PORT_PAGE70_HDMI_PVGCR3             0xAA
#define _P70_CA_PT_AB_PORT_PAGE70_HDMI_PVGCR4             0xAB
#define _P70_CA_PT_AE_PORT_PAGE70_HDMI_GDI_TEST_FUNC      0xAE
#define _P70_CA_PT_AF_PORT_PAGE70_HDMI_BED_FUNC_0         0xAF
#define _P70_CA_PT_B0_PORT_PAGE70_HDMI_BED_FUNC_1         0xB0
#define _P70_CA_PT_B1_PORT_PAGE70_HDMI_BED_FUNC_2         0xB1
#define _P70_CA_PT_B2_PORT_PAGE70_HDMI_BED_FUNC_3         0xB2
#define _P70_CA_PT_B3_PORT_PAGE70_HDMI_BED_FUNC_4         0xB3
#define _P70_CA_PT_B4_PORT_PAGE70_HDMI_BED_FUNC_5         0xB4
#define _P70_CA_PT_B5_PORT_PAGE70_HDMI_BED_FUNC_6         0xB5
#define _P70_CA_PT_B6_PORT_PAGE70_HDMI_BED_FUNC_7         0xB6
#define _P70_CA_PT_B7_PORT_PAGE70_HDMI_BED_FUNC_8         0xB7
#define _P70_CA_PT_B8_PORT_PAGE70_HDMI_BED_FUNC_9         0xB8


//--------------------------------------------------
// D2 Port Overall HDMI System Function Block (Page 71)
//--------------------------------------------------
#define _P71_C4_PT_00_PORT_PAGE71_BKSV0                   0x00
#define _P71_C4_PT_01_PORT_PAGE71_BKSV1                   0x01
#define _P71_C4_PT_02_PORT_PAGE71_BKSV2                   0x02
#define _P71_C4_PT_03_PORT_PAGE71_BKSV3                   0x03
#define _P71_C4_PT_04_PORT_PAGE71_BKSV4                   0x04
#define _P71_C4_PT_08_PORT_PAGE71_RI0                     0x08
#define _P71_C4_PT_09_PORT_PAGE71_RI1                     0x09
#define _P71_C4_PT_0A_PORT_PAGE71_PJ                      0x0A
#define _P71_C4_PT_10_PORT_PAGE71_AKSV0                   0x10
#define _P71_C4_PT_11_PORT_PAGE71_AKSV1                   0x11
#define _P71_C4_PT_12_PORT_PAGE71_AKSV2                   0x12
#define _P71_C4_PT_13_PORT_PAGE71_AKSV3                   0x13
#define _P71_C4_PT_14_PORT_PAGE71_AKSV4                   0x14
#define _P71_C4_PT_15_PORT_PAGE71_AINFO                   0x15
#define _P71_C4_PT_18_PORT_PAGE71_AN0                     0x18
#define _P71_C4_PT_19_PORT_PAGE71_AN1                     0x19
#define _P71_C4_PT_1A_PORT_PAGE71_AN2                     0x1A
#define _P71_C4_PT_1B_PORT_PAGE71_AN3                     0x1B
#define _P71_C4_PT_1C_PORT_PAGE71_AN4                     0x1C
#define _P71_C4_PT_1D_PORT_PAGE71_AN5                     0x1D
#define _P71_C4_PT_1E_PORT_PAGE71_AN6                     0x1E
#define _P71_C4_PT_1F_PORT_PAGE71_AN7                     0x1F
#define _P71_C4_PT_40_PORT_PAGE71_BCAPS                   0x40
#define _P71_C4_PT_41_PORT_PAGE71_BSTATUS                 0x41
#define _P71_C4_PT_43_PORT_PAGE71_KSV_FIFO                0x43
#define _P71_C4_PT_C0_PORT_PAGE71_HDCP_FCR                0xC0
#define _P71_C4_PT_C1_PORT_PAGE71_HDCP_SIR                0xC1
#define _P71_C4_PT_C2_PORT_PAGE71_HDCP_SLAVE_ADD          0xC2
#define _P71_CA_PT_00_PORT_PAGE71_HDMI_SCR                0x00
#define _P71_CA_PT_01_PORT_PAGE71_HDMI_N_VAL              0x01
#define _P71_CA_PT_02_PORT_PAGE71_HDMI_BCHCR              0x02
#define _P71_CA_PT_03_PORT_PAGE71_HDMI_AFCR               0x03
#define _P71_CA_PT_04_PORT_PAGE71_HDMI_AFSR               0x04
#define _P71_CA_PT_05_PORT_PAGE71_HDMI_MAGCR1             0x05
#define _P71_CA_PT_06_PORT_PAGE71_HDMI_MAGCR2             0x06
#define _P71_CA_PT_07_PORT_PAGE71_HDMI_MAG_M_FINAL        0x07
#define _P71_CA_PT_08_PORT_PAGE71_HDMI_MAG_L_FINAL        0x08
#define _P71_CA_PT_09_PORT_PAGE71_HDMI_MAG_R_FINAL        0x09
#define _P71_CA_PT_0A_PORT_PAGE71_AUDIO_LD_P_TIME_M       0x0A
#define _P71_CA_PT_0B_PORT_PAGE71_AUDIO_LD_P_TIME_N       0x0B
#define _P71_CA_PT_0C_PORT_PAGE71_ZCD_CTRL                0x0C
#define _P71_CA_PT_0D_PORT_PAGE71_ZCD_TIMEOUT             0x0D
#define _P71_CA_PT_0E_PORT_PAGE71_ZCD_STATUS              0x0E
#define _P71_CA_PT_10_PORT_PAGE71_HDMI_CMCR               0x10
#define _P71_CA_PT_11_PORT_PAGE71_HDMI_MCAPR              0x11
#define _P71_CA_PT_12_PORT_PAGE71_HDMI_SCAPR              0x12
#define _P71_CA_PT_13_PORT_PAGE71_HDMI_DCAPR0             0x13
#define _P71_CA_PT_14_PORT_PAGE71_HDMI_DCAPR1             0x14
#define _P71_CA_PT_15_PORT_PAGE71_HDMI_PSCR               0x15
#define _P71_CA_PT_16_PORT_PAGE71_HDMI_FDDR               0x16
#define _P71_CA_PT_17_PORT_PAGE71_HDMI_FDDF               0x17
#define _P71_CA_PT_18_PORT_PAGE71_HDMI_MFDDR              0x18
#define _P71_CA_PT_19_PORT_PAGE71_HDMI_MFDDF              0x19
#define _P71_CA_PT_1A_PORT_PAGE71_HDMI_FTR                0x1A
#define _P71_CA_PT_1B_PORT_PAGE71_HDMI_FBR                0x1B
#define _P71_CA_PT_1C_PORT_PAGE71_HDMI_ICPSNCR0           0x1C
#define _P71_CA_PT_1D_PORT_PAGE71_HDMI_ICPSNCR1           0x1D
#define _P71_CA_PT_1E_PORT_PAGE71_HDMI_PCPSNCR0           0x1E
#define _P71_CA_PT_1F_PORT_PAGE71_HDMI_PCPSNCR1           0x1F
#define _P71_CA_PT_20_PORT_PAGE71_HDMI_ICTPSR0            0x20
#define _P71_CA_PT_21_PORT_PAGE71_HDMI_ICTPSR1            0x21
#define _P71_CA_PT_22_PORT_PAGE71_HDMI_PCTPSR0            0x22
#define _P71_CA_PT_23_PORT_PAGE71_HDMI_PCTPSR1            0x23
#define _P71_CA_PT_24_PORT_PAGE71_HDMI_ICBPSR0            0x24
#define _P71_CA_PT_25_PORT_PAGE71_HDMI_ICBPSR1            0x25
#define _P71_CA_PT_26_PORT_PAGE71_HDMI_PCBPSR0            0x26
#define _P71_CA_PT_27_PORT_PAGE71_HDMI_PCBPSR1            0x27
#define _P71_CA_PT_28_PORT_PAGE71_HDMI_NTX1024TR0         0x28
#define _P71_CA_PT_29_PORT_PAGE71_HDMI_NTX1024TR1         0x29
#define _P71_CA_PT_2A_PORT_PAGE71_HDMI_STBPR              0x2A
#define _P71_CA_PT_2B_PORT_PAGE71_HDMI_NCPER              0x2B
#define _P71_CA_PT_2C_PORT_PAGE71_HDMI_PETR               0x2C
#define _P71_CA_PT_2D_PORT_PAGE71_HDMI_AAPNR              0x2D
#define _P71_CA_PT_2E_PORT_PAGE71_HDMI_APDMCR             0x2E
#define _P71_CA_PT_30_PORT_PAGE71_HDMI_AVMCR              0x30
#define _P71_CA_PT_31_PORT_PAGE71_HDMI_WDCR0              0x31
#define _P71_CA_PT_32_PORT_PAGE71_HDMI_WDCR1              0x32
#define _P71_CA_PT_33_PORT_PAGE71_HDMI_WDCR2              0x33
#define _P71_CA_PT_34_PORT_PAGE71_HDMI_DBCR               0x34
#define _P71_CA_PT_35_PORT_PAGE71_HDMI_APTMCR0            0x35
#define _P71_CA_PT_36_PORT_PAGE71_HDMI_APTMCR1            0x36
#define _P71_CA_PT_38_PORT_PAGE71_HDMI_DPCR0              0x38
#define _P71_CA_PT_39_PORT_PAGE71_HDMI_DPCR1              0x39
#define _P71_CA_PT_3A_PORT_PAGE71_HDMI_DPCR2              0x3A
#define _P71_CA_PT_3B_PORT_PAGE71_HDMI_DPCR3              0x3B
#define _P71_CA_PT_3C_PORT_PAGE71_HDMI_SUMCM              0x3C
#define _P71_CA_PT_3D_PORT_PAGE71_HDMI_SUMCL              0x3D
#define _P71_CA_PT_3E_PORT_PAGE71_DPLL_M_N_MSB            0x3E
#define _P71_CA_PT_3F_PORT_PAGE71_DPLL_LDO                0x3F
#define _P71_CA_PT_40_PORT_PAGE71_HDMI_AWDSR              0x40
#define _P71_CA_PT_41_PORT_PAGE71_HDMI_VWDSR              0x41
#define _P71_CA_PT_42_PORT_PAGE71_HDMI_PAMICR             0x42
#define _P71_CA_PT_43_PORT_PAGE71_HDMI_PTRSV0             0x43
#define _P71_CA_PT_44_PORT_PAGE71_HDMI_PTRSV1             0x44
#define _P71_CA_PT_45_PORT_PAGE71_HDMI_PVGCR0             0x45
#define _P71_CA_PT_46_PORT_PAGE71_HDMI_PVGCR1             0x46
#define _P71_CA_PT_47_PORT_PAGE71_HDMI_PVGCR2             0x47
#define _P71_CA_PT_48_PORT_PAGE71_HDMI_PVSR0              0x48
#define _P71_CA_PT_49_PORT_PAGE71_HDMI_PVSR1              0x49
#define _P71_CA_PT_4A_PORT_PAGE71_HDMI_PVSR2              0x4A
#define _P71_CA_PT_50_PORT_PAGE71_HDMI_VCR                0x50
#define _P71_CA_PT_51_PORT_PAGE71_HDMI_ACRCR              0x51
#define _P71_CA_PT_52_PORT_PAGE71_HDMI_ACRSR0             0x52
#define _P71_CA_PT_53_PORT_PAGE71_HDMI_ACRSR1             0x53
#define _P71_CA_PT_54_PORT_PAGE71_HDMI_ACRSR2             0x54
#define _P71_CA_PT_55_PORT_PAGE71_HDMI_ACRSR3             0x55
#define _P71_CA_PT_56_PORT_PAGE71_HDMI_ACRSR4             0x56
#define _P71_CA_PT_57_PORT_PAGE71_HDMI_ACS0               0x57
#define _P71_CA_PT_58_PORT_PAGE71_HDMI_ACS1               0x58
#define _P71_CA_PT_59_PORT_PAGE71_HDMI_ACS2               0x59
#define _P71_CA_PT_5A_PORT_PAGE71_HDMI_ACS3               0x5A
#define _P71_CA_PT_5B_PORT_PAGE71_HDMI_ACS4               0x5B
#define _P71_CA_PT_60_PORT_PAGE71_HDMI_INTCR              0x60
#define _P71_CA_PT_61_PORT_PAGE71_HDMI_ALCR               0x61
#define _P71_CA_PT_62_PORT_PAGE71_HDMI_AOCR               0x62
#define _P71_CA_PT_70_PORT_PAGE71_HDMI_BCSR               0x70
#define _P71_CA_PT_71_PORT_PAGE71_HDMI_ASR0               0x71
#define _P71_CA_PT_72_PORT_PAGE71_HDMI_ASR1               0x72
#define _P71_CA_PT_80_PORT_PAGE71_HDMI_DPC_SET0           0x80
#define _P71_CA_PT_81_PORT_PAGE71_HDMI_DPC_SET1           0x81
#define _P71_CA_PT_82_PORT_PAGE71_HDMI_DPC_SET2           0x82
#define _P71_CA_PT_83_PORT_PAGE71_HDMI_DPC_SET3           0x83
#define _P71_CA_PT_84_PORT_PAGE71_HDMI_DET_0              0x84
#define _P71_CA_PT_85_PORT_PAGE71_HDMI_DET_1              0x85
#define _P71_CA_PT_86_PORT_PAGE71_HDMI_DET_2              0x86
#define _P71_CA_PT_87_PORT_PAGE71_HDMI_DET_3              0x87
#define _P71_CA_PT_88_PORT_PAGE71_HDMI_DET_4              0x88
#define _P71_CA_PT_8A_PORT_PAGE71_AUDIO_FREQDET            0x8A
#define _P71_CA_PT_8B_PORT_PAGE71_AUDIO_FREQ_RESULT        0x8B
#define _P71_CA_PT_8C_PORT_PAGE71_AUDIO_FREQ_RESULT_M      0x8C
#define _P71_CA_PT_8D_PORT_PAGE71_AUDIO_FREQ_RESULT_L      0x8D
#define _P71_CA_PT_8E_PORT_PAGE71_XTAL_DIV                 0x8E
#define _P71_CA_PT_8F_PORT_PAGE71_TH0                      0x8F
#define _P71_CA_PT_90_PORT_PAGE71_TH1                      0x90
#define _P71_CA_PT_91_PORT_PAGE71_TH2                      0x91
#define _P71_CA_PT_92_PORT_PAGE71_TH3                      0x92
#define _P71_CA_PT_93_PORT_PAGE71_TH4                      0x93
#define _P71_CA_PT_94_PORT_PAGE71_TH5                      0x94
#define _P71_CA_PT_95_PORT_PAGE71_PRESET_S_CODE0           0x95
#define _P71_CA_PT_96_PORT_PAGE71_PRESET_S_CODE1           0x96
#define _P71_CA_PT_97_PORT_PAGE71_PRESET_S_CODE2           0x97
#define _P71_CA_PT_98_PORT_PAGE71_PRESET_S2_CODE           0x98
#define _P71_CA_PT_99_PORT_PAGE71_PRESET_D_CODE_0          0x99
#define _P71_CA_PT_9A_PORT_PAGE71_PRESET_D_CODE_1          0x9A
#define _P71_CA_PT_9B_PORT_PAGE71_PRESET_D_CODE_2          0x9B
#define _P71_CA_PT_9C_PORT_PAGE71_PRESET_D_CODE_3          0x9C
#define _P71_CA_PT_9D_PORT_PAGE71_PRESET_D_CODE_4          0x9D
#define _P71_CA_PT_9E_PORT_PAGE71_PRESET_D_CODE_5          0x9E
#define _P71_CA_PT_9F_PORT_PAGE71_PRESET_AFSM_MOD          0x9F
#define _P71_CA_PT_A4_PORT_PAGE71_HDMI_PTRSV_2            0xA4
#define _P71_CA_PT_A5_PORT_PAGE71_HDMI_PTRSV_3            0xA5
#define _P71_CA_PT_A6_PORT_PAGE71_HDMI_PARSV              0xA6
#define _P71_CA_PT_A7_PORT_PAGE71_HDMI_GPVS_0             0xA7
#define _P71_CA_PT_A8_PORT_PAGE71_HDMI_PVSR_3             0xA8
#define _P71_CA_PT_A9_PORT_PAGE71_HDMI_PVSR_4             0xA9
#define _P71_CA_PT_AA_PORT_PAGE71_HDMI_PVGCR3             0xAA
#define _P71_CA_PT_AB_PORT_PAGE71_HDMI_PVGCR4             0xAB
#define _P71_CA_PT_AE_PORT_PAGE71_HDMI_GDI_TEST_FUNC      0xAE
#define _P71_CA_PT_AF_PORT_PAGE71_HDMI_BED_FUNC_0         0xAF
#define _P71_CA_PT_B0_PORT_PAGE71_HDMI_BED_FUNC_1         0xB0
#define _P71_CA_PT_B1_PORT_PAGE71_HDMI_BED_FUNC_2         0xB1
#define _P71_CA_PT_B2_PORT_PAGE71_HDMI_BED_FUNC_3         0xB2
#define _P71_CA_PT_B3_PORT_PAGE71_HDMI_BED_FUNC_4         0xB3
#define _P71_CA_PT_B4_PORT_PAGE71_HDMI_BED_FUNC_5         0xB4
#define _P71_CA_PT_B5_PORT_PAGE71_HDMI_BED_FUNC_6         0xB5
#define _P71_CA_PT_B6_PORT_PAGE71_HDMI_BED_FUNC_7         0xB6
#define _P71_CA_PT_B7_PORT_PAGE71_HDMI_BED_FUNC_8         0xB7
#define _P71_CA_PT_B8_PORT_PAGE71_HDMI_BED_FUNC_9         0xB8


//--------------------------------------------------
// D3 Port Overall HDMI System Function Block (Page 72)
//--------------------------------------------------
#define _P72_C4_PT_00_PORT_PAGE72_BKSV0                   0x00
#define _P72_C4_PT_01_PORT_PAGE72_BKSV1                   0x01
#define _P72_C4_PT_02_PORT_PAGE72_BKSV2                   0x02
#define _P72_C4_PT_03_PORT_PAGE72_BKSV3                   0x03
#define _P72_C4_PT_04_PORT_PAGE72_BKSV4                   0x04
#define _P72_C4_PT_08_PORT_PAGE72_RI0                     0x08
#define _P72_C4_PT_09_PORT_PAGE72_RI1                     0x09
#define _P72_C4_PT_0A_PORT_PAGE72_PJ                      0x0A
#define _P72_C4_PT_10_PORT_PAGE72_AKSV0                   0x10
#define _P72_C4_PT_11_PORT_PAGE72_AKSV1                   0x11
#define _P72_C4_PT_12_PORT_PAGE72_AKSV2                   0x12
#define _P72_C4_PT_13_PORT_PAGE72_AKSV3                   0x13
#define _P72_C4_PT_14_PORT_PAGE72_AKSV4                   0x14
#define _P72_C4_PT_15_PORT_PAGE72_AINFO                   0x15
#define _P72_C4_PT_18_PORT_PAGE72_AN0                     0x18
#define _P72_C4_PT_19_PORT_PAGE72_AN1                     0x19
#define _P72_C4_PT_1A_PORT_PAGE72_AN2                     0x1A
#define _P72_C4_PT_1B_PORT_PAGE72_AN3                     0x1B
#define _P72_C4_PT_1C_PORT_PAGE72_AN4                     0x1C
#define _P72_C4_PT_1D_PORT_PAGE72_AN5                     0x1D
#define _P72_C4_PT_1E_PORT_PAGE72_AN6                     0x1E
#define _P72_C4_PT_1F_PORT_PAGE72_AN7                     0x1F
#define _P72_C4_PT_40_PORT_PAGE72_BCAPS                   0x40
#define _P72_C4_PT_41_PORT_PAGE72_BSTATUS                 0x41
#define _P72_C4_PT_43_PORT_PAGE72_KSV_FIFO                0x43
#define _P72_C4_PT_C0_PORT_PAGE72_HDCP_FCR                0xC0
#define _P72_C4_PT_C1_PORT_PAGE72_HDCP_SIR                0xC1
#define _P72_C4_PT_C2_PORT_PAGE72_HDCP_SLAVE_ADD          0xC2
#define _P72_CA_PT_00_PORT_PAGE72_HDMI_SCR                0x00
#define _P72_CA_PT_01_PORT_PAGE72_HDMI_N_VAL              0x01
#define _P72_CA_PT_02_PORT_PAGE72_HDMI_BCHCR              0x02
#define _P72_CA_PT_03_PORT_PAGE72_HDMI_AFCR               0x03
#define _P72_CA_PT_04_PORT_PAGE72_HDMI_AFSR               0x04
#define _P72_CA_PT_05_PORT_PAGE72_HDMI_MAGCR1             0x05
#define _P72_CA_PT_06_PORT_PAGE72_HDMI_MAGCR2             0x06
#define _P72_CA_PT_07_PORT_PAGE72_HDMI_MAG_M_FINAL        0x07
#define _P72_CA_PT_08_PORT_PAGE72_HDMI_MAG_L_FINAL        0x08
#define _P72_CA_PT_09_PORT_PAGE72_HDMI_MAG_R_FINAL        0x09
#define _P72_CA_PT_0A_PORT_PAGE72_AUDIO_LD_P_TIME_M       0x0A
#define _P72_CA_PT_0B_PORT_PAGE72_AUDIO_LD_P_TIME_N       0x0B
#define _P72_CA_PT_0C_PORT_PAGE72_ZCD_CTRL                0x0C
#define _P72_CA_PT_0D_PORT_PAGE72_ZCD_TIMEOUT             0x0D
#define _P72_CA_PT_0E_PORT_PAGE72_ZCD_STATUS              0x0E
#define _P72_CA_PT_10_PORT_PAGE72_HDMI_CMCR               0x10
#define _P72_CA_PT_11_PORT_PAGE72_HDMI_MCAPR              0x11
#define _P72_CA_PT_12_PORT_PAGE72_HDMI_SCAPR              0x12
#define _P72_CA_PT_13_PORT_PAGE72_HDMI_DCAPR0             0x13
#define _P72_CA_PT_14_PORT_PAGE72_HDMI_DCAPR1             0x14
#define _P72_CA_PT_15_PORT_PAGE72_HDMI_PSCR               0x15
#define _P72_CA_PT_16_PORT_PAGE72_HDMI_FDDR               0x16
#define _P72_CA_PT_17_PORT_PAGE72_HDMI_FDDF               0x17
#define _P72_CA_PT_18_PORT_PAGE72_HDMI_MFDDR              0x18
#define _P72_CA_PT_19_PORT_PAGE72_HDMI_MFDDF              0x19
#define _P72_CA_PT_1A_PORT_PAGE72_HDMI_FTR                0x1A
#define _P72_CA_PT_1B_PORT_PAGE72_HDMI_FBR                0x1B
#define _P72_CA_PT_1C_PORT_PAGE72_HDMI_ICPSNCR0           0x1C
#define _P72_CA_PT_1D_PORT_PAGE72_HDMI_ICPSNCR1           0x1D
#define _P72_CA_PT_1E_PORT_PAGE72_HDMI_PCPSNCR0           0x1E
#define _P72_CA_PT_1F_PORT_PAGE72_HDMI_PCPSNCR1           0x1F
#define _P72_CA_PT_20_PORT_PAGE72_HDMI_ICTPSR0            0x20
#define _P72_CA_PT_21_PORT_PAGE72_HDMI_ICTPSR1            0x21
#define _P72_CA_PT_22_PORT_PAGE72_HDMI_PCTPSR0            0x22
#define _P72_CA_PT_23_PORT_PAGE72_HDMI_PCTPSR1            0x23
#define _P72_CA_PT_24_PORT_PAGE72_HDMI_ICBPSR0            0x24
#define _P72_CA_PT_25_PORT_PAGE72_HDMI_ICBPSR1            0x25
#define _P72_CA_PT_26_PORT_PAGE72_HDMI_PCBPSR0            0x26
#define _P72_CA_PT_27_PORT_PAGE72_HDMI_PCBPSR1            0x27
#define _P72_CA_PT_28_PORT_PAGE72_HDMI_NTX1024TR0         0x28
#define _P72_CA_PT_29_PORT_PAGE72_HDMI_NTX1024TR1         0x29
#define _P72_CA_PT_2A_PORT_PAGE72_HDMI_STBPR              0x2A
#define _P72_CA_PT_2B_PORT_PAGE72_HDMI_NCPER              0x2B
#define _P72_CA_PT_2C_PORT_PAGE72_HDMI_PETR               0x2C
#define _P72_CA_PT_2D_PORT_PAGE72_HDMI_AAPNR              0x2D
#define _P72_CA_PT_2E_PORT_PAGE72_HDMI_APDMCR             0x2E
#define _P72_CA_PT_30_PORT_PAGE72_HDMI_AVMCR              0x30
#define _P72_CA_PT_31_PORT_PAGE72_HDMI_WDCR0              0x31
#define _P72_CA_PT_32_PORT_PAGE72_HDMI_WDCR1              0x32
#define _P72_CA_PT_33_PORT_PAGE72_HDMI_WDCR2              0x33
#define _P72_CA_PT_34_PORT_PAGE72_HDMI_DBCR               0x34
#define _P72_CA_PT_35_PORT_PAGE72_HDMI_APTMCR0            0x35
#define _P72_CA_PT_36_PORT_PAGE72_HDMI_APTMCR1            0x36
#define _P72_CA_PT_38_PORT_PAGE72_HDMI_DPCR0              0x38
#define _P72_CA_PT_39_PORT_PAGE72_HDMI_DPCR1              0x39
#define _P72_CA_PT_3A_PORT_PAGE72_HDMI_DPCR2              0x3A
#define _P72_CA_PT_3B_PORT_PAGE72_HDMI_DPCR3              0x3B
#define _P72_CA_PT_3C_PORT_PAGE72_HDMI_SUMCM              0x3C
#define _P72_CA_PT_3D_PORT_PAGE72_HDMI_SUMCL              0x3D
#define _P72_CA_PT_3E_PORT_PAGE72_DPLL_M_N_MSB            0x3E
#define _P72_CA_PT_3F_PORT_PAGE72_DPLL_LDO                0x3F
#define _P72_CA_PT_40_PORT_PAGE72_HDMI_AWDSR              0x40
#define _P72_CA_PT_41_PORT_PAGE72_HDMI_VWDSR              0x41
#define _P72_CA_PT_42_PORT_PAGE72_HDMI_PAMICR             0x42
#define _P72_CA_PT_43_PORT_PAGE72_HDMI_PTRSV0             0x43
#define _P72_CA_PT_44_PORT_PAGE72_HDMI_PTRSV1             0x44
#define _P72_CA_PT_45_PORT_PAGE72_HDMI_PVGCR0             0x45
#define _P72_CA_PT_46_PORT_PAGE72_HDMI_PVGCR1             0x46
#define _P72_CA_PT_47_PORT_PAGE72_HDMI_PVGCR2             0x47
#define _P72_CA_PT_48_PORT_PAGE72_HDMI_PVSR0              0x48
#define _P72_CA_PT_49_PORT_PAGE72_HDMI_PVSR1              0x49
#define _P72_CA_PT_4A_PORT_PAGE72_HDMI_PVSR2              0x4A
#define _P72_CA_PT_50_PORT_PAGE72_HDMI_VCR                0x50
#define _P72_CA_PT_51_PORT_PAGE72_HDMI_ACRCR              0x51
#define _P72_CA_PT_52_PORT_PAGE72_HDMI_ACRSR0             0x52
#define _P72_CA_PT_53_PORT_PAGE72_HDMI_ACRSR1             0x53
#define _P72_CA_PT_54_PORT_PAGE72_HDMI_ACRSR2             0x54
#define _P72_CA_PT_55_PORT_PAGE72_HDMI_ACRSR3             0x55
#define _P72_CA_PT_56_PORT_PAGE72_HDMI_ACRSR4             0x56
#define _P72_CA_PT_57_PORT_PAGE72_HDMI_ACS0               0x57
#define _P72_CA_PT_58_PORT_PAGE72_HDMI_ACS1               0x58
#define _P72_CA_PT_59_PORT_PAGE72_HDMI_ACS2               0x59
#define _P72_CA_PT_5A_PORT_PAGE72_HDMI_ACS3               0x5A
#define _P72_CA_PT_5B_PORT_PAGE72_HDMI_ACS4               0x5B
#define _P72_CA_PT_60_PORT_PAGE72_HDMI_INTCR              0x60
#define _P72_CA_PT_61_PORT_PAGE72_HDMI_ALCR               0x61
#define _P72_CA_PT_62_PORT_PAGE72_HDMI_AOCR               0x62
#define _P72_CA_PT_70_PORT_PAGE72_HDMI_BCSR               0x70
#define _P72_CA_PT_71_PORT_PAGE72_HDMI_ASR0               0x71
#define _P72_CA_PT_72_PORT_PAGE72_HDMI_ASR1               0x72
#define _P72_CA_PT_80_PORT_PAGE72_HDMI_DPC_SET0           0x80
#define _P72_CA_PT_81_PORT_PAGE72_HDMI_DPC_SET1           0x81
#define _P72_CA_PT_82_PORT_PAGE72_HDMI_DPC_SET2           0x82
#define _P72_CA_PT_83_PORT_PAGE72_HDMI_DPC_SET3           0x83
#define _P72_CA_PT_84_PORT_PAGE72_HDMI_DET_0              0x84
#define _P72_CA_PT_85_PORT_PAGE72_HDMI_DET_1              0x85
#define _P72_CA_PT_86_PORT_PAGE72_HDMI_DET_2              0x86
#define _P72_CA_PT_87_PORT_PAGE72_HDMI_DET_3              0x87
#define _P72_CA_PT_88_PORT_PAGE72_HDMI_DET_4              0x88
#define _P72_CA_PT_8A_PORT_PAGE72_AUDIO_FREQDET           0x8A
#define _P72_CA_PT_8B_PORT_PAGE72_AUDIO_FREQ_RESULT       0x8B
#define _P72_CA_PT_8C_PORT_PAGE72_AUDIO_FREQ_RESULT_M     0x8C
#define _P72_CA_PT_8D_PORT_PAGE72_AUDIO_FREQ_RESULT_L     0x8D
#define _P72_CA_PT_8E_PORT_PAGE72_XTAL_DIV                0x8E
#define _P72_CA_PT_8F_PORT_PAGE72_TH0                     0x8F
#define _P72_CA_PT_90_PORT_PAGE72_TH1                     0x90
#define _P72_CA_PT_91_PORT_PAGE72_TH2                     0x91
#define _P72_CA_PT_92_PORT_PAGE72_TH3                     0x92
#define _P72_CA_PT_93_PORT_PAGE72_TH4                     0x93
#define _P72_CA_PT_94_PORT_PAGE72_TH5                     0x94
#define _P72_CA_PT_95_PORT_PAGE72_PRESET_S_CODE0          0x95
#define _P72_CA_PT_96_PORT_PAGE72_PRESET_S_CODE1          0x96
#define _P72_CA_PT_97_PORT_PAGE72_PRESET_S_CODE2          0x97
#define _P72_CA_PT_98_PORT_PAGE72_PRESET_S2_CODE          0x98
#define _P72_CA_PT_99_PORT_PAGE72_PRESET_D_CODE_0         0x99
#define _P72_CA_PT_9A_PORT_PAGE72_PRESET_D_CODE_1         0x9A
#define _P72_CA_PT_9B_PORT_PAGE72_PRESET_D_CODE_2         0x9B
#define _P72_CA_PT_9C_PORT_PAGE72_PRESET_D_CODE_3         0x9C
#define _P72_CA_PT_9D_PORT_PAGE72_PRESET_D_CODE_4         0x9D
#define _P72_CA_PT_9E_PORT_PAGE72_PRESET_D_CODE_5         0x9E
#define _P72_CA_PT_9F_PORT_PAGE72_PRESET_AFSM_MOD         0x9F
#define _P72_CA_PT_A4_PORT_PAGE72_HDMI_PTRSV_2            0xA4
#define _P72_CA_PT_A5_PORT_PAGE72_HDMI_PTRSV_3            0xA5
#define _P72_CA_PT_A6_PORT_PAGE72_HDMI_PARSV              0xA6
#define _P72_CA_PT_A7_PORT_PAGE72_HDMI_GPVS_0             0xA7
#define _P72_CA_PT_A8_PORT_PAGE72_HDMI_PVSR_3             0xA8
#define _P72_CA_PT_A9_PORT_PAGE72_HDMI_PVSR_4             0xA9
#define _P72_CA_PT_AA_PORT_PAGE72_HDMI_PVGCR3             0xAA
#define _P72_CA_PT_AB_PORT_PAGE72_HDMI_PVGCR4             0xAB
#define _P72_CA_PT_AE_PORT_PAGE72_HDMI_GDI_TEST_FUNC      0xAE
#define _P72_CA_PT_AF_PORT_PAGE72_HDMI_BED_FUNC_0         0xAF
#define _P72_CA_PT_B0_PORT_PAGE72_HDMI_BED_FUNC_1         0xB0
#define _P72_CA_PT_B1_PORT_PAGE72_HDMI_BED_FUNC_2         0xB1
#define _P72_CA_PT_B2_PORT_PAGE72_HDMI_BED_FUNC_3         0xB2
#define _P72_CA_PT_B3_PORT_PAGE72_HDMI_BED_FUNC_4         0xB3
#define _P72_CA_PT_B4_PORT_PAGE72_HDMI_BED_FUNC_5         0xB4
#define _P72_CA_PT_B5_PORT_PAGE72_HDMI_BED_FUNC_6         0xB5
#define _P72_CA_PT_B6_PORT_PAGE72_HDMI_BED_FUNC_7         0xB6
#define _P72_CA_PT_B7_PORT_PAGE72_HDMI_BED_FUNC_8         0xB7
#define _P72_CA_PT_B8_PORT_PAGE72_HDMI_BED_FUNC_9         0xB8


//--------------------------------------------------
// D4 Port Overall HDMI System Function Block (Page 73)
//--------------------------------------------------
#define _P73_C4_PT_00_PORT_PAGE73_BKSV0                   0x00
#define _P73_C4_PT_01_PORT_PAGE73_BKSV1                   0x01
#define _P73_C4_PT_02_PORT_PAGE73_BKSV2                   0x02
#define _P73_C4_PT_03_PORT_PAGE73_BKSV3                   0x03
#define _P73_C4_PT_04_PORT_PAGE73_BKSV4                   0x04
#define _P73_C4_PT_08_PORT_PAGE73_RI0                     0x08
#define _P73_C4_PT_09_PORT_PAGE73_RI1                     0x09
#define _P73_C4_PT_0A_PORT_PAGE73_PJ                      0x0A
#define _P73_C4_PT_10_PORT_PAGE73_AKSV0                   0x10
#define _P73_C4_PT_11_PORT_PAGE73_AKSV1                   0x11
#define _P73_C4_PT_12_PORT_PAGE73_AKSV2                   0x12
#define _P73_C4_PT_13_PORT_PAGE73_AKSV3                   0x13
#define _P73_C4_PT_14_PORT_PAGE73_AKSV4                   0x14
#define _P73_C4_PT_15_PORT_PAGE73_AINFO                   0x15
#define _P73_C4_PT_18_PORT_PAGE73_AN0                     0x18
#define _P73_C4_PT_19_PORT_PAGE73_AN1                     0x19
#define _P73_C4_PT_1A_PORT_PAGE73_AN2                     0x1A
#define _P73_C4_PT_1B_PORT_PAGE73_AN3                     0x1B
#define _P73_C4_PT_1C_PORT_PAGE73_AN4                     0x1C
#define _P73_C4_PT_1D_PORT_PAGE73_AN5                     0x1D
#define _P73_C4_PT_1E_PORT_PAGE73_AN6                     0x1E
#define _P73_C4_PT_1F_PORT_PAGE73_AN7                     0x1F
#define _P73_C4_PT_40_PORT_PAGE73_BCAPS                   0x40
#define _P73_C4_PT_41_PORT_PAGE73_BSTATUS                 0x41
#define _P73_C4_PT_43_PORT_PAGE73_KSV_FIFO                0x43
#define _P73_C4_PT_C0_PORT_PAGE73_HDCP_FCR                0xC0
#define _P73_C4_PT_C1_PORT_PAGE73_HDCP_SIR                0xC1
#define _P73_C4_PT_C2_PORT_PAGE73_HDCP_SLAVE_ADD          0xC2
#define _P73_CA_PT_00_PORT_PAGE73_HDMI_SCR                0x00
#define _P73_CA_PT_01_PORT_PAGE73_HDMI_N_VAL              0x01
#define _P73_CA_PT_02_PORT_PAGE73_HDMI_BCHCR              0x02
#define _P73_CA_PT_03_PORT_PAGE73_HDMI_AFCR               0x03
#define _P73_CA_PT_04_PORT_PAGE73_HDMI_AFSR               0x04
#define _P73_CA_PT_05_PORT_PAGE73_HDMI_MAGCR1             0x05
#define _P73_CA_PT_06_PORT_PAGE73_HDMI_MAGCR2             0x06
#define _P73_CA_PT_07_PORT_PAGE73_HDMI_MAG_M_FINAL        0x07
#define _P73_CA_PT_08_PORT_PAGE73_HDMI_MAG_L_FINAL        0x08
#define _P73_CA_PT_09_PORT_PAGE73_HDMI_MAG_R_FINAL        0x09
#define _P73_CA_PT_0A_PORT_PAGE73_AUDIO_LD_P_TIME_M       0x0A
#define _P73_CA_PT_0B_PORT_PAGE73_AUDIO_LD_P_TIME_N       0x0B
#define _P73_CA_PT_0C_PORT_PAGE73_ZCD_CTRL                0x0C
#define _P73_CA_PT_0D_PORT_PAGE73_ZCD_TIMEOUT             0x0D
#define _P73_CA_PT_0E_PORT_PAGE73_ZCD_STATUS              0x0E
#define _P73_CA_PT_10_PORT_PAGE73_HDMI_CMCR               0x10
#define _P73_CA_PT_11_PORT_PAGE73_HDMI_MCAPR              0x11
#define _P73_CA_PT_12_PORT_PAGE73_HDMI_SCAPR              0x12
#define _P73_CA_PT_13_PORT_PAGE73_HDMI_DCAPR0             0x13
#define _P73_CA_PT_14_PORT_PAGE73_HDMI_DCAPR1             0x14
#define _P73_CA_PT_15_PORT_PAGE73_HDMI_PSCR               0x15
#define _P73_CA_PT_16_PORT_PAGE73_HDMI_FDDR               0x16
#define _P73_CA_PT_17_PORT_PAGE73_HDMI_FDDF               0x17
#define _P73_CA_PT_18_PORT_PAGE73_HDMI_MFDDR              0x18
#define _P73_CA_PT_19_PORT_PAGE73_HDMI_MFDDF              0x19
#define _P73_CA_PT_1A_PORT_PAGE73_HDMI_FTR                0x1A
#define _P73_CA_PT_1B_PORT_PAGE73_HDMI_FBR                0x1B
#define _P73_CA_PT_1C_PORT_PAGE73_HDMI_ICPSNCR0           0x1C
#define _P73_CA_PT_1D_PORT_PAGE73_HDMI_ICPSNCR1           0x1D
#define _P73_CA_PT_1E_PORT_PAGE73_HDMI_PCPSNCR0           0x1E
#define _P73_CA_PT_1F_PORT_PAGE73_HDMI_PCPSNCR1           0x1F
#define _P73_CA_PT_20_PORT_PAGE73_HDMI_ICTPSR0            0x20
#define _P73_CA_PT_21_PORT_PAGE73_HDMI_ICTPSR1            0x21
#define _P73_CA_PT_22_PORT_PAGE73_HDMI_PCTPSR0            0x22
#define _P73_CA_PT_23_PORT_PAGE73_HDMI_PCTPSR1            0x23
#define _P73_CA_PT_24_PORT_PAGE73_HDMI_ICBPSR0            0x24
#define _P73_CA_PT_25_PORT_PAGE73_HDMI_ICBPSR1            0x25
#define _P73_CA_PT_26_PORT_PAGE73_HDMI_PCBPSR0            0x26
#define _P73_CA_PT_27_PORT_PAGE73_HDMI_PCBPSR1            0x27
#define _P73_CA_PT_28_PORT_PAGE73_HDMI_NTX1024TR0         0x28
#define _P73_CA_PT_29_PORT_PAGE73_HDMI_NTX1024TR1         0x29
#define _P73_CA_PT_2A_PORT_PAGE73_HDMI_STBPR              0x2A
#define _P73_CA_PT_2B_PORT_PAGE73_HDMI_NCPER              0x2B
#define _P73_CA_PT_2C_PORT_PAGE73_HDMI_PETR               0x2C
#define _P73_CA_PT_2D_PORT_PAGE73_HDMI_AAPNR              0x2D
#define _P73_CA_PT_2E_PORT_PAGE73_HDMI_APDMCR             0x2E
#define _P73_CA_PT_30_PORT_PAGE73_HDMI_AVMCR              0x30
#define _P73_CA_PT_31_PORT_PAGE73_HDMI_WDCR0              0x31
#define _P73_CA_PT_32_PORT_PAGE73_HDMI_WDCR1              0x32
#define _P73_CA_PT_33_PORT_PAGE73_HDMI_WDCR2              0x33
#define _P73_CA_PT_34_PORT_PAGE73_HDMI_DBCR               0x34
#define _P73_CA_PT_35_PORT_PAGE73_HDMI_APTMCR0            0x35
#define _P73_CA_PT_36_PORT_PAGE73_HDMI_APTMCR1            0x36
#define _P73_CA_PT_38_PORT_PAGE73_HDMI_DPCR0              0x38
#define _P73_CA_PT_39_PORT_PAGE73_HDMI_DPCR1              0x39
#define _P73_CA_PT_3A_PORT_PAGE73_HDMI_DPCR2              0x3A
#define _P73_CA_PT_3B_PORT_PAGE73_HDMI_DPCR3              0x3B
#define _P73_CA_PT_3C_PORT_PAGE73_HDMI_SUMCM              0x3C
#define _P73_CA_PT_3D_PORT_PAGE73_HDMI_SUMCL              0x3D
#define _P73_CA_PT_3E_PORT_PAGE73_DPLL_M_N_MSB            0x3E
#define _P73_CA_PT_3F_PORT_PAGE73_DPLL_LDO                0x3F
#define _P73_CA_PT_40_PORT_PAGE73_HDMI_AWDSR              0x40
#define _P73_CA_PT_41_PORT_PAGE73_HDMI_VWDSR              0x41
#define _P73_CA_PT_42_PORT_PAGE73_HDMI_PAMICR             0x42
#define _P73_CA_PT_43_PORT_PAGE73_HDMI_PTRSV0             0x43
#define _P73_CA_PT_44_PORT_PAGE73_HDMI_PTRSV1             0x44
#define _P73_CA_PT_45_PORT_PAGE73_HDMI_PVGCR0             0x45
#define _P73_CA_PT_46_PORT_PAGE73_HDMI_PVGCR1             0x46
#define _P73_CA_PT_47_PORT_PAGE73_HDMI_PVGCR2             0x47
#define _P73_CA_PT_48_PORT_PAGE73_HDMI_PVSR0              0x48
#define _P73_CA_PT_49_PORT_PAGE73_HDMI_PVSR1              0x49
#define _P73_CA_PT_4A_PORT_PAGE73_HDMI_PVSR2              0x4A
#define _P73_CA_PT_50_PORT_PAGE73_HDMI_VCR                0x50
#define _P73_CA_PT_51_PORT_PAGE73_HDMI_ACRCR              0x51
#define _P73_CA_PT_52_PORT_PAGE73_HDMI_ACRSR0             0x52
#define _P73_CA_PT_53_PORT_PAGE73_HDMI_ACRSR1             0x53
#define _P73_CA_PT_54_PORT_PAGE73_HDMI_ACRSR2             0x54
#define _P73_CA_PT_55_PORT_PAGE73_HDMI_ACRSR3             0x55
#define _P73_CA_PT_56_PORT_PAGE73_HDMI_ACRSR4             0x56
#define _P73_CA_PT_57_PORT_PAGE73_HDMI_ACS0               0x57
#define _P73_CA_PT_58_PORT_PAGE73_HDMI_ACS1               0x58
#define _P73_CA_PT_59_PORT_PAGE73_HDMI_ACS2               0x59
#define _P73_CA_PT_5A_PORT_PAGE73_HDMI_ACS3               0x5A
#define _P73_CA_PT_5B_PORT_PAGE73_HDMI_ACS4               0x5B
#define _P73_CA_PT_60_PORT_PAGE73_HDMI_INTCR              0x60
#define _P73_CA_PT_61_PORT_PAGE73_HDMI_ALCR               0x61
#define _P73_CA_PT_62_PORT_PAGE73_HDMI_AOCR               0x62
#define _P73_CA_PT_70_PORT_PAGE73_HDMI_BCSR               0x70
#define _P73_CA_PT_71_PORT_PAGE73_HDMI_ASR0               0x71
#define _P73_CA_PT_72_PORT_PAGE73_HDMI_ASR1               0x72
#define _P73_CA_PT_80_PORT_PAGE73_HDMI_DPC_SET0           0x80
#define _P73_CA_PT_81_PORT_PAGE73_HDMI_DPC_SET1           0x81
#define _P73_CA_PT_82_PORT_PAGE73_HDMI_DPC_SET2           0x82
#define _P73_CA_PT_83_PORT_PAGE73_HDMI_DPC_SET3           0x83
#define _P73_CA_PT_84_PORT_PAGE73_HDMI_DET_0              0x84
#define _P73_CA_PT_85_PORT_PAGE73_HDMI_DET_1              0x85
#define _P73_CA_PT_86_PORT_PAGE73_HDMI_DET_2              0x86
#define _P73_CA_PT_87_PORT_PAGE73_HDMI_DET_3              0x87
#define _P73_CA_PT_88_PORT_PAGE73_HDMI_DET_4              0x88
#define _P73_CA_PT_8A_PORT_PAGE73_AUDIO_FREQDET           0x8A
#define _P73_CA_PT_8B_PORT_PAGE73_AUDIO_FREQ_RESULT       0x8B
#define _P73_CA_PT_8C_PORT_PAGE73_AUDIO_FREQ_RESULT_M     0x8C
#define _P73_CA_PT_8D_PORT_PAGE73_AUDIO_FREQ_RESULT_L     0x8D
#define _P73_CA_PT_8E_PORT_PAGE73_XTAL_DIV                0x8E
#define _P73_CA_PT_8F_PORT_PAGE73_TH0                     0x8F
#define _P73_CA_PT_90_PORT_PAGE73_TH1                     0x90
#define _P73_CA_PT_91_PORT_PAGE73_TH2                     0x91
#define _P73_CA_PT_92_PORT_PAGE73_TH3                     0x92
#define _P73_CA_PT_93_PORT_PAGE73_TH4                     0x93
#define _P73_CA_PT_94_PORT_PAGE73_TH5                     0x94
#define _P73_CA_PT_95_PORT_PAGE73_PRESET_S_CODE0          0x95
#define _P73_CA_PT_96_PORT_PAGE73_PRESET_S_CODE1          0x96
#define _P73_CA_PT_97_PORT_PAGE73_PRESET_S_CODE2          0x97
#define _P73_CA_PT_98_PORT_PAGE73_PRESET_S2_CODE          0x98
#define _P73_CA_PT_99_PORT_PAGE73_PRESET_D_CODE_0         0x99
#define _P73_CA_PT_9A_PORT_PAGE73_PRESET_D_CODE_1         0x9A
#define _P73_CA_PT_9B_PORT_PAGE73_PRESET_D_CODE_2         0x9B
#define _P73_CA_PT_9C_PORT_PAGE73_PRESET_D_CODE_3         0x9C
#define _P73_CA_PT_9D_PORT_PAGE73_PRESET_D_CODE_4         0x9D
#define _P73_CA_PT_9E_PORT_PAGE73_PRESET_D_CODE_5         0x9E
#define _P73_CA_PT_9F_PORT_PAGE73_PRESET_AFSM_MOD         0x9F
#define _P73_CA_PT_A4_PORT_PAGE73_HDMI_PTRSV_2            0xA4
#define _P73_CA_PT_A5_PORT_PAGE73_HDMI_PTRSV_3            0xA5
#define _P73_CA_PT_A6_PORT_PAGE73_HDMI_PARSV              0xA6
#define _P73_CA_PT_A7_PORT_PAGE73_HDMI_GPVS_0             0xA7
#define _P73_CA_PT_A8_PORT_PAGE73_HDMI_PVSR_3             0xA8
#define _P73_CA_PT_A9_PORT_PAGE73_HDMI_PVSR_4             0xA9
#define _P73_CA_PT_AA_PORT_PAGE73_HDMI_PVGCR3             0xAA
#define _P73_CA_PT_AB_PORT_PAGE73_HDMI_PVGCR4             0xAB
#define _P73_CA_PT_AE_PORT_PAGE73_HDMI_GDI_TEST_FUNC      0xAE
#define _P73_CA_PT_AF_PORT_PAGE73_HDMI_BED_FUNC_0         0xAF
#define _P73_CA_PT_B0_PORT_PAGE73_HDMI_BED_FUNC_1         0xB0
#define _P73_CA_PT_B1_PORT_PAGE73_HDMI_BED_FUNC_2         0xB1
#define _P73_CA_PT_B2_PORT_PAGE73_HDMI_BED_FUNC_3         0xB2
#define _P73_CA_PT_B3_PORT_PAGE73_HDMI_BED_FUNC_4         0xB3
#define _P73_CA_PT_B4_PORT_PAGE73_HDMI_BED_FUNC_5         0xB4
#define _P73_CA_PT_B5_PORT_PAGE73_HDMI_BED_FUNC_6         0xB5
#define _P73_CA_PT_B6_PORT_PAGE73_HDMI_BED_FUNC_7         0xB6
#define _P73_CA_PT_B7_PORT_PAGE73_HDMI_BED_FUNC_8         0xB7
#define _P73_CA_PT_B8_PORT_PAGE73_HDMI_BED_FUNC_9         0xB8


//--------------------------------------------------
// D5 Port Overall HDMI System Function Block (Page 74)
//--------------------------------------------------
#define _P74_C4_PT_00_PORT_PAGE74_BKSV0                   0x00
#define _P74_C4_PT_01_PORT_PAGE74_BKSV1                   0x01
#define _P74_C4_PT_02_PORT_PAGE74_BKSV2                   0x02
#define _P74_C4_PT_03_PORT_PAGE74_BKSV3                   0x03
#define _P74_C4_PT_04_PORT_PAGE74_BKSV4                   0x04
#define _P74_C4_PT_08_PORT_PAGE74_RI0                     0x08
#define _P74_C4_PT_09_PORT_PAGE74_RI1                     0x09
#define _P74_C4_PT_0A_PORT_PAGE74_PJ                      0x0A
#define _P74_C4_PT_10_PORT_PAGE74_AKSV0                   0x10
#define _P74_C4_PT_11_PORT_PAGE74_AKSV1                   0x11
#define _P74_C4_PT_12_PORT_PAGE74_AKSV2                   0x12
#define _P74_C4_PT_13_PORT_PAGE74_AKSV3                   0x13
#define _P74_C4_PT_14_PORT_PAGE74_AKSV4                   0x14
#define _P74_C4_PT_15_PORT_PAGE74_AINFO                   0x15
#define _P74_C4_PT_18_PORT_PAGE74_AN0                     0x18
#define _P74_C4_PT_19_PORT_PAGE74_AN1                     0x19
#define _P74_C4_PT_1A_PORT_PAGE74_AN2                     0x1A
#define _P74_C4_PT_1B_PORT_PAGE74_AN3                     0x1B
#define _P74_C4_PT_1C_PORT_PAGE74_AN4                     0x1C
#define _P74_C4_PT_1D_PORT_PAGE74_AN5                     0x1D
#define _P74_C4_PT_1E_PORT_PAGE74_AN6                     0x1E
#define _P74_C4_PT_1F_PORT_PAGE74_AN7                     0x1F
#define _P74_C4_PT_40_PORT_PAGE74_BCAPS                   0x40
#define _P74_C4_PT_41_PORT_PAGE74_BSTATUS                 0x41
#define _P74_C4_PT_43_PORT_PAGE74_KSV_FIFO                0x43
#define _P74_C4_PT_C0_PORT_PAGE74_HDCP_FCR                0xC0
#define _P74_C4_PT_C1_PORT_PAGE74_HDCP_SIR                0xC1
#define _P74_C4_PT_C2_PORT_PAGE74_HDCP_SLAVE_ADD          0xC2
#define _P74_CA_PT_00_PORT_PAGE74_HDMI_SCR                0x00
#define _P74_CA_PT_01_PORT_PAGE74_HDMI_N_VAL              0x01
#define _P74_CA_PT_02_PORT_PAGE74_HDMI_BCHCR              0x02
#define _P74_CA_PT_03_PORT_PAGE74_HDMI_AFCR               0x03
#define _P74_CA_PT_04_PORT_PAGE74_HDMI_AFSR               0x04
#define _P74_CA_PT_05_PORT_PAGE74_HDMI_MAGCR1             0x05
#define _P74_CA_PT_06_PORT_PAGE74_HDMI_MAGCR2             0x06
#define _P74_CA_PT_07_PORT_PAGE74_HDMI_MAG_M_FINAL        0x07
#define _P74_CA_PT_08_PORT_PAGE74_HDMI_MAG_L_FINAL        0x08
#define _P74_CA_PT_09_PORT_PAGE74_HDMI_MAG_R_FINAL        0x09
#define _P74_CA_PT_0A_PORT_PAGE74_AUDIO_LD_P_TIME_M       0x0A
#define _P74_CA_PT_0B_PORT_PAGE74_AUDIO_LD_P_TIME_N       0x0B
#define _P74_CA_PT_0C_PORT_PAGE74_ZCD_CTRL                0x0C
#define _P74_CA_PT_0D_PORT_PAGE74_ZCD_TIMEOUT             0x0D
#define _P74_CA_PT_0E_PORT_PAGE74_ZCD_STATUS              0x0E
#define _P74_CA_PT_10_PORT_PAGE74_HDMI_CMCR               0x10
#define _P74_CA_PT_11_PORT_PAGE74_HDMI_MCAPR              0x11
#define _P74_CA_PT_12_PORT_PAGE74_HDMI_SCAPR              0x12
#define _P74_CA_PT_13_PORT_PAGE74_HDMI_DCAPR0             0x13
#define _P74_CA_PT_14_PORT_PAGE74_HDMI_DCAPR1             0x14
#define _P74_CA_PT_15_PORT_PAGE74_HDMI_PSCR               0x15
#define _P74_CA_PT_16_PORT_PAGE74_HDMI_FDDR               0x16
#define _P74_CA_PT_17_PORT_PAGE74_HDMI_FDDF               0x17
#define _P74_CA_PT_18_PORT_PAGE74_HDMI_MFDDR              0x18
#define _P74_CA_PT_19_PORT_PAGE74_HDMI_MFDDF              0x19
#define _P74_CA_PT_1A_PORT_PAGE74_HDMI_FTR                0x1A
#define _P74_CA_PT_1B_PORT_PAGE74_HDMI_FBR                0x1B
#define _P74_CA_PT_1C_PORT_PAGE74_HDMI_ICPSNCR0           0x1C
#define _P74_CA_PT_1D_PORT_PAGE74_HDMI_ICPSNCR1           0x1D
#define _P74_CA_PT_1E_PORT_PAGE74_HDMI_PCPSNCR0           0x1E
#define _P74_CA_PT_1F_PORT_PAGE74_HDMI_PCPSNCR1           0x1F
#define _P74_CA_PT_20_PORT_PAGE74_HDMI_ICTPSR0            0x20
#define _P74_CA_PT_21_PORT_PAGE74_HDMI_ICTPSR1            0x21
#define _P74_CA_PT_22_PORT_PAGE74_HDMI_PCTPSR0            0x22
#define _P74_CA_PT_23_PORT_PAGE74_HDMI_PCTPSR1            0x23
#define _P74_CA_PT_24_PORT_PAGE74_HDMI_ICBPSR0            0x24
#define _P74_CA_PT_25_PORT_PAGE74_HDMI_ICBPSR1            0x25
#define _P74_CA_PT_26_PORT_PAGE74_HDMI_PCBPSR0            0x26
#define _P74_CA_PT_27_PORT_PAGE74_HDMI_PCBPSR1            0x27
#define _P74_CA_PT_28_PORT_PAGE74_HDMI_NTX1024TR0         0x28
#define _P74_CA_PT_29_PORT_PAGE74_HDMI_NTX1024TR1         0x29
#define _P74_CA_PT_2A_PORT_PAGE74_HDMI_STBPR              0x2A
#define _P74_CA_PT_2B_PORT_PAGE74_HDMI_NCPER              0x2B
#define _P74_CA_PT_2C_PORT_PAGE74_HDMI_PETR               0x2C
#define _P74_CA_PT_2D_PORT_PAGE74_HDMI_AAPNR              0x2D
#define _P74_CA_PT_2E_PORT_PAGE74_HDMI_APDMCR             0x2E
#define _P74_CA_PT_30_PORT_PAGE74_HDMI_AVMCR              0x30
#define _P74_CA_PT_31_PORT_PAGE74_HDMI_WDCR0              0x31
#define _P74_CA_PT_32_PORT_PAGE74_HDMI_WDCR1              0x32
#define _P74_CA_PT_33_PORT_PAGE74_HDMI_WDCR2              0x33
#define _P74_CA_PT_34_PORT_PAGE74_HDMI_DBCR               0x34
#define _P74_CA_PT_35_PORT_PAGE74_HDMI_APTMCR0            0x35
#define _P74_CA_PT_36_PORT_PAGE74_HDMI_APTMCR1            0x36
#define _P74_CA_PT_38_PORT_PAGE74_HDMI_DPCR0              0x38
#define _P74_CA_PT_39_PORT_PAGE74_HDMI_DPCR1              0x39
#define _P74_CA_PT_3A_PORT_PAGE74_HDMI_DPCR2              0x3A
#define _P74_CA_PT_3B_PORT_PAGE74_HDMI_DPCR3              0x3B
#define _P74_CA_PT_3C_PORT_PAGE74_HDMI_SUMCM              0x3C
#define _P74_CA_PT_3D_PORT_PAGE74_HDMI_SUMCL              0x3D
#define _P74_CA_PT_3E_PORT_PAGE74_DPLL_M_N_MSB            0x3E
#define _P74_CA_PT_3F_PORT_PAGE74_DPLL_LDO                0x3F
#define _P74_CA_PT_40_PORT_PAGE74_HDMI_AWDSR              0x40
#define _P74_CA_PT_41_PORT_PAGE74_HDMI_VWDSR              0x41
#define _P74_CA_PT_42_PORT_PAGE74_HDMI_PAMICR             0x42
#define _P74_CA_PT_43_PORT_PAGE74_HDMI_PTRSV0             0x43
#define _P74_CA_PT_44_PORT_PAGE74_HDMI_PTRSV1             0x44
#define _P74_CA_PT_45_PORT_PAGE74_HDMI_PVGCR0             0x45
#define _P74_CA_PT_46_PORT_PAGE74_HDMI_PVGCR1             0x46
#define _P74_CA_PT_47_PORT_PAGE74_HDMI_PVGCR2             0x47
#define _P74_CA_PT_48_PORT_PAGE74_HDMI_PVSR0              0x48
#define _P74_CA_PT_49_PORT_PAGE74_HDMI_PVSR1              0x49
#define _P74_CA_PT_4A_PORT_PAGE74_HDMI_PVSR2              0x4A
#define _P74_CA_PT_50_PORT_PAGE74_HDMI_VCR                0x50
#define _P74_CA_PT_51_PORT_PAGE74_HDMI_ACRCR              0x51
#define _P74_CA_PT_52_PORT_PAGE74_HDMI_ACRSR0             0x52
#define _P74_CA_PT_53_PORT_PAGE74_HDMI_ACRSR1             0x53
#define _P74_CA_PT_54_PORT_PAGE74_HDMI_ACRSR2             0x54
#define _P74_CA_PT_55_PORT_PAGE74_HDMI_ACRSR3             0x55
#define _P74_CA_PT_56_PORT_PAGE74_HDMI_ACRSR4             0x56
#define _P74_CA_PT_57_PORT_PAGE74_HDMI_ACS0               0x57
#define _P74_CA_PT_58_PORT_PAGE74_HDMI_ACS1               0x58
#define _P74_CA_PT_59_PORT_PAGE74_HDMI_ACS2               0x59
#define _P74_CA_PT_5A_PORT_PAGE74_HDMI_ACS3               0x5A
#define _P74_CA_PT_5B_PORT_PAGE74_HDMI_ACS4               0x5B
#define _P74_CA_PT_60_PORT_PAGE74_HDMI_INTCR              0x60
#define _P74_CA_PT_61_PORT_PAGE74_HDMI_ALCR               0x61
#define _P74_CA_PT_62_PORT_PAGE74_HDMI_AOCR               0x62
#define _P74_CA_PT_70_PORT_PAGE74_HDMI_BCSR               0x70
#define _P74_CA_PT_71_PORT_PAGE74_HDMI_ASR0               0x71
#define _P74_CA_PT_72_PORT_PAGE74_HDMI_ASR1               0x72
#define _P74_CA_PT_80_PORT_PAGE74_HDMI_DPC_SET0           0x80
#define _P74_CA_PT_81_PORT_PAGE74_HDMI_DPC_SET1           0x81
#define _P74_CA_PT_82_PORT_PAGE74_HDMI_DPC_SET2           0x82
#define _P74_CA_PT_83_PORT_PAGE74_HDMI_DPC_SET3           0x83
#define _P74_CA_PT_84_PORT_PAGE74_HDMI_DET_0              0x84
#define _P74_CA_PT_85_PORT_PAGE74_HDMI_DET_1              0x85
#define _P74_CA_PT_86_PORT_PAGE74_HDMI_DET_2              0x86
#define _P74_CA_PT_87_PORT_PAGE74_HDMI_DET_3              0x87
#define _P74_CA_PT_88_PORT_PAGE74_HDMI_DET_4              0x88
#define _P74_CA_PT_8A_PORT_PAGE74_AUDIO_FREQDET           0x8A
#define _P74_CA_PT_8B_PORT_PAGE74_AUDIO_FREQ_RESULT       0x8B
#define _P74_CA_PT_8C_PORT_PAGE74_AUDIO_FREQ_RESULT_M     0x8C
#define _P74_CA_PT_8D_PORT_PAGE74_AUDIO_FREQ_RESULT_L     0x8D
#define _P74_CA_PT_8E_PORT_PAGE74_XTAL_DIV                0x8E
#define _P74_CA_PT_8F_PORT_PAGE74_TH0                     0x8F
#define _P74_CA_PT_90_PORT_PAGE74_TH1                     0x90
#define _P74_CA_PT_91_PORT_PAGE74_TH2                     0x91
#define _P74_CA_PT_92_PORT_PAGE74_TH3                     0x92
#define _P74_CA_PT_93_PORT_PAGE74_TH4                     0x93
#define _P74_CA_PT_94_PORT_PAGE74_TH5                     0x94
#define _P74_CA_PT_95_PORT_PAGE74_PRESET_S_CODE0          0x95
#define _P74_CA_PT_96_PORT_PAGE74_PRESET_S_CODE1          0x96
#define _P74_CA_PT_97_PORT_PAGE74_PRESET_S_CODE2          0x97
#define _P74_CA_PT_98_PORT_PAGE74_PRESET_S2_CODE          0x98
#define _P74_CA_PT_99_PORT_PAGE74_PRESET_D_CODE_0         0x99
#define _P74_CA_PT_9A_PORT_PAGE74_PRESET_D_CODE_1         0x9A
#define _P74_CA_PT_9B_PORT_PAGE74_PRESET_D_CODE_2         0x9B
#define _P74_CA_PT_9C_PORT_PAGE74_PRESET_D_CODE_3         0x9C
#define _P74_CA_PT_9D_PORT_PAGE74_PRESET_D_CODE_4         0x9D
#define _P74_CA_PT_9E_PORT_PAGE74_PRESET_D_CODE_5         0x9E
#define _P74_CA_PT_9F_PORT_PAGE74_PRESET_AFSM_MOD         0x9F
#define _P74_CA_PT_A4_PORT_PAGE74_HDMI_PTRSV_2            0xA4
#define _P74_CA_PT_A5_PORT_PAGE74_HDMI_PTRSV_3            0xA5
#define _P74_CA_PT_A6_PORT_PAGE74_HDMI_PARSV              0xA6
#define _P74_CA_PT_A7_PORT_PAGE74_HDMI_GPVS_0             0xA7
#define _P74_CA_PT_A8_PORT_PAGE74_HDMI_PVSR_3             0xA8
#define _P74_CA_PT_A9_PORT_PAGE74_HDMI_PVSR_4             0xA9
#define _P74_CA_PT_AA_PORT_PAGE74_HDMI_PVGCR3             0xAA
#define _P74_CA_PT_AB_PORT_PAGE74_HDMI_PVGCR4             0xAB
#define _P74_CA_PT_AE_PORT_PAGE74_HDMI_GDI_TEST_FUNC      0xAE
#define _P74_CA_PT_AF_PORT_PAGE74_HDMI_BED_FUNC_0         0xAF
#define _P74_CA_PT_B0_PORT_PAGE74_HDMI_BED_FUNC_1         0xB0
#define _P74_CA_PT_B1_PORT_PAGE74_HDMI_BED_FUNC_2         0xB1
#define _P74_CA_PT_B2_PORT_PAGE74_HDMI_BED_FUNC_3         0xB2
#define _P74_CA_PT_B3_PORT_PAGE74_HDMI_BED_FUNC_4         0xB3
#define _P74_CA_PT_B4_PORT_PAGE74_HDMI_BED_FUNC_5         0xB4
#define _P74_CA_PT_B5_PORT_PAGE74_HDMI_BED_FUNC_6         0xB5
#define _P74_CA_PT_B6_PORT_PAGE74_HDMI_BED_FUNC_7         0xB6
#define _P74_CA_PT_B7_PORT_PAGE74_HDMI_BED_FUNC_8         0xB7
#define _P74_CA_PT_B8_PORT_PAGE74_HDMI_BED_FUNC_9         0xB8


//--------------------------------------------------
// S1 Scaling Down Control (Page 80)
//--------------------------------------------------
#define _P80_25_PT_00_V_SD_INIT_S1                        0x00
#define _P80_25_PT_01_V_SD_FACTOR_H_S1                    0x01
#define _P80_25_PT_02_V_SD_FACTOR_M_S1                    0x02
#define _P80_25_PT_03_V_SD_FACTOR_L_S1                    0x03
#define _P80_25_PT_04_H_SD_INIT_S1                        0x04
#define _P80_25_PT_05_H_SD_FACTOR_H_S1                    0x05
#define _P80_25_PT_06_H_SD_FACTOR_M_S1                    0x06
#define _P80_25_PT_07_H_SD_FACTOR_L_S1                    0x07
#define _P80_25_PT_08_H_SD_ACC_H_S1                       0x08
#define _P80_25_PT_09_H_SD_ACC_M_S1                       0x09
#define _P80_25_PT_0A_H_SD_ACC_WIDTH_H_S1                 0x0A
#define _P80_25_PT_0B_H_SD_ACC_WIDTH_L_S1                 0x0B
#define _P80_25_PT_0C_SD_FLAT_WIDTH_H_S1                  0x0C
#define _P80_25_PT_0D_SD_FLAT_WIDTH_L_S1                  0x0D
#define _P80_25_PT_0E_H_SD_ACC_L_S1                       0x0E


//--------------------------------------------------
// S1 I Domain Pattern Generator (Page 80)
//--------------------------------------------------
#define _P80_25_PT_10_I_PG_CTRL_0_S1                      0x10
#define _P80_25_PT_11_I_PG_CTRL_1_S1                      0x11
#define _P80_25_PT_12_INITIAL_R_L_S1                      0x12
#define _P80_25_PT_13_INITIAL_G_L_S1                      0x13
#define _P80_25_PT_14_INITIAL_B_L_S1                      0x14
#define _P80_25_PT_15_INITIAL_RGB_M_S1                    0x15
#define _P80_25_PT_16_INITIAL_RGB_H_S1                    0x16
#define _P80_25_PT_17_PATTERN_RESET_S1                    0x17


//--------------------------------------------------
// S1 Scaling Down Control (Page 80)
//--------------------------------------------------
#define _P80_25_PT_36_SD_OUT_WID_M_S1                     0x36
#define _P80_25_PT_37_SD_OUT_WID_L_S1                     0x37
#define _P80_25_PT_38_SD_OUT_LEN_M_S1                     0x38
#define _P80_25_PT_39_SD_OUT_LEN_L_S1                     0x39
#define _P80_25_PT_40_V_SD_INIT_M_S1                      0x40
#define _P80_25_PT_41_V_SD_INIT_L_S1                      0x41
#define _P80_25_PT_42_V_SD_FACTOR_L1_S1                   0x42
#define _P80_25_PT_43_H_SD_INIT_M_S1                      0x43
#define _P80_25_PT_44_H_SD_INIT_L_S1                      0x44
#define _P80_25_PT_45_SD_BIST_CTRL0_S1                    0x45
#define _P80_25_PT_46_SD_BIST_CTRL1_S1                    0x46


//--------------------------------------------------
// Display Format (Page 80)
//--------------------------------------------------
#define _P80_2B_PT_03_DISPLAY_HOR_BG_STA_H_S              0x03
#define _P80_2B_PT_04_DISPLAY_HOR_BG_STA_L_S              0x04
#define _P80_2B_PT_05_DISPLAY_HOR_ACT_STA_H_S1            0x05
#define _P80_2B_PT_06_DISPLAY_HOR_ACT_STA_L_S1            0x06
#define _P80_2B_PT_07_DISPLAY_HOR_ACT_END_H_S1            0x07
#define _P80_2B_PT_08_DISPLAY_HOR_ACT_END_L_S1            0x08
#define _P80_2B_PT_09_DISPLAY_HOR_BG_END_H_S              0x09
#define _P80_2B_PT_0A_DISPLAY_HOR_BG_END_L_S              0x0A
#define _P80_2B_PT_0E_DISPLAY_VER_BG_STA_H_S              0x0E
#define _P80_2B_PT_0F_DISPLAY_VER_BG_STA_L_S              0x0F
#define _P80_2B_PT_10_DISPLAY_VER_ACT_STA_H_S1            0x10
#define _P80_2B_PT_11_DISPLAY_VER_ACT_STA_L_S1            0x11
#define _P80_2B_PT_12_DISPLAY_VER_ACT_END_H_S1            0x12
#define _P80_2B_PT_13_DISPLAY_VER_ACT_END_L_S1            0x13
#define _P80_2B_PT_14_DISPLAY_VER_BG_END_H_S              0x14
#define _P80_2B_PT_15_DISPLAY_VER_BG_END_L_S              0x15
#define _P80_2B_PT_16_DISPLAY_HOR_ACT_STA_H_S2            0x16
#define _P80_2B_PT_17_DISPLAY_HOR_ACT_STA_L_S2            0x17
#define _P80_2B_PT_18_DISPLAY_HOR_ACT_END_H_S2            0x18
#define _P80_2B_PT_19_DISPLAY_HOR_ACT_END_L_S2            0x19
#define _P80_2B_PT_1A_DISPLAY_VER_ACT_STA_H_S2            0x1A
#define _P80_2B_PT_1B_DISPLAY_VER_ACT_STA_L_S2            0x1B
#define _P80_2B_PT_1C_DISPLAY_VER_ACT_END_H_S2            0x1C
#define _P80_2B_PT_1D_DISPLAY_VER_ACT_END_L_S2            0x1D


//--------------------------------------------------
// FIFO Window (Page 80)
//--------------------------------------------------
#define _P80_31_PT_00_DISPLAY_READ_WID_BSU_H_S1           0x00
#define _P80_31_PT_01_DISPLAY_READ_WID_BSU_L_S1           0x01
#define _P80_31_PT_02_DISPLAY_READ_LEN_BSU_L_S1           0x02
#define _P80_31_PT_04_DISPLAY_READ_WID_BSU_H_S2           0x04
#define _P80_31_PT_05_DISPLAY_READ_WID_BSU_L_S2           0x05
#define _P80_31_PT_06_DISPLAY_READ_LEN_BSU_L_S2           0x06


//--------------------------------------------------
// S1 Scaling Up Function (Page 80)
//--------------------------------------------------
#define _P80_34_PT_00_HOR_SCALE_FACTOR_H_S1               0x00
#define _P80_34_PT_01_HOR_SCALE_FACTOR_M_S1               0x01
#define _P80_34_PT_02_HOR_SCALE_FACTOR_L_S1               0x02
#define _P80_34_PT_03_VER_SCALE_FACTOR_H_S1               0x03
#define _P80_34_PT_04_VER_SCALE_FACTOR_M_S1               0x04
#define _P80_34_PT_05_VER_SCALE_FACTOR_L_S1               0x05
#define _P80_34_PT_06_HOR_SCALE_FACTOR_SEG1_H_S1          0x06
#define _P80_34_PT_07_HOR_SCALE_FACTOR_SEG1_L_S1          0x07
#define _P80_34_PT_08_HOR_SCALE_FACTOR_SEG2_H_S1          0x08
#define _P80_34_PT_09_HOR_SCALE_FACTOR_SEG2_L_S1          0x09
#define _P80_34_PT_0A_HOR_SCALE_FACTOR_SEG3_H_S1          0x0A
#define _P80_34_PT_0B_HOR_SCALE_FACTOR_SEG3_L_S1          0x0B
#define _P80_34_PT_0C_HOR_SCALE_FACTOR_DELTA1_H_S1        0x0C
#define _P80_34_PT_0D_HOR_SCALE_FACTOR_DELTA1_L_S1        0x0D
#define _P80_34_PT_0E_HOR_SCALE_FACTOR_DELTA2_H_S1        0x0E
#define _P80_34_PT_0F_HOR_SCALE_FACTOR_DELTA2_L_S1        0x0F
#define _P80_34_PT_10_HOR_FILTER_COEF_INI_S1              0x10
#define _P80_34_PT_11_VER_FILTER_COEF_INI_S1              0x11


//--------------------------------------------------
// S1 Back ground color (Page 80)
//--------------------------------------------------
#define _P80_6D_PT_00_BG_COLOR_VALUE_R_S1                 0x00
#define _P80_6D_PT_01_BG_COLOR_VALUE_G_S1                 0x01
#define _P80_6D_PT_02_BG_COLOR_VALUE_B_S1                 0x02
#define _P80_6D_PT_03_BG_COLOR_VALUE_RGB_S1               0x03


//--------------------------------------------------
// Color Conversion 每 RGBtoYCC before IDLTI 12bit In / 12bit Out (Page 80)
//--------------------------------------------------
#define _P80_9D_PT_00_H00_HIGH_BYTE_S1                    0x00
#define _P80_9D_PT_01_H00_MIDDLE_BYTE_S1                  0x01
#define _P80_9D_PT_02_H01_HIGH_BYTE_S1                    0x02
#define _P80_9D_PT_03_H01_MIDDLE_BYTE_S1                  0x03
#define _P80_9D_PT_04_H02_HIGH_BYTE_S1                    0x04
#define _P80_9D_PT_05_H02_MIDDLE_BYTE_S1                  0x05
#define _P80_9D_PT_06_H10_HIGH_BYTE_S1                    0x06
#define _P80_9D_PT_07_H10_MIDDLE_BYTE_S1                  0x07
#define _P80_9D_PT_08_H11_HIGH_BYTE_S1                    0x08
#define _P80_9D_PT_09_H11_MIDDLE_BYTE_S1                  0x09
#define _P80_9D_PT_0A_H12_HIGH_BYTE_S1                    0x0A
#define _P80_9D_PT_0B_H12_MIDDLE_BYTE_S1                  0x0B
#define _P80_9D_PT_0C_H20_HIGH_BYTE_S1                    0x0C
#define _P80_9D_PT_0D_H20_MIDDLE_BYTE_S1                  0x0D
#define _P80_9D_PT_0E_H21_HIGH_BYTE_S1                    0x0E
#define _P80_9D_PT_0F_H21_MIDDLE_BYTE_S1                  0x0F
#define _P80_9D_PT_10_H22_HIGH_BYTE_S1                    0x10
#define _P80_9D_PT_11_H22_MIDDLE_BYTE_S1                  0x11
#define _P80_9D_PT_12_H00_H01_LOW_BYTE_S1                 0x12
#define _P80_9D_PT_13_H02_H10_LOW_BYTE_S1                 0x13
#define _P80_9D_PT_14_H11_H12_LOW_BYTE_S1                 0x14
#define _P80_9D_PT_15_H20_H21_LOW_BYTE_S1                 0x15
#define _P80_9D_PT_16_H22_LOW_BYTE_S1                     0x16


//--------------------------------------------------
// S2 Scaling Down Control (Page C0)
//--------------------------------------------------
#define _PC0_25_PT_00_V_SD_INIT_S2                        0x00
#define _PC0_25_PT_01_V_SD_FACTOR_H_S2                    0x01
#define _PC0_25_PT_02_V_SD_FACTOR_M_S2                    0x02
#define _PC0_25_PT_03_V_SD_FACTOR_L_S2                    0x03
#define _PC0_25_PT_04_H_SD_INIT_S2                        0x04
#define _PC0_25_PT_05_H_SD_FACTOR_H_S2                    0x05
#define _PC0_25_PT_06_H_SD_FACTOR_M_S2                    0x06
#define _PC0_25_PT_07_H_SD_FACTOR_L_S2                    0x07
#define _PC0_25_PT_08_H_SD_ACC_H_S2                       0x08
#define _PC0_25_PT_09_H_SD_ACC_M_S2                       0x09
#define _PC0_25_PT_0A_H_SD_ACC_WIDTH_H_S2                 0x0A
#define _PC0_25_PT_0B_H_SD_ACC_WIDTH_L_S2                 0x0B
#define _PC0_25_PT_0C_SD_FLAT_WIDTH_H_S2                  0x0C
#define _PC0_25_PT_0D_SD_FLAT_WIDTH_L_S2                  0x0D
#define _PC0_25_PT_0E_H_SD_ACC_L_S2                       0x0E


//--------------------------------------------------
// S2 I Domain Pattern Generator (Page C0)
//--------------------------------------------------
#define _PC0_25_PT_10_I_PG_CTRL_0_S2                      0x10
#define _PC0_25_PT_11_I_PG_CTRL_1_S2                      0x11
#define _PC0_25_PT_12_INITIAL_R_L_S2                      0x12
#define _PC0_25_PT_13_INITIAL_G_L_S2                      0x13
#define _PC0_25_PT_14_INITIAL_B_L_S2                      0x14
#define _PC0_25_PT_15_INITIAL_RGB_M_S2                    0x15
#define _PC0_25_PT_16_INITIAL_RGB_H_S2                    0x16
#define _PC0_25_PT_17_PATTERN_RESET_S2                    0x17


//--------------------------------------------------
// S2 Scaling Down Control (Page C0)
//--------------------------------------------------
#define _PC0_25_PT_36_SD_OUT_WID_M_S2                     0x36
#define _PC0_25_PT_37_SD_OUT_WID_L_S2                     0x37
#define _PC0_25_PT_38_SD_OUT_LEN_M_S2                     0x38
#define _PC0_25_PT_39_SD_OUT_LEN_L_S2                     0x39
#define _PC0_25_PT_40_V_SD_INIT_M_S2                      0x40
#define _PC0_25_PT_41_V_SD_INIT_L_S2                      0x41
#define _PC0_25_PT_42_V_SD_FACTOR_L1_S2                   0x42
#define _PC0_25_PT_43_H_SD_INIT_M_S2                      0x43
#define _PC0_25_PT_44_H_SD_INIT_L_S2                      0x44
#define _PC0_25_PT_45_SD_BIST_CTRL0_S2                    0x45
#define _PC0_25_PT_46_SD_BIST_CTRL1_S2                    0x46


//--------------------------------------------------
// S2 Scaling Up Function (Page C0)
//--------------------------------------------------
#define _PC0_34_PT_00_HOR_SCALE_FACTOR_H_S2               0x00
#define _PC0_34_PT_01_HOR_SCALE_FACTOR_M_S2               0x01
#define _PC0_34_PT_02_HOR_SCALE_FACTOR_L_S2               0x02
#define _PC0_34_PT_03_VER_SCALE_FACTOR_H_S2               0x03
#define _PC0_34_PT_04_VER_SCALE_FACTOR_M_S2               0x04
#define _PC0_34_PT_05_VER_SCALE_FACTOR_L_S2               0x05
#define _PC0_34_PT_06_HOR_SCALE_FACTOR_SEG1_H_S2          0x06
#define _PC0_34_PT_07_HOR_SCALE_FACTOR_SEG1_L_S2          0x07
#define _PC0_34_PT_08_HOR_SCALE_FACTOR_SEG2_H_S2          0x08
#define _PC0_34_PT_09_HOR_SCALE_FACTOR_SEG2_L_S2          0x09
#define _PC0_34_PT_0A_HOR_SCALE_FACTOR_SEG3_H_S2          0x0A
#define _PC0_34_PT_0B_HOR_SCALE_FACTOR_SEG3_L_S2          0x0B
#define _PC0_34_PT_0C_HOR_SCALE_FACTOR_DELTA1_H_S2        0x0C
#define _PC0_34_PT_0D_HOR_SCALE_FACTOR_DELTA1_L_S2        0x0D
#define _PC0_34_PT_0E_HOR_SCALE_FACTOR_DELTA2_H_S2        0x0E
#define _PC0_34_PT_0F_HOR_SCALE_FACTOR_DELTA2_L_S2        0x0F
#define _PC0_34_PT_10_HOR_FILTER_COEF_INI_S2              0x10
#define _PC0_34_PT_11_VER_FILTER_COEF_INI_S2              0x11


//--------------------------------------------------
// S2 Back ground color (Page C0)
//--------------------------------------------------
#define _PC0_6D_PT_00_BG_COLOR_VALUE_R_S2                 0x00
#define _PC0_6D_PT_01_BG_COLOR_VALUE_G_S2                 0x01
#define _PC0_6D_PT_02_BG_COLOR_VALUE_B_S2                 0x02
#define _PC0_6D_PT_03_BG_COLOR_VALUE_RGB_S2               0x03


//--------------------------------------------------
// Color Conversion 每 RGBtoYCC before IDLTI 12bit In / 12bit Out (Page C0)
//--------------------------------------------------
#define _PC0_9D_PT_00_H00_HIGH_BYTE_S2                    0x00
#define _PC0_9D_PT_01_H00_MIDDLE_BYTE_S2                  0x01
#define _PC0_9D_PT_02_H01_HIGH_BYTE_S2                    0x02
#define _PC0_9D_PT_03_H01_MIDDLE_BYTE_S2                  0x03
#define _PC0_9D_PT_04_H02_HIGH_BYTE_S2                    0x04
#define _PC0_9D_PT_05_H02_MIDDLE_BYTE_S2                  0x05
#define _PC0_9D_PT_06_H10_HIGH_BYTE_S2                    0x06
#define _PC0_9D_PT_07_H10_MIDDLE_BYTE_S2                  0x07
#define _PC0_9D_PT_08_H11_HIGH_BYTE_S2                    0x08
#define _PC0_9D_PT_09_H11_MIDDLE_BYTE_S2                  0x09
#define _PC0_9D_PT_0A_H12_HIGH_BYTE_S2                    0x0A
#define _PC0_9D_PT_0B_H12_MIDDLE_BYTE_S2                  0x0B
#define _PC0_9D_PT_0C_H20_HIGH_BYTE_S2                    0x0C
#define _PC0_9D_PT_0D_H20_MIDDLE_BYTE_S2                  0x0D
#define _PC0_9D_PT_0E_H21_HIGH_BYTE_S2                    0x0E
#define _PC0_9D_PT_0F_H21_MIDDLE_BYTE_S2                  0x0F
#define _PC0_9D_PT_10_H22_HIGH_BYTE_S2                    0x10
#define _PC0_9D_PT_11_H22_MIDDLE_BYTE_S2                  0x11
#define _PC0_9D_PT_12_H00_H01_LOW_BYTE_S2                 0x12
#define _PC0_9D_PT_13_H02_H10_LOW_BYTE_S2                 0x13
#define _PC0_9D_PT_14_H11_H12_LOW_BYTE_S2                 0x14
#define _PC0_9D_PT_15_H20_H21_LOW_BYTE_S2                 0x15
#define _PC0_9D_PT_16_H22_LOW_BYTE_S2                     0x16


//--------------------------------------------------
// Chip Control (Page 00)
//--------------------------------------------------
#define P0_00_ID_REG                                      0x0000
#define P0_01_HOST_CTRL                                   0x0001
#define P0_0E_I_D_MAPPING                                 0x000E
#define P0_0F_ID_REG_02                                   0x000F


//--------------------------------------------------
// IRQ Status (Page 00)
//--------------------------------------------------
#define P0_02_STATUS0                                     0x0002
#define P0_03_STATUS1                                     0x0003
#define P0_04_IRQ_CTRL0                                   0x0004
#define P0_05_IRQ_CTRL1                                   0x0005
#define P0_06_TOP_DUMMY1                                  0x0006
#define P0_07_RESERVED_STATUS                             0x0007
#define P0_08_IRQ_CTRL2                                   0x0008


//--------------------------------------------------
// Power Control (Page 00)
//--------------------------------------------------
#define P0_09_GA_POWER_CTRL                               0x0009
#define P0_0A_GC_POWER_CTRL                               0x000A
#define P0_0B_POWER_CTRL                                  0x000B


//--------------------------------------------------
// Watch Dog (Page 00)
//--------------------------------------------------
#define P0_0C_WATCH_DOG_CTRL0                             0x000C
#define P0_0D_TOP_DUMMY2                                  0x000D
#define P0_0E_I_D_MAPPING                                 0x000E


//--------------------------------------------------
// M1 Input Video Capture (Page 0)
//--------------------------------------------------
#define P0_10_M1_VGIP_CTRL                                0x0010
#define P0_11_M1_VGIP_SIGINV                              0x0011
#define P0_12_M1_VGIP_DELAY_CTRL                          0x0012
#define P0_13_M1_VGIP_ODD_CTRL                            0x0013


//--------------------------------------------------
// M1 Input Frame Window (Page 0)
//--------------------------------------------------
#define P0_14_M1_IPH_ACT_STA_H                            0x0014
#define P0_15_M1_IPH_ACT_STA_L                            0x0015
#define P0_16_M1_IPH_ACT_WID_H                            0x0016
#define P0_17_M1_IPH_ACT_WID_L                            0x0017
#define P0_18_M1_IPV_ACT_STA_H                            0x0018
#define P0_19_M1_IPV_ACT_STA_L                            0x0019
#define P0_1A_M1_IPV_ACT_LEN_H                            0x001A
#define P0_1B_M1_IPV_ACT_LEN_L                            0x001B
#define P0_1C_M1_IVS_DELAY                                0x001C
#define P0_1D_M1_IHS_DELAY                                0x001D
#define P0_1E_M1_VGIP_HV_DELAY                            0x001E
#define P0_1F_M1_ICLK_GATED_CTRL1                         0x001F
#define P0_20_M1_DUMMY2                                   0x0020
#define P0_21_M1_I_DOMAIN_TEST_SELECT                     0x0021


//--------------------------------------------------
// M1 FIFO Frequency (Page 0)
//--------------------------------------------------
#define P0_22_M1_FIFO_CLOCK_SELECT                        0x0022


//--------------------------------------------------
// M1 Scaling Down Control (Page 0)
//--------------------------------------------------
#define P0_23_SCALE_DOWN_CTRL_M1                          0x0023
#define P0_24_SD_ADDRESS_PORT_M1                          0x0024
#define P0_25_SD_DATA_PORT_M1                             0x0025
#define P0_26_SD_FILTER_CONTROL_REG_M1                    0x0026
#define P0_27_SD_USER_FILTER_ACCESS_PORT_M1               0x0027


//--------------------------------------------------
// Display Format (Page 0)
//--------------------------------------------------
#define P0_28_VIDEO_DISPLAY_CONTROL_REG                   0x0028
#define P0_29_VDISP_SIGINV                                0x0029
#define P0_2A_DISPLAY_FORMAT_ADDR_PORT                    0x002A
#define P0_2B_DISPLAY_FORMAT_DATA_PORT                    0x002B
#define P0_2E_VIDEO_DISPLAY_CONTROL_REG1                  0x002E
#define P0_2F_DISPLAY_FORMAT_DOUBLE_BUFFER                0x002F


//--------------------------------------------------
// FIFO Window (Page 0)
//--------------------------------------------------
#define P0_30_FIFO_WINDOW_ADDR_PORT                       0x0030
#define P0_31_FIFO_WINDOW_DATA_PORT                       0x0031


//--------------------------------------------------
// M1 Scaling Up Function (Page 0)
//--------------------------------------------------
#define P0_32_SCALE_CONTROL_REG                           0x0032
#define P0_33_SF_ADDR_PORT                                0x0033
#define P0_34_SF_DATA_PORT                                0x0034
#define P0_35_FILTER_CONTROL_REG                          0x0035
#define P0_36_USER_DEF_FILTER_ACCESS_PORT                 0x0036
#define P0_37_SCALE_UP_FOR_LINE_INTERLEAVE                0x0037


//--------------------------------------------------
// Frame Sync Fine Tune (Page 0)
//--------------------------------------------------
#define P0_3D_IV_DV_DELAY_CLK_FINE                        0x003D
#define P0_3E_IVS2DVS_DLY_LINE_H                          0x003E
#define P0_3F_DISPLAY_ALIGN_CONTROL                       0x003F
#define P0_40_IVS2DVS_DLY_LINE_L                          0x0040
#define P0_41_IVS2DVS_DLY_TUNE_ODD                        0x0041
#define P0_42_IVS2DVS_DLY_TUNE_EVEN                       0x0042
#define P0_43_FS_DELAY_FINE_TUNE                          0x0043
#define P0_44_LAST_LINE_H                                 0x0044
#define P0_45_LAST_LINE_L                                 0x0045


//--------------------------------------------------
// Sync Processor Overview (Page 0)
//--------------------------------------------------
#define P0_47_SYNC_SELECT                                 0x0047
#define P0_48_SYNC_INVERT                                 0x0048
#define P0_49_SYNC_CTRL                                   0x0049
#define P0_4A_STABLE_HIGH_PERIOD_H                        0x004A
#define P0_4B_STABLE_HIGH_PERIOD_L                        0x004B
#define P0_4C_VSYNC_COUNTER_LEVEL_MSB                     0x004C
#define P0_4D_VSYNC_COUNTER_LEVEL_LSB                     0x004D
#define P0_4E_HSYNC_TYPE_DETECTION_FLAG                   0x004E
#define P0_4F_STABLE_MEASURE                              0x004F
#define P0_50_STABLE_PERIOD_H                             0x0050
#define P0_51_STABLE_PERIOD_L                             0x0051
#define P0_52_STABLE_PERIOD_PULSE_H                       0x0052
#define P0_5A_SYNC_TEST_MISC                              0x005A
#define P0_5B_HS_DETECT                                   0x005B
#define P0_5C_SYNC_PROC_PORT_ADDR                         0x005C
#define P0_5D_SYNC_PROC_PORT_DATA                         0x005D
#define P0_5E_SYNCPROC_DUMMY0                             0x005E
#define P0_5F_SYNCPROC_DUMMY1                             0x005F


//--------------------------------------------------
// Highlight window (Page 0)
//--------------------------------------------------
#define P0_60_HLW_ADDR_PORT                               0x0060
#define P0_61_HLW_DATA_PORT                               0x0061


//--------------------------------------------------
// Contrast & Brightness (Page 0)
//--------------------------------------------------
#define P0_62_SRGB_CTRL                                   0x0062
#define P0_64_CTS_BRI_PORT_ADD                            0x0064
#define P0_65_CTS_BRI_PORT_DATA                           0x0065


//--------------------------------------------------
// M1 Color Processor Control (page 0)
//--------------------------------------------------
#define P0_63_SRGB_ACCESS_PORT_SETA                       0x0063
#define P0_68_GAMMA_BIST_DITHER_SETA                      0x0068


//--------------------------------------------------
// M1 Gamma Control (Page 0)
//--------------------------------------------------
#define P0_66_GAMMA_PORT_SETA                             0x0066
#define P0_67_GAMMA_CTRL_SETA                             0x0067


//--------------------------------------------------
// Dithering Control (For Display Domain) (Page 0)
//--------------------------------------------------
#define P0_69_D_DITHER_DATA_ACCESS                        0x0069
#define P0_6A_D_DITHER_COMMON_CTRL1                       0x006A
#define P0_6B_D_DITHER_REGISTER_ADDR                      0x006B


//--------------------------------------------------
// M1 Back ground color (Page 0)
//--------------------------------------------------
#define P0_6C_OVERLAY_CTRL                                0x006C
#define P0_6D_BG_COLOR_DATA_PORT_M1                       0x006D
#define P0_8F_OVERLAY_CTRL1                               0x008F


//--------------------------------------------------
// OSD Color Palette (Page 0)
//--------------------------------------------------
#define P0_6E_OVERLAY_LUT_ADDR                            0x006E
#define P0_6F_COLOR_LUT_PORT                              0x006F


//--------------------------------------------------
// M1 Image Auto Function (Page 0)
//--------------------------------------------------
#define P0_70_H_BOUNDARY_H                                0x0070
#define P0_71_H_BOUNDARY_STA_L                            0x0071
#define P0_72_H_BOUNDARY_END_L                            0x0072
#define P0_73_V_BOUNDARY_H                                0x0073
#define P0_74_V_BOUNDARY_STA_L                            0x0074
#define P0_75_V_BOUNDARY_END_L                            0x0075
#define P0_76_RED_NOISE_MARGIN                            0x0076
#define P0_77_GRN_NOISE_MARGIN                            0x0077
#define P0_78_BLU_NOISE_MARGIN                            0x0078
#define P0_79_DIFF_THRESHOLD                              0x0079
#define P0_7A_AUTO_ADJ_CTRL0                              0x007A
#define P0_7B_HW_AUTO_PHASE_CTRL0                         0x007B
#define P0_7C_AUTO_DUMMY                                  0x007C
#define P0_7D_AUTO_ADJ_CTRL1                              0x007D
#define P0_7E_VER_START_END_H                             0x007E
#define P0_7F_VER_START_L                                 0x007F
#define P0_80_VER_END_L                                   0x0080
#define P0_81_H_START_END_H                               0x0081
#define P0_82_H_START_L                                   0x0082
#define P0_83_H_END_L                                     0x0083
#define P0_84_AUTO_PHASE_3                                0x0084
#define P0_85_AUTO_PHASE_2                                0x0085
#define P0_86_AUTO_PHASE_1                                0x0086
#define P0_87_AUTO_PHASE_0                                0x0087


//--------------------------------------------------
// M1 Dithering Control (For Input Domain) (Page 0)
//--------------------------------------------------
#define P0_88_I_DITHER_DATA_ACCESS_SETA                   0x0088
#define P0_89_I_DITHER_COMMON_CTRL1_SETA                  0x0089
#define P0_8A_I_DITHER_COMMON_CTRL2_SETA                  0x008A

//--------------------------------------------------
// Test Pin Access Port (Page 0)
//--------------------------------------------------
#define P0_8D_TEST_MODE_PORT_ADDR                         0x008D
#define P0_8E_TEST_MODE_PORT_DATA                         0x008E


//--------------------------------------------------
// OSD Access Port (Page 0)
//--------------------------------------------------
#define P0_90_OSD_ADR_PORT_MSB                            0x0090
#define P0_91_OSD_ADR_PORT_LSB                            0x0091
#define P0_92_OSD_DATA_PORT                               0x0092
#define P0_93_OSD_MISC_PORT                               0x0093
#define P0_94_OSD_WRITE_OPTION                            0x0094


//--------------------------------------------------
// Digital Filter (Page 0)
//--------------------------------------------------
#define P0_98_DIGITAL_FILTER_CTRL                         0x0098
#define P0_99_DIGITAL_FILTER_PORT                         0x0099

//--------------------------------------------------
// Color Conversion 每 RGBtoYCC before IDLTI 12bit In / 12bit Out (Page 0)
//--------------------------------------------------
#define P0_9C_RGB2YCC_CTRL                                0x009C
#define P0_9D_RGB2YCC_COEF_DATA                           0x009D


//--------------------------------------------------
// Page Control(Page 0)
//--------------------------------------------------
#define P0_9F_PAGE_SEL                                    0x009F


//--------------------------------------------------
// Embedded ADC (Page 0)
//--------------------------------------------------
#define P0_BB_ADC_CK_IN_CTRL                              0x00BB
#define P0_BC_ADC_CK_OUT_CTRL                             0x00BC
#define P0_BD_ADC_TEST                                    0x00BD
#define P0_BE_ADC_GAI_LSB                                 0x00BE
#define P0_BF_ADC_OFF_LSB                                 0x00BF
#define P0_C0_ADC_GAI_RED_MSB                             0x00C0
#define P0_C1_ADC_GAI_GRN_MSB                             0x00C1
#define P0_C2_ADC_GAI_BLU_MSB                             0x00C2
#define P0_C3_ADC_OFF_RED_MSB                             0x00C3
#define P0_C4_ADC_OFF_GRN_MSB                             0x00C4
#define P0_C5_ADC_OFF_BLU_MSB                             0x00C5
#define P0_C6_ADC_POWER                                   0x00C6
#define P0_C7_ADC_VOLT_SEL                                0x00C7
#define P0_C8_ADC_SF_CTRL                                 0x00C8
#define P0_C9_ADC_CLAMP_CTRL                              0x00C9
#define P0_CD_ADC_COMPARE_FLAG                            0x00CD
#define P0_CE_ADC_VMID_FINETUNE                           0x00CE
#define P0_CF_ADC_CTL_RED                                 0x00CF
#define P0_D0_ADC_CTL_GRN                                 0x00D0
#define P0_D1_ADC_CTL_BLU                                 0x00D1
#define P0_D2_ADC_GAIN_CALI                               0x00D2
#define P0_D3_ADC_OFF_LSB2                                0x00D3
#define P0_D4_ADC_SOG_CTRL                                0x00D4
#define P0_D5_ADC_SAR_CTRL                                0x00D5
#define P0_D6_ADC_CLAMP_TOP                               0x00D6
#define P0_D7_ADC_SOG_DAC                                 0x00D7
#define P0_D8_ADC_REG0                                    0x00D8
#define P0_D9_ADC_REG1                                    0x00D9
#define P0_DA_ADC_REG2                                    0x00DA


//--------------------------------------------------
// ABL (Page 0)
//--------------------------------------------------
#define P0_E2_AUTO_BLACK_LEVEL_CTRL1                      0x00E2
#define P0_E3_AUTO_BLACK_LEVEL_CTRL2                      0x00E3
#define P0_E4_AUTO_BLACK_LEVEL_CTRL3                      0x00E4
#define P0_E5_AUTO_BLACK_LEVEL_CTRL4                      0x00E5
#define P0_E6_AUTO_BLACK_LEVEL_CTRL5                      0x00E6
#define P0_E7_AUTO_BLACK_LEVEL_CTRL6                      0x00E7
#define P0_E8_AUTO_BLACK_LEVEL_CTRL7                      0x00E8
#define P0_E9_AUTO_BLACK_LEVEL_RED_VALUE                  0x00E9
#define P0_EA_AUTO_BLACK_LEVEL_GREEN_VALUE                0x00EA
#define P0_EB_AUTO_BLACK_LEVEL_BLUE_VALUE                 0x00EB
#define P0_EC_AUTO_BLACK_LEVEL_R_NOISE_VALUE              0x00EC
#define P0_ED_AUTO_BLACK_LEVEL_G_NOISE_VALUE              0x00ED
#define P0_EE_AUTO_BLACK_LEVEL_B_NOISE_VALUE              0x00EE
#define P0_EF_AUTO_BLACK_LEVEL_CTRL8                      0x00EF


//--------------------------------------------------
// LVR (Page 0)
//--------------------------------------------------
#define P0_F0_VCCKOFF_CONTROL0                            0x00F0
#define P0_F1_VCCKOFF_CONTROL1                            0x00F1
#define P0_F3_POWER_ON_RESET                              0x00F3


//--------------------------------------------------
// Schmitt Trigger (Page 0)
//--------------------------------------------------
#define P0_F2_HS_SCHMITT_TRIGGE_CTRL2                     0x00F2
#define P0_F4_HS_SCHMITT_TRIGGE_CTRL                      0x00F4


//--------------------------------------------------
// MEMORY PLL (Page 0)
//--------------------------------------------------
#define P0_F5_MPLL_M                                      0x00F5
#define P0_F6_MPLL_N                                      0x00F6
#define P0_F7_MPLL_CRNT                                   0x00F7
#define P0_F8_MPLL_WD                                     0x00F8
#define P0_F9_MPLL_CAL                                    0x00F9


//--------------------------------------------------
// MCLK Spread Spectrum (Page 0)
//--------------------------------------------------
#define P0_FA_MCLK_FINE_TUNE_OFFSET_MSB                   0x00FA
#define P0_FB_MCLK_FINE_TUNE_OFFSET_LSB                   0x00FB
#define P0_FC_MCLK_SPREAD_SPECTRUM                        0x00FC
#define P0_FD_MPLL_RESULT                                 0x00FD
#define P0_FE_MPLL_RESER                                  0x00FE
#define P0_FF_MPLL_M_N_MSB                                0x00FF


//--------------------------------------------------
// APLL&DDS (Page 1)
//--------------------------------------------------
#define P1_A0_PLL_DIV_CTRL                                0x01A0
#define P1_A1_I_CODE_M                                    0x01A1
#define P1_A2_I_CODE_L                                    0x01A2
#define P1_A3_P_CODE                                      0x01A3
#define P1_A4_PFD_CALIBRATED_RESULTS_H                    0x01A4
#define P1_A5_PFD_CALIBRATED_RESULTS_L                    0x01A5
#define P1_A6_PE_MEASURE_H                                0x01A6
#define P1_A7_PE_MEASURE_L                                0x01A7
#define P1_A8_PE_MAX_MEASURE_H                            0x01A8
#define P1_A9_PE_MAX_MEASURE_L                            0x01A9
#define P1_AA_FAST_PLL_CTRL                               0x01AA
#define P1_AC_PLL_M                                       0x01AC
#define P1_AD_PLL_N                                       0x01AD
#define P1_AE_PLL_CRNT                                    0x01AE
#define P1_AF_PLL_WD                                      0x01AF
#define P1_B0_PLL_MIX                                     0x01B0
#define P1_B1_PLLDIV_H                                    0x01B1
#define P1_B2_PLLDIV_L                                    0x01B2
#define P1_B3_PLLPHASE_CTRL0                              0x01B3
#define P1_B4_PLLPHASE_CTRL1                              0x01B4
#define P1_B5_PLL_PHASE_INTERPOLATION                     0x01B5
#define P1_B6_P_CODE_MAPPING_METHOD                       0x01B6
#define P1_B7_PE_TRACKING_METHOD                          0x01B7
#define P1_B8_DDS_MIX_1                                   0x01B8
#define P1_B9_DDS_MIX_2                                   0x01B9
#define P1_BA_DDS_MIX_3                                   0x01BA
#define P1_BB_DDS_MIX_4                                   0x01BB
#define P1_BC_DDS_MIX_5                                   0x01BC
#define P1_BD_DDS_MIX_6                                   0x01BD
#define P1_BE_DDS_MIX_7                                   0x01BE
#define P1_F0_RESERVED_RG                                 0x01F0
#define P1_F1_APLL_RESERVED                               0x01F1
#define P1_F2_APLL_MISC                                   0x01F2
#define P1_F3_APLL_STATUS                                 0x01F3
#define P1_F4_APLL_IRQ                                    0x01F4
#define P1_F5_APLL_WD                                     0x01F5
#define P1_F6_SELECT_TEST_SLS2                            0x01F6
#define P1_F7_FAST_PLL_SUM_I_26_24                        0x01F7
#define P1_F8_FAST_PLL_SUM_I_23_16                        0x01F8
#define P1_F9_FAST_PLL_SUM_I_15_8                         0x01F9
#define P1_FA_FAST_PLL_SUM_I_7_0                          0x01FA
#define P1_FB_FAST_PLL_SUM_I_MEASURE_26_24                0x01FB
#define P1_FC_FAST_PLL_SUM_I_MEASURE_23_16                0x01FC
#define P1_FD_FAST_PLL_SUM_I_MEASURE_15_8                 0x01FD
#define P1_FE_FAST_PLL_SUM_I_MEASURE_7_0                  0x01FE
#define P1_FF_APLL_THERMO_CTRL_0                          0x01FF


//--------------------------------------------------
// DISPLAY PLL (Page 1)
//--------------------------------------------------
#define P1_BF_DPLL_M                                      0x01BF
#define P1_C0_DPLL_N                                      0x01C0
#define P1_C1_DPLL_CRNT                                   0x01C1


//--------------------------------------------------
// DCLK Spread Spectrum (Page 1)
//--------------------------------------------------
#define P1_C2_DPLL_WD                                     0x01C2
#define P1_C3_DPLL_CAL                                    0x01C3
#define P1_C4_DCLK_FINE_TUNE_OFFSET_MSB                   0x01C4
#define P1_C5_DCLK_FINE_TUNE_OFFSET_LSB                   0x01C5
#define P1_C6_DCLK_SPREAD_SPECTRUM                        0x01C6
#define P1_CA_FIXED_LAST_LINE_CTRL                        0x01CA
#define P1_CE_FIXED_LAST_LINE_TRACKING_TIME               0x01CE
#define P1_CF_PHASE_RESULT_MSB                            0x01CF
#define P1_D0_PHASE_LINE_LSB                              0x01D0
#define P1_D1_PHASE_PIXEL_LSB                             0x01D1
#define P1_D2_TARGET_DCLK_FINE_TUNE_OFFSET_MSB            0x01D2
#define P1_D3_TARGET_DCLK_FINE_TUNE_OFFSET_LSB            0x01D3
#define P1_D4_DPLL_RESULT                                 0x01D4
#define P1_D5_SSC_REF_SEL                                 0x01D5
#define P1_D6_DCLK_SSC_COUNT                              0x01D6
#define P1_D7_DPLL_LDO                                    0x01D7
#define P1_D8_DPLL_RELOAD_CTRL                            0x01D8
#define P1_D9_DPLL_M_N_MSB                                0x01D9
#define P1_DA_DPLL_OUTPUT_CLK_DIV                         0x01DA
#define P1_DB_DCLK_GATED_CTRL1                            0x01DB
#define P1_DC_DCLK_GATED_CTRL2                            0x01DC


//--------------------------------------------------
// Multiply PLL for Input Crystal (Page 1)
//--------------------------------------------------
#define P1_E0_M2PLL_M                                     0x01E0
#define P1_E1_M2PLL_N                                     0x01E1
#define P1_E4_M2PLL_CRNT                                  0x01E4
#define P1_E5_M2PLL_WD                                    0x01E5
#define P1_E6_M2PLL_LDO                                   0x01E6
#define P1_E7_M2PLL_M_N_MSB                               0x01E7


//--------------------------------------------------
// HDMI2.0 Function (Page 2)
//--------------------------------------------------
#define P2_00_HDMI_CTRL_00                                0x0200
#define P2_01_HDMI_CTRL_01                                0x0201
#define P2_02_HDMI_CTRL_02                                0x0202
#define P2_03_HDMI_CTRL_03                                0x0203
#define P2_04_HDMI_CTRL_04                                0x0204
#define P2_05_HDMI_CTRL_05                                0x0205
#define P2_06_HDMI_CTRL_06                                0x0206
#define P2_07_HDMI_CTRL_07                                0x0207
#define P2_08_HDMI_CTRL_08                                0x0208
#define P2_0B_HDMI_CTRL_0B                                0x020B
#define P2_0C_HDMI_CTRL_0C                                0x020C
#define P2_0D_HDMI_CTRL_0D                                0x020D
#define P2_0E_HDMI_CTRL_0E                                0x020E
#define P2_0F_HDMI_CTRL_0F                                0x020F
#define P2_10_HDMI_CTRL_10                                0x0210
#define P2_11_HDMI_CTRL_11                                0x0211
#define P2_12_HDMI_CTRL_12                                0x0212
#define P2_13_HDMI_CTRL_13                                0x0213
#define P2_14_HDMI_CTRL_14                                0x0214
#define P2_15_HDMI_CTRL_15                                0x0215
#define P2_16_HDMI_CTRL_16                                0x0216
#define P2_17_HDMI_CTRL_17                                0x0217
#define P2_18_HDMI_CTRL_18                                0x0218
#define P2_19_HDMI_CTRL_19                                0x0219
#define P2_1A_HDMI_CTRL_1A                                0x021A
#define P2_1B_HDMI_CTRL_1B                                0x021B
#define P2_1C_HDMI_CTRL_1C                                0x021C
#define P2_1D_HDMI_CTRL_1D                                0x021D
#define P2_1E_HDMI_CTRL_1E                                0x021E
#define P2_1F_HDMI_CTRL_1F                                0x021F
#define P2_20_HDMI_CTRL_20                                0x0220
#define P2_21_HDMI_CTRL_21                                0x0221
#define P2_22_HDMI_CTRL_22                                0x0222
#define P2_23_HDMI_CTRL_23                                0x0223
#define P2_24_HDMI_CTRL_24                                0x0224
#define P2_25_HDMI_CTRL_25                                0x0225
#define P2_26_HDMI_CTRL_26                                0x0226
#define P2_27_HDMI_CTRL_27                                0x0227
#define P2_28_HDMI_CTRL_28                                0x0228
#define P2_29_HDMI_CTRL_29                                0x0229
#define P2_2A_HDMI_CTRL_2A                                0x022A
#define P2_2B_HDMI_CTRL_2B                                0x022B
#define P2_2C_HDMI_CTRL_2C                                0x022C
#define P2_2D_HDMI_CTRL_2D                                0x022D
#define P2_2E_HDMI_CTRL_2E                                0x022E
#define P2_38_HDMI_CTRL_38                                0x0238
#define P2_39_HDMI_CTRL_39                                0x0239
#define P2_3A_HDMI_CTRL_3A                                0x023A
#define P2_40_HDMI_PCK_40                                 0x0240
#define P2_41_HDMI_PCK_41                                 0x0241
#define P2_42_HDMI_PCK_42                                 0x0242
#define P2_43_HDMI_PCK_43                                 0x0243
#define P2_44_HDMI_PCK_44                                 0x0244
#define P2_45_HDMI_PCK_45                                 0x0245
#define P2_46_HDMI_PCK_46                                 0x0246
#define P2_47_HDMI_PCK_47                                 0x0247
#define P2_48_HDMI_PCK_48                                 0x0248
#define P2_49_HDMI_20_49                                  0x0249
#define P2_50_HDMI_20_50                                  0x0250
#define P2_51_HDMI_20_51                                  0x0251
#define P2_A1_TMDS_MSR                                    0x02A1
#define P2_A2_TMDS_MRR0                                   0x02A2
#define P2_A3_TMDS_MRR1                                   0x02A3
#define P2_A4_TMDS_CTRL                                   0x02A4
#define P2_A5_TMDS_CRCOB2                                 0x02A5
#define P2_A6_TMDS_OUTCTL                                 0x02A6
#define P2_A7_TMDS_PWDCTL                                 0x02A7
#define P2_A8_TMDS_ACC0                                   0x02A8
#define P2_A9_TMDS_ABC0                                   0x02A9
#define P2_AA_TMDS_ABC1                                   0x02AA
#define P2_AB_TMDS_ACC2                                   0x02AB
#define P2_AC_TMDS_Z0CC2                                  0x02AC
#define P2_AD_TMDS_CPS                                    0x02AD
#define P2_AE_TMDS_RPS                                    0x02AE
#define P2_AF_TMDS_WDC                                    0x02AF
#define P2_B0_TMDS_CHANNEL_FIFO                           0x02B0
#define P2_B4_TMDS_DPC0                                   0x02B4
#define P2_B5_TMDS_UDC0                                   0x02B5
#define P2_B6_TMDS_UDC1                                   0x02B6
#define P2_B7_TMDS_UDC2                                   0x02B7
#define P2_B8_TMDS_DPC1                                   0x02B8
#define P2_B9_TMDS_OUT_CTRL                               0x02B9
#define P2_BA_TMDS_ROUT_HIGH_BYTE                         0x02BA
#define P2_BB_TMDS_ROUT_LOW_BYTE                          0x02BB
#define P2_BC_TMDS_GOUT_HIGH_BYTE                         0x02BC
#define P2_BD_TMDS_GOUT_LOW_BYTE                          0x02BD
#define P2_BE_TMDS_BOUT_HIGH_BYTE                         0x02BE
#define P2_BF_TMDS_BOUT_LOW_BYTE                          0x02BF
#define P2_C0_HDCP_CR                                     0x02C0
#define P2_C1_HDCP_DKAP                                   0x02C1
#define P2_C2_HDCP_PCR                                    0x02C2
#define P2_C3_HDCP_AP                                     0x02C3
#define P2_C4_HDCP_DP                                     0x02C4
#define P2_C8_HDMI_APC                                    0x02C8
#define P2_C9_HDMI_AP                                     0x02C9
#define P2_CA_HDMI_DP                                     0x02CA
#define P2_CB_HDMI_SR                                     0x02CB
#define P2_CC_HDMI_GPVS                                   0x02CC
#define P2_CD_HDMI_PSAP                                   0x02CD
#define P2_CE_HDMI_PSDP                                   0x02CE
#define P2_E0_AUX_PS_CTRL                                 0x02E0
#define P2_E1_AUX_PS_REPLY                                0x02E1
#define P2_E6_HDMI_FREQDET_CTRL                           0x02E6
#define P2_E7_HDMI_FREQDET_OFFSET                         0x02E7
#define P2_E8_HDMI_FREQDET_UPPER_M                        0x02E8
#define P2_E9_HDMI_FREQDET_UPPER_L                        0x02E9
#define P2_EA_HDMI_FREQDET_LOWER_M                        0x02EA
#define P2_EB_HDMI_FREQDET_LOWER_L                        0x02EB
#define P2_EC_HDMI_FREQDET_STABLE                         0x02EC
#define P2_ED_HDMI_FREQDET_RESULT_M                       0x02ED
#define P2_EE_HDMI_FREQDET_RESULT_L                       0x02EE
#define P2_EF_HDMI_ERROR_TH                               0x02EF
#define P2_F6_HDMI_FREQDET_BOUND_H                        0x02F6
#define P2_F7_HDMI_FREQDET_RESULT_H                       0x02F7


//--------------------------------------------------
// M1 LiveShowTM Control (Page 3)
//--------------------------------------------------
#define P3_A1_LS_CTRL0                                    0x03A1
#define P3_A2_LS_CTRL1                                    0x03A2
#define P3_A3_DELTA_GAIN                                  0x03A3
#define P3_A4_LS_STATUS0                                  0x03A4
#define P3_A5_LS_STATUS1                                  0x03A5
#define P3_A6_LS_WTLVL_W                                  0x03A6
#define P3_A7_LS_WTLVL_R                                  0x03A7
#define P3_A8_LS_MEM_FIFO_RW_NUM_H                        0x03A8
#define P3_A9_LS_MEM_FIFO_RW_NUM_L                        0x03A9
#define P3_AA_LS_MEM_FIFO_RW_LEN                          0x03AA
#define P3_AB_LS_MEM_FIFO_RW_REMAIN                       0x03AB
#define P3_AC_LS_MEM_START_ADDR_H                         0x03AC
#define P3_AD_LS_MEM_START_ADDR_M                         0x03AD
#define P3_AE_LS_MEM_START_ADDR_L                         0x03AE
#define P3_AF_LS_BIST_CTRL                                0x03AF
#define P3_B0_LS_FRAME0                                   0x03B0
#define P3_B1_LS_FRAME1                                   0x03B1
#define P3_B2_LS_FRAME2                                   0x03B2
#define P3_B3_LS_FRAME4                                   0x03B3
#define P3_B4_LS_FRAME5                                   0x03B4
#define P3_B5_LS_BYPOS0                                   0x03B5
#define P3_B6_LS_BYPOS1                                   0x03B6
#define P3_B7_LS_GAIN_BASE                                0x03B7
#define P3_B8_LS_GAIN_SLOPE                               0x03B8
#define P3_BF_LS_LUT_CTRL                                 0x03BF
#define P3_C0_LS_LUT_DATA                                 0x03C0
#define P3_C1_LS_LUT_READ                                 0x03C1
#define P3_C2_LS_LUT_ROW                                  0x03C2
#define P3_C3_LS_LUT_COL                                  0x03C3
#define P3_D0_LS_DDR_FIFO_WTLVL_W_H                       0x03D0
#define P3_D1_LS_DDR_FIFO_WTLVL_W_L                       0x03D1
#define P3_D2_LS_DDR_FIFO_WTLVL_R_H                       0x03D2
#define P3_D3_LS_DDR_FIFO_WTLVL_R_L                       0x03D3
#define P3_D4_LS_DDR_FIFO_RW_NUM_H                        0x03D4
#define P3_D5_LS_DDR_FIFO_RW_NUM_L                        0x03D5
#define P3_D6_LS_DDR_FIFO_RW_LEN_H                        0x03D6
#define P3_D7_LS_DDR_FIFO_RW_LEN_L                        0x03D7
#define P3_D8_LS_DDR_FIFO_RW_REMAIN_H                     0x03D8
#define P3_D9_LS_DDR_FIFO_RW_REMAIN_L                     0x03D9
#define P3_DA_LS_DDR_START_ADDR_MSB                       0x03DA
#define P3_DB_LS_DDR_START_ADDR_H                         0x03DB
#define P3_DC_LS_DDR_START_ADDR_M                         0x03DC
#define P3_DD_LS_DDR_START_ADDR_L                         0x03DD
#define P3_DE_CAP_BIST_CTRL                               0x03DE
#define P3_DF_DIS_BIST_CTRL                               0x03DF
#define P3_E0_LS_SFM_DDR_FIFO_WTLVL_W_H                   0x03E0
#define P3_E1_LS_SFM_DDR_FIFO_WTLVL_W_L                   0x03E1
#define P3_E2_LS_SFM_DDR_FIFO_WTLVL_R_H                   0x03E2
#define P3_E3_LS_SFM_DDR_FIFO_WTLVL_R_L                   0x03E3
#define P3_E4_LS_SFM_DDR_FIFO_RW_NUM_H                    0x03E4
#define P3_E5_LS_SFM_DDR_FIFO_RW_NUM_L                    0x03E5
#define P3_E6_LS_SFM_DDR_FIFO_RW_LEN_H                    0x03E6
#define P3_E7_LS_SFM_DDR_FIFO_RW_LEN_L                    0x03E7
#define P3_E8_LS_SFM_DDR_FIFO_RW_REMAIN_H                 0x03E8
#define P3_E9_LS_SFM_DDR_FIFO_RW_REMAIN_L                 0x03E9
#define P3_EA_LS_SFM_DDR_START_ADDR_MSB                   0x03EA
#define P3_EB_LS_SFM_DDR_START_ADDR_H                     0x03EB
#define P3_EC_LS_SFM_DDR_START_ADDR_M                     0x03EC
#define P3_ED_LS_SFM_DDR_START_ADDR_L                     0x03ED
#define P3_EE_LS_SCREEN_FREEZE_MODE_CTRL                  0x03EE


//--------------------------------------------------
// FRC Cap_M1 (Page 5)
//--------------------------------------------------
#define P5_00_CAP_M1_MEM_ADDR_MSB                         0x0500
#define P5_01_CAP_M1_MEM_ADDR_H                           0x0501
#define P5_02_CAP_M1_MEM_ADDR_M                           0x0502
#define P5_03_CAP_M1_MEM_ADDR_L                           0x0503
#define P5_04_CAP_M1_BL2_ADDR_MSB                         0x0504
#define P5_05_CAP_M1_BL2_ADDR_H                           0x0505
#define P5_06_CAP_M1_BL2_ADDR_M                           0x0506
#define P5_07_CAP_M1_BL2_ADDR_L                           0x0507
#define P5_08_CAP_M1_BL3_ADDR_MSB                         0x0508
#define P5_09_CAP_M1_BL3_ADDR_H                           0x0509
#define P5_0A_CAP_M1_BL3_ADDR_M                           0x050A
#define P5_0B_CAP_M1_BL3_ADDR_L                           0x050B
#define P5_0C_CAP_M1_BOUNDARY_ADDR1_MSB                   0x050C
#define P5_0D_CAP_M1_BOUNDARY_ADDR1_H                     0x050D
#define P5_0E_CAP_M1_BOUNDARY_ADDR1_M                     0x050E
#define P5_0F_CAP_M1_BOUNDARY_ADDR1_L                     0x050F
#define P5_10_CAP_M1_BOUNDARY_ADDR2_MSB                   0x0510
#define P5_11_CAP_M1_BOUNDARY_ADDR2_H                     0x0511
#define P5_12_CAP_M1_BOUNDARY_ADDR2_M                     0x0512
#define P5_13_CAP_M1_BOUNDARY_ADDR2_L                     0x0513
#define P5_14_CAP_M1_BOUNDARY_STATUS                      0x0514
#define P5_15_CAP_M1_BLOCK_STEP_MSB                       0x0515
#define P5_16_CAP_M1_BLOCK_STEP_H                         0x0516
#define P5_17_CAP_M1_BLOCK_STEP_M                         0x0517
#define P5_18_CAP_M1_BLOCK_STEP_L                         0x0518
#define P5_19_CAP_M1_LINE_STEP_MSB                        0x0519
#define P5_1A_CAP_M1_LINE_STEP_H                          0x051A
#define P5_1B_CAP_M1_LINE_STEP_M                          0x051B
#define P5_1C_CAP_M1_LINE_STEP_L                          0x051C
#define P5_1D_CAP_M1_WATER_LEVEL_H                        0x051D
#define P5_1E_CAP_M1_WATER_LEVEL_L                        0x051E
#define P5_1F_CAP_M1_PIXEL_NUM_H                          0x051F
#define P5_20_CAP_M1_PIXEL_NUM_L                          0x0520
#define P5_21_CAP_M1_LINE_NUM_H                           0x0521
#define P5_22_CAP_M1_LINE_NUM_L                           0x0522
#define P5_23_CAP_M1_WR_NUM_H                             0x0523
#define P5_24_CAP_M1_WR_NUM_L                             0x0524
#define P5_25_CAP_M1_WR_LEN                               0x0525
#define P5_26_CAP_M1_WR_REMAIN                            0x0526
#define P5_27_CAP_M1_DDR_CTRL1                            0x0527
#define P5_28_CAP_M1_DDR_CTRL2                            0x0528
#define P5_29_CAP_M1_DDR_CTRL3                            0x0529
#define P5_2A_CAP_M1_STATUS                               0x052A
#define P5_2B_CAP_M1_FIFO_STATUS                          0x052B
#define P5_2C_CAP_M1_ONEF_STATUS                          0x052C
#define P5_30_CAP_M1_BIST_CTRL                            0x0530
#define P5_31_CAP_M1_DRF_BIST_CTRL                        0x0531


//--------------------------------------------------
// FRC Disp_M1 (Page 5)
//--------------------------------------------------
#define P5_80_DISP_M1_READ_ADDR_MSB                       0x0580
#define P5_81_DISP_M1_READ_ADDR_H                         0x0581
#define P5_82_DISP_M1_READ_ADDR_M                         0x0582
#define P5_83_DISP_M1_READ_ADDR_L                         0x0583
#define P5_84_DISP_M1_BL2_ADDR_MSB                        0x0584
#define P5_85_DISP_M1_BL2_ADDR_H                          0x0585
#define P5_86_DISP_M1_BL2_ADDR_M                          0x0586
#define P5_87_DISP_M1_BL2_ADDR_L                          0x0587
#define P5_88_DISP_M1_BL3_ADDR_MSB                        0x0588
#define P5_89_DISP_M1_BL3_ADDR_H                          0x0589
#define P5_8A_DISP_M1_BL3_ADDR_M                          0x058A
#define P5_8B_DISP_M1_BL3_ADDR_L                          0x058B
#define P5_8C_DISP_M1_BOUNDARY_ADDR1_MSB                  0x058C
#define P5_8D_DISP_M1_BOUNDARY_ADDR1_H                    0x058D
#define P5_8E_DISP_M1_BOUNDARY_ADDR1_M                    0x058E
#define P5_8F_DISP_M1_BOUNDARY_ADDR1_L                    0x058F
#define P5_90_DISP_M1_BOUNDARY_ADDR2_MSB                  0x0590
#define P5_91_DISP_M1_BOUNDARY_ADDR2_H                    0x0591
#define P5_92_DISP_M1_BOUNDARY_ADDR2_M                    0x0592
#define P5_93_DISP_M1_BOUNDARY_ADDR2_L                    0x0593
#define P5_94_DISP_M1_BOUNDARY_STATUS                     0x0594
#define P5_95_DISP_M1_BLOCK_STEP_MSB                      0x0595
#define P5_96_DISP_M1_BLOCK_STEP_H                        0x0596
#define P5_97_DISP_M1_BLOCK_STEP_M                        0x0597
#define P5_98_DISP_M1_BLOCK_STEP_L                        0x0598
#define P5_99_DISP_M1_LINE_STEP_MSB                       0x0599
#define P5_9A_DISP_M1_LINE_STEP_H                         0x059A
#define P5_9B_DISP_M1_LINE_STEP_M                         0x059B
#define P5_9C_DISP_M1_LINE_STEP_L                         0x059C
#define P5_A0_DISP_M1_WTLVL_H                             0x05A0
#define P5_A1_DISP_M1_WTLVL_L                             0x05A1
#define P5_A2_DISP_M1_PXL_NUM_H                           0x05A2
#define P5_A3_DISP_M1_PXL_NUM_L                           0x05A3
#define P5_A4_DISP_M1_LINE_NUM_H                          0x05A4
#define P5_A5_DISP_M1_LINE_NUM_L                          0x05A5
#define P5_A6_DISP_M1_PRRD_VST_H                          0x05A6
#define P5_A7_DISP_M1_PRRD_VST_L                          0x05A7
#define P5_A8_DISP_M1_READ_NUM_H                          0x05A8
#define P5_A9_DISP_M1_READ_NUM_L                          0x05A9
#define P5_AA_DISP_M1_READ_LEN                            0x05AA
#define P5_AB_DISP_M1_READ_REMAIN                         0x05AB
#define P5_AC_DISP_M1_DISP_CTRL1                          0x05AC
#define P5_AD_DISP_STATUS                                 0x05AD
#define P5_AE_DISP_M1_DISP_CTRL2                          0x05AE
#define P5_AF_DISP_M1_DISP_CTRL3                          0x05AF
#define P5_B0_DISP_M1_FIFO_STATUS                         0x05B0
#define P5_B1_DISP_M1_ONEF_DHF_H                          0x05B1
#define P5_B2_DISP_M1_ONEF_DHF_M                          0x05B2
#define P5_B3_DISP_M1_ONEF_DHF_L                          0x05B3
#define P5_B4_DISP_M1_ONEF_IHF                            0x05B4
#define P5_B5_DISP_M1_LINE_MAGN_L                         0x05B5
#define P5_B6_DISP_M1_ONEF_MAGN_H                         0x05B6
#define P5_B7_DISP_M1_ONEF_MAGN_L                         0x05B7
#define P5_C0_DISP_M1_BIST_CTRL                           0x05C0
#define P5_C1_DISP_M1_DRF_BIST_CTRL                       0x05C1
#define P5_C2_ADC_TEST                                    0x05C2
#define P5_C3_DISP_M1_NEW_FIFO_CRC_CTRL                   0x05C3
#define P5_C4_DISP_M1_NEW_FIFO_CRC1                       0x05C4
#define P5_C5_DISP_M1_NEW_FIFO_CRC2                       0x05C5
#define P5_C6_DISP_M1_NEW_FIFO_CRC3                       0x05C6
#define P5_C7_DISP_M1_NEW_FIFO_CRC4                       0x05C7
#define P5_C8_DISP_M1_NEW_FIFO_CRC5                       0x05C8
#define P5_C9_DISP_M1_NEW_FIFO_CRC6                       0x05C9


//--------------------------------------------------
// Internal OSC (Page 6)
//--------------------------------------------------
#define P6_A0_OSC_TRIM_CTRL0                              0x06A0
#define P6_A1_OSC_TRIM_CTRL1                              0x06A1
#define P6_A2_OSC_TRIM_CTRL2                              0x06A2
#define P6_A3_EMBEDDED_OSC_CTRL                           0x06A3
#define P6_A4_OSC_TRIM_CNT                                0x06A4
#define P6_A5_EMB_BGRES                                   0x06A5
#define P6_A6_EMB_BGRES1                                  0x06A6


//--------------------------------------------------
// Audio (Page 6)
//--------------------------------------------------
#define P6_B0_REG_ADC_POWER                               0x06B0
#define P6_B1_REG_ADC_CUR                                 0x06B1
#define P6_B2_REG_ADC_CTRL                                0x06B2
#define P6_B3_REG_AFE_GAIN                                0x06B3
#define P6_B4_AD_CTRL                                     0x06B4
#define P6_B5_AD_MUTE                                     0x06B5
#define P6_B6_AD_GAIN_L                                   0x06B6
#define P6_B7_AD_GAIN_R                                   0x06B7
#define P6_B8_AD_DUMMY_0                                  0x06B8
#define P6_B9_AD_DUMMY_1                                  0x06B9
#define P6_C0_REG_DAC_POWER0                              0x06C0
#define P6_C1_REG_DAC_POWER1                              0x06C1
#define P6_C2_REG_DAC_CUR0                                0x06C2
#define P6_C3_REG_DAC_CUR1                                0x06C3
#define P6_C4_REG_DAC_CUR2                                0x06C4
#define P6_C5_REG_ANA_CTRL                                0x06C5
#define P6_C6_REG_AOUT_CTRL                               0x06C6
#define P6_C7_REG_HPOUT_CTRL                              0x06C7
#define P6_C8_REG_OUT_GAIN                                0x06C8
#define P6_C9_REG_ANA_RESERVE0                            0x06C9
#define P6_CA_REG_ANA_RESERVE1                            0x06CA
#define P6_CB_REG_ANA_RESERVE2                            0x06CB
#define P6_CC_REG_ANA_RESERVE3                            0x06CC
#define P6_D0_DA_CTRL                                     0x06D0
#define P6_D1_DA_MUTE                                     0x06D1
#define P6_D2_DA_GAIN_L                                   0x06D2
#define P6_D3_DA_GAIN_R                                   0x06D3
#define P6_D4_DA_CLK_CTRL                                 0x06D4
#define P6_D5_DA_DUMMY_0                                  0x06D5
#define P6_D6_DA_DUMMY_1                                  0x06D6
#define P6_E0_REG_MUX_ANA_OUT                             0x06E0
#define P6_E1_AD_SPDIF_CTRL                               0x06E1
#define P6_E2_AD_SPDIF_CS_0                               0x06E2
#define P6_E3_AD_SPDIF_CS_1                               0x06E3
#define P6_E4_AD_SPDIF_CS_2                               0x06E4
#define P6_E5_AD_SPDIF_CS_3                               0x06E5
#define P6_E6_AD_SPDIF_CS_4                               0x06E6
#define P6_E7_AD_I2S_CTRL                                 0x06E7
#define P6_E8_AUD_TEST_PIN                                0x06E8
#define P6_E9_AUD_ADC_SRAM_BIST_0                         0x06E9
#define P6_EA_AUD_ADC_SRAM_BIST_1                         0x06EA
#define P6_EB_AUD_DAC_SRAM_BIST_0                         0x06EB
#define P6_EC_AUD_DAC_SRAM_BIST_1                         0x06EC
#define P6_ED_AUD_DUMMY_0                                 0x06ED
#define P6_EE_AUD_DUMMY_1                                 0x06EE


//--------------------------------------------------
// DCC (Page 7)
//--------------------------------------------------
#define P7_C7_DCC_CTRL_0                                  0x07C7
#define P7_C8_DCC_CTRL_1                                  0x07C8
#define P7_C9_DCC_ADDRESS_PORT                            0x07C9
#define P7_CA_DCC_DATA_PORT                               0x07CA


//--------------------------------------------------
// ICM (Page 7)
//--------------------------------------------------
#define P7_CC_SCM_BLOCK_ENABLE                            0x07CC
#define P7_CD_SCM_BLOCK_SELECT                            0x07CD
#define P7_CE_SCM_ACCESS_PORT_CONTROL                     0x07CE
#define P7_CF_SCM_ACCESS_PORT_DATA                        0x07CF
#define P7_D0_ICM_CONTROL                                 0x07D0
#define P7_D1_ICM_SEL                                     0x07D1
#define P7_D2_ICM_ADDR                                    0x07D2
#define P7_D3_ICM_DATA                                    0x07D3
#define P7_D4_ICM_SEL2                                    0x07D4


//--------------------------------------------------
// DCR (Page 7)
//--------------------------------------------------
#define P7_D8_DCR_ADDRESS_PORT                            0x07D8
#define P7_D9_DCR_DATA_PORT                               0x07D9
#define P7_DA_DCR_CTRL                                    0x07DA


//--------------------------------------------------
// IAPS Gain (Page 7)
//--------------------------------------------------
#define P7_E0_IAPS_GAIN_CTRL_M1                           0x07E0
#define P7_E1_GAIN_VALUE1_M1                              0x07E1
#define P7_E2_GAIN_VALUE0_M1                              0x07E2
#define P7_E3_SOFT_CLAMP_M1                               0x07E3
#define P7_E4_IAPS_GAIN_DB_CTRL_M1                        0x07E4


//--------------------------------------------------
// D-domain Pattern Generator (Page 7)
//--------------------------------------------------
#define P7_F0_DISP_PG_R_CTRL                              0x07F0
#define P7_F1_DISP_PG_G_CTRL                              0x07F1
#define P7_F2_DISP_PG_B_CTRL                              0x07F2
#define P7_F3_DISP_PG_R_INITIAL                           0x07F3
#define P7_F4_DISP_PG_G_INITIAL                           0x07F4
#define P7_F5_DISP_PG_B_INITIAL                           0x07F5
#define P7_F6_DISP_PG_PIXEL_DELTA_H                       0x07F6
#define P7_F7_DISP_PG_LINE_DELTA_H                        0x07F7
#define P7_F8_DISP_PG_PIXEL_STEP_H                        0x07F8
#define P7_F9_DISP_PG_LINE_STEP_H                         0x07F9
#define P7_FA_DISP_PG_DELTA_H_STEP_M                      0x07FA
#define P7_FB_D_PG_CTRL_0                                 0x07FB
#define P7_FC_D_PG_INITIAL_M_STEP_L                       0x07FC
#define P7_FD_D_PG_INITIAL_L_CTRL                         0x07FD
#define P7_FE_DISP_PG_DELTA_L                             0x07FE
#define P7_FF_D_PATTERN_RESET                             0x07FF


//--------------------------------------------------
// Audio Control (Page 8)
//--------------------------------------------------
#define P8_A0_DVC_EN                                      0x08A0
#define P8_A1_DVC_VA_MSB                                  0x08A1
#define P8_A2_DVC_VA_LSB                                  0x08A2
#define P8_A3_DVC_ZC_WIN_CTRL_0                           0x08A3
#define P8_A4_DVC_ZC_WIN_CTRL_1                           0x08A4
#define P8_A5_DVC_GAIN_MSB                                0x08A5
#define P8_A6_DVC_GAIN_LSB                                0x08A6
#define P8_A7_DVC_GAIN_READ_MSB                           0x08A7
#define P8_A8_DVC_GAIN_READ_LSB                           0x08A8
#define P8_A9_DVC_GAIN_DONE                               0x08A9
#define P8_AA_DVC_RESERVE1                                0x08AA
#define P8_AB_DVC_RESERVE2                                0x08AB
#define P8_C0_PEAK_CTRL_0                                 0x08C0
#define P8_C1_PEAK_CTRL_1                                 0x08C1
#define P8_C2_PEAK_CTRL_L_0                               0x08C2
#define P8_C3_PEAK_CTRL_L_1                               0x08C3
#define P8_C4_PEAK_CTRL_L_2                               0x08C4
#define P8_C5_PEAK_CTRL_L_3                               0x08C5
#define P8_C6_PEAK_CTRL_L_4                               0x08C6
#define P8_C7_PEAK_CTRL_R_0                               0x08C7
#define P8_C8_PEAK_CTRL_R_1                               0x08C8
#define P8_C9_PEAK_CTRL_R_2                               0x08C9
#define P8_CA_PEAK_CTRL_R_3                               0x08CA
#define P8_CB_PEAK_CTRL_R_4                               0x08CB
#define P8_CC_PEAK_RESERVE1                               0x08CC
#define P8_CD_PEAK_RESERVE2                               0x08CD


//--------------------------------------------------
// Input Gamma Control (Page 9)
//--------------------------------------------------
#define P9_A0_INPUT_GAMMA_PORT                            0x09A0
#define P9_A1_INPUT_GAMMA_CTRL                            0x09A1
#define P9_A2_INPUT_GAMMA_LOW_THRE                        0x09A2
#define P9_A3_INPUT_GAMMA_HIGH_THRE                       0x09A3
#define P9_A4_IG_DUMMY                                    0x09A4


//--------------------------------------------------
// RGB 3D Gamma Control (Page 9)
//--------------------------------------------------
#define P9_B0_RGB_3D_GAMMA_CTRL                           0x09B0
#define P9_B1_RGB_3D_GAMMA_ADDRESS_H                      0x09B1
#define P9_B2_RGB_3D_GAMMA_ADDRESS_L                      0x09B2
#define P9_B3_RGB_3D_GAMMA_PORT                           0x09B3
#define P9_B4_RGB_3D_GAMMA_BIST_CTRL_MAIN1_1              0x09B4
#define P9_B5_RGB_3D_GAMMA_BIST_CTRL_MAIN1_2              0x09B5
#define P9_B6_RGB_3D_GAMMA_BIST_CTRL_MAIN2_1              0x09B6
#define P9_B7_RGB_3D_GAMMA_BIST_CTRL_MAIN2_2              0x09B7
#define P9_B8_RGB_3D_GAMMA_DRF_BIST_MAIN1_1               0x09B8
#define P9_B9_RGB_3D_GAMMA_DRF_BIST_MAIN1_2               0x09B9
#define P9_BA_RGB_3D_GAMMA_DRF_BIST_MAIN2_1               0x09BA
#define P9_BB_RGB_3D_GAMMA_DRF_BIST_MAIN2_2               0x09BB


//--------------------------------------------------
// DisplayPort 1.2 Digital MAC MST2SST PART(Page A)
//--------------------------------------------------
#define PA_00_MST2SST_RESET                               0x0A00
#define PA_10_MSA_HTT_0                                   0x0A10
#define PA_11_MSA_HTT_1                                   0x0A11
#define PA_12_MSA_HST_0                                   0x0A12
#define PA_13_MSA_HST_1                                   0x0A13
#define PA_14_MSA_HWD_0                                   0x0A14
#define PA_15_MSA_HWD_1                                   0x0A15
#define PA_16_MSA_HSW_0                                   0x0A16
#define PA_17_MSA_HSW_1                                   0x0A17
#define PA_18_MSA_VTT_0                                   0x0A18
#define PA_19_MSA_VTT_1                                   0x0A19
#define PA_1A_MSA_VST_0                                   0x0A1A
#define PA_1B_MSA_VST_1                                   0x0A1B
#define PA_1C_MSA_VHT_0                                   0x0A1C
#define PA_1D_MSA_VHT_1                                   0x0A1D
#define PA_1E_MSA_VSW_0                                   0x0A1E
#define PA_1F_MSA_VSW_1                                   0x0A1F
#define PA_20_MSA_MVID_00                                 0x0A20
#define PA_21_MSA_MVID_01                                 0x0A21
#define PA_22_MSA_MVID_02                                 0x0A22
#define PA_23_MSA_NVID_00                                 0x0A23
#define PA_24_MSA_NVID_01                                 0x0A24
#define PA_25_MSA_NVID_02                                 0x0A25
#define PA_26_MSA_MISC_0                                  0x0A26
#define PA_27_MSA_MISC_1                                  0x0A27
#define PA_28_MSA_COLOR_BIT                               0x0A28
#define PA_29_MST2SST_VBID                                0x0A29
#define PA_30_PG_CTRL_0                                   0x0A30
#define PA_31_PG_CTRL_1                                   0x0A31
#define PA_32_PG_CTRL_2                                   0x0A32
#define PA_33_PG_CTRL_3                                   0x0A33
#define PA_34_RB422_YONLY                                 0x0A34
#define PA_35_DPF_CTRL_0                                  0x0A35
#define PA_36_DP_OUTPUT_CTRL                              0x0A36
#define PA_37_EVBLK2VS_H                                  0x0A37
#define PA_38_EVBLK2VS_M                                  0x0A38
#define PA_39_EVBLK2VS_L                                  0x0A39
#define PA_3A_OVBLK2VS_H                                  0x0A3A
#define PA_3B_OVBLK2VS_M                                  0x0A3B
#define PA_3C_OVBLK2VS_L                                  0x0A3C
#define PA_3D_BS2HS_0                                     0x0A3D
#define PA_3E_BS2HS_1                                     0x0A3E
#define PA_3F_VS_FRONT_PORCH                              0x0A3F
#define PA_40_MN_DPF_HTT_M                                0x0A40
#define PA_41_MN_DPF_HTT_L                                0x0A41
#define PA_42_MN_DPF_HST_M                                0x0A42
#define PA_43_MN_DPF_HST_L                                0x0A43
#define PA_44_MN_DPF_HWD_M                                0x0A44
#define PA_45_MN_DPF_HWD_L                                0x0A45
#define PA_46_MN_DPF_HSW_M                                0x0A46
#define PA_47_MN_DPF_HSW_L                                0x0A47
#define PA_48_MN_DPF_VTT_M                                0x0A48
#define PA_49_MN_DPF_VTT_L                                0x0A49
#define PA_4A_MN_DPF_VST_M                                0x0A4A
#define PA_4B_MN_DPF_VST_L                                0x0A4B
#define PA_4C_MN_DPF_VHT_M                                0x0A4C
#define PA_4D_MN_DPF_VHT_L                                0x0A4D
#define PA_4E_MN_DPF_VSW_M                                0x0A4E
#define PA_4F_MN_DPF_VSW_L                                0x0A4F
#define PA_50_MN_DPF_BG_RED_M                             0x0A50
#define PA_51_MN_DPF_BG_RED_L                             0x0A51
#define PA_52_MN_DPF_BG_GRN_M                             0x0A52
#define PA_53_MN_DPF_BG_GRN_L                             0x0A53
#define PA_54_MN_DPF_BG_BLU_M                             0x0A54
#define PA_55_MN_DPF_BG_BLU_L                             0x0A55
#define PA_56_INTERLACE_MODE_CONFIG                       0x0A56
#define PA_58_MN_MEAS_CTRL                                0x0A58
#define PA_59_MN_MEAS_VLN_M                               0x0A59
#define PA_5A_MN_MEAS_VLN_L                               0x0A5A
#define PA_5B_MN_MEAS_HLN_M                               0x0A5B
#define PA_5C_MN_MEAS_HLN_L                               0x0A5C
#define PA_5D_VHEIGHT_MSB                                 0x0A5D
#define PA_5E_VHEIGHT_LSB                                 0x0A5E
#define PA_60_VBLANK_MSB                                  0x0A60
#define PA_61_VBLANK_LSB                                  0x0A61
#define PA_62_HBLANK_MSB                                  0x0A62
#define PA_63_HBLANK_LSB                                  0x0A63
#define PA_65_SRAM_BIST_0                                 0x0A65
#define PA_66_SRAM_BIST_1                                 0x0A66
#define PA_70_DP_CRC_CTRL                                 0x0A70
#define PA_71_DP_CRC_R_M                                  0x0A71
#define PA_72_DP_CRC_R_L                                  0x0A72
#define PA_73_DP_CRC_G_M                                  0x0A73
#define PA_74_DP_CRC_G_L                                  0x0A74
#define PA_75_DP_CRC_B_M                                  0x0A75
#define PA_76_DP_CRC_B_L                                  0x0A76
#define PA_77_DP_CRC_CB_M                                 0x0A77
#define PA_78_DP_CRC_CB_L                                 0x0A78
#define PA_80_MST2SST_TEST                                0x0A80
#define PA_81_MST2SST_TEST1                               0x0A81
#define PA_90_MST2SST_IRQ                                 0x0A90
#define PA_F0_DP_RSV0                                     0x0AF0
#define PA_F1_DP_RSV1                                     0x0AF1
#define PA_F2_DP_RSV2                                     0x0AF2
#define PA_F3_DP_RSV3                                     0x0AF3
#define PA_F4_DP_RSV4                                     0x0AF4
#define PA_F5_DP_RSV5                                     0x0AF5
#define PA_F6_DP_RSV6                                     0x0AF6
#define PA_F7_DP_RSV7                                     0x0AF7
#define PA_F8_DP_RSV8                                     0x0AF8
#define PA_F9_DP_RSV9                                     0x0AF9
#define PA_FA_DP_RSVA                                     0x0AFA


//--------------------------------------------------
// D0 DisplayPort 1.2 Digital MAC MST2SST PLL (Page A)
//--------------------------------------------------
#define PA_A0_MN_SCLKG_CTRL                               0x0AA0
#define PA_A1_MN_SCLKG_DIVM                               0x0AA1
#define PA_A2_MN_SCLKG_DIVN                               0x0AA2
#define PA_A3_MN_SCLKG_DIVS                               0x0AA3
#define PA_A4_MN_SCLKG_OFFS_H                             0x0AA4
#define PA_A5_MN_SCLKG_OFFS_M                             0x0AA5
#define PA_A6_MN_SCLKG_OFFS_L                             0x0AA6
#define PA_A7_MN_SCLKG_TRK_CTRL                           0x0AA7
#define PA_A8_MN_SCLKG_TRK_MN_I_H                         0x0AA8
#define PA_A9_MN_SCLKG_TRK_MN_I_M                         0x0AA9
#define PA_AA_MN_SCLKG_TRK_MN_I_L                         0x0AAA
#define PA_AB_MN_SCLKG_TRK_MN_P_H                         0x0AAB
#define PA_AC_MN_SCLKG_TRK_MN_P_M                         0x0AAC
#define PA_AD_MN_SCLKG_TRK_MN_P_L                         0x0AAD
#define PA_AE_MN_SCLKG_TRK_MN_PE                          0x0AAE
#define PA_AF_MN_SCLKG_TRK_MN_NLOCK                       0x0AAF
#define PA_B0_MN_SCLKG_TRK_VS_I_H                         0x0AB0
#define PA_B1_MN_SCLKG_TRK_VS_I_M                         0x0AB1
#define PA_B2_MN_SCLKG_TRK_VS_I_L                         0x0AB2
#define PA_B3_MN_SCLKG_TRK_VS_P_H                         0x0AB3
#define PA_B4_MN_SCLKG_TRK_VS_P_M                         0x0AB4
#define PA_B5_MN_SCLKG_TRK_VS_P_L                         0x0AB5
#define PA_B6_MN_SCLKG_TRK_VS_PE                          0x0AB6
#define PA_B7_MN_SCLKG_TRK_VS_NLOCK                       0x0AB7
#define PA_B8_MN_SCLKG_SDM_CTRL                           0x0AB8
#define PA_B9_MN_SCLKG_SDM_TEST                           0x0AB9
#define PA_BA_MN_SCLKG_SDM_SUMC_H                         0x0ABA
#define PA_BB_MN_SCLKG_SDM_SUMC_M                         0x0ABB
#define PA_BC_MN_SCLKG_SDM_SUMC_L                         0x0ABC
#define PA_BD_MN_SCLKG_PLL_PWR                            0x0ABD
#define PA_BE_MN_SCLKG_PLL_CHP                            0x0ABE
#define PA_BF_MN_SCLKG_PLL_WD                             0x0ABF
#define PA_C0_MN_SCLKG_PLL_INSEL                          0x0AC0
#define PA_C1_MN_SCLKG_PLL_RESERVE                        0x0AC1
#define PA_C2_HS_TRACKING_NEW_MODE1                       0x0AC2
#define PA_C3_HS_TRACKING_NEW_MODE2                       0x0AC3
#define PA_C4_DUMMY_0                                     0x0AC4
#define PA_C5_DUMMY_1                                     0x0AC5
#define PA_C6_DUMMY_2                                     0x0AC6
#define PA_C7_DUMMY_3                                     0x0AC7


//--------------------------------------------------
// D0 Port DisplayPort 1.2 Digital PHY(Page B)
//--------------------------------------------------
#define PB_00_HD_DP_SEL                                   0x0B00
#define PB_01_PHY_DIG_RESET_CTRL                          0x0B01
#define PB_03_LANE_MUX                                    0x0B03
#define PB_04_CHANNEL_FIFO_SYNC                           0x0B04
#define PB_05_SAMPLE_EDGE                                 0x0B05
#define PB_06_DECODE_10B8B_ERROR                          0x0B06
#define PB_07_SCRAMBLE_CTRL                               0x0B07
#define PB_08_BIST_PATTERN_SEL                            0x0B08
#define PB_09_BIST_PATTERN1                               0x0B09
#define PB_0A_BIST_PATTERN2                               0x0B0A
#define PB_0B_BIST_PATTERN3                               0x0B0B
#define PB_0C_BIST_PATTERN4                               0x0B0C
#define PB_0D_BIST_SEED_0                                 0x0B0D
#define PB_0E_DESKEW_PHY                                  0x0B0E
#define PB_0F_DESKEW_PHY2                                 0x0B0F
#define PB_10_DUMMY1                                      0x0B10
#define PB_11_PHY_CH_FIFO_SYNC                            0x0B11
#define PB_12_EQ_CRC_1                                    0x0B12
#define PB_13_EQ_CRC_2                                    0x0B13
#define PB_14_EQ_CRC_3                                    0x0B14
#define PB_15_EQ_CRC_4                                    0x0B15
#define PB_16_EQ_CRC_5                                    0x0B16
#define PB_17_DP_HDCP_CONTROL                             0x0B17
#define PB_18_DP_HDCP_DOWNLOAD_PORT                       0x0B18
#define PB_19_DP_HDCP_KEY_OUTPUT                          0x0B19
#define PB_1A_HDCP_IRQ                                    0x0B1A
#define PB_1B_HDCP_INTGT_VRF                              0x0B1B
#define PB_1C_HDCP_INTGT_VRF_PAT_MSB                      0x0B1C
#define PB_1D_HDCP_INTGT_VRF_PAT_LSB                      0x0B1D
#define PB_1E_HDCP_INTGT_VRF_ANS_MSB                      0x0B1E
#define PB_1F_HDCP_INTGT_VRF_ANS_LSB                      0x0B1F
#define PB_20_HDCP_DEBUG                                  0x0B20
#define PB_21_KM_BYTE_6                                   0x0B21
#define PB_22_KM_BYTE_5                                   0x0B22
#define PB_23_KM_BYTE_4                                   0x0B23
#define PB_24_KM_BYTE_3                                   0x0B24
#define PB_25_KM_BYTE_2                                   0x0B25
#define PB_26_KM_BYTE_1                                   0x0B26
#define PB_27_KM_BYTE_0                                   0x0B27
#define PB_28_M0_BYTE_7                                   0x0B28
#define PB_29_M0_BYTE_6                                   0x0B29
#define PB_2A_M0_BYTE_5                                   0x0B2A
#define PB_2B_M0_BYTE_4                                   0x0B2B
#define PB_2C_M0_BYTE_3                                   0x0B2C
#define PB_2D_M0_BYTE_2                                   0x0B2D
#define PB_2E_M0_BYTE_1                                   0x0B2E
#define PB_2F_M0_BYTE_0                                   0x0B2F
#define PB_30_SHA_CONTRL                                  0x0B30
#define PB_31_SHA_DATA1                                   0x0B31
#define PB_32_SHA_DATA2                                   0x0B32
#define PB_33_SHA_DATA3                                   0x0B33
#define PB_34_SHA_DATA4                                   0x0B34
#define PB_36_SHA_0                                       0x0B36
#define PB_37_SHA_1                                       0x0B37
#define PB_38_SHA_2                                       0x0B38
#define PB_39_SHA_3                                       0x0B39
#define PB_3A_SHA_4                                       0x0B3A
#define PB_3B_SHA_5                                       0x0B3B
#define PB_3C_SHA_6                                       0x0B3C
#define PB_3D_SHA_7                                       0x0B3D
#define PB_3E_SHA_8                                       0x0B3E
#define PB_3F_SHA_9                                       0x0B3F
#define PB_40_SHA_10                                      0x0B40
#define PB_41_SHA_11                                      0x0B41
#define PB_42_SHA_12                                      0x0B42
#define PB_43_SHA_13                                      0x0B43
#define PB_44_SHA_14                                      0x0B44
#define PB_45_SHA_15                                      0x0B45
#define PB_46_SHA_16                                      0x0B46
#define PB_47_SHA_17                                      0x0B47
#define PB_48_SHA_18                                      0x0B48
#define PB_49_SHA_19                                      0x0B49
#define PB_50_DP_SIG_DET_0                                0x0B50
#define PB_51_DP_SIG_DET_1                                0x0B51
#define PB_52_DP_SIG_DET_2                                0x0B52
#define PB_53_DP_SIG_DET_3                                0x0B53
#define PB_54_DP_SIG_DET_4                                0x0B54
#define PB_60_DEBUG0                                      0x0B60
#define PB_61_DEBUG1                                      0x0B61
#define PB_62_DEBUG2                                      0x0B62
#define PB_63_DUMMY2                                      0x0B63
#define PB_64_DUMMY3                                      0x0B64


//--------------------------------------------------
// GDI PHY (Page B)
//--------------------------------------------------
#define PB_A0_CMU_00                                      0x0BA0
#define PB_A1_CMU_01                                      0x0BA1
#define PB_A2_CMU_02                                      0x0BA2
#define PB_A3_CMU_03                                      0x0BA3
#define PB_A4_CMU_04                                      0x0BA4
#define PB_A5_CMU_05                                      0x0BA5
#define PB_A6_CMU_06                                      0x0BA6
#define PB_A7_CMU_07                                      0x0BA7
#define PB_A8_CMU_08                                      0x0BA8
#define PB_A9_CMU_09                                      0x0BA9
#define PB_AA_CDR_01                                      0x0BAA
#define PB_AB_CDR_02                                      0x0BAB
#define PB_AC_CDR_03                                      0x0BAC
#define PB_AD_CDR_04                                      0x0BAD
#define PB_AE_CDR_05                                      0x0BAE
#define PB_AF_CDR_06                                      0x0BAF
#define PB_B0_CDR_07                                      0x0BB0
#define PB_B1_CDR_08                                      0x0BB1
#define PB_B2_EQ_00                                       0x0BB2
#define PB_B4_BANDGAP_00                                  0x0BB4
#define PB_B5_BANDGAP_01                                  0x0BB5
#define PB_B6_BANDGAP_02                                  0x0BB6
#define PB_B7_BANDGAP_03                                  0x0BB7
#define PB_B8_CMU_LDO_00                                  0x0BB8
#define PB_B9_LANE0_A_CDR_00                              0x0BB9
#define PB_BA_DP_SIG_DET_00                               0x0BBA
#define PB_BB_COMMON_Z0_00                                0x0BBB
#define PB_BC_ACCUMULATE_VALUE_00                         0x0BBC
#define PB_BD_ACCUMULATE_VALUE_01                         0x0BBD
#define PB_BE_LANE0_A_CDR_01                              0x0BBE
#define PB_BF_LANE0_A_CDR_02                              0x0BBF
#define PB_C0_TMDS_CONT_0                                 0x0BC0
#define PB_C1_TMDS_CONT_1                                 0x0BC1
#define PB_C2_TMDS_CONT_2                                 0x0BC2
#define PB_C3_TMDS_CONT_3                                 0x0BC3
#define PB_C4_TMDS_CONT_4                                 0x0BC4
#define PB_C5_TMDS_CONT_5                                 0x0BC5
#define PB_C6_TMDS_CONT_6                                 0x0BC6
#define PB_C7_LANE_CDR_0                                  0x0BC7
#define PB_C8_LANE_CDR_1                                  0x0BC8
#define PB_C9_LANE_CDR_2                                  0x0BC9
#define PB_CA_LANE_CDR_3                                  0x0BCA
#define PB_CB_LANE_CDR_4                                  0x0BCB
#define PB_CC_ERROR_COUNT_0                               0x0BCC
#define PB_CD_ERROR_COUNT_1                               0x0BCD
#define PB_CE_ERROR_COUNT_2                               0x0BCE
#define PB_CF_ERROR_COUNT_3                               0x0BCF
#define PB_D0_ERROR_COUNT_4                               0x0BD0
#define PB_D1_ERROR_COUNT_5                               0x0BD1
#define PB_D2_DEBUG_00                                    0x0BD2
#define PB_D3_DEBUG_01                                    0x0BD3
#define PB_D4_KI_0                                        0x0BD4
#define PB_D5_KI_1                                        0x0BD5
#define PB_D6_KP_0                                        0x0BD6
#define PB_D7_KP_1                                        0x0BD7
#define PB_D8_KP_2                                        0x0BD8
#define PB_D9_KP_3                                        0x0BD9
#define PB_DA_PI_0                                        0x0BDA
#define PB_DB_ST_0                                        0x0BDB
#define PB_DC_ST_1                                        0x0BDC
#define PB_DD_ST_2                                        0x0BDD
#define PB_DE_ST_3                                        0x0BDE
#define PB_DF_ST_4                                        0x0BDF
#define PB_E0_ST_5                                        0x0BE0
#define PB_E1_TIMER_BER_0                                 0x0BE1
#define PB_E2_TIMER_BER_1                                 0x0BE2
#define PB_E4_DIG_00                                      0x0BE4
#define PB_E5_DIG_01                                      0x0BE5
#define PB_E6_DIG_02                                      0x0BE6
#define PB_E7_DIG_03                                      0x0BE7
#define PB_E8_DIG_04                                      0x0BE8
#define PB_E9_DIG_05                                      0x0BE9
#define PB_EA_DIG_06                                      0x0BEA
#define PB_EB_DIG_07                                      0x0BEB
#define PB_EC_DIG_08                                      0x0BEC
#define PB_ED_DIG_09                                      0x0BED
#define PB_EE_DIG_10                                      0x0BEE
#define PB_EF_DIG_11                                      0x0BEF
#define PB_F0_DIG_12                                      0x0BF0
#define PB_F1_SDM_00                                      0x0BF1
#define PB_F2_SDM_01                                      0x0BF2
#define PB_F3_SDM_02                                      0x0BF3
#define PB_F4_WD_00                                       0x0BF4
#define PB_F5_WD_01                                       0x0BF5
#define PB_F6_EQEN_TIMER                                  0x0BF6
#define PB_F7_DATA_TIMER                                  0x0BF7
#define PB_F9_LANE0_A_CDR_03                              0x0BF9
#define PB_FA_LANE0_A_CDR_04                              0x0BFA
#define PB_FB_LANE0_A_CDR_05                              0x0BFB
#define PB_FC_LANE0_A_CDR_06                              0x0BFC
#define PB_FD_LANE0_A_CDR_07                              0x0BFD
#define PB_FE_LANE0_A_CDR_08                              0x0BFE
#define PB_FF_LANE0_A_CDR_09                              0x0BFF


//--------------------------------------------------
// Pin Share Register (Page 10)
//--------------------------------------------------
#define P10_00_PIN_SHARE_CTRL10                           0x1000
#define P10_01_PIN_SHARE_CTRL11                           0x1001
#define P10_02_PIN_SHARE_CTRL12                           0x1002
#define P10_03_PIN_SHARE_CTRL13                           0x1003
#define P10_04_PIN_SHARE_CTRL14                           0x1004
#define P10_05_PIN_SHARE_CTRL15                           0x1005
#define P10_06_PIN_SHARE_CTRL16                           0x1006
#define P10_07_PIN_SHARE_CTRL17                           0x1007
#define P10_08_PIN_SHARE_CTRL30                           0x1008
#define P10_09_PIN_SHARE_CTRL31                           0x1009
#define P10_0A_PIN_SHARE_CTRL32                           0x100A
#define P10_0B_PIN_SHARE_CTRL33                           0x100B
#define P10_0C_PIN_SHARE_CTRL34                           0x100C
#define P10_0D_PIN_SHARE_CTRL35                           0x100D
#define P10_0E_PIN_SHARE_CTRL36                           0x100E
#define P10_0F_PIN_SHARE_CTRL37                           0x100F
#define P10_10_PIN_SHARE_CTRL40                           0x1010
#define P10_11_PIN_SHARE_CTRL41                           0x1011
#define P10_12_PIN_SHARE_CTRL42                           0x1012
#define P10_13_PIN_SHARE_CTRL43                           0x1013
#define P10_14_PIN_SHARE_CTRL44                           0x1014
#define P10_15_PIN_SHARE_CTRL45                           0x1015
#define P10_16_PIN_SHARE_CTRL46                           0x1016
#define P10_17_PIN_SHARE_CTRL47                           0x1017
#define P10_18_PIN_SHARE_CTRL50                           0x1018
#define P10_19_PIN_SHARE_CTRL51                           0x1019
#define P10_1A_PIN_SHARE_CTRL52                           0x101A
#define P10_1B_PIN_SHARE_CTRL53                           0x101B
#define P10_1C_PIN_SHARE_CTRL54                           0x101C
#define P10_1D_PIN_SHARE_CTRL55                           0x101D
#define P10_1E_PIN_SHARE_CTRL56                           0x101E
#define P10_1F_PIN_SHARE_CTRL57                           0x101F
#define P10_20_PIN_SHARE_CTRL60                           0x1020
#define P10_21_PIN_SHARE_CTRL61                           0x1021
#define P10_22_PIN_SHARE_CTRL62                           0x1022
#define P10_23_PIN_SHARE_CTRL63                           0x1023
#define P10_24_PIN_SHARE_CTRL64                           0x1024
#define P10_25_PIN_SHARE_CTRL65                           0x1025
#define P10_26_PIN_SHARE_CTRL66                           0x1026
#define P10_27_PIN_SHARE_CTRL67                           0x1027
#define P10_28_PIN_SHARE_CTRL70                           0x1028
#define P10_29_PIN_SHARE_CTRL71                           0x1029
#define P10_2A_PIN_SHARE_CTRL72                           0x102A
#define P10_2B_PIN_SHARE_CTRL73                           0x102B
#define P10_2C_PIN_SHARE_CTRL74                           0x102C
#define P10_2D_PIN_SHARE_CTRL75                           0x102D
#define P10_2E_PIN_SHARE_CTRL76                           0x102E
#define P10_2F_PIN_SHARE_CTRL77                           0x102F
#define P10_30_PIN_SHARE_CTRL80                           0x1030
#define P10_31_PIN_SHARE_CTRL81                           0x1031
#define P10_32_PIN_SHARE_CTRL82                           0x1032
#define P10_33_PIN_SHARE_CTRL83                           0x1033
#define P10_34_PIN_SHARE_CTRL84                           0x1034
#define P10_35_PIN_SHARE_CTRL85                           0x1035
#define P10_36_PIN_SHARE_CTRL86                           0x1036
#define P10_37_PIN_SHARE_CTRL87                           0x1037
#define P10_38_PIN_SHARE_CTRL90                           0x1038
#define P10_39_PIN_SHARE_CTRL91                           0x1039
#define P10_3A_PIN_SHARE_CTRL92                           0x103A
#define P10_3B_PIN_SHARE_CTRL93                           0x103B
#define P10_3C_PIN_SHARE_CTRL94                           0x103C
#define P10_3D_PIN_SHARE_CTRL95                           0x103D
#define P10_3E_PIN_SHARE_CTRL96                           0x103E
#define P10_3F_PIN_SHARE_CTRL97                           0x103F
#define P10_40_PIN_SHARE_CTRLA0                           0x1040
#define P10_41_PIN_SHARE_CTRLA1                           0x1041
#define P10_42_PIN_SHARE_CTRLA2                           0x1042
#define P10_43_PIN_SHARE_CTRLA3                           0x1043
#define P10_44_PIN_SHARE_CTRLA4                           0x1044
#define P10_45_PIN_SHARE_CTRLA5                           0x1045
#define P10_46_PIN_SHARE_CTRLA6                           0x1046
#define P10_47_PIN_SHARE_CTRLA7                           0x1047
#define P10_48_PIN_SHARE_CTRLB0                           0x1048
#define P10_49_PIN_SHARE_CTRLB1                           0x1049
#define P10_4A_PIN_SHARE_CTRLB2                           0x104A
#define P10_4B_PIN_SHARE_CTRLB3                           0x104B
#define P10_4C_PIN_SHARE_CTRLB4                           0x104C
#define P10_4D_PIN_SHARE_CTRLB5                           0x104D
#define P10_4E_PIN_SHARE_CTRLB6                           0x104E
#define P10_4F_PIN_SHARE_CTRLB7                           0x104F
#define P10_50_PIN_SHARE_CTRLC0                           0x1050
#define P10_51_PIN_SHARE_CTRLC1                           0x1051
#define P10_52_PIN_SHARE_CTRLC2                           0x1052
#define P10_53_PIN_SHARE_CTRLC3                           0x1053
#define P10_54_PIN_SHARE_CTRLC4                           0x1054
#define P10_55_PIN_SHARE_CTRLC5                           0x1055
#define P10_56_PIN_SHARE_CTRLC6                           0x1056
#define P10_57_PIN_SHARE_CTRLC7                           0x1057
#define P10_58_PIN_SHARE_CTRLD0                           0x1058
#define P10_59_PIN_SHARE_CTRLD1                           0x1059
#define P10_5A_PIN_SHARE_CTRLD2                           0x105A
#define P10_5B_PIN_SHARE_CTRLD3                           0x105B
#define P10_5C_PIN_SHARE_CTRLD4                           0x105C
#define P10_5D_PIN_SHARE_CTRLD5                           0x105D
#define P10_5E_PIN_SHARE_CTRLD6                           0x105E
#define P10_5F_PIN_SHARE_CTRLD7                           0x105F
#define P10_60_PIN_SHARE_CTRLE0                           0x1060
#define P10_61_PIN_SHARE_CTRLE1                           0x1061
#define P10_62_PIN_SHARE_CTRLE2                           0x1062
#define P10_63_PIN_SHARE_CTRLE3                           0x1063
#define P10_64_PIN_SHARE_CTRLE4                           0x1064
#define P10_65_PIN_SHARE_CTRLE5                           0x1065
#define P10_66_PIN_SHARE_CTRLE6                           0x1066
#define P10_67_PIN_SHARE_CTRLE7                           0x1067
#define P10_68_PIN_SHARE_CTRLF0                           0x1068
#define P10_69_PIN_SHARE_CTRLF1                           0x1069
#define P10_6A_PIN_SHARE_CTRLF2                           0x106A
#define P10_6B_PIN_SHARE_CTRLF3                           0x106B
#define P10_6C_PIN_SHARE_CTRLF4                           0x106C
#define P10_75_PIN_SLEW_RATE_CTRL0                        0x1075
#define P10_77_PIN_SCHMITT_CTRL0                          0x1077
#define P10_78_PIN_SCHMITT_CTRL1                          0x1078
#define P10_79_PIN_SCHMITT_CTRL2                          0x1079
#define P10_7A_PIN_PULLUP_CTRL00                          0x107A
#define P10_7B_PIN_PULLUP_CTRL01                          0x107B
#define P10_7C_PIN_PULLUP_CTRL02                          0x107C
#define P10_7D_PIN_PULLUP_CTRL03                          0x107D
#define P10_7E_PIN_PULLUP_CTRL04                          0x107E
#define P10_7F_PIN_PULLUP_CTRL05                          0x107F
#define P10_80_PIN_PULLUP_CTRL06                          0x1080
#define P10_81_PIN_PULLUP_CTRL07                          0x1081
#define P10_82_PIN_PULLUP_CTRL08                          0x1082
#define P10_83_PIN_PULLUP_CTRL09                          0x1083
#define P10_84_PIN_PULLUP_CTRL0A                          0x1084
#define P10_85_PIN_PULLUP_CTRL0B                          0x1085
#define P10_86_PIN_PULLUP_CTRL0C                          0x1086
#define P10_87_PIN_PULLUP_CTRL0D                          0x1087
#define P10_88_PIN_PULLUP_CTRL0E                          0x1088
#define P10_89_PIN_PULLUP_CTRL0F                          0x1089
#define P10_8A_PIN_PULLUP_CTRL10                          0x108A
#define P10_8B_PIN_PULLUP_CTRL11                          0x108B
#define P10_8C_PIN_PULLUP_CTRL12                          0x108C
#define P10_8D_PIN_PULLUP_CTRL13                          0x108D
#define P10_8E_PIN_PULLUP_CTRL14                          0x108E
#define P10_8F_PIN_PULLUP_CTRL15                          0x108F
#define P10_90_PIN_PULLUP_CTRL16                          0x1090
#define P10_91_PIN_PULLUP_CTRL17                          0x1091
#define P10_92_PIN_PULLUP_CTRL18                          0x1092
#define P10_93_PIN_PULLUP_CTRL19                          0x1093
#define P10_94_PIN_PULLUP_CTRL1A                          0x1094
#define P10_95_PIN_PULLUP_CTRL1B                          0x1095
#define P10_96_PIN_PULLUP_CTRL1C                          0x1096
#define P10_A0_INT_PIN_SCHMITT_CTRL0                      0x10A0
#define P10_A1_INT_PIN_SCHMITT_CTRL1                      0x10A1
#define P10_B0_PIN_DRIVING_CTRL00                         0x10B0
#define P10_B1_PIN_DRIVING_CTRL01                         0x10B1
#define P10_B2_PIN_DRIVING_CTRL02                         0x10B2
#define P10_B3_PIN_DRIVING_CTRL03                         0x10B3
#define P10_B4_PIN_DRIVING_CTRL04                         0x10B4
#define P10_B5_PIN_DRIVING_CTRL05                         0x10B5
#define P10_B6_PIN_DRIVING_CTRL06                         0x10B6
#define P10_B7_PIN_DRIVING_CTRL07                         0x10B7
#define P10_B8_PIN_DRIVING_CTRL08                         0x10B8
#define P10_B9_PIN_DRIVING_CTRL09                         0x10B9
#define P10_BA_PIN_DRIVING_CTRL0A                         0x10BA
#define P10_BB_PIN_DRIVING_CTRL0B                         0x10BB
#define P10_BC_PIN_DRIVING_CTRL0C                         0x10BC
#define P10_BD_PIN_DRIVING_CTRL0D                         0x10BD
#define P10_BE_PIN_DRIVING_CTRL0E                         0x10BE


//--------------------------------------------------
// M1 I Domain DLTI (Page 11)
//--------------------------------------------------
#define P11_A1_I_DLTI_CTRL_M1                             0x11A1
#define P11_A2_I_DLTI_SEARCH_RANGE_M1                     0x11A2
#define P11_A3_I_DLTI_ADJUST_M1                           0x11A3
#define P11_A4_I_DLTI_UPPER_THD_HSB_M1                    0x11A4
#define P11_A5_I_DLTI_UPPER_THD_LSB_M1                    0x11A5
#define P11_A6_I_DLTI_LOWER_THD_HSB_M1                    0x11A6
#define P11_A7_I_DLTI_LOWER_THD_LSB_M1                    0x11A7
#define P11_A8_I_DLTI_FILTER_C0_HSB_M1                    0x11A8
#define P11_A9_I_DLTI_FILTER_C0_LSB_M1                    0x11A9
#define P11_AA_I_DLTI_FILTER_C1_HSB_M1                    0x11AA
#define P11_AB_I_DLTI_FILTER_C1_LSB_M1                    0x11AB
#define P11_AC_I_DLTI_FILTER_C2_HSB_M1                    0x11AC
#define P11_AD_I_DLTI_FILTER_C2_LSB_M1                    0x11AD
#define P11_AE_I_DLTI_FILTER_C3_HSB_M1                    0x11AE
#define P11_AF_I_DLTI_FILTER_C3_LSB_M1                    0x11AF
#define P11_B0_I_DLTI_FILTER_C4_HSB_M1                    0x11B0
#define P11_B1_I_DLTI_FILTER_C4_LSB_M1                    0x11B1
#define P11_B2_I_DLTI_UPPER_LOWER_THD_M1                  0x11B2
#define P11_D4_I_DLTI_HLW_HOR_START_HSB_M1                0x11D4
#define P11_D5_I_DLTI_HLW_HOR_START_LSB_M1                0x11D5
#define P11_D6_I_DLTI_HLW_HOR_END_HSB_M1                  0x11D6
#define P11_D7_I_DLTI_HLW_HOR_END_LSB_M1                  0x11D7
#define P11_D8_I_DLTI_HLW_VER_START_HSB_M1                0x11D8
#define P11_D9_I_DLTI_HLW_VER_START_LSB_M1                0x11D9
#define P11_DA_I_DLTI_HLW_VER_END_HSB_M1                  0x11DA
#define P11_DB_I_DLTI_HLW_VER_END_LSB_M1                  0x11DB
#define P11_DC_I_DLTI_HLW_CTRL_M1                         0x11DC
#define P11_DD_I_DLTI_DUMMY_M1                            0x11DD


//--------------------------------------------------
// M1 Light Super Resolution (LSR) (Page 11)
//--------------------------------------------------
#define P11_B9_SCALER_LSR_HLW                             0x11B9
#define P11_CC_LSR_HLW_H_START_HIGH                       0x11CC
#define P11_CD_LSR_HLW_H_START_LOW                        0x11CD
#define P11_CE_LSR_HLW_H_END_HIGH                         0x11CE
#define P11_CF_LSR_HLW_H_END_LOW                          0x11CF
#define P11_D0_LSR_HLW_V_START_HIGH                       0x11D0
#define P11_D1_LSR_HLW_V_START_LOW                        0x11D1
#define P11_D2_LSR_HLW_V_END_HIGH                         0x11D2
#define P11_D3_LSR_HLW_V_END_LOW                          0x11D3


//--------------------------------------------------
// M1 SHP (Page 12)
//--------------------------------------------------
#define P12_A0_SR_SHP_CTRL_0                              0x12A0
#define P12_A1_SR_SHP_CTRL_1                              0x12A1
#define P12_A2_SR_SHP_BIST_CTRL_0                         0x12A2
#define P12_A3_SR_DEBUGMODE_0                             0x12A3
#define P12_A4_SR_DEBUGMODE_1                             0x12A4
#define P12_A5_SR_EDGE_SOBEL                              0x12A5
#define P12_A6_SR_EDGE_SOBEL_UB                           0x12A6
#define P12_A7_SR_EDGE_HPF_C0_HSB                         0x12A7
#define P12_A8_SR_EDGE_HPF_C0_LSB                         0x12A8
#define P12_A9_SR_EDGE_HPF_C1_HSB                         0x12A9
#define P12_AA_SR_EDGE_HPF_C1_LSB                         0x12AA
#define P12_AB_SR_EDGE_HPF_C2                             0x12AB
#define P12_AC_SR_EDGE_HPF_C3                             0x12AC
#define P12_AD_SR_EDGE_HPF_C4                             0x12AD
#define P12_AE_SR_EDGE_HPF_C5                             0x12AE
#define P12_AF_SR_EDGE_HPF_SHIFT                          0x12AF
#define P12_B0_SR_EDGE_PEAKING_GAIN_BLR                   0x12B0
#define P12_B1_SR_EDGE_PEAKING_GAIN_POS                   0x12B1
#define P12_B2_SR_EDGE_PEAKING_GAIN_NEG                   0x12B2
#define P12_B3_SR_EDGE_PEAKING_HV_POS_HSB                 0x12B3
#define P12_B4_SR_EDGE_PEAKING_HV_POS_LSB                 0x12B4
#define P12_B5_SR_EDGE_PEAKING_HV_NEG_HSB                 0x12B5
#define P12_B6_SR_EDGE_PEAKING_HV_NEG_LSB                 0x12B6
#define P12_B7_SR_EDGE_PEAKING_LV                         0x12B7
#define P12_B8_SR_HOR_EMF_GAIN_1                          0x12B8
#define P12_B9_SR_HOR_EMF_GAIN_2                          0x12B9
#define P12_BA_SR_HOR_EMF_OFFSET_0_HSB                    0x12BA
#define P12_BB_SR_HOR_EMF_OFFSET_0_LSB                    0x12BB
#define P12_BC_SR_HOR_EMF_OFFSET_1_HSB                    0x12BC
#define P12_BD_SR_HOR_EMF_OFFSET_1_LSB                    0x12BD
#define P12_BE_SR_HOR_EMF_OFFSET_2_HSB                    0x12BE
#define P12_BF_SR_HOR_EMF_OFFSET_2_LSB                    0x12BF
#define P12_C0_SR_HOR_EMF_RANGE                           0x12C0
#define P12_C1_SR_HOR_EMF_EXT                             0x12C1
#define P12_C2_SR_HOR_EMFMK2_CTRL_0                       0x12C2
#define P12_C3_SR_HOR_EMFMK2_CTRL_1                       0x12C3
#define P12_C4_SR_HOR_EMFMK2_CTRL_2                       0x12C4
#define P12_C5_SR_TEX_DET                                 0x12C5
#define P12_C6_SR_TEX_DET_UB                              0x12C6
#define P12_C7_SR_TEX_HPF_C0_HSB                          0x12C7
#define P12_C8_SR_TEX_HPF_C0_LSB                          0x12C8
#define P12_C9_SR_TEX_HPF_C1_HSB                          0x12C9
#define P12_CA_SR_TEX_HPF_C1_LSB                          0x12CA
#define P12_CB_SR_TEX_HPF_C2                              0x12CB
#define P12_CC_SR_TEX_HPF_C3                              0x12CC
#define P12_CD_SR_TEX_HPF_C4                              0x12CD
#define P12_CE_SR_TEX_HPF_C5                              0x12CE
#define P12_CF_SR_TEX_HPF_SHIFT                           0x12CF
#define P12_D0_SR_HOR_WTSUM                               0x12D0
#define P12_D1_SR_TEX_PEAKING_GAIN_BLR                    0x12D1
#define P12_D2_SR_TEX_PEAKING_GAIN_POS                    0x12D2
#define P12_D3_SR_TEX_PEAKING_GAIN_NEG                    0x12D3
#define P12_D4_SR_TEX_PEAKING_HV_POS_HSB                  0x12D4
#define P12_D5_SR_TEX_PEAKING_HV_POS_LSB                  0x12D5
#define P12_D6_SR_TEX_PEAKING_HV_NEG_HSB                  0x12D6
#define P12_D7_SR_TEX_PEAKING_HV_NEG_LSB                  0x12D7
#define P12_D8_SR_TEX_PEAKING_LV                          0x12D8
#define P12_D9_SR_TEX_EDGE_BLEND                          0x12D9
#define P12_DE_SR_VER_WTSUM                               0x12DE
#define P12_DF_SR_VER_PEAKING_GAIN_POS                    0x12DF
#define P12_E0_SR_VER_PEAKING_GAIN_NEG                    0x12E0
#define P12_E1_SR_VER_PEAKING_HV_POS                      0x12E1
#define P12_E2_SR_VER_PEAKING_HV_NEG                      0x12E2
#define P12_E3_SR_VER_PEAKING_LV                          0x12E3
#define P12_E4_SR_VER_EMF                                 0x12E4
#define P12_E5_SR_VER_EMF_MODE                            0x12E5
#define P12_E6_SR_DUMMY1                                  0x12E6
#define P12_E7_SR_SHP_BIST_CTRL_1                         0x12E7


//--------------------------------------------------
// M1 SHP (Page13)
//--------------------------------------------------
#define P13_A0_SR_CDS_CTRL_0                              0x13A0
#define P13_A1_SR_CDS_CTRL_1                              0x13A1
#define P13_A2_SR_CDS_CM1_U_UB0_HSB                       0x13A2
#define P13_A3_SR_CDS_CM1_U_UB0_LSB                       0x13A3
#define P13_A4_SR_CDS_CM1_U_LB0_HSB                       0x13A4
#define P13_A5_SR_CDS_CM1_U_LB0_LSB                       0x13A5
#define P13_A6_SR_CDS_CM1_V_UB0_HSB                       0x13A6
#define P13_A7_SR_CDS_CM1_V_UB0_LSB                       0x13A7
#define P13_A8_SR_CDS_CM1_V_LB0_HSB                       0x13A8
#define P13_A9_SR_CDS_CM1_V_LB0_LSB                       0x13A9
#define P13_AA_SR_CDS_CM5_U_UB0_HSB                       0x13AA
#define P13_AB_SR_CDS_CM5_U_UB0_LSB                       0x13AB
#define P13_AC_SR_CDS_CM5_U_LB0_HSB                       0x13AC
#define P13_AD_SR_CDS_CM5_U_LB0_LSB                       0x13AD
#define P13_AE_SR_CDS_CM5_V_UB0_HSB                       0x13AE
#define P13_AF_SR_CDS_CM5_V_UB0_LSB                       0x13AF
#define P13_B0_SR_CDS_CM5_V_LB0_HSB                       0x13B0
#define P13_B1_SR_CDS_CM5_V_LB0_LSB                       0x13B1
#define P13_B2_SR_CDS_PEAKING_GAIN_BLR_CM1                0x13B2
#define P13_B3_SR_CDS_PEAKING_GAIN_POS_CM1                0x13B3
#define P13_B4_SR_CDS_PEAKING_GAIN_NEG_CM1                0x13B4
#define P13_B5_SR_CDS_PEAKING_HV_POS_CM1_HSB              0x13B5
#define P13_B6_SR_CDS_PEAKING_HV_POS_CM1_LSB              0x13B6
#define P13_B7_SR_CDS_PEAKING_HV_NEG_CM1_HSB              0x13B7
#define P13_B8_SR_CDS_PEAKING_HV_NEG_CM1_LSB              0x13B8
#define P13_B9_SR_CDS_PEAKING_LV_CM1                      0x13B9
#define P13_BA_SR_CDS_PEAKING_GAIN_BLR_CM5                0x13BA
#define P13_BB_SR_CDS_PEAKING_GAIN_POS_CM5                0x13BB
#define P13_BC_SR_CDS_PEAKING_GAIN_NEG_CM5                0x13BC
#define P13_BD_SR_CDS_PEAKING_HV_POS_CM5_HSB              0x13BD
#define P13_BE_SR_CDS_PEAKING_HV_POS_CM5_LSB              0x13BE
#define P13_BF_SR_CDS_PEAKING_HV_NEG_CM5_HSB              0x13BF
#define P13_C0_SR_CDS_PEAKING_HV_NEG_CM5_LSB              0x13C0
#define P13_C1_SR_CDS_PEAKING_LV_CM5                      0x13C1
#define P13_C2_SR_CDS_CM1_U_UB1_HSB                       0x13C2
#define P13_C3_SR_CDS_CM1_U_UB1_LSB                       0x13C3
#define P13_C4_SR_CDS_CM1_U_LB1_HSB                       0x13C4
#define P13_C5_SR_CDS_CM1_U_LB1_LSB                       0x13C5
#define P13_C6_SR_CDS_CM1_V_UB1_HSB                       0x13C6
#define P13_C7_SR_CDS_CM1_V_UB1_LSB                       0x13C7
#define P13_C8_SR_CDS_CM1_V_LB1_HSB                       0x13C8
#define P13_C9_SR_CDS_CM1_V_LB1_LSB                       0x13C9
#define P13_CA_SR_CDS_CM5_U_UB1_HSB                       0x13CA
#define P13_CB_SR_CDS_CM5_U_UB1_LSB                       0x13CB
#define P13_CC_SR_CDS_CM5_U_LB1_HSB                       0x13CC
#define P13_CD_SR_CDS_CM5_U_LB1_LSB                       0x13CD
#define P13_CE_SR_CDS_CM5_V_UB1_HSB                       0x13CE
#define P13_CF_SR_CDS_CM5_V_UB1_LSB                       0x13CF
#define P13_D0_SR_CDS_CM5_V_LB1_HSB                       0x13D0
#define P13_D1_SR_CDS_CM5_V_LB1_LSB                       0x13D1
#define P13_D4_SR_SKIPIR_CTRL1                            0x13D4
#define P13_D5_SR_SKIPIR_CTRL2                            0x13D5
#define P13_D6_SR_SKIPIR_CTRL3                            0x13D6
#define P13_D7_SR_SKIPIR_CTRL4                            0x13D7
#define P13_D8_SR_SKIPIR_CTRL5                            0x13D8
#define P13_D9_SR_SKIPIR_CTRL6                            0x13D9
#define P13_DA_SR_SKIPIR_ISLETLV_UB                       0x13DA
#define P13_DB_SR_SKIPIR_ISLETGAIN_UB                     0x13DB
#define P13_DC_SR_SKIPIR_REVLV_UB                         0x13DC
#define P13_DD_SR_SKIPIR_REVGAIN_UB                       0x13DD
#define P13_DE_SR_SKIPIR_DEBUG                            0x13DE
#define P13_DF_SR_DNOISE_CTRL1                            0x13DF
#define P13_E0_SR_DNOISE_CTRL2                            0x13E0
#define P13_E1_SR_DNOISE_GAIN_UB                          0x13E1
#define P13_E2_SR_DNOISE_LV_UB                            0x13E2
#define P13_E3_SR_DNOISE_NOISE_GAIN_TH                    0x13E3
#define P13_E4_SR_DNOISE_NOISE_LV_TH                      0x13E4
#define P13_E5_SR_ECS_CTRL_0                              0x13E5
#define P13_E6_SR_ECS_CTRL_1                              0x13E6
#define P13_E7_SR_ECS_NOISE_LEVEL_HSB                     0x13E7
#define P13_E8_SR_ECS_NOISE_LEVEL_LSB                     0x13E8
#define P13_E9_SR_ECS_CTR_TH_HSB                          0x13E9
#define P13_EA_SR_ECS_CTR_TH_LSB                          0x13EA
#define P13_EB_SR_ECS_SAWTOOTH_TH_HSB                     0x13EB
#define P13_EC_SR_ECS_SAWTOOTH_TH_LSB                     0x13EC
#define P13_ED_SR_MF_UB                                   0x13ED
#define P13_EE_SR_MF_LB                                   0x13EE
#define P13_EF_SR_MF_WT                                   0x13EF
#define P13_F0_SR_TL_THD_MSB                              0x13F0
#define P13_F1_SR_TL_THD_LSB                              0x13F1
#define P13_F2_SR_TL_OFFSET                               0x13F2
#define P13_F3_SR_BG_THD_MSB                              0x13F3
#define P13_F4_SR_BG_THD_LSB                              0x13F4
#define P13_F5_SR_BG_OFFSET                               0x13F5
#define P13_F6_SR_SUMDIFF_RSFT                            0x13F6
#define P13_F7_SR_SUMDIFF_THD                             0x13F7
#define P13_F8_SR_SUMDIFF_OFFSET                          0x13F8
#define P13_F9_SR_TL_GAIN                                 0x13F9
#define P13_FA_SR_TL_LEN                                  0x13FA
#define P13_FB_SR_DUMMY2                                  0x13FB


//--------------------------------------------------
// M1 Light Super Resolution (LSR) (Page 14)
//--------------------------------------------------
#define P14_00_LSR_V_SOB_SLP_LSB                          0x1400
#define P14_01_LSR_V_SOB_TXT_COR_G_HP_UB_LSB              0x1401
#define P14_02_LSR_V_HP_UP_COR_THD_LSB                    0x1402
#define P14_03_LSR_V_COR_THD_HP_LB_LSB                    0x1403
#define P14_04_LSR_V_HP_LB_SOB_TXT_LB_G_LSB               0x1404
#define P14_05_LSR_V_SOB_TXT_COR_TXT_LB_G_LSB             0x1405
#define P14_10_LSR_TL_THD_MSB                             0x1410
#define P14_11_LSR_TL_THD_LSB                             0x1411
#define P14_12_LSR_TL_OFFSET                              0x1412
#define P14_13_LSR_BG_THD_MSB                             0x1413
#define P14_14_LSR_BG_THD_LSB                             0x1414
#define P14_15_LSR_BG_OFFSET                              0x1415
#define P14_16_LSR_SUMDIFF_RSFT                           0x1416
#define P14_17_LSR_SUMDIFF_THD                            0x1417
#define P14_18_LSR_SUMDIFF_OFFSET                         0x1418
#define P14_19_LSR_TL_GAIN                                0x1419
#define P14_1A_LSR_TEST_OUT                               0x141A
#define P14_C0_LSR_CTRL                                   0x14C0
#define P14_C1_LSR_H_HP_FILTER_C0                         0x14C1
#define P14_C2_LSR_H_HP_FILTER_C1C2                       0x14C2
#define P14_C3_LSR_H_SOB_5TAP                             0x14C3
#define P14_C4_LSR_H_SOB_THD2_MSB                         0x14C4
#define P14_C5_LSR_H_SOB_THD2_LSB                         0x14C5
#define P14_C6_LSR_H_SOB_THD1_MSB                         0x14C6
#define P14_C7_LSR_H_SOB_THD1_LSB                         0x14C7
#define P14_C8_LSR_H_SOB_THD0                             0x14C8
#define P14_C9_LSR_H_SOB_BASE                             0x14C9
#define P14_CA_LSR_H_SOB_SLP_R                            0x14CA
#define P14_CB_LSR_H_SOB_SLP_F                            0x14CB
#define P14_CC_LSR_H_SOB_TXT_COR_G_P_MSB                  0x14CC
#define P14_CD_LSR_H_SOB_TXT_COR_G_P_LSB                  0x14CD
#define P14_CE_LSR_H_HP_UB_P                              0x14CE
#define P14_CF_LSR_H_HP_UB_N                              0x14CF
#define P14_D0_LSR_H_COR_THD_P                            0x14D0
#define P14_D1_LSR_H_COR_THD_N                            0x14D1
#define P14_D2_LSR_H_HP_LB_P                              0x14D2
#define P14_D3_LSR_H_HP_LB_N                              0x14D3
#define P14_D4_LSR_H_SOB_TXT_LB_G_P_MSB                   0x14D4
#define P14_D5_LSR_H_SOB_TXT_LB_G_P_LSB                   0x14D5
#define P14_D6_LSR_H_SOB_TXT_COR_G_N_MSB                  0x14D6
#define P14_D7_LSR_H_SOB_TXT_COR_G_N_LSB                  0x14D7
#define P14_D8_LSR_H_SOB_TXT_LB_G_N_MSB                   0x14D8
#define P14_D9_LSR_H_SOB_TXT_LB_G_N_LSB                   0x14D9
#define P14_E0_LSR_V_SOB_THD2_MSB                         0x14E0
#define P14_E1_LSR_V_SOB_THD2_LSB                         0x14E1
#define P14_E2_LSR_V_SOB_THD1_MSB                         0x14E2
#define P14_E3_LSR_V_SOB_THD1_LSB                         0x14E3
#define P14_E4_SR_V_SOB_THD0                              0x14E4
#define P14_E5_LSR_V_SOB_BASE                             0x14E5
#define P14_E6_LSR_V_SOB_SLP_R                            0x14E6
#define P14_E7_LSR_V_SOB_SLP_F                            0x14E7
#define P14_E8_LSR_V_SOB_TXT_COR_G_P_MSB                  0x14E8
#define P14_E9_LSR_V_SOB_TXT_COR_G_P_LSB                  0x14E9
#define P14_EA_LSR_V_HP_UB_P                              0x14EA
#define P14_EB_LSR_V_HP_UB_N                              0x14EB
#define P14_EC_LSR_V_COR_THD_P                            0x14EC
#define P14_ED_LSR_V_COR_THD_N                            0x14ED
#define P14_EE_LSR_V_HP_LB_P                              0x14EE
#define P14_EF_LSR_V_HP_LB_N                              0x14EF
#define P14_F0_LSR_V_SOB_TXT_LB_G_P_MSB                   0x14F0
#define P14_F1_LSR_V_SOB_TXT_LB_G_P_LSB                   0x14F1
#define P14_F2_LSR_V_SOB_TXT_COR_G_N_MSB                  0x14F2
#define P14_F3_LSR_V_SOB_TXT_COR_G_N_LSB                  0x14F3
#define P14_F4_LSR_V_SOB_TXT_LB_G_N_MSB                   0x14F4
#define P14_F5_LSR_V_SOB_TXT_LB_G_N_LSB                   0x14F5
#define P14_F6_LSR_H_SOB_THD12_LSB                        0x14F6
#define P14_F7_LSR_H_SOB_THD0_BASE_LSB                    0x14F7
#define P14_F8_LSR_H_SOB_SLP_LSB                          0x14F8
#define P14_F9_LSR_H_SOB_TXT_COR_G_HP_UB_LSB              0x14F9
#define P14_FA_LSR_H_HP_UB_COR_THD_LSB                    0x14FA
#define P14_FB_LSR_H_COR_THD_HP_LB_LSB                    0x14FB
#define P14_FC_LSR_H_HP_LB_SOB_TXT_LB_G_LSB               0x14FC
#define P14_FD_LSR_H_SOB_TXT_COR_TXT_LB_G_LSB             0x14FD
#define P14_FE_LSR_V_SOB_THD12_LSB                        0x14FE
#define P14_FF_LSR_V_SOB_THD0_BASE_LSB                    0x14FF


//--------------------------------------------------
// Color Conversion 每 YCCtoRGB after SHP 12bit In / 12bit Out (Page 14)
//--------------------------------------------------
#define P14_A1_SR_YCC2RGB_CTRL                            0x14A1
#define P14_A2_SR_YCC2RGB_COEF_K11_MSB                    0x14A2
#define P14_A3_SR_YCC2RGB_COEF_K11_LSB                    0x14A3
#define P14_A4_SR_YCC2RGB_COEF_K13_MSB                    0x14A4
#define P14_A5_SR_YCC2RGB_COEF_K13_LSB                    0x14A5
#define P14_A6_SR_YCC2RGB_COEF_K22_MSB                    0x14A6
#define P14_A7_SR_YCC2RGB_COEF_K22_LSB                    0x14A7
#define P14_A8_SR_YCC2RGB_COEF_K23_MSB                    0x14A8
#define P14_A9_SR_YCC2RGB_COEF_K23_LSB                    0x14A9
#define P14_AA_SR_YCC2RGB_COEF_K32_MSB                    0x14AA
#define P14_AB_SR_YCC2RGB_COEF_K32_LSB                    0x14AB
#define P14_AC_SR_YCC2RGB_R_OFFSET_MSB                    0x14AC
#define P14_AD_SR_YCC2RGB_R_OFFSET_LSB                    0x14AD
#define P14_AE_SR_YCC2RGB_G_OFFSET_MSB                    0x14AE
#define P14_AF_SR_YCC2RGB_G_OFFSET_LSB                    0x14AF
#define P14_B0_SR_YCC2RGB_B_OFFSET_MSB                    0x14B0
#define P14_B1_SR_YCC2RGB_B_OFFSET_LSB                    0x14B1
#define P14_B2_SR_YCC2RGB_R_GAIN_MSB                      0x14B2
#define P14_B3_SR_YCC2RGB_R_GAIN_LSB                      0x14B3
#define P14_B4_SR_YCC2RGB_G_GAIN_MSB                      0x14B4
#define P14_B5_SR_YCC2RGB_G_GAIN_LSB                      0x14B5
#define P14_B6_SR_YCC2RGB_B_GAIN_MSB                      0x14B6
#define P14_B7_SR_YCC2RGB_B_GAIN_LSB                      0x14B7
#define P14_B8_SR_YCC2RGB_DUMMY                           0x14B8


//--------------------------------------------------
// TXAB Port Control for Analog LVDS (Page 15)
//--------------------------------------------------
#define P15_00_LVDS_COMMON_AB_CTRL0                       0x1500
#define P15_01_LVDS_COMMON_AB_CTRL1                       0x1501
#define P15_02_LVDS_COMMON_AB_CTRL2                       0x1502
#define P15_03_LVDS_COMMON_AB_CTRL3                       0x1503
#define P15_04_LVDS_COMMON_AB_CTRL4                       0x1504
#define P15_05_LVDS_COMMON_AB_CTRL5                       0x1505
#define P15_06_LVDS_COMMON_AB_CTRL6                       0x1506
#define P15_07_LVDS_COMMON_AB_CTRL7                       0x1507
#define P15_08_LVDS_COMMON_AB_CTRL8                       0x1508
#define P15_09_LVDS_COMMON_AB_CTRL9                       0x1509
#define P15_0A_LVDS_COMMON_AB_CTRL10                      0x150A
#define P15_0B_LVDS_COMMON_AB_CTRL11                      0x150B
#define P15_0C_LVDS_COMMON_AB_CTRL12                      0x150C
#define P15_0D_LVDS_COMMON_AB_CTRL13                      0x150D
#define P15_0E_LVDS_COMMON_AB_CTRL14                      0x150E
#define P15_0F_LVDS_COMMON_AB_CTRL15                      0x150F
#define P15_10_LVDS_COMMON_AB_CTRL16                      0x1510
#define P15_11_LVDS_COMMON_AB_CTRL17                      0x1511
#define P15_20_LVDS_PORTA_CTRL0                           0x1520
#define P15_21_LVDS_PORTA_CTRL1                           0x1521
#define P15_22_LVDS_PORTA_CTRL2                           0x1522
#define P15_23_LVDS_PORTA_CTRL3                           0x1523
#define P15_24_LVDS_PORTA_CTRL4                           0x1524
#define P15_25_LVDS_PORTA_CTRL5                           0x1525
#define P15_26_LVDS_PORTA_CTRL6                           0x1526
#define P15_27_LVDS_PORTA_CTRL7                           0x1527
#define P15_28_LVDS_PORTA_CTRL8                           0x1528
#define P15_29_LVDS_PORTA_CTRL9                           0x1529
#define P15_2A_LVDS_PORTA_CTRL10                          0x152A
#define P15_2B_LVDS_PORTA_CTRL11                          0x152B
#define P15_30_LVDS_PORTB_CTRL0                           0x1530
#define P15_31_LVDS_PORTB_CTRL1                           0x1531
#define P15_32_LVDS_PORTB_CTRL2                           0x1532
#define P15_33_LVDS_PORTB_CTRL3                           0x1533
#define P15_34_LVDS_PORTB_CTRL4                           0x1534
#define P15_35_LVDS_PORTB_CTRL5                           0x1535
#define P15_36_LVDS_PORTB_CTRL6                           0x1536
#define P15_37_LVDS_PORTB_CTRL7                           0x1537
#define P15_38_LVDS_PORTB_CTRL8                           0x1538
#define P15_39_LVDS_PORTB_CTRL9                           0x1539
#define P15_3A_LVDS_PORTB_CTRL10                          0x153A
#define P15_3B_LVDS_PORTB_CTRL11                          0x153B


//--------------------------------------------------
// Embedded Timing Controller (Page 15)
//--------------------------------------------------
#define P15_A3_TCON_ADDR                                  0x15A3
#define P15_A4_TCON_DATA                                  0x15A4


//--------------------------------------------------
// M1 On-line Measure Block Overview (Page 16)
//--------------------------------------------------
#define P16_01_MEAS_CTL0                                  0x1601
#define P16_02_MEAS_CTL1                                  0x1602
#define P16_03_MEAS_ERROR_FLG0                            0x1603
#define P16_04_MEAS_ERROR_FLG1                            0x1604
#define P16_05_MEAS_HS_PERIOD_A_M                         0x1605
#define P16_06_MEAS_HS_PERIOD_A_L                         0x1606
#define P16_07_MEAS_HS_PERIOD_FRA_A                       0x1607
#define P16_08_MEAS_VS_PERIOD_A_M                         0x1608
#define P16_09_MEAS_VS_PERIOD_A_L                         0x1609
#define P16_0A_MEAS_HS_PULSE_A_M                          0x160A
#define P16_0B_MEAS_HS_PULSE_A_L                          0x160B
#define P16_0C_MEAS_VS_PULSE_A_M                          0x160C
#define P16_0D_MEAS_VS_PULSE_A_L                          0x160D
#define P16_0E_MEAS_HS_PERIOD_D_M                         0x160E
#define P16_0F_MEAS_HS_PERIOD_D_L                         0x160F
#define P16_10_MEAS_HS_PERIOD_FRA_D                       0x1610
#define P16_11_MEAS_VS_PERIOD_D_M                         0x1611
#define P16_12_MEAS_VS_PERIOD_D_L                         0x1612
#define P16_13_MEAS_HS_PULSE_D_M                          0x1613
#define P16_14_MEAS_HS_PULSE_D_L                          0x1614
#define P16_15_MEAS_HS_VS_DELTA_CTL                       0x1615
#define P16_16_MEAS_HS_VS_DELTA_IRQ                       0x1616
#define P16_17_MEAS_HS_VS_DELTA_WD                        0x1617
#define P16_18_MEAS_HS_VS_ERROR_WD                        0x1618
#define P16_19_MEAS_HS_VS_ERROR_IRQ                       0x1619
#define P16_1A_MEAS2_HS_VS_DLY                            0x161A
#define P16_1C_M1_MEASURE_DUMMY0                          0x161C
#define P16_1D_M1_MEASURE_DUMMY1                          0x161D


//--------------------------------------------------
// DPTx On-line Measure Block Overview (Page 16)
//--------------------------------------------------
#define P16_41_DPTX_MEAS_CTL0                             0x1641
#define P16_42_DPTX_MEAS_CTL1                             0x1642
#define P16_43_DPTX_MEAS_ERROR_FLG0                       0x1643
#define P16_44_DPTX_MEAS_ERROR_FLG1                       0x1644
#define P16_45_DPTX_MEAS_HS_PERIOD_A_M                    0x1645
#define P16_46_DPTX_MEAS_HS_PERIOD_A_L                    0x1646
#define P16_47_DPTX_MEAS_HS_PERIOD_FRA_A                  0x1647
#define P16_48_DPTX_MEAS_VS_PERIOD_A_M                    0x1648
#define P16_49_DPTX_MEAS_VS_PERIOD_A_L                    0x1649
#define P16_4A_DPTX_MEAS_HS_PULSE_A_M                     0x164A
#define P16_4B_DPTX_MEAS_HS_PULSE_A_L                     0x164B
#define P16_4C_DPTX_MEAS_VS_PULSE_A_M                     0x164C
#define P16_4D_DPTX_MEAS_VS_PULSE_A_L                     0x164D
#define P16_4E_DPTX_MEAS_HS_PERIOD_D_M                    0x164E
#define P16_4F_DPTX_MEAS_HS_PERIOD_D_L                    0x164F
#define P16_50_DPTX_MEAS_HS_PERIOD_FRA_D                  0x1650
#define P16_51_DPTX_MEAS_VS_PERIOD_D_M                    0x1651
#define P16_52_DPTX_MEAS_VS_PERIOD_D_L                    0x1652
#define P16_53_DPTX_MEAS_HS_PULSE_D_M                     0x1653
#define P16_54_DPTX_MEAS_HS_PULSE_D_L                     0x1654
#define P16_55_DPTX_MEAS_HS_VS_DELTA_CTL                  0x1655
#define P16_56_DPTX_MEAS_HS_VS_DELTA_IRQ                  0x1656
#define P16_57_DPTX_MEAS_HS_VS_DELTA_WD                   0x1657
#define P16_58_DPTX_MEAS_HS_VS_ERROR_WD                   0x1658
#define P16_59_DPTX_MEAS_HS_VS_ERROR_IRQ                  0x1659
#define P16_5A_DPTX_MEAS2_HS_VS_DLY                       0x165A
#define P16_5C_DPTX_DPTX_MEASURE_DUMMY0                   0x165C
#define P16_5D_DPTX_MEASURE_DUMMY1                        0x165D


//--------------------------------------------------
// DPTX VGIP (Page 16)
//--------------------------------------------------
#define P16_A0_DPTX_VGIP_CTRL                             0x16A0
#define P16_A1_DPTX_VGIP_SIGINV                           0x16A1
#define P16_A2_DPTX_VGIP_DELAY_CTRL                       0x16A2
#define P16_A3_DPTX_VGIP_ODD_CTRL                         0x16A3
#define P16_A4_DPTX_DUMMY                                 0x16A4
#define P16_AA_DPTX_VGIP_FIELD_DETECT                     0x16AA


//--------------------------------------------------
// DPTX Image Auto Function (Page 16)
//--------------------------------------------------
#define P16_C0_DPTX_H_BOUNDARY_H                          0x16C0
#define P16_C1_DPTX_H_BOUNDARY_STA_L                      0x16C1
#define P16_C2_DPTX_H_BOUNDARY_END_L                      0x16C2
#define P16_C3_DPTX_V_BOUNDARY_H                          0x16C3
#define P16_C4_DPTX_V_BOUNDARY_STA_L                      0x16C4
#define P16_C5_DPTX_V_BOUNDARY_END_L                      0x16C5
#define P16_C6_DPTX_RED_NOISE_MARGIN                      0x16C6
#define P16_C7_DPTX_GRN_NOISE_MARGIN                      0x16C7
#define P16_C8_DPTX_BLU_NOISE_MARGIN                      0x16C8
#define P16_C9_DPTX_DIFF_THRESHOLD                        0x16C9
#define P16_CA_DPTX_AUTO_ADJ_CTRL0                        0x16CA
#define P16_CB_DPTX_HW_AUTO_PHASE_CTRL0                   0x16CB
#define P16_CC_DPTX_AUTO_DUMMY                            0x16CC
#define P16_CD_DPTX_AUTO_ADJ_CTRL1                        0x16CD
#define P16_CE_DPTX_VER_START_END_H                       0x16CE
#define P16_CF_DPTX_VER_START_L                           0x16CF
#define P16_D0_DPTX_VER_END_L                             0x16D0
#define P16_D1_DPTX_H_START_END_H                         0x16D1
#define P16_D2_DPTX_H_START_L                             0x16D2
#define P16_D3_DPTX_H_END_L                               0x16D3
#define P16_D4_DPTX_AUTO_PHASE_3                          0x16D4
#define P16_D5_DPTX_AUTO_PHASE_2                          0x16D5
#define P16_D6_DPTX_AUTO_PHASE_1                          0x16D6
#define P16_D7_DPTX_AUTO_PHASE_0                          0x16D7


//--------------------------------------------------
// Overall CEC0 Function Block (Page 18)
//--------------------------------------------------
#define P18_A0_CEC_CR0_1                                  0x18A0
#define P18_A1_CEC_CR0_1_1                                0x18A1
#define P18_A2_CEC_CR_RSV_1                               0x18A2
#define P18_A3_CEC_CR0_2                                  0x18A3
#define P18_A4_CEC_CR0_3                                  0x18A4
#define P18_A5_CEC_CR0_4                                  0x18A5
#define P18_A6_CEC_CR0_5                                  0x18A6
#define P18_A7_CEC_CR0_RSV_1                              0x18A7
#define P18_A8_CEC_RTCR0_1                                0x18A8
#define P18_A9_CEC_RTCR0_2                                0x18A9
#define P18_AA_CEC_RTCR0_RSV_0                            0x18AA
#define P18_B0_CEC_RXCR0_1                                0x18B0
#define P18_B1_CEC_RXCR0_2                                0x18B1
#define P18_B2_CEC_RTCR0_RSV_1                            0x18B2
#define P18_B3_CEC_RTCR1_RSV_0                            0x18B3
#define P18_B4_CEC_TXCR0_1                                0x18B4
#define P18_B5_CEC_TXCR0_2                                0x18B5
#define P18_B6_CEC_TX_CR0_3                               0x18B6
#define P18_B7_CEC_TXCR0_RSV_0                            0x18B7
#define P18_B8_CEC_TXCR0_RSV_1                            0x18B8
#define P18_B9_CEC_TXDR0                                  0x18B9
#define P18_BA_CEC_TXDR0_RSV_0                            0x18BA
#define P18_C0_CEC_TXDR1_1                                0x18C0
#define P18_C1_CEC_TXDR1_2                                0x18C1
#define P18_C2_CEC_TXDR1_3                                0x18C2
#define P18_C3_CEC_TXDR1_4                                0x18C3
#define P18_C4_CEC_TXDR2_1                                0x18C4
#define P18_C5_CEC_TXDR2_2                                0x18C5
#define P18_C6_CEC_TXDR2_3                                0x18C6
#define P18_C7_CEC_TXDR2_4                                0x18C7
#define P18_C8_CEC_TXDR3_1                                0x18C8
#define P18_C9_CEC_TXDR3_2                                0x18C9
#define P18_CA_CEC_TXDR3_3                                0x18CA
#define P18_CB_CEC_TXDR3_4                                0x18CB
#define P18_CC_CEC_TXDR4_1                                0x18CC
#define P18_CD_CEC_TXDR4_2                                0x18CD
#define P18_CE_CEC_TXDR4_3                                0x18CE
#define P18_CF_CEC_TXDR4_4                                0x18CF
#define P18_D0_CEC_TXDR_FIFO_RSV_0                        0x18D0
#define P18_D1_CEC_TXDR_FIFO_RSV_1                        0x18D1
#define P18_D2_CEC_TXDR_FIFO_RSV_2                        0x18D2
#define P18_D3_CEC_RXDR1_1                                0x18D3
#define P18_D4_CEC_RXDR1_2                                0x18D4
#define P18_D5_CEC_RXDR1_3                                0x18D5
#define P18_D6_CEC_RXDR1_4                                0x18D6
#define P18_D7_CEC_RXDR2_1                                0x18D7
#define P18_D8_CEC_RXDR2_2                                0x18D8
#define P18_D9_CEC_RXDR2_3                                0x18D9
#define P18_DA_CEC_RXDR2_4                                0x18DA
#define P18_DB_CEC_RXDR3_1                                0x18DB
#define P18_DC_CEC_RXDR3_2                                0x18DC
#define P18_DD_CEC_RXDR3_3                                0x18DD
#define P18_DE_CEC_RXDR3_4                                0x18DE
#define P18_DF_CEC_RXDR4_1                                0x18DF
#define P18_E0_CEC_RXDR4_2                                0x18E0
#define P18_E1_CEC_RXDR4_3                                0x18E1
#define P18_E2_CEC_RXDR4_4                                0x18E2
#define P18_E3_CEC_RX_FIFO_RSV_0                          0x18E3
#define P18_E4_CEC_RX_FIFO_RSV_1                          0x18E4
#define P18_E5_CEC_RXTCR0_1                               0x18E5
#define P18_E6_CEC_RXTCR0_2                               0x18E6
#define P18_E7_CEC_RXTCR0_3                               0x18E7
#define P18_E8_CEC_RXTCR0_4                               0x18E8
#define P18_E9_CEC_RXTCR0_5                               0x18E9
#define P18_EA_CEC_RTCR1_RSV_1                            0x18EA
#define P18_EF_CEC_TXTCR0_1                               0x18EF
#define P18_F1_CEC_TXTCR0_2                               0x18F1
#define P18_F2_CEC_TXTCR1_1                               0x18F2
#define P18_F3_CEC_TXTCR1_2                               0x18F3
#define P18_F4_CEC_TXTCR1_3                               0x18F4
#define P18_F5_CEC_RXTCR1_ACK_0                           0x18F5
#define P18_F6_CEC_RXTCR1_ACK_1                           0x18F6
#define P18_F7_CEC_RXTCR1_ACK_2                           0x18F7
#define P18_F8_CEC_RXTCR1_ERR                             0x18F8
#define P18_F9_CEC_RXTCR1_RSV_0                           0x18F9
#define P18_FA_CEC_TIMING_CTRL_DATA                       0x18FA
#define P18_FB_CEC_TIMING_CTRL_0                          0x18FB
#define P18_FC_CEC_TIMING_CTRL_1                          0x18FC
#define P18_FD_CEC_TIMING_CTRL_COUNTER_0                  0x18FD
#define P18_FE_CEC_TIMING_CTRL_COUNTER_1                  0x18FE


//--------------------------------------------------
// Overall CEC0 Function Block (Page 19)
//--------------------------------------------------
#define P19_A0_GDI_CEC_COMPARE_OPCODE_01                  0x19A0
#define P19_A1_GDI_CEC_SEND_OPCODE_01                     0x19A1
#define P19_A2_GDI_CEC_SEND_OPERAND_NUMBER_01             0x19A2
#define P19_A3_GDI_CEC_OPERAND_01                         0x19A3
#define P19_A4_GDI_CEC_OPERAND_02                         0x19A4
#define P19_A5_GDI_CEC_OPERAND_03                         0x19A5
#define P19_A6_GDI_CEC_COMOP01_RSV_0                      0x19A6
#define P19_A7_GDI_CEC_COMOP01_RSV_1                      0x19A7
#define P19_A8_GDI_CEC_COMPARE_OPCODE_02                  0x19A8
#define P19_A9_GDI_CEC_SEND_OPCODE_02                     0x19A9
#define P19_AA_GDI_CEC_SEND_OPERAND_NUMBER_02             0x19AA
#define P19_AB_GDI_CEC_OPERAND_04                         0x19AB
#define P19_AC_GDI_CEC_OPERAND_05                         0x19AC
#define P19_AD_GDI_CEC_OPERAND_06                         0x19AD
#define P19_AE_GDI_CEC_COMOP02_RSV_0                      0x19AE
#define P19_AF_GDI_CEC_COMOP02_RSV_1                      0x19AF
#define P19_B0_GDI_CEC_COMPARE_OPCODE_03                  0x19B0
#define P19_B1_GDI_CEC_SEND_OPCODE_03                     0x19B1
#define P19_B2_GDI_CEC_SEND_OPERAND_NUMBER_03             0x19B2
#define P19_B3_GDI_CEC_OPERAND_07                         0x19B3
#define P19_B4_GDI_CEC_OPERAND_08                         0x19B4
#define P19_B5_GDI_CEC_OPERAND_09                         0x19B5
#define P19_B6_GDI_CEC_COMOP03_RSV_0                      0x19B6
#define P19_B7_GDI_CEC_COMOP03_RSV_1                      0x19B7
#define P19_B8_GDI_CEC_COMPARE_OPCODE_04                  0x19B8
#define P19_B9_GDI_CEC_SEND_OPCODE_04                     0x19B9
#define P19_BA_GDI_CEC_SEND_OPERAND_NUMBER_04             0x19BA
#define P19_BB_GDI_CEC_OPERAND_10                         0x19BB
#define P19_BC_GDI_CEC_OPERAND_11                         0x19BC
#define P19_BD_GDI_CEC_OPERAND_12                         0x19BD
#define P19_BE_GDI_CEC_COMOP04_RSV_0                      0x19BE
#define P19_BF_GDI_CEC_COMOP04_RSV_1                      0x19BF
#define P19_C0_GDI_CEC_COMPARE_OPCODE_05                  0x19C0
#define P19_C1_GDI_CEC_COMPARE_OPCODE_06                  0x19C1
#define P19_C2_GDI_CEC_COMPARE_OPCODE_07                  0x19C2
#define P19_C3_GDI_CEC_COMPARE_OPCODE_08                  0x19C3
#define P19_C4_GDI_CEC_COMPARE_OPCODE_09                  0x19C4
#define P19_C5_GDI_CEC_COMPARE_OPCODE_10                  0x19C5
#define P19_C6_GDI_CEC_COMPARE_OPCODE_11                  0x19C6
#define P19_C7_GDI_CEC_COMPARE_OPCODE_12                  0x19C7
#define P19_C8_GDI_CEC_COMPARE_OPCODE_13                  0x19C8
#define P19_C9_GDI_CEC_COMPARE_OPCODE_14                  0x19C9
#define P19_CA_GDI_CEC_COMPARE_OPCODE_15                  0x19CA
#define P19_CB_GDI_CEC_TXOP_RSV_0                         0x19CB
#define P19_CC_GDI_CEC_TXOP_RSV_1                         0x19CC
#define P19_CD_GDI_CEC_TXOP_RSV_2                         0x19CD
#define P19_D0_GDI_CEC_OPCODE_ENABLE_1                    0x19D0
#define P19_D1_GDI_CEC_OPCODE_ENABLE_2                    0x19D1
#define P19_D2_GDI_CEC_HIT_OPCODE_0                       0x19D2
#define P19_D3_GDI_CEC_HIT_OPCODE_1                       0x19D3
#define P19_D4_GDI_CEC_HIT_OPCODE_RSV_0                   0x19D4
#define P19_D5_GDI_CEC_HIT_OPCODE_RSV_1                   0x19D5
#define P19_D6_CEC_FUN_DEBUG_0                            0x19D6
#define P19_D7_CEC_FUN_RESERVED_1                         0x19D7
#define P19_D8_CEC_INTCR_RSV_1                            0x19D8
#define P19_D9_CEC_PS_RESERVED_0                          0x19D9
#define P19_DA_CEC_FUN_RESERVED_4                         0x19DA
#define P19_DB_CEC_FUN_RESERVED_5                         0x19DB
#define P19_E0_CEC_POWER_SAVING_MODE                      0x19E0
#define P19_E1_CEC_RTCR0_RSV_0                            0x19E1
#define P19_E2_CEC_RTCR0_RSV_1                            0x19E2
#define P19_E3_CEC_INTCR_01                               0x19E3
#define P19_E4_CEC_INTCR_02                               0x19E4
#define P19_E5_CEC_PS_RSV_0                               0x19E5
#define P19_E6_CEC_PS_RSV_1                               0x19E6
#define P19_E7_CEC_PS_RESERVED_1                          0x19E7
#define P19_E8_CEC_PS_RESERVED_2                          0x19E8
#define P19_E9_CEC_PS_RESERVED_3                          0x19E9
#define P19_EA_CEC_PS_RESERVED_4                          0x19EA
#define P19_EB_CEC_PS_RESERVED_5                          0x19EB
#define P19_F0_GDI_CEC_ANALOG_1                           0x19F0
#define P19_F1_POWER_SELECT                               0x19F1
#define P19_F2_CEC_Z0_OK                                  0x19F2
#define P19_F3_CEC_27K_INIS                               0x19F3
#define P19_F4_CEC_RESERVED                               0x19F4
#define P19_F5_CEC_PSM                                    0x19F5


//--------------------------------------------------
// GDI DFE (Page 1D)
//--------------------------------------------------
#define P1D_A0_L0_DFE_EN_1                                0x1DA0
#define P1D_A1_L0_DFE_EN_2                                0x1DA1
#define P1D_A2_L0_LIMIT_INIT                              0x1DA2
#define P1D_A3_L0_INIT_1                                  0x1DA3
#define P1D_A4_L0_INIT_2                                  0x1DA4
#define P1D_A5_L0_INIT_3                                  0x1DA5
#define P1D_A6_L0_INIT_4                                  0x1DA6
#define P1D_A7_L0_INIT_5                                  0x1DA7
#define P1D_A8_L0_INIT_6                                  0x1DA8
#define P1D_A9_L0_INIT_7                                  0x1DA9
#define P1D_AA_L0_INIT_8                                  0x1DAA
#define P1D_AB_L0_STABLE_FLAG                             0x1DAB
#define P1D_AC_L0_DFE_EN_3                                0x1DAC
#define P1D_AD_L0_INIT_9                                  0x1DAD
#define P1D_AE_L0_INIT_10                                 0x1DAE
#define P1D_AF_L0_GDI_DE                                  0x1DAF
#define P1D_B0_L1_DFE_EN_1                                0x1DB0
#define P1D_B1_L1_DFE_EN_2                                0x1DB1
#define P1D_B2_L1_LIMIT_INIT                              0x1DB2
#define P1D_B3_L1_INIT_1                                  0x1DB3
#define P1D_B4_L1_INIT_2                                  0x1DB4
#define P1D_B5_L1_INIT_3                                  0x1DB5
#define P1D_B6_L1_INIT_4                                  0x1DB6
#define P1D_B7_L1_INIT_5                                  0x1DB7
#define P1D_B8_L1_INIT_6                                  0x1DB8
#define P1D_B9_L1_INIT_7                                  0x1DB9
#define P1D_BA_L1_INIT_8                                  0x1DBA
#define P1D_BB_L1_STABLE_FLAG                             0x1DBB
#define P1D_BC_L1_DFE_EN_3                                0x1DBC
#define P1D_BD_L1_INIT_9                                  0x1DBD
#define P1D_BE_L1_INIT_10                                 0x1DBE
#define P1D_BF_L1_GDI_DE                                  0x1DBF
#define P1D_C0_L2_DFE_EN_1                                0x1DC0
#define P1D_C1_L2_DFE_EN_2                                0x1DC1
#define P1D_C2_L2_LIMIT_INIT                              0x1DC2
#define P1D_C3_L2_INIT_1                                  0x1DC3
#define P1D_C4_L2_INIT_2                                  0x1DC4
#define P1D_C5_L2_INIT_3                                  0x1DC5
#define P1D_C6_L2_INIT_4                                  0x1DC6
#define P1D_C7_L2_INIT_5                                  0x1DC7
#define P1D_C8_L2_INIT_6                                  0x1DC8
#define P1D_C9_L2_INIT_7                                  0x1DC9
#define P1D_CA_L2_INIT_8                                  0x1DCA
#define P1D_CB_L2_STABLE_FLAG                             0x1DCB
#define P1D_CC_L2_DFE_EN_3                                0x1DCC
#define P1D_CD_L2_INIT_9                                  0x1DCD
#define P1D_CE_L2_INIT_10                                 0x1DCE
#define P1D_CF_L2_GDI_DE                                  0x1DCF
#define P1D_D0_L3_DFE_EN_1                                0x1DD0
#define P1D_D1_L3_DFE_EN_2                                0x1DD1
#define P1D_D2_L3_LIMIT_INIT                              0x1DD2
#define P1D_D3_L3_INIT_1                                  0x1DD3
#define P1D_D4_L3_INIT_2                                  0x1DD4
#define P1D_D5_L3_INIT_3                                  0x1DD5
#define P1D_D6_L3_INIT_4                                  0x1DD6
#define P1D_D7_L3_INIT_5                                  0x1DD7
#define P1D_D8_L3_INIT_6                                  0x1DD8
#define P1D_D9_L3_INIT_7                                  0x1DD9
#define P1D_DA_L3_INIT_8                                  0x1DDA
#define P1D_DB_L3_STABLE_FLAG                             0x1DDB
#define P1D_DC_L3_DFE_EN_3                                0x1DDC
#define P1D_DD_L3_INIT_9                                  0x1DDD
#define P1D_DE_L3_INIT_10                                 0x1DDE
#define P1D_DF_L3_GDI_DE                                  0x1DDF
#define P1D_E0_MODE_TIMER                                 0x1DE0
#define P1D_E1_TIMER                                      0x1DE1
#define P1D_E2_GAIN_1                                     0x1DE2
#define P1D_E3_GAIN_2                                     0x1DE3
#define P1D_E4_GAIN_3                                     0x1DE4
#define P1D_E5_GAIN_4                                     0x1DE5
#define P1D_E6_LIMIT_1                                    0x1DE6
#define P1D_E7_LIMIT_2                                    0x1DE7
#define P1D_E8_LIMIT_3                                    0x1DE8
#define P1D_E9_LIMIT_4                                    0x1DE9
#define P1D_EA_LIMIT_5                                    0x1DEA
#define P1D_EB_LIMIT_6                                    0x1DEB
#define P1D_EC_LOOP_DIV_1                                 0x1DEC
#define P1D_ED_LOOP_DIV_2                                 0x1DED
#define P1D_EE_GRAY_DEC_1                                 0x1DEE
#define P1D_EF_RESET_1                                    0x1DEF
#define P1D_F0_COEF_1                                     0x1DF0
#define P1D_F1_COEF_2                                     0x1DF1
#define P1D_F2_COEF_3                                     0x1DF2
#define P1D_F3_COEF_4                                     0x1DF3
#define P1D_F4_LIMIT_7                                    0x1DF4
#define P1D_F5_LIMIT_8                                    0x1DF5
#define P1D_F6_LIMIT_9                                    0x1DF6
#define P1D_F7_GAIN_5                                     0x1DF7
#define P1D_F8_GRAY_DEC_2                                 0x1DF8
#define P1D_F9_LIMIT_10                                   0x1DF9
#define P1D_FA_GAIN_PREC                                  0x1DFA
#define P1D_FB_DEBUG                                      0x1DFB


//--------------------------------------------------
// Rotation FRC Cap_M1 (Page 20)
//--------------------------------------------------
#define P20_00_CAP_M1_MEM_ADDR_MSB                        0x2000
#define P20_01_CAP_M1_MEM_ADDR_H                          0x2001
#define P20_02_CAP_M1_MEM_ADDR_M                          0x2002
#define P20_03_CAP_M1_MEM_ADDR_L                          0x2003
#define P20_04_CAP_M1_BL2_ADDR_MSB                        0x2004
#define P20_05_CAP_M1_BL2_ADDR_H                          0x2005
#define P20_06_CAP_M1_BL2_ADDR_M                          0x2006
#define P20_07_CAP_M1_BL2_ADDR_L                          0x2007
#define P20_08_CAP_M1_BL3_ADDR_MSB                        0x2008
#define P20_09_CAP_M1_BL3_ADDR_H                          0x2009
#define P20_0A_CAP_M1_BL3_ADDR_M                          0x200A
#define P20_0B_CAP_M1_BL3_ADDR_L                          0x200B
#define P20_0C_CAP_M1_BOUNDARY_ADDR1_MSB                  0x200C
#define P20_0D_CAP_M1_BOUNDARY_ADDR1_H                    0x200D
#define P20_0E_CAP_M1_BOUNDARY_ADDR1_M                    0x200E
#define P20_0F_CAP_M1_BOUNDARY_ADDR1_L                    0x200F
#define P20_10_CAP_M1_BOUNDARY_ADDR2_MSB                  0x2010
#define P20_11_CAP_M1_BOUNDARY_ADDR2_H                    0x2011
#define P20_12_CAP_M1_BOUNDARY_ADDR2_M                    0x2012
#define P20_13_CAP_M1_BOUNDARY_ADDR2_L                    0x2013
#define P20_14_CAP_M1_BOUNDARY_STATUS                     0x2014
#define P20_15_CAP_M1_BLOCK_STEP_MSB                      0x2015
#define P20_16_CAP_M1_BLOCK_STEP_H                        0x2016
#define P20_17_CAP_M1_BLOCK_STEP_M                        0x2017
#define P20_18_CAP_M1_BLOCK_STEP_L                        0x2018
#define P20_19_CAP_M1_LINE_STEP_MSB                       0x2019
#define P20_1A_CAP_M1_LINE_STEP_H                         0x201A
#define P20_1B_CAP_M1_LINE_STEP_M                         0x201B
#define P20_1C_CAP_M1_LINE_STEP_L                         0x201C
#define P20_1D_CAP_M1_WATER_LEVEL_H                       0x201D
#define P20_1E_CAP_M1_WATER_LEVEL_L                       0x201E
#define P20_1F_CAP_M1_PIXEL_NUM_H                         0x201F
#define P20_20_CAP_M1_PIXEL_NUM_L                         0x2020
#define P20_21_CAP_M1_LINE_NUM_H                          0x2021
#define P20_22_CAP_M1_LINE_NUM_L                          0x2022
#define P20_23_CAP_M1_WR_NUM_H                            0x2023
#define P20_24_CAP_M1_WR_NUM_L                            0x2024
#define P20_25_CAP_M1_WR_LEN                              0x2025
#define P20_26_CAP_M1_WR_REMAIN                           0x2026
#define P20_27_CAP_M1_DDR_CTRL1                           0x2027
#define P20_28_CAP_M1_DDR_CTRL2                           0x2028
#define P20_29_CAP_M1_DDR_CTRL3                           0x2029
#define P20_2A_CAP_M1_STATUS                              0x202A
#define P20_2B_CAP_M1_FIFO_STATUS                         0x202B
#define P20_2C_CAP_M1_ONEF_STATUS                         0x202C
#define P20_30_CAP_M1_BIST_CTRL                           0x2030
#define P20_31_CAP_M1_DRF_BIST_CTRL                       0x2031
#define P20_32_ROT_CAP_M1_BLK_STRT_X_MSB                  0x2032
#define P20_33_ROT_CAP_M1_BLK_STRT_X_LSB                  0x2033
#define P20_34_ROT_CAP_M1_BLK_STRT_Y_MSB                  0x2034
#define P20_35_ROT_CAP_M1_BLK_STRT_Y_LSB                  0x2035
#define P20_36_ROT_CAP_M1_BLK_W                           0x2036
#define P20_37_ROT_CAP_M1_BLK_LR                          0x2037
#define P20_38_ROT_CAP_M1_CTRL1                           0x2038
#define P20_39_ROT_CAP_M1_GENERALPICT_NUM                 0x2039
#define P20_3A_ROT_CAP_M1_GENERALPICT_LEN                 0x203A
#define P20_3B_ROT_CAP_M1_GENERALPICT_REM                 0x203B
#define P20_3C_ROT_CAP_M1_REMAINPICT_NUM                  0x203C
#define P20_3D_ROT_CAP_M1_REMAINPICT_LEN                  0x203D
#define P20_3E_ROT_CAP_M1_REMAINPICT_REM                  0x203E
#define P20_3F_ROT_CAP_M1_PICT_FST_IDX                    0x203F
#define P20_40_ROT_CAP_M1_PICT_SEC_IDX                    0x2040
#define P20_41_ROT_CAP_M1_PICT_THI_IDX                    0x2041
#define P20_42_ROT_CAP_M1_PICT_NUM                        0x2042


//--------------------------------------------------
// Rotation FRC Disp_M1 (Page 20)
//--------------------------------------------------
#define P20_80_DISP_M1_READ_ADDR_MSB                      0x2080
#define P20_81_DISP_M1_READ_ADDR_H                        0x2081
#define P20_82_DISP_M1_READ_ADDR_M                        0x2082
#define P20_83_DISP_M1_READ_ADDR_L                        0x2083
#define P20_84_DISP_M1_BL2_ADDR_MSB                       0x2084
#define P20_85_DISP_M1_BL2_ADDR_H                         0x2085
#define P20_86_DISP_M1_BL2_ADDR_M                         0x2086
#define P20_87_DISP_M1_BL2_ADDR_L                         0x2087
#define P20_88_DISP_M1_BL3_ADDR_MSB                       0x2088
#define P20_89_DISP_M1_BL3_ADDR_H                         0x2089
#define P20_8A_DISP_M1_BL3_ADDR_M                         0x208A
#define P20_8B_DISP_M1_BL3_ADDR_L                         0x208B
#define P20_8C_DISP_M1_BOUNDARY_ADDR1_MSB                 0x208C
#define P20_8D_DISP_M1_BOUNDARY_ADDR1_H                   0x208D
#define P20_8E_DISP_M1_BOUNDARY_ADDR1_M                   0x208E
#define P20_8F_DISP_M1_BOUNDARY_ADDR1_L                   0x208F
#define P20_90_DISP_M1_BOUNDARY_ADDR2_MSB                 0x2090
#define P20_91_DISP_M1_BOUNDARY_ADDR2_H                   0x2091
#define P20_92_DISP_M1_BOUNDARY_ADDR2_M                   0x2092
#define P20_93_DISP_M1_BOUNDARY_ADDR2_L                   0x2093
#define P20_94_DISP_M1_BOUNDARY_STATUS                    0x2094
#define P20_95_DISP_M1_BLOCK_STEP_MSB                     0x2095
#define P20_96_DISP_M1_BLOCK_STEP_H                       0x2096
#define P20_97_DISP_M1_BLOCK_STEP_M                       0x2097
#define P20_98_DISP_M1_BLOCK_STEP_L                       0x2098
#define P20_99_DISP_M1_LINE_STEP_MSB                      0x2099
#define P20_9A_DISP_M1_LINE_STEP_H                        0x209A
#define P20_9B_DISP_M1_LINE_STEP_M                        0x209B
#define P20_9C_DISP_M1_LINE_STEP_L                        0x209C
#define P20_A0_DISP_M1_WTLVL_H                            0x20A0
#define P20_A1_DISP_M1_WTLVL_L                            0x20A1
#define P20_A2_DISP_M1_PXL_NUM_H                          0x20A2
#define P20_A3_DISP_M1_PXL_NUM_L                          0x20A3
#define P20_A4_DISP_M1_LINE_NUM_H                         0x20A4
#define P20_A5_DISP_M1_LINE_NUM_L                         0x20A5
#define P20_A6_DISP_M1_PRRD_VST_H                         0x20A6
#define P20_A7_DISP_M1_PRRD_VST_L                         0x20A7
#define P20_A8_DISP_M1_READ_NUM_H                         0x20A8
#define P20_A9_DISP_M1_READ_NUM_L                         0x20A9
#define P20_AA_DISP_M1_READ_LEN                           0x20AA
#define P20_AB_DISP_M1_READ_REMAIN                        0x20AB
#define P20_AC_DISP_M1_DISP_CTRL1                         0x20AC
#define P20_AD_DISP_STATUS                                0x20AD
#define P20_AE_DISP_M1_DISP_CTRL2                         0x20AE
#define P20_AF_DISP_M1_DISP_CTRL3                         0x20AF
#define P20_B0_DISP_M1_FIFO_STATUS                        0x20B0
#define P20_B1_DISP_M1_ONEF_DHF_H                         0x20B1
#define P20_B2_DISP_M1_ONEF_DHF_M                         0x20B2
#define P20_B3_DISP_M1_ONEF_DHF_L                         0x20B3
#define P20_B4_DISP_M1_ONEF_IHF                           0x20B4
#define P20_B5_DISP_M1_LINE_MAGN_L                        0x20B5
#define P20_B6_DISP_M1_ONEF_MAGN_H                        0x20B6
#define P20_B7_DISP_M1_ONEF_MAGN_L                        0x20B7
#define P20_C0_DISP_M1_BIST_CTRL                          0x20C0
#define P20_C1_DISP_M1_DRF_BIST_CTRL                      0x20C1
#define P20_C2_ADC_TEST                                   0x20C2
#define P20_C3_DISP_M1_NEW_FIFO_CRC_CTRL                  0x20C3
#define P20_C4_DISP_M1_NEW_FIFO_CRC1                      0x20C4
#define P20_C5_DISP_M1_NEW_FIFO_CRC2                      0x20C5
#define P20_C6_DISP_M1_NEW_FIFO_CRC3                      0x20C6
#define P20_C7_DISP_M1_NEW_FIFO_CRC4                      0x20C7
#define P20_C8_DISP_M1_NEW_FIFO_CRC5                      0x20C8
#define P20_C9_DISP_M1_NEW_FIFO_CRC6                      0x20C9
#define P20_CA_ROT_DISP_M1_BLK_STRT_X_MSB                 0x20CA
#define P20_CB_ROT_DISP_M1_BLK_STRT_X_LSB                 0x20CB
#define P20_CC_ROT_DISP_M1_BLK_STRT_Y_MSB                 0x20CC
#define P20_CD_ROT_DISP_M1_BLK_STRT_Y_LSB                 0x20CD
#define P20_CE_ROT_DISP_M1_BLK_W                          0x20CE
#define P20_CF_ROT_DISP_M1_BLK_LR                         0x20CF
#define P20_D0_ROT_DISP_M1_CTRL1                          0x20D0
#define P20_D1_ROT_DISP_M1_GENERALPICT_NUM                0x20D1
#define P20_D2_ROT_DISP_M1_GENERALPICT_LEN                0x20D2
#define P20_D3_ROT_DISP_M1_GENERALPICT_REM                0x20D3
#define P20_D4_ROT_DISP_M1_PICT_FST_IDX                   0x20D4
#define P20_D5_ROT_DISP_M1_PICT_SEC_IDX                   0x20D5
#define P20_D6_ROT_DISP_M1_PICT_THI_IDX                   0x20D6
#define P20_D7_ROT_DISP_M1_PICT_FST_WID_H                 0x20D7
#define P20_D8_ROT_DISP_M1_PICT_FST_WID_L                 0x20D8
#define P20_D9_ROT_DISP_M1_PICT_NUM                       0x20D9
#define P20_DA_ROT_DISP_M1_AR_HEIGHT_H                    0x20DA
#define P20_DB_ROT_DISP_M1_AR_HEIGHT_L                    0x20DB


//--------------------------------------------------
// Rotation (Page20)
//--------------------------------------------------
#define P20_F0_ROTATION_CTRL0                             0x20F0
#define P20_F1_ROTATION_IN_WID_H                          0x20F1
#define P20_F2_ROTATION_IN_WID_L                          0x20F2
#define P20_F3_ROTATION_IN_LEN_H                          0x20F3
#define P20_F4_ROTATION_IN_LEN_L                          0x20F4
#define P20_F5_ROTATION_CTRL1                             0x20F5
#define P20_F6_ROTATION_CTRL2                             0x20F6
#define P20_F7_READ_RDY_STATUS                            0x20F7
#define P20_F8_ROTATION_BIST_CTRL1                        0x20F8
#define P20_F9_ROTATION_BIST_CTRL2                        0x20F9
#define P20_FA_ROTATION_BIST_CTRL3                        0x20FA
#define P20_FB_ROTATION_BIST_CTRL4                        0x20FB
#define P20_FC_ROTATION_BIST_CTRL5                        0x20FC
#define P20_FD_ROTATION_BIST_CTRL6                        0x20FD
#define P20_FE_DUMMY_1                                    0x20FE
#define P20_FF_DUMMY_2                                    0x20FF


//--------------------------------------------------
// Step Trace Debug Interface (Page 21)
//--------------------------------------------------
#define P21_A0_STEP_DEBG_CTRL                             0x21A0
#define P21_A1_BP_EN_CTRL                                 0x21A1
#define P21_A2_BP0_ADDR_BANK                              0x21A2
#define P21_A3_BP0_ADDR_MSB                               0x21A3
#define P21_A4_BP0_ADDR_LSB                               0x21A4
#define P21_A5_BP1_ADDR_BANK                              0x21A5
#define P21_A6_BP1_ADDR_MSB                               0x21A6
#define P21_A7_BP1_ADDR_LSB                               0x21A7
#define P21_A8_BP2_ADDR_BANK                              0x21A8
#define P21_A9_BP2_ADDR_MSB                               0x21A9
#define P21_AA_BP2_ADDR_LSB                               0x21AA
#define P21_AB_BP3_ADDR_BANK                              0x21AB
#define P21_AC_BP3_ADDR_MSB                               0x21AC
#define P21_AD_BP3_ADDR_LSB                               0x21AD
#define P21_D0_DBG_ACC_CTRL                               0x21D0
#define P21_D1_IRAM_ADDR                                  0x21D1
#define P21_D2_IRAM_DATA                                  0x21D2
#define P21_D3_SFR_ADDR                                   0x21D3
#define P21_D4_SFR_DATA                                   0x21D4
#define P21_D5_XDATA_ADDR_MSB                             0x21D5
#define P21_D6_XDATA_ADDR_LSB                             0x21D6
#define P21_D7_XDATA_DATA                                 0x21D7
#define P21_D8_CURRENT_PC_BANK                            0x21D8
#define P21_D9_CURRENT_PC_MSB                             0x21D9
#define P21_DA_CURRENT_PC_LSB                             0x21DA


//--------------------------------------------------
// SPI Module Interface (Page 22)
//--------------------------------------------------
#define P22_A0_SPI_TRANSACTION_EN                         0x22A0
#define P22_A1_SPI_TRANSACTION_STATUS                     0x22A1
#define P22_A2_SPI_MODULE_CTRL                            0x22A2
#define P22_A3_SPI_MODULE_SETTING                         0x22A3
#define P22_A4_SPI_SCLK_DIV                               0x22A4
#define P22_A5_SPI_S0_PROTOCOL_MODE                       0x22A5
#define P22_A6_SPI_S0_WRITE_LENGTH                        0x22A6
#define P22_A7_SPI_S0_READ_LENGTH                         0x22A7
#define P22_A8_SPI_S0_STATUS                              0x22A8
#define P22_A9_SPI_S0_MASK                                0x22A9
#define P22_AA_SPI_S0_STOP_CON                            0x22AA
#define P22_AB_SPI_S0_TX_BUF                              0x22AB
#define P22_AC_SPI_S0_RX_BUF_READ_ADR                     0x22AC
#define P22_AD_SPI_S0_RX_BUF                              0x22AD
#define P22_AE_SPI_S0_TX_BUF_REMAIN                       0x22AE
#define P22_AF_SPI_S0_RX_BUF_REMAIN                       0x22AF
#define P22_B0_SPI_S0_TX_RX_BUF_FLAG                      0x22B0
#define P22_B1_SPI_S0_TX_RX_BUF_IRQ_EN                    0x22B1
#define P22_B2_SPI_S0_CMD_DATA                            0x22B2
#define P22_B3_SPI_S1_CMD_DATA                            0x22B3
#define P22_B4_SPI_S01_CMD_SETTING                        0x22B4
#define P22_B5_SPI_S1_PROTOCOL_MODE                       0x22B5
#define P22_B6_SPI_S1_WRITE_LENGTH                        0x22B6
#define P22_B7_SPI_S1_READ_LENGTH                         0x22B7
#define P22_B8_SPI_S1_STATUS                              0x22B8
#define P22_B9_SPI_S1_MASK                                0x22B9
#define P22_BA_SPI_S1_STOP_CON                            0x22BA
#define P22_BB_SPI_S01_STATUS_EN                          0x22BB
#define P22_BC_SPI_VARIANT_MODE_SETTINGS                  0x22BC
#define P22_BD_SPI_S1_TX_BUF                              0x22BD
#define P22_BE_SPI_S1_RX_BUF_READ_ADR                     0x22BE
#define P22_BF_SPI_S1_RX_BUF                              0x22BF
#define P22_C0_SPI_S1_TX_BUF_REMAIN                       0x22C0
#define P22_C1_SPI_S1_RX_BUF_REMAIN                       0x22C1
#define P22_C2_SPI_S1_TX_RX_BUF_FLAG                      0x22C2
#define P22_C3_SPI_S1_TX_RX_BUF_IRQ_EN                    0x22C3
#define P22_C4_SPI_BUF_CLR                                0x22C4
#define P22_C5_SPI_DUMMY                                  0x22C5
#define P22_C6_SPI_CS_AUTO_CTRL                           0x22C6
#define P22_C7_SPI_CS0_CTRL                               0x22C7
#define P22_C8_SPI_CS1_CTRL                               0x22C8
#define P22_C9_SPI_SCLK_CTRL                              0x22C9
#define P22_CA_SPI_XRAM_TX_CTR0                           0x22CA
#define P22_CB_SPI_CNT_H                                  0x22CB
#define P22_CC_SPI_CNT_M                                  0x22CC
#define P22_CD_SPI_CNT_L                                  0x22CD
#define P22_CE_SPI_XRAM_RXBUF0_TX_LEN_THD                 0x22CE
#define P22_CF_SPI_XRAM_RXBUF0_TX_LEN                     0x22CF
#define P22_D0_SPI_XRAM_RXBUF0_TX_LEN_UNIT                0x22D0
#define P22_D1_SPI_XRAM_RXBUF1_TX_LEN_THD                 0x22D1
#define P22_D2_SPI_XRAM_RXBUF1_TX_LEN                     0x22D2
#define P22_D3_SPI_XRAM_RXBUF1_TX_LEN_UNIT                0x22D3
#define P22_D4_SPI_XRAM_TX_JUMP_LEN                       0x22D4
#define P22_D5_SPI_XRAM_BUF0_TX_TO_CBUS_CTRL              0x22D5
#define P22_D6_SPI_TX0_FINISH_FLAG                        0x22D6
#define P22_D7_SPI_XRAM_BUF1_TX_TO_CBUS_CTRL              0x22D7
#define P22_D8_SPI_TX1_FINISH_FLAG                        0x22D8
#define P22_D9_SPI_CNT_CTRL                               0x22D9


//--------------------------------------------------
// EMCU PLL (Page 23)
//--------------------------------------------------
#define P23_00_DPLL_M                                     0x2300
#define P23_01_DPLL_N                                     0x2301
#define P23_02_DPLL_CRNT                                  0x2302
#define P23_03_DPLL_WD                                    0x2303
#define P23_04_DPLL_CAL                                   0x2304
#define P23_05_DCLK_FINE_TUNE_OFFSET_MSB                  0x2305
#define P23_06_DCLK_FINE_TUNE_OFFSET_LSB                  0x2306
#define P23_07_DCLK_SPREAD_SPECTRUM                       0x2307
#define P23_08_FIXED_LAST_LINE_CTRL                       0x2308
#define P23_09_TARGET_DCLK_FINE_TUNE_OFFSET_MSB           0x2309
#define P23_0A_TARGET_DCLK_FINE_TUNE_OFFSET_LSB           0x230A
#define P23_0B_DPLL_RESULT                                0x230B
#define P23_0C_SSC_REF_SEL                                0x230C
#define P23_0D_DCLK_SSC_COUNT                             0x230D
#define P23_0E_DPLL_LDO                                   0x230E
#define P23_0F_DPLL_RELOAD_CTRL                           0x230F
#define P23_10_DPLL_M_N_MSB                               0x2310


//--------------------------------------------------
// IR-DA Module (Page 23)
//--------------------------------------------------
#define P23_A0_IR_PSR0                                    0x23A0
#define P23_A1_IR_PSR1                                    0x23A1
#define P23_A2_IR_PSR2                                    0x23A2
#define P23_A3_IR_PSR3                                    0x23A3
#define P23_A4_IR_PER0                                    0x23A4
#define P23_A5_IR_PER1                                    0x23A5
#define P23_A6_IR_PER2                                    0x23A6
#define P23_A7_IR_PER3                                    0x23A7
#define P23_A8_IR_SF0                                     0x23A8
#define P23_A9_IR_SF1                                     0x23A9
#define P23_AA_IR_SF2                                     0x23AA
#define P23_AB_IR_SF3                                     0x23AB
#define P23_AC_IR_DPIR0                                   0x23AC
#define P23_AD_IR_DPIR1                                   0x23AD
#define P23_AE_IR_DPIR2                                   0x23AE
#define P23_AF_IR_DPIR3                                   0x23AF
#define P23_B0_IR_CR0                                     0x23B0
#define P23_B1_IR_CR1                                     0x23B1
#define P23_B2_IR_CR2                                     0x23B2
#define P23_B3_IR_CR3                                     0x23B3
#define P23_B4_IR_RP0                                     0x23B4
#define P23_B5_IR_RP1                                     0x23B5
#define P23_B6_IR_RP2                                     0x23B6
#define P23_B7_IR_RP3                                     0x23B7
#define P23_B8_IR_SR0                                     0x23B8
#define P23_B9_IR_SR1                                     0x23B9
#define P23_BA_IR_SR2                                     0x23BA
#define P23_BB_IR_SR3                                     0x23BB
#define P23_BC_IR_RAW_CTR0                                0x23BC
#define P23_BD_IR_RAW_CTR1                                0x23BD
#define P23_BE_IR_RAW_CTR2                                0x23BE
#define P23_BF_IR_RAW_CTR3                                0x23BF
#define P23_C0_IR_RAW_FF0                                 0x23C0
#define P23_C1_IR_RAW_FF1                                 0x23C1
#define P23_C2_IR_RAW_FF2                                 0x23C2
#define P23_C3_IR_RAW_FF3                                 0x23C3
#define P23_C4_IR_RAW_SAMPLE_TIME0                        0x23C4
#define P23_C5_IR_RAW_SAMPLE_TIME1                        0x23C5
#define P23_C6_IR_RAW_SAMPLE_TIME2                        0x23C6
#define P23_C7_IR_RAW_SAMPLE_TIME3                        0x23C7
#define P23_C8_IR_RAW_WL0                                 0x23C8
#define P23_C9_IR_RAW_WL1                                 0x23C9
#define P23_CA_IR_RAW_WL2                                 0x23CA
#define P23_CB_IR_RAW_WL3                                 0x23CB
#define P23_CC_IR_RAW_DEB0                                0x23CC
#define P23_CD_IR_RAW_DEB1                                0x23CD
#define P23_CE_IR_RAW_DEB2                                0x23CE
#define P23_CF_IR_RAW_DEB3                                0x23CF
#define P23_D0_IR_PSR_UP0                                 0x23D0
#define P23_D1_IR_PSR_UP1                                 0x23D1
#define P23_D2_IR_PSR_UP2                                 0x23D2
#define P23_D3_IR_PSR_UP3                                 0x23D3
#define P23_D4_IR_PER_UP0                                 0x23D4
#define P23_D5_IR_PER_UP1                                 0x23D5
#define P23_D6_IR_PER_UP2                                 0x23D6
#define P23_D7_IR_PER_UP3                                 0x23D7
#define P23_D8_IR_CTRL_RC60                               0x23D8
#define P23_D9_IR_CTRL_RC61                               0x23D9
#define P23_DA_IR_CTRL_RC62                               0x23DA
#define P23_DB_IR_CTRL_RC63                               0x23DB
#define P23_DC_IR_RP2_0                                   0x23DC
#define P23_DD_IR_RP2_1                                   0x23DD
#define P23_DE_IR_RP2_2                                   0x23DE
#define P23_DF_IR_RP2_3                                   0x23DF
#define P23_E0_IR_RAW_SF0                                 0x23E0
#define P23_E1_IR_RAW_SF1                                 0x23E1
#define P23_E2_IR_RAW_SF2                                 0x23E2
#define P23_E3_IR_RAW_SF3                                 0x23E3
#define P23_F0_IR_CLK_GAT                                 0x23F0


//--------------------------------------------------
// Ringing Filter (Page 25)
//--------------------------------------------------
#define P25_A0_RFILTER_CTRL                               0x25A0
#define P25_A1_RFILTER_THD                                0x25A1
#define P25_A2_RFILTER_THD_RNG_EXP                        0x25A2
#define P25_A3_RFILTER_OFS_COEF                           0x25A3
#define P25_A4_RFILTER_OFS_RNG_EXP                        0x25A4
#define P25_A5_RFILTER_DIFF_THD_UB                        0x25A5
#define P25_A6_RFILTER_DIFF_THD_LB                        0x25A6
#define P25_A7_RFILTER_FACTOR_TEST_CTRL                   0x25A7


//--------------------------------------------------
// MHL MAC (Page 26)
//--------------------------------------------------
#define P26_A0_MHL_CTRL_00                                0x26A0
#define P26_A1_MHL_CTRL_01                                0x26A1
#define P26_A2_MHL_CTRL_02                                0x26A2
#define P26_A3_MHL_CTRL_03                                0x26A3
#define P26_A4_MHL_CTRL_04                                0x26A4
#define P26_A5_MHL_CTRL_05                                0x26A5
#define P26_A6_MHL_CTRL_06                                0x26A6
#define P26_A7_MHL_CTRL_07                                0x26A7
#define P26_A8_MHL_CTRL_08                                0x26A8
#define P26_A9_MHL_CTRL_09                                0x26A9
#define P26_AA_MHL_CTRL_0A                                0x26AA
#define P26_AB_MHL_CTRL_0B                                0x26AB
#define P26_AC_MHL_CTRL_0C                                0x26AC
#define P26_AD_MHL_CTRL_0D                                0x26AD
#define P26_AE_MHL_CTRL_0E                                0x26AE
#define P26_AF_MHL_CTRL_0F                                0x26AF
#define P26_B0_MHL_CTRL_10                                0x26B0
#define P26_B1_MHL_CTRL_11                                0x26B1
#define P26_B2_MHL_CTRL_12                                0x26B2
#define P26_B3_MHL_CTRL_13                                0x26B3
#define P26_B4_MHL_CTRL_14                                0x26B4
#define P26_B5_MHL_CTRL_15                                0x26B5
#define P26_B6_MHL_CTRL_16                                0x26B6


//--------------------------------------------------
// CBUS PHY (Page 27)
//--------------------------------------------------
#define P27_A0_CBUS_EN_0                                  0x27A0
#define P27_A1_CBUS_EN_1                                  0x27A1
#define P27_A2_CBUS_RES_AUTOK_0                           0x27A2
#define P27_A3_CBUS_RES_AUTOK_1                           0x27A3
#define P27_A4_CBUS_RES_AUTOK_2                           0x27A4
#define P27_A5_CBUS_RES_AUTOK_3                           0x27A5
#define P27_A6_CBUS_INPUT_CONTROL                         0x27A6
#define P27_A7_CBUS_OUTPUT_CONTROL_0                      0x27A7
#define P27_A8_CBUS_OUTPUT_CONTROL_1                      0x27A8


//--------------------------------------------------
// CBUS0 MAC (Page 28)
//--------------------------------------------------
#define P28_A0_CBUS_CTRL_00                               0x28A0
#define P28_A1_CBUS_CTRL_01                               0x28A1
#define P28_A2_CBUS_CTRL_02                               0x28A2
#define P28_A3_CBUS_CTRL_03                               0x28A3
#define P28_A4_CBUS_CTRL_04                               0x28A4
#define P28_A5_CBUS_CTRL_05                               0x28A5
#define P28_A6_CBUS_CTRL_06                               0x28A6
#define P28_A7_CBUS_CTRL_07                               0x28A7
#define P28_A8_CBUS_CTRL_08                               0x28A8
#define P28_A9_CBUS_CTRL_09                               0x28A9
#define P28_AA_CBUS_CTRL_0A                               0x28AA
#define P28_AB_CBUS_CTRL_0B                               0x28AB
#define P28_AC_CBUS_CTRL_0C                               0x28AC
#define P28_AD_CBUS_CTRL_0D                               0x28AD
#define P28_AE_CBUS_CTRL_0E                               0x28AE
#define P28_AF_CBUS_CTRL_0F                               0x28AF
#define P28_B0_CBUS_CTRL_10                               0x28B0
#define P28_B1_CBUS_CTRL_11                               0x28B1
#define P28_B2_CBUS_CTRL_12                               0x28B2
#define P28_B3_CBUS_CTRL_13                               0x28B3
#define P28_B4_CBUS_CTRL_14                               0x28B4
#define P28_B5_CBUS_CTRL_15                               0x28B5
#define P28_B6_CBUS_CTRL_16                               0x28B6
#define P28_B7_CBUS_CTRL_17                               0x28B7
#define P28_B8_CBUS_CTRL_18                               0x28B8
#define P28_BA_CBUS_CTRL_1A                               0x28BA
#define P28_BB_CBUS_CTRL_1B                               0x28BB
#define P28_BC_CBUS_CTRL_1C                               0x28BC
#define P28_BD_CBUS_CTRL_1D                               0x28BD
#define P28_BE_CBUS_CTRL_1E                               0x28BE
#define P28_BF_CBUS_CTRL_1F                               0x28BF
#define P28_C0_CBUS_CTRL_20                               0x28C0
#define P28_C1_CBUS_CTRL_21                               0x28C1
#define P28_C2_CBUS_CTRL_22                               0x28C2
#define P28_C3_CBUS_CTRL_23                               0x28C3
#define P28_C4_CBUS_CTRL_24                               0x28C4
#define P28_C5_CBUS_CTRL_25                               0x28C5
#define P28_C6_CBUS_CTRL_26                               0x28C6
#define P28_C8_CBUS_CTRL_28                               0x28C8
#define P28_C9_CBUS_CTRL_29                               0x28C9
#define P28_CA_CBUS_CTRL_2A                               0x28CA
#define P28_CB_CBUS_CTRL_2B                               0x28CB
#define P28_CC_CBUS_CTRL_2C                               0x28CC
#define P28_CD_CBUS_CTRL_2D                               0x28CD
#define P28_CE_CBUS_CTRL_2E                               0x28CE
#define P28_CF_CBUS_CTRL_2F                               0x28CF
#define P28_D0_CBUS_CTRL_30                               0x28D0
#define P28_D1_CBUS_CTRL_31                               0x28D1
#define P28_D2_CBUS_CTRL_32                               0x28D2
#define P28_D3_CBUS_CTRL_33                               0x28D3
#define P28_D4_CBUS_CTRL_34                               0x28D4
#define P28_D5_CBUS_CTRL_35                               0x28D5
#define P28_D6_CBUS_CTRL_36                               0x28D6
#define P28_D7_CBUS_CTRL_37                               0x28D7
#define P28_D8_CBUS_CTRL_38                               0x28D8
#define P28_D9_CBUS_CTRL_39                               0x28D9
#define P28_DA_CBUS_CTRL_3A                               0x28DA
#define P28_DB_CBUS_CTRL_3B                               0x28DB
#define P28_DC_CBUS_CTRL_3C                               0x28DC
#define P28_DD_CBUS_CTRL_3D                               0x28DD
#define P28_DE_CBUS_CTRL_3E                               0x28DE
#define P28_DF_CBUS_CTRL_3F                               0x28DF
#define P28_E0_CBUS_CTRL_40                               0x28E0
#define P28_E1_CBUS_CTRL_41                               0x28E1
#define P28_E2_CBUS_CTRL_42                               0x28E2
#define P28_E3_CBUS_CTRL_43                               0x28E3
#define P28_E4_CBUS_CTRL_44                               0x28E4
#define P28_E5_CBUS_CTRL_45                               0x28E5
#define P28_E6_CBUS_CTRL_46                               0x28E6
#define P28_E7_CBUS_CTRL_47                               0x28E7
#define P28_E8_CBUS_CTRL_48                               0x28E8
#define P28_E9_CBUS_CTRL_49                               0x28E9
#define P28_EA_CBUS_CTRL_4A                               0x28EA
#define P28_EB_CBUS_CTRL_4B                               0x28EB
#define P28_EC_CBUS_CTRL_4C                               0x28EC
#define P28_ED_CBUS_CTRL_4D                               0x28ED
#define P28_EE_CBUS_CTRL_4E                               0x28EE
#define P28_EF_CBUS_CTRL_4F                               0x28EF
#define P28_F0_CBUS_CTRL_50                               0x28F0
#define P28_F1_CBUS_CTRL_51                               0x28F1
#define P28_F2_CBUS_CTRL_52                               0x28F2
#define P28_F3_CBUS_CTRL_53                               0x28F3
#define P28_F4_CBUS_CTRL_54                               0x28F4
#define P28_F5_CBUS_CTRL_55                               0x28F5
#define P28_F6_CBUS_CTRL_56                               0x28F6
#define P28_F7_CBUS_CTRL_57                               0x28F7
#define P28_F8_CBUS_CTRL_58                               0x28F8
#define P28_F9_CBUS_CTRL_59                               0x28F9
#define P28_FA_CBUS_CTRL_5A                               0x28FA
#define P28_FB_CBUS_CTRL_5B                               0x28FB
#define P28_FC_CBUS_CTRL_5C                               0x28FC
#define P28_FD_CBUS_CTRL_5D                               0x28FD


//--------------------------------------------------
// CBUS1 MAC (Page 29)
//--------------------------------------------------
#define P29_A0_CBUS_CTRL_00                               0x29A0
#define P29_A1_CBUS_CTRL_01                               0x29A1
#define P29_A2_CBUS_CTRL_02                               0x29A2
#define P29_A3_CBUS_CTRL_03                               0x29A3
#define P29_A4_CBUS_CTRL_04                               0x29A4
#define P29_A5_CBUS_CTRL_05                               0x29A5
#define P29_A6_CBUS_CTRL_06                               0x29A6
#define P29_A7_CBUS_CTRL_07                               0x29A7
#define P29_A8_CBUS_CTRL_08                               0x29A8
#define P29_A9_CBUS_CTRL_09                               0x29A9
#define P29_AA_CBUS_CTRL_0A                               0x29AA
#define P29_AB_CBUS_CTRL_0B                               0x29AB
#define P29_AC_CBUS_CTRL_0C                               0x29AC
#define P29_AD_CBUS_CTRL_0D                               0x29AD
#define P29_AE_CBUS_CTRL_0E                               0x29AE
#define P29_AF_CBUS_CTRL_0F                               0x29AF
#define P29_B0_CBUS_CTRL_10                               0x29B0
#define P29_B1_CBUS_CTRL_11                               0x29B1
#define P29_B2_CBUS_CTRL_12                               0x29B2
#define P29_B3_CBUS_CTRL_13                               0x29B3
#define P29_B4_CBUS_CTRL_14                               0x29B4
#define P29_B5_CBUS_CTRL_15                               0x29B5
#define P29_B6_CBUS_CTRL_16                               0x29B6
#define P29_B7_CBUS_CTRL_17                               0x29B7
#define P29_B8_CBUS_CTRL_18                               0x29B8
#define P29_BA_CBUS_CTRL_1A                               0x29BA
#define P29_BB_CBUS_CTRL_1B                               0x29BB
#define P29_BC_CBUS_CTRL_1C                               0x29BC
#define P29_BD_CBUS_CTRL_1D                               0x29BD
#define P29_BE_CBUS_CTRL_1E                               0x29BE
#define P29_BF_CBUS_CTRL_1F                               0x29BF
#define P29_C0_CBUS_CTRL_20                               0x29C0
#define P29_C1_CBUS_CTRL_21                               0x29C1
#define P29_C2_CBUS_CTRL_22                               0x29C2
#define P29_C3_CBUS_CTRL_23                               0x29C3
#define P29_C4_CBUS_CTRL_24                               0x29C4
#define P29_C5_CBUS_CTRL_25                               0x29C5
#define P29_C6_CBUS_CTRL_26                               0x29C6
#define P29_C8_CBUS_CTRL_28                               0x29C8
#define P29_C9_CBUS_CTRL_29                               0x29C9
#define P29_CA_CBUS_CTRL_2A                               0x29CA
#define P29_CB_CBUS_CTRL_2B                               0x29CB
#define P29_CC_CBUS_CTRL_2C                               0x29CC
#define P29_CD_CBUS_CTRL_2D                               0x29CD
#define P29_CE_CBUS_CTRL_2E                               0x29CE
#define P29_CF_CBUS_CTRL_2F                               0x29CF
#define P29_D0_CBUS_CTRL_30                               0x29D0
#define P29_D1_CBUS_CTRL_31                               0x29D1
#define P29_D2_CBUS_CTRL_32                               0x29D2
#define P29_D3_CBUS_CTRL_33                               0x29D3
#define P29_D4_CBUS_CTRL_34                               0x29D4
#define P29_D5_CBUS_CTRL_35                               0x29D5
#define P29_D6_CBUS_CTRL_36                               0x29D6
#define P29_D7_CBUS_CTRL_37                               0x29D7
#define P29_D8_CBUS_CTRL_38                               0x29D8
#define P29_D9_CBUS_CTRL_39                               0x29D9
#define P29_DA_CBUS_CTRL_3A                               0x29DA
#define P29_DB_CBUS_CTRL_3B                               0x29DB
#define P29_DC_CBUS_CTRL_3C                               0x29DC
#define P29_DD_CBUS_CTRL_3D                               0x29DD
#define P29_DE_CBUS_CTRL_3E                               0x29DE
#define P29_DF_CBUS_CTRL_3F                               0x29DF
#define P29_E0_CBUS_CTRL_40                               0x29E0
#define P29_E1_CBUS_CTRL_41                               0x29E1
#define P29_E2_CBUS_CTRL_42                               0x29E2
#define P29_E3_CBUS_CTRL_43                               0x29E3
#define P29_E4_CBUS_CTRL_44                               0x29E4
#define P29_E5_CBUS_CTRL_45                               0x29E5
#define P29_E6_CBUS_CTRL_46                               0x29E6
#define P29_E7_CBUS_CTRL_47                               0x29E7
#define P29_E8_CBUS_CTRL_48                               0x29E8
#define P29_E9_CBUS_CTRL_49                               0x29E9
#define P29_EA_CBUS_CTRL_4A                               0x29EA
#define P29_EB_CBUS_CTRL_4B                               0x29EB
#define P29_EC_CBUS_CTRL_4C                               0x29EC
#define P29_ED_CBUS_CTRL_4D                               0x29ED
#define P29_EE_CBUS_CTRL_4E                               0x29EE
#define P29_EF_CBUS_CTRL_4F                               0x29EF
#define P29_F0_CBUS_CTRL_50                               0x29F0
#define P29_F1_CBUS_CTRL_51                               0x29F1
#define P29_F2_CBUS_CTRL_52                               0x29F2
#define P29_F3_CBUS_CTRL_53                               0x29F3
#define P29_F4_CBUS_CTRL_54                               0x29F4
#define P29_F5_CBUS_CTRL_55                               0x29F5
#define P29_F6_CBUS_CTRL_56                               0x29F6
#define P29_F7_CBUS_CTRL_57                               0x29F7
#define P29_F8_CBUS_CTRL_58                               0x29F8
#define P29_F9_CBUS_CTRL_59                               0x29F9
#define P29_FA_CBUS_CTRL_5A                               0x29FA
#define P29_FB_CBUS_CTRL_5B                               0x29FB
#define P29_FC_CBUS_CTRL_5C                               0x29FC
#define P29_FD_CBUS_CTRL_5D                               0x29FD


//--------------------------------------------------
// CBUS2 MAC (Page 2A)
//--------------------------------------------------
#define P2A_A0_CBUS_CTRL_00                               0x2AA0
#define P2A_A1_CBUS_CTRL_01                               0x2AA1
#define P2A_A2_CBUS_CTRL_02                               0x2AA2
#define P2A_A3_CBUS_CTRL_03                               0x2AA3
#define P2A_A4_CBUS_CTRL_04                               0x2AA4
#define P2A_A5_CBUS_CTRL_05                               0x2AA5
#define P2A_A6_CBUS_CTRL_06                               0x2AA6
#define P2A_A7_CBUS_CTRL_07                               0x2AA7
#define P2A_A8_CBUS_CTRL_08                               0x2AA8
#define P2A_A9_CBUS_CTRL_09                               0x2AA9
#define P2A_AA_CBUS_CTRL_0A                               0x2AAA
#define P2A_AB_CBUS_CTRL_0B                               0x2AAB
#define P2A_AC_CBUS_CTRL_0C                               0x2AAC
#define P2A_AD_CBUS_CTRL_0D                               0x2AAD
#define P2A_AE_CBUS_CTRL_0E                               0x2AAE
#define P2A_AF_CBUS_CTRL_0F                               0x2AAF
#define P2A_B0_CBUS_CTRL_10                               0x2AB0
#define P2A_B1_CBUS_CTRL_11                               0x2AB1
#define P2A_B2_CBUS_CTRL_12                               0x2AB2
#define P2A_B3_CBUS_CTRL_13                               0x2AB3
#define P2A_B4_CBUS_CTRL_14                               0x2AB4
#define P2A_B5_CBUS_CTRL_15                               0x2AB5
#define P2A_B6_CBUS_CTRL_16                               0x2AB6
#define P2A_B7_CBUS_CTRL_17                               0x2AB7
#define P2A_B8_CBUS_CTRL_18                               0x2AB8
#define P2A_BA_CBUS_CTRL_1A                               0x2ABA
#define P2A_BB_CBUS_CTRL_1B                               0x2ABB
#define P2A_BC_CBUS_CTRL_1C                               0x2ABC
#define P2A_BD_CBUS_CTRL_1D                               0x2ABD
#define P2A_BE_CBUS_CTRL_1E                               0x2ABE
#define P2A_BF_CBUS_CTRL_1F                               0x2ABF
#define P2A_C0_CBUS_CTRL_20                               0x2AC0
#define P2A_C1_CBUS_CTRL_21                               0x2AC1
#define P2A_C2_CBUS_CTRL_22                               0x2AC2
#define P2A_C3_CBUS_CTRL_23                               0x2AC3
#define P2A_C4_CBUS_CTRL_24                               0x2AC4
#define P2A_C5_CBUS_CTRL_25                               0x2AC5
#define P2A_C6_CBUS_CTRL_26                               0x2AC6
#define P2A_C8_CBUS_CTRL_28                               0x2AC8
#define P2A_C9_CBUS_CTRL_29                               0x2AC9
#define P2A_CA_CBUS_CTRL_2A                               0x2ACA
#define P2A_CB_CBUS_CTRL_2B                               0x2ACB
#define P2A_CC_CBUS_CTRL_2C                               0x2ACC
#define P2A_CD_CBUS_CTRL_2D                               0x2ACD
#define P2A_CE_CBUS_CTRL_2E                               0x2ACE
#define P2A_CF_CBUS_CTRL_2F                               0x2ACF
#define P2A_D0_CBUS_CTRL_30                               0x2AD0
#define P2A_D1_CBUS_CTRL_31                               0x2AD1
#define P2A_D2_CBUS_CTRL_32                               0x2AD2
#define P2A_D3_CBUS_CTRL_33                               0x2AD3
#define P2A_D4_CBUS_CTRL_34                               0x2AD4
#define P2A_D5_CBUS_CTRL_35                               0x2AD5
#define P2A_D6_CBUS_CTRL_36                               0x2AD6
#define P2A_D7_CBUS_CTRL_37                               0x2AD7
#define P2A_D8_CBUS_CTRL_38                               0x2AD8
#define P2A_D9_CBUS_CTRL_39                               0x2AD9
#define P2A_DA_CBUS_CTRL_3A                               0x2ADA
#define P2A_DB_CBUS_CTRL_3B                               0x2ADB
#define P2A_DC_CBUS_CTRL_3C                               0x2ADC
#define P2A_DD_CBUS_CTRL_3D                               0x2ADD
#define P2A_DE_CBUS_CTRL_3E                               0x2ADE
#define P2A_DF_CBUS_CTRL_3F                               0x2ADF
#define P2A_E0_CBUS_CTRL_40                               0x2AE0
#define P2A_E1_CBUS_CTRL_41                               0x2AE1
#define P2A_E2_CBUS_CTRL_42                               0x2AE2
#define P2A_E3_CBUS_CTRL_43                               0x2AE3
#define P2A_E4_CBUS_CTRL_44                               0x2AE4
#define P2A_E5_CBUS_CTRL_45                               0x2AE5
#define P2A_E6_CBUS_CTRL_46                               0x2AE6
#define P2A_E7_CBUS_CTRL_47                               0x2AE7
#define P2A_E8_CBUS_CTRL_48                               0x2AE8
#define P2A_E9_CBUS_CTRL_49                               0x2AE9
#define P2A_EA_CBUS_CTRL_4A                               0x2AEA
#define P2A_EB_CBUS_CTRL_4B                               0x2AEB
#define P2A_EC_CBUS_CTRL_4C                               0x2AEC
#define P2A_ED_CBUS_CTRL_4D                               0x2AED
#define P2A_EE_CBUS_CTRL_4E                               0x2AEE
#define P2A_EF_CBUS_CTRL_4F                               0x2AEF
#define P2A_F0_CBUS_CTRL_50                               0x2AF0
#define P2A_F1_CBUS_CTRL_51                               0x2AF1
#define P2A_F2_CBUS_CTRL_52                               0x2AF2
#define P2A_F3_CBUS_CTRL_53                               0x2AF3
#define P2A_F4_CBUS_CTRL_54                               0x2AF4
#define P2A_F5_CBUS_CTRL_55                               0x2AF5
#define P2A_F6_CBUS_CTRL_56                               0x2AF6
#define P2A_F7_CBUS_CTRL_57                               0x2AF7
#define P2A_F8_CBUS_CTRL_58                               0x2AF8
#define P2A_F9_CBUS_CTRL_59                               0x2AF9
#define P2A_FA_CBUS_CTRL_5A                               0x2AFA
#define P2A_FB_CBUS_CTRL_5B                               0x2AFB
#define P2A_FC_CBUS_CTRL_5C                               0x2AFC
#define P2A_FD_CBUS_CTRL_5D                               0x2AFD


//--------------------------------------------------
// D2 Port GDI Deep Color PLL (Page 2D)
//--------------------------------------------------
#define P2D_A0_MN_SCLKG_CTRL                              0x2DA0
#define P2D_A1_MN_SCLKG_DIVM                              0x2DA1
#define P2D_A2_MN_SCLKG_DIVN                              0x2DA2
#define P2D_A3_MN_SCLKG_DIVS                              0x2DA3
#define P2D_A4_MN_SCLKG_OFFS_H                            0x2DA4
#define P2D_A5_MN_SCLKG_OFFS_M                            0x2DA5
#define P2D_A6_MN_SCLKG_OFFS_L                            0x2DA6
#define P2D_A7_MN_SCLKG_TRK_CTRL                          0x2DA7
#define P2D_B8_MN_SCLKG_SDM_CTRL                          0x2DB8
#define P2D_B9_MN_SCLKG_SDM_TEST                          0x2DB9
#define P2D_BA_MN_SCLKG_SDM_SUMC_H                        0x2DBA
#define P2D_BB_MN_SCLKG_SDM_SUMC_M                        0x2DBB
#define P2D_BC_MN_SCLKG_SDM_SUMC_L                        0x2DBC
#define P2D_BD_MN_SCLKG_PLL_PWR                           0x2DBD
#define P2D_BE_MN_SCLKG_PLL_CHP                           0x2DBE
#define P2D_BF_MN_SCLKG_PLL_WD                            0x2DBF
#define P2D_C0_MN_SCLKG_PLL_INSEL                         0x2DC0
#define P2D_C1_MN_SCLKG_PLL_RESERVE                       0x2DC1
#define P2D_C2_DUMMY_0                                    0x2DC2
#define P2D_C3_DUMMY_1                                    0x2DC3
#define P2D_C4_DUMMY_2                                    0x2DC4
#define P2D_C5_DUMMY_3                                    0x2DC5


//--------------------------------------------------
// D3 Port GDI Deep Color PLL (Page 2E)
//--------------------------------------------------
#define P2E_A0_MN_SCLKG_CTRL                              0x2EA0
#define P2E_A1_MN_SCLKG_DIVM                              0x2EA1
#define P2E_A2_MN_SCLKG_DIVN                              0x2EA2
#define P2E_A3_MN_SCLKG_DIVS                              0x2EA3
#define P2E_A4_MN_SCLKG_OFFS_H                            0x2EA4
#define P2E_A5_MN_SCLKG_OFFS_M                            0x2EA5
#define P2E_A6_MN_SCLKG_OFFS_L                            0x2EA6
#define P2E_A7_MN_SCLKG_TRK_CTRL                          0x2EA7
#define P2E_B8_MN_SCLKG_SDM_CTRL                          0x2EB8
#define P2E_B9_MN_SCLKG_SDM_TEST                          0x2EB9
#define P2E_BA_MN_SCLKG_SDM_SUMC_H                        0x2EBA
#define P2E_BB_MN_SCLKG_SDM_SUMC_M                        0x2EBB
#define P2E_BC_MN_SCLKG_SDM_SUMC_L                        0x2EBC
#define P2E_BD_MN_SCLKG_PLL_PWR                           0x2EBD
#define P2E_BE_MN_SCLKG_PLL_CHP                           0x2EBE
#define P2E_BF_MN_SCLKG_PLL_WD                            0x2EBF
#define P2E_C0_MN_SCLKG_PLL_INSEL                         0x2EC0
#define P2E_C1_MN_SCLKG_PLL_RESERVE                       0x2EC1
#define P2E_C2_DUMMY_0                                    0x2EC2
#define P2E_C3_DUMMY_1                                    0x2EC3
#define P2E_C4_DUMMY_2                                    0x2EC4
#define P2E_C5_DUMMY_3                                    0x2EC5


//--------------------------------------------------
// Gamma Control (Page 2F)
//--------------------------------------------------
#define P2F_00_GAMMA_DUMMY                                0x2F00
#define P2F_01_GAMMA_BIST_CTRL0_M1                        0x2F01
#define P2F_02_GAMMA_BIST_CTRL1_M1                        0x2F02
#define P2F_03_GAMMA_BIST_CTRL2_M1                        0x2F03
#define P2F_04_GAMMA_BIST_CTRL3_M1                        0x2F04
#define P2F_05_GAMMA_BIST_CTRL4_M1                        0x2F05
#define P2F_06_GAMMA_BIST_CTRL5_M1                        0x2F06
#define P2F_07_GAMMA_BIST_CTRL0_M2                        0x2F07
#define P2F_08_GAMMA_BIST_CTRL1_M2                        0x2F08
#define P2F_09_GAMMA_BIST_CTRL2_M2                        0x2F09
#define P2F_0A_GAMMA_BIST_CTRL3_M2                        0x2F0A
#define P2F_0B_GAMMA_BIST_CTRL4_M2                        0x2F0B
#define P2F_0C_GAMMA_BIST_CTRL5_M2                        0x2F0C


//--------------------------------------------------
// Off-line Measure Block Overview (Page 30)
//--------------------------------------------------
#define P30_00_SYNC_SELECT                                0x3000
#define P30_01_MEAS_CTL0                                  0x3001
#define P30_02_MEAS_CTL1                                  0x3002
#define P30_03_MEAS_ERROR_FLG0                            0x3003
#define P30_04_MEAS_ERROR_FLG1                            0x3004
#define P30_05_MEAS_HS_PERIOD_A_M                         0x3005
#define P30_06_MEAS_HS_PERIOD_A_L                         0x3006
#define P30_07_MEAS_HS_PERIOD_FRA_A                       0x3007
#define P30_08_MEAS_VS_PERIOD_A_M                         0x3008
#define P30_09_MEAS_VS_PERIOD_A_L                         0x3009
#define P30_0A_MEAS_HS_PULSE_A_M                          0x300A
#define P30_0B_MEAS_HS_PULSE_A_L                          0x300B
#define P30_0C_MEAS_VS_PULSE_A_M                          0x300C
#define P30_0D_MEAS_VS_PULSE_A_L                          0x300D
#define P30_0E_MEAS_HS_PERIOD_D_M                         0x300E
#define P30_0F_MEAS_HS_PERIOD_D_L                         0x300F
#define P30_10_MEAS_HS_PERIOD_FRA_D                       0x3010
#define P30_11_MEAS_VS_PERIOD_D_M                         0x3011
#define P30_12_MEAS_VS_PERIOD_D_L                         0x3012
#define P30_13_MEAS_HS_PULSE_D_M                          0x3013
#define P30_14_MEAS_HS_PULSE_D_L                          0x3014
#define P30_15_MEAS_HS_VS_DELTA_CTL                       0x3015
#define P30_16_MEAS_HS_VS_DELTA_IRQ                       0x3016
#define P30_1A_MEAS2_HS_VS_DLY                            0x301A
#define P30_1B_MEAS_FIELD_TOGGLE                          0x301B
#define P30_1C_MEASURE_DUMMY0                             0x301C
#define P30_1D_MEASURE_DUMMY1                             0x301D


//--------------------------------------------------
// Active Measure Block Overview (Page 30)
//--------------------------------------------------
#define P30_40_I_ACT_MEAS_CTRL                            0x3040
#define P30_41_I_ACT_MEAS_ERROR_FLG                       0x3041
#define P30_42_I_ACT_MEAS_RESULT_H                        0x3042
#define P30_43_I_ACT_MEAS_RESULT_M                        0x3043
#define P30_44_I_ACT_MEAS_RESULT_L                        0x3044
#define P30_45_D_ACT_MEAS_CTRL                            0x3045
#define P30_46_D_ACT_MEAS_ERROR_FLG                       0x3046
#define P30_47_D_ACT_MEAS_RESULT_H                        0x3047
#define P30_48_D_ACT_MEAS_RESULT_M                        0x3048
#define P30_49_D_ACT_MEAS_RESULT_L                        0x3049


//--------------------------------------------------
// Video 8 Control (Page 30)
//--------------------------------------------------
#define P30_98_V8_CTRL_0                                  0x3098
#define P30_99_V8_CTRL_1                                  0x3099
#define P30_9A_V8_CTRL_2                                  0x309A
#define P30_9B_V8_CTRL_3                                  0x309B


//--------------------------------------------------
// VGATOP Input Video Capture (Page 30)
//--------------------------------------------------
#define P30_A0_VGATOP_VGIP_CTRL                           0x30A0
#define P30_A1_VGATOP_VGIP_SIGINV                         0x30A1
#define P30_A2_VGATOP_VGIP_DELAY_CTRL                     0x30A2
#define P30_A3_VGATOP_VGIP_ODD_CTRL                       0x30A3


//--------------------------------------------------
// VGATOP Input Frame Window (Page 30)
//--------------------------------------------------
#define P30_A4_VGATOP_IPH_ACT_STA_H                       0x30A4
#define P30_A5_VGATOP_IPH_ACT_STA_L                       0x30A5
#define P30_A6_VGATOP_IPH_ACT_WID_H                       0x30A6
#define P30_A7_VGATOP_IPH_ACT_WID_L                       0x30A7
#define P30_A8_VGATOP_IPV_ACT_STA_H                       0x30A8
#define P30_A9_VGATOP_IPV_ACT_STA_L                       0x30A9
#define P30_AA_VGATOP_IPV_ACT_LEN_H                       0x30AA
#define P30_AB_VGATOP_IPV_ACT_LEN_L                       0x30AB
#define P30_AC_VGATOP_IVS_DELAY                           0x30AC
#define P30_AD_VGATOP_IHS_DELAY                           0x30AD
#define P30_AE_VGATOP_VGIP_HV_DELAY                       0x30AE
#define P30_AF_VGATOP_V8_SOURCE_SELECT                    0x30AF
#define P30_B0_VGATOP_V8CLK_SEL                           0x30B0


//--------------------------------------------------
// VGATOP Image Auto Function (Page 30)
//--------------------------------------------------
#define P30_C0_VGATOP_H_BOUNDARY_H                        0x30C0
#define P30_C1_VGATOP_H_BOUNDARY_STA_L                    0x30C1
#define P30_C2_VGATOP_H_BOUNDARY_END_L                    0x30C2
#define P30_C3_VGATOP_V_BOUNDARY_H                        0x30C3
#define P30_C4_VGATOP_V_BOUNDARY_STA_L                    0x30C4
#define P30_C5_VGATOP_V_BOUNDARY_END_L                    0x30C5
#define P30_C6_VGATOP_RED_NOISE_MARGIN                    0x30C6
#define P30_C7_VGATOP_GRN_NOISE_MARGIN                    0x30C7
#define P30_C8_VGATOP_BLU_NOISE_MARGIN                    0x30C8
#define P30_C9_VGATOP_DIFF_THRESHOLD                      0x30C9
#define P30_CA_VGATOP_AUTO_ADJ_CTRL0                      0x30CA
#define P30_CB_VGATOP_HW_AUTO_PHASE_CTRL0                 0x30CB
#define P30_CC_VGATOP_HW_AUTO_PHASE_CTRL1                 0x30CC
#define P30_CD_VGATOP_AUTO_ADJ_CTRL1                      0x30CD
#define P30_CE_VGATOP_VER_START_END_H                     0x30CE
#define P30_CF_VGATOP_VER_START_L                         0x30CF
#define P30_D0_VGATOP_VER_END_L                           0x30D0
#define P30_D1_VGATOP_H_START_END_H                       0x30D1
#define P30_D2_VGATOP_H_START_L                           0x30D2
#define P30_D3_VGATOP_H_END_L                             0x30D3
#define P30_D4_VGATOP_AUTO_PHASE_3                        0x30D4
#define P30_D5_VGATOP_AUTO_PHASE_2                        0x30D5
#define P30_D6_VGATOP_AUTO_PHASE_1                        0x30D6
#define P30_D7_VGATOP_AUTO_PHASE_0                        0x30D7
#define P30_DA_VGATOP_HS_EDGE_CHANGE_ST                   0x30DA
#define P30_DB_VGATOP_HS_EDGE_CHANGE_END                  0x30DB
#define P30_DC_VGATOP_HS_EDGE_CHANGE_CTRL                 0x30DC


//--------------------------------------------------
// VGATOP Input Pattern Generator (Page 30)
//--------------------------------------------------
#define P30_DD_VGATOP_PAT_GEN_CTRL0                       0x30DD
#define P30_DE_VGATOP_PAT_GEN_CTRL1                       0x30DE
#define P30_DF_VGATOP_PAT_GEN_RED_INI_L                   0x30DF
#define P30_E0_VGATOP_PAT_GEN_GRN_INI_L                   0x30E0
#define P30_E1_VGATOP_PAT_GEN_BLU_INI_L                   0x30E1
#define P30_E2_VGATOP_PAT_GEN_INI_H                       0x30E2
#define P30_E3_VGA_PATTERN_RESET                          0x30E3


//--------------------------------------------------
// VGATOP Flag (Page 30)
//--------------------------------------------------
#define P30_E4_VGATOP_IRQ_CTRL                            0x30E4
#define P30_E5_VGATOP_DUMMY                               0x30E5


//--------------------------------------------------
// ormat Conversion (Page 31)
//--------------------------------------------------
#define P31_00_FC_INPUT_SEL_P01                           0x3100
#define P31_01_FC_INPUT_SEL_P23                           0x3101
#define P31_02_FC_INPUT_DPTX_SEL                          0x3102
#define P31_03_FC_DUAL_DVI_CTRL1                          0x3103
#define P31_04_FC_DUAL_DVI_CTRL2                          0x3104
#define P31_05_FC_SD_CTRL                                 0x3105
#define P31_06_FC_EO_LINE_CTRL                            0x3106
#define P31_07_FC_FORMAT_PRO_MAIN_0                       0x3107
#define P31_08_FC_FORMAT_PRO_MAIN_1                       0x3108
#define P31_09_FC_FORMAT_PRO_SUB_0                        0x3109
#define P31_0A_FC_FORMAT_PRO_SUB_1                        0x310A
#define P31_0B_FC_FPRMAT_PRO_OUTPUT                       0x310B
#define P31_0C_CTS_FIFO_CTRL                              0x310C
#define P31_0D_FC_INPUT_CLK_GATING                        0x310D


//--------------------------------------------------
// YUV420 to YUV422 Conversion (Page 31)
//--------------------------------------------------
#define P31_20_YUV420_TO_YUV422_D0                        0x3120
#define P31_21_YUV420_TO_YUV422_D1                        0x3121
#define P31_22_YUV420_TO_YUV422_HSTM0                     0x3122
#define P31_23_YUV420_TO_YUV422_HSTL0                     0x3123
#define P31_24_YUV420_TO_YUV422_HSTL1                     0x3124
#define P31_25_YUV420_TO_YUV422_HWIDM0                    0x3125
#define P31_26_YUV420_TO_YUV422_HWIDL0                    0x3126
#define P31_27_YUV420_TO_YUV422_HWIDL1                    0x3127
#define P31_28_BIST_D0_YUV420TO422                        0x3128
#define P31_29_DRF_BIST_D0_YUV420TO422                    0x3129
#define P31_2A_BIST_D1_YUV420TO422                        0x312A
#define P31_2B_DRF_BIST_D1_YUV420TO422                    0x312B
#define P31_2C_DRF_BIST_D0D1_YUV420TO422                  0x312C
#define P31_2D_EVEN_ODD_BIST_CTRL_MAIN                    0x312D
#define P31_2E_EVEN_ODD_DRF_BIST_CTRL_MAIN                0x312E
#define P31_2F_EVEN_ODD_BIST_CTRL_SUB                     0x312F
#define P31_30_EVEN_ODD_DRF_BIST_CTRL_SUB                 0x3130


//--------------------------------------------------
// YUV422 to YUV444 Conversion (Page 31)
//--------------------------------------------------
#define P31_40_YUV422_TO_444_PATH0                        0x3140
#define P31_41_YUV422_TO_444_PATH1                        0x3141
#define P31_42_YUV422_TO_444_PATH2                        0x3142
#define P31_43_YUV422_TO_444_PATH3                        0x3143


//--------------------------------------------------
// Double Buffer Without Mute (Page 31)
//--------------------------------------------------
#define P31_A0_I_DB_CTRL0                                 0x31A0
#define P31_A1_I_DB_CTRL1                                 0x31A1
#define P31_B0_D_DB_CTRL0                                 0x31B0


//--------------------------------------------------
// Window Detection (Page 32)
//--------------------------------------------------
#define P32_00_WIND_CTRL                                  0x3200
#define P32_01_WIND_TH_MOTION                             0x3201
#define P32_02_WIND_TH_SPUR_X                             0x3202
#define P32_03_WIND_TH_SPUR_Y                             0x3203
#define P32_04_WIND_TH_IIR                                0x3204
#define P32_05_WIND_TH_EDGE                               0x3205
#define P32_06_WIND_IIR_STEP                              0x3206
#define P32_07_WIND_MIN_LEN_X                             0x3207
#define P32_08_WIND_MIN_LEN_Y                             0x3208
#define P32_09_WIND_MCNT_FRAME_H                          0x3209
#define P32_0A_WIND_MCNT_FRAME_L                          0x320A
#define P32_0B_WIND_MCNT_WIN_H                            0x320B
#define P32_0C_WIND_MCNT_WIN_L                            0x320C
#define P32_0D_WIND_MOTION_TX                             0x320D
#define P32_0E_WIND_MOTION_TY                             0x320E
#define P32_0F_WIND_MOTION_BX                             0x320F
#define P32_10_WIND_MOTION_BY                             0x3210
#define P32_11_WIND_REF_TX                                0x3211
#define P32_12_WIND_REF_TY                                0x3212
#define P32_13_WIND_REF_BX                                0x3213
#define P32_14_WIND_REF_BY                                0x3214
#define P32_15_WIND_DETECTION_TX                          0x3215
#define P32_16_WIND_DETECTION_TY                          0x3216
#define P32_17_WIND_DETECTION_BX                          0x3217
#define P32_18_WIND_DETECTION_BY                          0x3218
#define P32_19_WIND_MIN_LEN_Z                             0x3219
#define P32_20_WIND_DETECTION_DUMMY                       0x3220
#define P32_21_WIND_HIST_BIST                             0x3221
#define P32_22_WIND_HIST_DRF_BIST                         0x3222
#define P32_23_WIND_LB_BIST                               0x3223
#define P32_24_WIND_LB_DRF_BIST                           0x3224


//--------------------------------------------------
// ADC Noise Reduction (Page 33)
//--------------------------------------------------
#define P33_00_ADCNR_CTRL1                                0x3300
#define P33_01_ADCNR_CTRL2                                0x3301
#define P33_02_ADCNR_CTRL3                                0x3302
#define P33_03_ADCNR_HOR_START_H                          0x3303
#define P33_04_ADCNR_HOR_START_L                          0x3304
#define P33_05_ADCNR_VER_START_H                          0x3305
#define P33_06_ADCNR_VER_START_L                          0x3306
#define P33_07_ADCNR_HOR_END_H                            0x3307
#define P33_08_ADCNR_HOR_END_L                            0x3308
#define P33_09_ADCNR_VER_END_H                            0x3309
#define P33_0A_ADCNR_VER_END_L                            0x330A
#define P33_0B_ADCNR_GRAY256_DETECT                       0x330B
#define P33_0C_ADCNR_GRAY256_THD                          0x330C
#define P33_0D_ADCNR_CONST                                0x330D
#define P33_0E_ADCNR_MODIFY                               0x330E
#define P33_0F_ADCNR_ALONE_TONE_CTL                       0x330F
#define P33_10_ADCNR_CONTINUED_TONE                       0x3310
#define P33_11_ADCNR_PATTERN_CHANGE_DET1                  0x3311
#define P33_12_ADCNR_PATTERN_CHANGE_DET2                  0x3312
#define P33_13_ADCNR_PATTERN_CHANGE_DET3                  0x3313
#define P33_14_ADCNR_PATTERN_CHANGE_DET4                  0x3314
#define P33_15_ADCNR_REPLACE_FLAG                         0x3315
#define P33_16_ADCNR_DEBUG_MODE_CTRL1                     0x3316
#define P33_17_ADCNR_DEBUG_MODE_CTRL2                     0x3317
#define P33_18_ADCNR_TOTAL_COUNT1                         0x3318
#define P33_19_ADCNR_TOTAL_COUNT2                         0x3319
#define P33_1A_ADCNR_TOTAL_COUNT3                         0x331A
#define P33_1B_ADCNR_SINGLE_COUNT1                        0x331B
#define P33_1C_ADCNR_SINGLE_COUNT2                        0x331C
#define P33_1D_ADCNR_SINGLE_COUNT3                        0x331D
#define P33_1E_ADCNR_TONE_COUNT                           0x331E
#define P33_1F_ADCNR_READ_DATA_CTRL1                      0x331F
#define P33_20_ADCNR_READ_DATA_CTRL2                      0x3320
#define P33_21_ADCNR_CODE_COUNT_RESULT1                   0x3321
#define P33_22_ADCNR_CODE_COUNT_RESULT2                   0x3322
#define P33_23_ADCNR_CODE_COUNT_RESULT3                   0x3323
#define P33_24_ADCNR_TABLE_RESULT                         0x3324
#define P33_25_ADCNR_DUMMY1                               0x3325
#define P33_2A_BIST_CTRL                                  0x332A
#define P33_2B_BIST_RESULT                                0x332B


//--------------------------------------------------
// Panel Uniformity (Page 34)
//--------------------------------------------------
#define P34_00_UN_GLOBAL_CTRL                             0x3400
#define P34_01_UN_MULTI_LUT_CTRL                          0x3401
#define P34_02_UN_GAIN_LUT_HOR_GRIDS                      0x3402
#define P34_03_UN_GAIN_LUT_VER_GRIDS                      0x3403
#define P34_04_UN_GAIN_LUT_HOR_OFFSET                     0x3404
#define P34_05_UN_GAIN_LUT_VER_OFFSET                     0x3405
#define P34_06_UN_GAIN_LUT_ADDR_PORT_MSB                  0x3406
#define P34_07_UN_GAIN_LUT_ADDR_PORT_LSB                  0x3407
#define P34_08_UN_GAIN_LUT_ACCESS_PORT                    0x3408
#define P34_09_UN_SRAM_BIST                               0x3409
#define P34_0A_UN_SRAM_DRF_BIST                           0x340A
#define P34_0B_UN_DUMMY                                   0x340B


//--------------------------------------------------
// PIP/PBP Blending (Page 35)
//--------------------------------------------------
#define P35_00_MULTI_PIC_BLENDING                         0x3500
#define P35_01_MULTI_PIC_BLENDING_LEVEL                   0x3501
#define P35_02_BW1_HOR_START_H                            0x3502
#define P35_03_BW1_HOR_START_L                            0x3503
#define P35_04_BW1_HOR_END_H                              0x3504
#define P35_05_BW1_HOR_END_L                              0x3505
#define P35_06_BW1_VER_START_H                            0x3506
#define P35_07_BW1_VER_START_L                            0x3507
#define P35_08_BW1_VER_END_H                              0x3508
#define P35_09_BW1_VER_END_L                              0x3509
#define P35_0A_BW1_BORDER_WIDTH                           0x350A
#define P35_0B_BW1_BORDER_RED                             0x350B
#define P35_0C_BW1_BORDER_GRN                             0x350C
#define P35_0D_BW1_BORDER_BLU                             0x350D
#define P35_0E_BW1_BORDER_EN                              0x350E
#define P35_0F_BW2_HOR_START_H                            0x350F
#define P35_10_BW2_HOR_START_L                            0x3510
#define P35_11_BW2_HOR_END_H                              0x3511
#define P35_12_BW2_HOR_END_L                              0x3512
#define P35_13_BW2_VER_START_H                            0x3513
#define P35_14_BW2_VER_START_L                            0x3514
#define P35_15_BW2_VER_END_H                              0x3515
#define P35_16_BW2_VER_END_L                              0x3516
#define P35_17_BW2_BORDER_WIDTH                           0x3517
#define P35_18_BW2_BORDER_RED                             0x3518
#define P35_19_BW2_BORDER_GRN                             0x3519
#define P35_1A_BW2_BORDER_BLU                             0x351A
#define P35_1B_BW2_BORDER_EN                              0x351B
#define P35_1C_CW_EN                                      0x351C
#define P35_1D_CW_HOR_START_H                             0x351D
#define P35_1E_CW_HOR_START_L                             0x351E
#define P35_1F_CW_HOR_END_H                               0x351F
#define P35_20_CW_HOR_END_L                               0x3520
#define P35_21_CW_VER_START_H                             0x3521
#define P35_22_CW_VER_START_L                             0x3522
#define P35_23_CW_VER_END_H                               0x3523
#define P35_24_CW_VER_END_L                               0x3524


//--------------------------------------------------
// Cyclic-Redundant-Check(page 36)
//--------------------------------------------------
#define P36_00_I_CRC_CTRL                                 0x3600
#define P36_01_I_MAIN1_CRC_1                              0x3601
#define P36_02_I_MAIN1_CRC_2                              0x3602
#define P36_03_I_MAIN1_CRC_3                              0x3603
#define P36_04_I_MAIN1_CRC_4                              0x3604
#define P36_05_I_MAIN1_CRC_5                              0x3605
#define P36_06_I_MAIN1_CRC_6                              0x3606
#define P36_07_I_MAIN2_CRC_1                              0x3607
#define P36_08_I_MAIN2_CRC_2                              0x3608
#define P36_09_I_MAIN2_CRC_3                              0x3609
#define P36_0A_I_MAIN2_CRC_4                              0x360A
#define P36_0B_I_MAIN2_CRC_5                              0x360B
#define P36_0C_I_MAIN2_CRC_6                              0x360C
#define P36_0D_I_SUB1_CRC_1                               0x360D
#define P36_0E_I_SUB1_CRC_2                               0x360E
#define P36_0F_I_SUB1_CRC_3                               0x360F
#define P36_10_I_SUB1_CRC_4                               0x3610
#define P36_11_I_SUB1_CRC_5                               0x3611
#define P36_12_I_SUB1_CRC_6                               0x3612
#define P36_13_I_SUB2_CRC_1                               0x3613
#define P36_14_I_SUB2_CRC_2                               0x3614
#define P36_15_I_SUB2_CRC_3                               0x3615
#define P36_16_I_SUB2_CRC_4                               0x3616
#define P36_17_I_SUB2_CRC_5                               0x3617
#define P36_18_I_SUB2_CRC_6                               0x3618
#define P36_2C_D_CRC_CTRL                                 0x362C
#define P36_2D_D_MAIN1_CRC_1                              0x362D
#define P36_2E_D_MAIN1_CRC_2                              0x362E
#define P36_2F_D_MAIN1_CRC_3                              0x362F
#define P36_30_D_MAIN1_CRC_4                              0x3630
#define P36_31_D_MAIN1_CRC_5                              0x3631
#define P36_32_D_MAIN1_CRC_6                              0x3632
#define P36_33_D_MAIN2_CRC_1                              0x3633
#define P36_34_D_MAIN2_CRC_2                              0x3634
#define P36_35_D_MAIN2_CRC_3                              0x3635
#define P36_36_D_MAIN2_CRC_4                              0x3636
#define P36_37_D_MAIN2_CRC_5                              0x3637
#define P36_38_D_MAIN2_CRC_6                              0x3638
#define P36_39_D_SUB_CRC_1                                0x3639
#define P36_3A_D_SUB_CRC_2                                0x363A
#define P36_3B_D_SUB_CRC_3                                0x363B
#define P36_3C_D_SUB_CRC_4                                0x363C
#define P36_3D_D_SUB_CRC_5                                0x363D
#define P36_3E_D_SUB_CRC_6                                0x363E
#define P36_40_M_CRC_CTRL                                 0x3640
#define P36_41_M_M1_CRC_1                                 0x3641
#define P36_42_M_M1_CRC_2                                 0x3642
#define P36_43_M_M1_CRC_3                                 0x3643
#define P36_44_M_M1_CRC_4                                 0x3644
#define P36_45_M_M1_CRC_5                                 0x3645
#define P36_46_M_M1_CRC_6                                 0x3646
#define P36_47_M_M2_CRC_1                                 0x3647
#define P36_48_M_M2_CRC_2                                 0x3648
#define P36_49_M_M2_CRC_3                                 0x3649
#define P36_4A_M_M2_CRC_4                                 0x364A
#define P36_4B_M_M2_CRC_5                                 0x364B
#define P36_4C_M_M2_CRC_6                                 0x364C
#define P36_4D_M_S1_CRC_1                                 0x364D
#define P36_4E_M_S1_CRC_2                                 0x364E
#define P36_4F_M_S1_CRC_3                                 0x364F
#define P36_50_M_S1_CRC_4                                 0x3650
#define P36_51_M_S1_CRC_5                                 0x3651
#define P36_52_M_S1_CRC_6                                 0x3652
#define P36_53_M_S2_CRC_1                                 0x3653
#define P36_54_M_S2_CRC_2                                 0x3654
#define P36_55_M_S2_CRC_3                                 0x3655
#define P36_56_M_S2_CRC_4                                 0x3656
#define P36_57_M_S2_CRC_5                                 0x3657
#define P36_58_M_S2_CRC_6                                 0x3658
#define P36_59_M_ROT_M1_CRC_1                             0x3659
#define P36_5A_M_ROT_M1_CRC_2                             0x365A
#define P36_5B_M_ROT_M1_CRC_3                             0x365B
#define P36_5C_M_ROT_M1_CRC_4                             0x365C
#define P36_5D_M_ROT_M1_CRC_5                             0x365D
#define P36_5E_M_ROT_M1_CRC_6                             0x365E
#define P36_5F_M_ROT_M2_CRC_1                             0x365F
#define P36_60_M_ROT_M2_CRC_2                             0x3660
#define P36_61_M_ROT_M2_CRC_3                             0x3661
#define P36_62_M_ROT_M2_CRC_4                             0x3662
#define P36_63_M_ROT_M2_CRC_5                             0x3663
#define P36_64_M_ROT_M2_CRC_6                             0x3664


//--------------------------------------------------
// MCU DDR DMA (Page 37)
//--------------------------------------------------
#define P37_00_MCU_DC_CMD                                 0x3700
#define P37_01_MCU_DC_LEN                                 0x3701
#define P37_04_MCU_DC_ADDR_H                              0x3704
#define P37_05_MCU_DC_ADDR_M                              0x3705
#define P37_06_MCU_DC_ADDR_L                              0x3706
#define P37_07_MCU_DC_ADDR                                0x3707
#define P37_10_MCU_DC_DATABUF_A_00                        0x3710
#define P37_11_MCU_DC_DATABUF_A_01                        0x3711
#define P37_12_MCU_DC_DATABUF_A_02                        0x3712
#define P37_13_MCU_DC_DATABUF_A_03                        0x3713
#define P37_14_MCU_DC_DATABUF_A_04                        0x3714
#define P37_15_MCU_DC_DATABUF_A_05                        0x3715
#define P37_16_MCU_DC_DATABUF_A_06                        0x3716
#define P37_17_MCU_DC_DATABUF_A_07                        0x3717
#define P37_18_MCU_DC_DATABUF_A_08                        0x3718
#define P37_19_MCU_DC_DATABUF_A_09                        0x3719
#define P37_1A_MCU_DC_DATABUF_A_10                        0x371A
#define P37_1B_MCU_DC_DATABUF_A_11                        0x371B
#define P37_1C_MCU_DC_DATABUF_A_12                        0x371C
#define P37_1D_MCU_DC_DATABUF_A_13                        0x371D
#define P37_1E_MCU_DC_DATABUF_A_14                        0x371E
#define P37_1F_MCU_DC_DATABUF_A_15                        0x371F
#define P37_20_MCU_DC_DATABUF_B_00                        0x3720
#define P37_21_MCU_DC_DATABUF_B_01                        0x3721
#define P37_22_MCU_DC_DATABUF_B_02                        0x3722
#define P37_23_MCU_DC_DATABUF_B_03                        0x3723
#define P37_24_MCU_DC_DATABUF_B_04                        0x3724
#define P37_25_MCU_DC_DATABUF_B_05                        0x3725
#define P37_26_MCU_DC_DATABUF_B_06                        0x3726
#define P37_27_MCU_DC_DATABUF_B_07                        0x3727
#define P37_28_MCU_DC_DATABUF_B_08                        0x3728
#define P37_29_MCU_DC_DATABUF_B_09                        0x3729
#define P37_2A_MCU_DC_DATABUF_B_10                        0x372A
#define P37_2B_MCU_DC_DATABUF_B_11                        0x372B
#define P37_2C_MCU_DC_DATABUF_B_12                        0x372C
#define P37_2D_MCU_DC_DATABUF_B_13                        0x372D
#define P37_2E_MCU_DC_DATABUF_B_14                        0x372E
#define P37_2F_MCU_DC_DATABUF_B_15                        0x372F
#define P37_30_MCU_DC_WMASK_A_H                           0x3730
#define P37_31_MCU_DC_WMASK_A_L                           0x3731
#define P37_32_MCU_DC_WMASK_B_H                           0x3732
#define P37_33_MCU_DC_WMASK_B_L                           0x3733
#define P37_34_MCU_DC_READ_FLAG_A                         0x3734
#define P37_35_MCU_DC_READ_FLAG_B                         0x3735
#define P37_80_DC_PHY_CLK_SET                             0x3780
#define P37_90_M_DOMAIN_MCLK_SET                          0x3790
#define P37_91_M_DOMAIN_FRC_CLK_SET1                      0x3791
#define P37_92_M_DOMAIN_FRC_CLK_SET2                      0x3792
#define P37_A0_M_DOMAIN_SB_RESET                          0x37A0
#define P37_C0_DCU_CRC_CTRL                               0x37C0
#define P37_C1_DCU_CRC_W0_H                               0x37C1
#define P37_C2_DCU_CRC_W0_L                               0x37C2
#define P37_C3_DCU_CRC_W1_H                               0x37C3
#define P37_C4_DCU_CRC_W1_L                               0x37C4
#define P37_C5_DCU_CRC_X0_H                               0x37C5
#define P37_C6_DCU_CRC_X0_L                               0x37C6
#define P37_C7_DCU_CRC_X1_H                               0x37C7
#define P37_C8_DCU_CRC_X1_L                               0x37C8
#define P37_C9_DCU_CRC_X2_H                               0x37C9
#define P37_CA_DCU_CRC_X2_L                               0x37CA
#define P37_CB_DCU_CRC_Y0_H                               0x37CB
#define P37_CC_DCU_CRC_Y0_L                               0x37CC
#define P37_CD_DCU_CRC_Y1_H                               0x37CD
#define P37_CE_DCU_CRC_Y1_L                               0x37CE
#define P37_CF_DCU_CRC_Y2_H                               0x37CF
#define P37_D0_DCU_CRC_Y2_L                               0x37D0
#define P37_D1_DCU_CRC_Y3_H                               0x37D1
#define P37_D2_DCU_CRC_Y3_L                               0x37D2
#define P37_D3_DCU_CRC_Z0_H                               0x37D3
#define P37_D4_DCU_CRC_Z0_L                               0x37D4
#define P37_D5_DCU_CRC_Z1_H                               0x37D5
#define P37_D6_DCU_CRC_Z1_L                               0x37D6
#define P37_D7_DCU_CRC_Z2_H                               0x37D7
#define P37_D8_DCU_CRC_Z2_L                               0x37D8
#define P37_D9_DCU_CRC_Z3_H                               0x37D9
#define P37_DA_DCU_CRC_Z3_L                               0x37DA
#define P37_DB_DCU_CRC_Z4_H                               0x37DB
#define P37_DC_DCU_CRC_Z4_L                               0x37DC
#define P37_DD_DCU_CRC_Z5_H                               0x37DD
#define P37_DE_DCU_CRC_Z5_L                               0x37DE
#define P37_DF_DCU_CRC_Z6_H                               0x37DF
#define P37_E0_DCU_CRC_Z6_L                               0x37E0
#define P37_E1_DCU_CRC_Z7_H                               0x37E1
#define P37_E2_DCU_CRC_Z7_L                               0x37E2
#define P37_E3_DCU_CRC_Z8_H                               0x37E3
#define P37_E4_DCU_CRC_Z8_L                               0x37E4
#define P37_E5_DCU_CRC_Z9_H                               0x37E5
#define P37_E6_DCU_CRC_Z9_L                               0x37E6


//--------------------------------------------------
// VbyOne (Page 38)
//--------------------------------------------------
#define P38_00_VIDEO_FORMAT_H                             0x3800
#define P38_01_VIDEO_FORMAT_M                             0x3801
#define P38_02_VIDEO_FORMAT_L                             0x3802
#define P38_03_LANE_STATUS_H                              0x3803
#define P38_04_LANE_STATUS_L                              0x3804
#define P38_05_CTL_H                                      0x3805
#define P38_06_CTL_M                                      0x3806
#define P38_07_CTL_L                                      0x3807
#define P38_08_PLL_TRACKING                               0x3808
#define P38_09_TRANSMIT_CONTROL_H2                        0x3809
#define P38_0A_TRANSMIT_CONTROL_H1                        0x380A
#define P38_0B_TRANSMIT_CONTROL_L2                        0x380B
#define P38_0C_TRANSMIT_CONTROL_L1                        0x380C
#define P38_0D_TRANSMIT_STATUS                            0x380D
#define P38_0E_THREE_FLAG                                 0x380E
#define P38_0F_INTERRUPT                                  0x380F
#define P38_10_CRC_CONTROL                                0x3810
#define P38_11_CRC_RESULT_H2                              0x3811
#define P38_12_CRC_RESULT_H1                              0x3812
#define P38_13_CRC_RESULT_L2                              0x3813
#define P38_14_CRC_RESULT_L1                              0x3814
#define P38_15_CTS_FIFO_H                                 0x3815
#define P38_16_CTS_FIFO_M                                 0x3816
#define P38_17_CTS_FIFO_L                                 0x3817
#define P38_18_VBY1_BIST_RSTN                             0x3818
#define P38_19_VBY1_BIST_CON_0                            0x3819
#define P38_1A_VBY1_BIST_CON_1                            0x381A
#define P38_1B_VBY1_BIST0                                 0x381B
#define P38_1C_VBY1_BIST1                                 0x381C
#define P38_1D_VBY1_BIST2_H1                              0x381D
#define P38_1E_VBY1_BIST2_H2                              0x381E
#define P38_1F_VBY1_BIST2_L1                              0x381F
#define P38_20_VBY1_BIST2_L2                              0x3820
#define P38_21_VBY1_BIST4                                 0x3821
#define P38_26_VBY1_DEBUG                                 0x3826
#define P38_27_VBY1_FW_CTRL                               0x3827
#define P38_28_VBY1_IRQ_CTRL                              0x3828
#define P38_29_VBY1_BIT_SHIFT_CTRL                        0x3829


//--------------------------------------------------
// VbyOne Digital PHY (Page 38)
//--------------------------------------------------
#define P38_85_PHY0_TXBIST_00_H2                          0x3885
#define P38_86_PHY0_TXBIST_00_H1                          0x3886
#define P38_87_PHY0_TXBIST_00_L2                          0x3887
#define P38_88_PHY0_TXBIST_00_L1                          0x3888
#define P38_89_PHY0_TXBIST_01_H2                          0x3889
#define P38_8A_PHY0_TXBIST_01_H1                          0x388A
#define P38_8B_PHY0_TXBIST_01_L2                          0x388B
#define P38_8C_PHY0_TXBIST_01_L1                          0x388C
#define P38_8D_PHY0_TXBIST_02_H2                          0x388D
#define P38_8E_PHY0_TXBIST_02_H1                          0x388E
#define P38_8F_PHY0_TXBIST_02_L2                          0x388F
#define P38_90_PHY0_TXBIST_02_L1                          0x3890


//--------------------------------------------------
// VbyOne Analog PHY (Page 38)
//--------------------------------------------------
#define P38_A0_PHY0_APHY_00                               0x38A0
#define P38_A1_PHY0_APHY_01                               0x38A1
#define P38_A2_PHY0_APHY_02                               0x38A2
#define P38_A3_PHY0_APHY_03                               0x38A3
#define P38_A4_PHY0_APHY_04                               0x38A4
#define P38_A5_PHY0_APHY_05                               0x38A5
#define P38_A6_PHY0_APHY_06                               0x38A6
#define P38_A7_PHY0_APHY_07                               0x38A7
#define P38_A8_PHY0_APHY_08                               0x38A8
#define P38_A9_PHY0_APHY_09                               0x38A9
#define P38_AA_PHY0_APHY_0A                               0x38AA
#define P38_AB_PHY0_APHY_0B                               0x38AB
#define P38_AC_PHY0_APHY_0C                               0x38AC
#define P38_AD_PHY0_APHY_0D                               0x38AD
#define P38_AE_PHY0_APHY_0E                               0x38AE
#define P38_AF_PHY0_APHY_0F                               0x38AF
#define P38_B0_PHY0_APHY_10                               0x38B0
#define P38_B1_PHY0_APHY_11                               0x38B1


//--------------------------------------------------
// Control for LVDS display convertion (Page 39)
//--------------------------------------------------
#define P39_00_LVDS_DISP_TYPE                             0x3900
#define P39_01_LVDS_DISPLAY_CONV_CTRL0                    0x3901
#define P39_02_LVDS_DISPLAY_CONV_CTRL1                    0x3902
#define P39_03_LVDS_DISPLAY_CONV_CTRL2                    0x3903
#define P39_04_LVDS_DISPLAY_CONV_CTRL3                    0x3904
#define P39_05_LVDS_DISPLAY_CONV_CTRL4                    0x3905
#define P39_06_LVDS_DISPLAY_CONV_CTRL5                    0x3906
#define P39_07_LVDS_DISPLAY_CONV_CTRL6                    0x3907
#define P39_08_LVDS_PORCH_RED_CTRL0                       0x3908
#define P39_09_LVDS_PORCH_RED_CTRL1                       0x3909
#define P39_0A_LVDS_PORCH_GREEN_CTRL0                     0x390A
#define P39_0B_LVDS_PORCH_GREEN_CTRL1                     0x390B
#define P39_0C_LVDS_PORCH_BLUE_CTRL0                      0x390C
#define P39_0D_LVDS_PORCH_BLUE_CTRL1                      0x390D
#define P39_0E_LVDS_PORTA_DATA_BIT_CTRL                   0x390E
#define P39_0F_LVDS_PORTB_DATA_BIT_CTRL                   0x390F
#define P39_10_LVDS_PORTC_DATA_BIT_CTRL                   0x3910
#define P39_11_LVDS_PORTD_DATA_BIT_CTRL                   0x3911
#define P39_12_LVDS_PORTE_DATA_BIT_CTRL                   0x3912
#define P39_13_LVDS_PORTF_DATA_BIT_CTRL                   0x3913
#define P39_14_LVDS_PORTG_DATA_BIT_CTRL                   0x3914
#define P39_15_LVDS_PORTH_DATA_BIT_CTRL                   0x3915
#define P39_16_LVDS_LR_CTRL                               0x3916
#define P39_17_LVDS_RSV0_CTRL0                            0x3917
#define P39_18_LVDS_RSV0_CTRL1                            0x3918
#define P39_19_LVDS_RSV1_CTRL0                            0x3919
#define P39_1A_LVDS_RSV1_CTRL1                            0x391A
#define P39_1B_LVDS_RSV1_CTRL2                            0x391B
#define P39_1C_LVDS_RSV1_CTRL3                            0x391C
#define P39_1D_LVDS_CLK_CTRL                              0x391D
#define P39_20_LVDS_TEST_MODE                             0x3920
#define P39_21_LVDS_BIST_CTRL                             0x3921
#define P39_22_LVDS_DRF_BIST_CTRL0                        0x3922
#define P39_23_LVDS_DRF_BIST_CTRL1                        0x3923
#define P39_30_D_CONV_CRC_CTRL                            0x3930
#define P39_31_D_CONV_CRC_0_H                             0x3931
#define P39_32_D_CONV_CRC_0_L                             0x3932
#define P39_33_D_CONV_CRC_1_H                             0x3933
#define P39_34_D_CONV_CRC_1_L                             0x3934
#define P39_35_D_CONV_CRC_2_H                             0x3935
#define P39_36_D_CONV_CRC_2_L                             0x3936
#define P39_37_D_CONV_CRC_3_H                             0x3937
#define P39_38_D_CONV_CRC_3_L                             0x3938
#define P39_39_D_CONV_CRC_4_H                             0x3939
#define P39_3A_D_CONV_CRC_4_L                             0x393A
#define P39_3B_D_CONV_CRC_5_H                             0x393B
#define P39_3C_D_CONV_CRC_5_L                             0x393C
#define P39_3D_D_CONV_CRC_6_H                             0x393D
#define P39_3E_D_CONV_CRC_6_L                             0x393E
#define P39_3F_D_CONV_CRC_7_H                             0x393F
#define P39_40_D_CONV_CRC_7_L                             0x3940
#define P39_41_D_CONV_CRC_8_H                             0x3941
#define P39_42_D_CONV_CRC_8_L                             0x3942
#define P39_43_D_CONV_CRC_9_H                             0x3943
#define P39_44_D_CONV_CRC_9_L                             0x3944
#define P39_45_D_CONV_CRC_10_H                            0x3945
#define P39_46_D_CONV_CRC_10_L                            0x3946
#define P39_47_D_CONV_CRC_11_H                            0x3947
#define P39_48_D_CONV_CRC_11_L                            0x3948
#define P39_49_D_CONV_CRC_12_H                            0x3949
#define P39_4A_D_CONV_CRC_12_L                            0x394A
#define P39_4B_D_CONV_CRC_13_H                            0x394B
#define P39_4C_D_CONV_CRC_13_L                            0x394C
#define P39_4D_D_CONV_CRC_14_H                            0x394D
#define P39_4E_D_CONV_CRC_14_L                            0x394E
#define P39_4F_D_CONV_CRC_15_H                            0x394F
#define P39_50_D_CONV_CRC_15_L                            0x3950
#define P39_51_D_CONV_CRC_16_H                            0x3951
#define P39_52_D_CONV_CRC_16_L                            0x3952
#define P39_53_D_CONV_CRC_17_H                            0x3953
#define P39_54_D_CONV_CRC_17_L                            0x3954
#define P39_55_D_CONV_CRC_18_H                            0x3955
#define P39_56_D_CONV_CRC_18_L                            0x3956
#define P39_57_D_CONV_CRC_19_H                            0x3957
#define P39_58_D_CONV_CRC_19_L                            0x3958
#define P39_59_D_CONV_CRC_20_H                            0x3959
#define P39_5A_D_CONV_CRC_20_L                            0x395A
#define P39_5B_D_CONV_CRC_21_H                            0x395B
#define P39_5C_D_CONV_CRC_21_L                            0x395C
#define P39_5D_D_CONV_CRC_22_H                            0x395D
#define P39_5E_D_CONV_CRC_22_L                            0x395E
#define P39_5F_D_CONV_CRC_23_H                            0x395F
#define P39_60_D_CONV_CRC_23_L                            0x3960
#define P39_61_D_CONV_CRC_24_H                            0x3961
#define P39_62_D_CONV_CRC_24_L                            0x3962
#define P39_63_D_CONV_CRC_25_H                            0x3963
#define P39_64_D_CONV_CRC_25_L                            0x3964
#define P39_65_D_CONV_CRC_26_H                            0x3965
#define P39_66_D_CONV_CRC_26_L                            0x3966
#define P39_67_D_CONV_CRC_27_H                            0x3967
#define P39_68_D_CONV_CRC_27_L                            0x3968
#define P39_69_D_CONV_CRC_28_H                            0x3969
#define P39_6A_D_CONV_CRC_28_L                            0x396A
#define P39_6B_D_CONV_CRC_29_H                            0x396B
#define P39_6C_D_CONV_CRC_29_L                            0x396C
#define P39_6D_D_CONV_CRC_30_H                            0x396D
#define P39_6E_D_CONV_CRC_30_L                            0x396E
#define P39_6F_D_CONV_CRC_31_H                            0x396F
#define P39_70_D_CONV_CRC_31_L                            0x3970
#define P39_71_D_CONV_CRC_32_H                            0x3971
#define P39_72_D_CONV_CRC_32_L                            0x3972
#define P39_73_D_CONV_CRC_33_H                            0x3973
#define P39_74_D_CONV_CRC_33_L                            0x3974
#define P39_75_D_CONV_CRC_34_H                            0x3975
#define P39_76_D_CONV_CRC_34_L                            0x3976
#define P39_77_D_CONV_CRC_35_H                            0x3977
#define P39_78_D_CONV_CRC_35_L                            0x3978
#define P39_79_D_CONV_CRC_36_H                            0x3979
#define P39_7A_D_CONV_CRC_36_L                            0x397A
#define P39_7B_D_CONV_CRC_37_H                            0x397B
#define P39_7C_D_CONV_CRC_37_L                            0x397C
#define P39_7D_D_CONV_CRC_38_H                            0x397D
#define P39_7E_D_CONV_CRC_38_L                            0x397E
#define P39_7F_D_CONV_CRC_39_H                            0x397F
#define P39_80_D_CONV_CRC_39_L                            0x3980
#define P39_81_D_CONV_CRC_40_H                            0x3981
#define P39_82_D_CONV_CRC_40_L                            0x3982
#define P39_83_D_CONV_CRC_41_H                            0x3983
#define P39_84_D_CONV_CRC_41_L                            0x3984
#define P39_85_D_CONV_CRC_42_H                            0x3985
#define P39_86_D_CONV_CRC_42_L                            0x3986
#define P39_87_D_CONV_CRC_43_H                            0x3987
#define P39_88_D_CONV_CRC_43_L                            0x3988
#define P39_89_D_CONV_CRC_44_H                            0x3989
#define P39_8A_D_CONV_CRC_44_L                            0x398A
#define P39_8B_D_CONV_CRC_45_H                            0x398B
#define P39_8C_D_CONV_CRC_45_L                            0x398C
#define P39_8D_D_CONV_CRC_46_H                            0x398D
#define P39_8E_D_CONV_CRC_46_L                            0x398E
#define P39_8F_D_CONV_CRC_47_H                            0x398F
#define P39_90_D_CONV_CRC_47_L                            0x3990


//--------------------------------------------------
// OSD Frame Control Registers (Page 3A)
//--------------------------------------------------
#define P3A_00_FRAME_CTRL_00                              0x3A00
#define P3A_01_FRAME_CTRL_01                              0x3A01
#define P3A_02_FRAME_CTRL_02                              0x3A02
#define P3A_03_FRAME_CTRL_03                              0x3A03
#define P3A_04_FRAME_CTRL_04                              0x3A04
#define P3A_05_FRAME_CTRL_05                              0x3A05
#define P3A_06_FRAME_CTRL_06                              0x3A06
#define P3A_07_FRAME_CTRL_07                              0x3A07
#define P3A_08_FRAME_CTRL_08                              0x3A08
#define P3A_09_FRAME_CTRL_09                              0x3A09
#define P3A_0A_FRAME_CTRL_0A                              0x3A0A
#define P3A_0B_FRAME_CTRL_0B                              0x3A0B
#define P3A_0C_FRAME_CTRL_0C                              0x3A0C
#define P3A_0D_FRAME_CTRL_0D                              0x3A0D
#define P3A_0E_FRAME_CTRL_0E                              0x3A0E
#define P3A_0F_FRAME_CTRL_0F                              0x3A0F
#define P3A_10_FRAME_CTRL_10                              0x3A10
#define P3A_11_FRAME_CTRL_11                              0x3A11
#define P3A_12_FRAME_CTRL_12                              0x3A12
#define P3A_13_FRAME_CTRL_13                              0x3A13
#define P3A_14_FRAME_CTRL_14                              0x3A14
#define P3A_15_FRAME_CTRL_15                              0x3A15
#define P3A_16_FRAME_CTRL_16                              0x3A16
#define P3A_17_FRAME_CTRL_17                              0x3A17
#define P3A_18_FRAME_CTRL_18                              0x3A18
#define P3A_19_FRAME_CTRL_19                              0x3A19
#define P3A_1A_FRAME_CTRL_1A                              0x3A1A
#define P3A_1B_FRAME_CTRL_1B                              0x3A1B
#define P3A_1C_FRAME_CTRL_1C                              0x3A1C
#define P3A_1D_FRAME_CTRL_1D                              0x3A1D
#define P3A_1E_FRAME_CTRL_1E                              0x3A1E
#define P3A_1F_FRAME_CTRL_1F                              0x3A1F
#define P3A_20_FRAME_CTRL_20                              0x3A20
#define P3A_21_FRAME_CTRL_21                              0x3A21
#define P3A_22_FRAME_CTRL_22                              0x3A22
#define P3A_23_FRAME_CTRL_23                              0x3A23
#define P3A_24_FRAME_CTRL_24                              0x3A24
#define P3A_25_FRAME_CTRL_25                              0x3A25
#define P3A_26_FRAME_CTRL_26                              0x3A26
#define P3A_27_FRAME_CTRL_27                              0x3A27
#define P3A_28_FRAME_CTRL_28                              0x3A28
#define P3A_29_FRAME_CTRL_29                              0x3A29
#define P3A_2A_FRAME_CTRL_2A                              0x3A2A
#define P3A_2B_FRAME_CTRL_2B                              0x3A2B
#define P3A_2C_FRAME_CTRL_2C                              0x3A2C
#define P3A_2D_FRAME_CTRL_2D                              0x3A2D
#define P3A_2E_FRAME_CTRL_2E                              0x3A2E
#define P3A_2F_FRAME_CTRL_2F                              0x3A2F
#define P3A_30_FRAME_CTRL_30                              0x3A30
#define P3A_31_FRAME_CTRL_31                              0x3A31
#define P3A_32_FRAME_CTRL_32                              0x3A32
#define P3A_33_FRAME_CTRL_33                              0x3A33
#define P3A_34_FRAME_CTRL_34                              0x3A34
#define P3A_35_FRAME_CTRL_35                              0x3A35
#define P3A_36_FRAME_CTRL_36                              0x3A36
#define P3A_37_FRAME_CTRL_37                              0x3A37
#define P3A_38_FRAME_CTRL_38                              0x3A38
#define P3A_39_FRAME_CTRL_39                              0x3A39
#define P3A_3A_FRAME_CTRL_3A                              0x3A3A
#define P3A_3B_FRAME_CTRL_3B                              0x3A3B
#define P3A_3C_FRAME_CTRL_3C                              0x3A3C
#define P3A_3D_FRAME_CTRL_3D                              0x3A3D
#define P3A_3E_FRAME_CTRL_3E                              0x3A3E
#define P3A_3F_FRAME_CTRL_3F                              0x3A3F
#define P3A_40_FRAME_CTRL_40                              0x3A40
#define P3A_41_FRAME_CTRL_41                              0x3A41
#define P3A_42_FRAME_CTRL_42                              0x3A42
#define P3A_43_FRAME_CTRL_43                              0x3A43
#define P3A_44_FRAME_CTRL_44                              0x3A44
#define P3A_45_FRAME_CTRL_45                              0x3A45
#define P3A_46_FRAME_CTRL_46                              0x3A46
#define P3A_47_FRAME_CTRL_47                              0x3A47
#define P3A_48_FRAME_CTRL_48                              0x3A48
#define P3A_49_FRAME_CTRL_49                              0x3A49
#define P3A_4A_FRAME_CTRL_4A                              0x3A4A
#define P3A_4B_FRAME_CTRL_4B                              0x3A4B
#define P3A_4C_FRAME_CTRL_4C                              0x3A4C
#define P3A_4D_FRAME_CTRL_4D                              0x3A4D
#define P3A_4E_FRAME_CTRL_4E                              0x3A4E
#define P3A_4F_FRAME_CTRL_4F                              0x3A4F
#define P3A_50_FRAME_CTRL_50                              0x3A50
#define P3A_51_FRAME_CTRL_51                              0x3A51
#define P3A_52_FRAME_CTRL_52                              0x3A52
#define P3A_53_FRAME_CTRL_53                              0x3A53
#define P3A_54_FRAME_CTRL_54                              0x3A54
#define P3A_55_FRAME_CTRL_55                              0x3A55
#define P3A_56_FRAME_CTRL_56                              0x3A56
#define P3A_57_FRAME_CTRL_57                              0x3A57
#define P3A_58_FRAME_CTRL_58                              0x3A58
#define P3A_59_FRAME_CTRL_59                              0x3A59
#define P3A_5A_FRAME_CTRL_5A                              0x3A5A
#define P3A_5B_FRAME_CTRL_5B_DUMMY                        0x3A5B
#define P3A_5C_FRAME_CTRL_5C_DUMMY                        0x3A5C
#define P3A_60_FRAME_CTRL_60                              0x3A60
#define P3A_61_FRAME_CTRL_61                              0x3A61
#define P3A_62_FRAME_CTRL_62                              0x3A62
#define P3A_63_FRAME_CTRL_63                              0x3A63
#define P3A_64_FRAME_CTRL_64                              0x3A64
#define P3A_65_FRAME_CTRL_65                              0x3A65
#define P3A_66_FRAME_CTRL_66                              0x3A66
#define P3A_67_FRAME_CTRL_67                              0x3A67
#define P3A_68_FRAME_CTRL_68                              0x3A68
#define P3A_69_FRAME_CTRL_69                              0x3A69
#define P3A_6A_FRAME_CTRL_6A                              0x3A6A
#define P3A_6B_FRAME_CTRL_6B                              0x3A6B
#define P3A_6C_FRAME_CTRL_6C                              0x3A6C
#define P3A_6D_FRAME_CTRL_6D                              0x3A6D
#define P3A_6E_FRAME_CTRL_6E                              0x3A6E
#define P3A_6F_FRAME_CTRL_6F                              0x3A6F
#define P3A_70_FRAME_CTRL_70                              0x3A70
#define P3A_71_FRAME_CTRL_71                              0x3A71
#define P3A_72_FRAME_CTRL_72                              0x3A72
#define P3A_73_FRAME_CTRL_73                              0x3A73
#define P3A_74_FRAME_CTRL_74                              0x3A74
#define P3A_75_FRAME_CTRL_75                              0x3A75
#define P3A_76_FRAME_CTRL_76                              0x3A76
#define P3A_77_FRAME_CTRL_77                              0x3A77
#define P3A_78_FRAME_CTRL_78                              0x3A78
#define P3A_79_FRAME_CTRL_79                              0x3A79
#define P3A_7A_FRAME_CTRL_7A                              0x3A7A
#define P3A_7B_FRAME_CTRL_7B                              0x3A7B
#define P3A_7C_FRAME_CTRL_7C                              0x3A7C
#define P3A_7D_FRAME_CTRL_7D                              0x3A7D
#define P3A_7E_FRAME_CTRL_7E                              0x3A7E
#define P3A_7F_FRAME_CTRL_7F                              0x3A7F
#define P3A_80_FRAME_CTRL_80                              0x3A80
#define P3A_81_FRAME_CTRL_81                              0x3A81
#define P3A_82_FRAME_CTRL_82                              0x3A82
#define P3A_83_FRAME_CTRL_83                              0x3A83
#define P3A_84_FRAME_CTRL_84                              0x3A84
#define P3A_85_FRAME_CTRL_85                              0x3A85
#define P3A_86_FRAME_CTRL_86                              0x3A86
#define P3A_87_FRAME_CTRL_87                              0x3A87
#define P3A_88_FRAME_CTRL_88                              0x3A88
#define P3A_89_FRAME_CTRL_89                              0x3A89
#define P3A_8A_FRAME_CTRL_8A                              0x3A8A
#define P3A_8B_FRAME_CTRL_8B                              0x3A8B
#define P3A_8C_FRAME_CTRL_8C_DUMMY                        0x3A8C
#define P3A_8D_FRAME_CTRL_8D_DUMMY                        0x3A8D
#define P3A_8E_FRAME_CTRL_8E_DUMMY                        0x3A8E
#define P3A_8F_FRAME_CTRL_8F_DUMMY                        0x3A8F
#define P3A_90_OSD_LUT_BIST_CTRL                          0x3A90
#define P3A_91_OSD_LUT_DRF_BIST_CTRL                      0x3A91
#define P3A_92_OSD_LUT_M2_BIST_CTRL                       0x3A92
#define P3A_93_OSD_LUT_M2_DRF_BIST_CTRL                   0x3A93
#define P3A_94_OSD_VLB_BIST_CTRL                          0x3A94
#define P3A_95_OSD_VLB_DRF_BIST_CTRL                      0x3A95


//--------------------------------------------------
// M2 IRQ Status (Page 40)
//--------------------------------------------------
#define P40_02_M2_STATUS0                                 0x4002
#define P40_03_M2_STATUS1                                 0x4003
#define P40_04_M2_IRQ_CTRL0                               0x4004
#define P40_05_M2_IRQ_CTRL1                               0x4005


//--------------------------------------------------
// Sync Processor Clock Divider (Page 40)
//--------------------------------------------------
#define P40_06_SYNCPROC_CLK_DIVIDER                       0x4006


//--------------------------------------------------
// Measure Block Clock Divider (Page 40)
//--------------------------------------------------
#define P40_07_MEASURE_CLK_DIVIDER                        0x4007
#define P40_08_M2_IRQ_CTRL2                               0x4008
#define P40_09_TOP_DUMMY3                                 0x4009


//--------------------------------------------------
// GroupD Power Control (Page 40)
//--------------------------------------------------
#define P40_0A_GD_POWER_CTRL                              0x400A
#define P40_0B_TOP_DUMMY4                                 0x400B


//--------------------------------------------------
// M2 Watch Dog (Page 40)
//--------------------------------------------------
#define P40_0C_M2_WATCH_DOG_CTRL0                         0x400C
#define P40_0D_TOP_DUMMY5                                 0x400D


//--------------------------------------------------
// M2 Input Video Capture (Page 40)
//--------------------------------------------------
#define P40_10_M2_VGIP_CTRL                               0x4010
#define P40_11_M2_VGIP_SIGINV                             0x4011
#define P40_12_M2_VGIP_DELAY_CTRL                         0x4012
#define P40_13_M2_VGIP_ODD_CTRL                           0x4013


//--------------------------------------------------
// M2 Input Frame Window (Page 40)
//--------------------------------------------------
#define P40_14_M2_IPH_ACT_STA_H                           0x4014
#define P40_15_M2_IPH_ACT_STA_L                           0x4015
#define P40_16_M2_IPH_ACT_WID_H                           0x4016
#define P40_17_M2_IPH_ACT_WID_L                           0x4017
#define P40_18_M2_IPV_ACT_STA_H                           0x4018
#define P40_19_M2_IPV_ACT_STA_L                           0x4019
#define P40_1A_M2_IPV_ACT_LEN_H                           0x401A
#define P40_1B_M2_IPV_ACT_LEN_L                           0x401B
#define P40_1C_M2_IVS_DELAY                               0x401C
#define P40_1D_M2_IHS_DELAY                               0x401D
#define P40_1E_M2_VGIP_HV_DELAY                           0x401E
#define P40_1F_M2_ICLK_GATED_CTRL1                        0x401F
#define P40_20_M2_DUMMY2                                  0x4020


//--------------------------------------------------
// M2 FIFO Frequency (Page 40)
//--------------------------------------------------
#define P40_22_M2_FIFO_CLOCK_SELECT                       0x4022


//--------------------------------------------------
// M2 Scaling Down Control (Page 40)
//--------------------------------------------------
#define P40_23_SCALE_DOWN_CTRL_M2                         0x4023
#define P40_24_SD_ADDRESS_PORT_M2                         0x4024
#define P40_25_SD_DATA_PORT_M2                            0x4025
#define P40_26_SD_FILTER_CONTROL_REG_M2                   0x4026
#define P40_27_SD_USER_FILTER_ACCESS_PORT_M2              0x4027


//--------------------------------------------------
// Display Format (Page 40)
//--------------------------------------------------
#define P40_28_VIDEO_DISPLAY_CONTROL_REG_M2               0x4028


//--------------------------------------------------
// M2 Scaling Up Function (Page 40)
//--------------------------------------------------
#define P40_32_SCALE_CONTROL_REG_M2                       0x4032
#define P40_33_SF_ADDR_PORT_M2                            0x4033
#define P40_34_SF_DATA_PORT_M2                            0x4034
#define P40_35_FILTER_CONTROL_REG_M2                      0x4035
#define P40_37_SCALE_UP_FOR_LINE_INTERLEAVE_M2            0x4037


//--------------------------------------------------
// M2 Color Processor Control (page 40)
//--------------------------------------------------
#define P40_62_SRGB_CTRL_SETB                             0x4062
#define P40_63_SRGB_ACCESS_PORT_SETB                      0x4063
#define P40_68_GAMMA_BIST_DITHER_SETB                     0x4068


//--------------------------------------------------
// M2 Gamma Control (Page 40)
//--------------------------------------------------
#define P40_66_GAMMA_PORT_SETB                            0x4066
#define P40_67_GAMMA_CTRL_SETB                            0x4067


//--------------------------------------------------
// M2 Back ground color (Page 40)
//--------------------------------------------------
#define P40_6C_BG_COLOR_ACCESS_EN_M2                      0x406C
#define P40_6D_BG_COLOR_DATA_PORT_M2                      0x406D


//--------------------------------------------------
// M2 Image Auto Function (Page 40)
//--------------------------------------------------
#define P40_70_M2_H_BOUNDARY_H                            0x4070
#define P40_71_M2_H_BOUNDARY_STA_L                        0x4071
#define P40_72_M2_H_BOUNDARY_END_L                        0x4072
#define P40_73_M2_V_BOUNDARY_H                            0x4073
#define P40_74_V_BOUNDARY_STA_L                           0x4074
#define P40_75_M2_V_BOUNDARY_END_L                        0x4075
#define P40_76_M2_RED_NOISE_MARGIN                        0x4076
#define P40_77_M2_GRN_NOISE_MARGIN                        0x4077
#define P40_78_M2_BLU_NOISE_MARGIN                        0x4078
#define P40_79_M2_DIFF_THRESHOLD                          0x4079
#define P40_7A_M2_AUTO_ADJ_CTRL0                          0x407A
#define P40_7B_M2_HW_AUTO_PHASE_CTRL0                     0x407B
#define P40_7C_M2_AUTO_DUMMY                              0x407C
#define P40_7D_M2_AUTO_ADJ_CTRL1                          0x407D
#define P40_7E_M2_VER_START_END_H                         0x407E
#define P40_7F_M2_VER_START_L                             0x407F
#define P40_80_M2_VER_END_L                               0x4080
#define P40_81_M2_H_START_END_H                           0x4081
#define P40_82_M2_H_START_L                               0x4082
#define P40_83_M2_H_END_L                                 0x4083
#define P40_84_M2_AUTO_PHASE_3                            0x4084
#define P40_85_M2_AUTO_PHASE_2                            0x4085
#define P40_86_M2_AUTO_PHASE_1                            0x4086
#define P40_87_M2_AUTO_PHASE_0                            0x4087


//--------------------------------------------------
// M2 Dithering Control (For Input Domain) (Page 40)
//--------------------------------------------------
#define P40_89_I_DITHER_COMMON_CTRL1_M2                   0x4089
#define P40_8A_I_DITHER_COMMON_CTRL2_M2                   0x408A


//--------------------------------------------------
// Color Conversion 每 RGBtoYCC before IDLTI 12bit In / 12bit Out (Page 40)
//--------------------------------------------------
#define P40_9C_RGB2YCC_CTRL_M2                            0x409C
#define P40_9D_RGB2YCC_COEF_DATA_M2                       0x409D


//--------------------------------------------------
// M2 LiveShowTM Control (Page 43)
//--------------------------------------------------
#define P43_A4_LS_STATUS0                                 0x43A4
#define P43_A5_LS_STATUS1                                 0x43A5
#define P43_A6_LS_WTLVL_W                                 0x43A6
#define P43_A7_LS_WTLVL_R                                 0x43A7
#define P43_A8_LS_MEM_FIFO_RW_NUM_H                       0x43A8
#define P43_A9_LS_MEM_FIFO_RW_NUM_L                       0x43A9
#define P43_AA_LS_MEM_FIFO_RW_LEN                         0x43AA
#define P43_AB_LS_MEM_FIFO_RW_REMAIN                      0x43AB
#define P43_AC_LS_MEM_START_ADDR_H                        0x43AC
#define P43_AD_LS_MEM_START_ADDR_M                        0x43AD
#define P43_AE_LS_MEM_START_ADDR_L                        0x43AE
#define P43_AF_LS_BIST_CTRL                               0x43AF
#define P43_D0_LS_DDR_FIFO_WTLVL_W_H                      0x43D0
#define P43_D1_LS_DDR_FIFO_WTLVL_W_L                      0x43D1
#define P43_D2_LS_DDR_FIFO_WTLVL_R_H                      0x43D2
#define P43_D3_LS_DDR_FIFO_WTLVL_R_L                      0x43D3
#define P43_D4_LS_DDR_FIFO_RW_NUM_H                       0x43D4
#define P43_D5_LS_DDR_FIFO_RW_NUM_L                       0x43D5
#define P43_D6_LS_DDR_FIFO_RW_LEN_H                       0x43D6
#define P43_D7_LS_DDR_FIFO_RW_LEN_L                       0x43D7
#define P43_D8_LS_DDR_FIFO_RW_REMAIN_H                    0x43D8
#define P43_D9_LS_DDR_FIFO_RW_REMAIN_L                    0x43D9
#define P43_DA_LS_DDR_START_ADDR_MSB                      0x43DA
#define P43_DB_LS_DDR_START_ADDR_H                        0x43DB
#define P43_DC_LS_DDR_START_ADDR_M                        0x43DC
#define P43_DD_LS_DDR_START_ADDR_L                        0x43DD
#define P43_DE_CAP_BIST_CTRL                              0x43DE
#define P43_DF_DIS_BIST_CTRL                              0x43DF
#define P43_E0_LS_SFM_DDR_FIFO_WTLVL_W_H                  0x43E0
#define P43_E1_LS_SFM_DDR_FIFO_WTLVL_W_L                  0x43E1
#define P43_E2_LS_SFM_DDR_FIFO_WTLVL_R_H                  0x43E2
#define P43_E3_LS_SFM_DDR_FIFO_WTLVL_R_L                  0x43E3
#define P43_E4_LS_SFM_DDR_FIFO_RW_NUM_H                   0x43E4
#define P43_E5_LS_SFM_DDR_FIFO_RW_NUM_L                   0x43E5
#define P43_E6_LS_SFM_DDR_FIFO_RW_LEN_H                   0x43E6
#define P43_E7_LS_SFM_DDR_FIFO_RW_LEN_L                   0x43E7
#define P43_E8_LS_SFM_DDR_FIFO_RW_REMAIN_H                0x43E8
#define P43_E9_LS_SFM_DDR_FIFO_RW_REMAIN_L                0x43E9
#define P43_EA_LS_SFM_DDR_START_ADDR_MSB                  0x43EA
#define P43_EB_LS_SFM_DDR_START_ADDR_H                    0x43EB
#define P43_EC_LS_SFM_DDR_START_ADDR_M                    0x43EC
#define P43_ED_LS_SFM_DDR_START_ADDR_L                    0x43ED


//--------------------------------------------------
// FRC Cap_M2 (Page 45)
//--------------------------------------------------
#define P45_00_CAP_M2_MEM_ADDR_MSB                        0x4500
#define P45_01_CAP_M2_MEM_ADDR_H                          0x4501
#define P45_02_CAP_M2_MEM_ADDR_M                          0x4502
#define P45_03_CAP_M2_MEM_ADDR_L                          0x4503
#define P45_04_CAP_M2_BL2_ADDR_MSB                        0x4504
#define P45_05_CAP_M2_BL2_ADDR_H                          0x4505
#define P45_06_CAP_M2_BL2_ADDR_M                          0x4506
#define P45_07_CAP_M2_BL2_ADDR_L                          0x4507
#define P45_08_CAP_M2_BL3_ADDR_MSB                        0x4508
#define P45_09_CAP_M2_BL3_ADDR_H                          0x4509
#define P45_0A_CAP_M2_BL3_ADDR_M                          0x450A
#define P45_0B_CAP_M2_BL3_ADDR_L                          0x450B
#define P45_0C_CAP_M2_BOUNDARY_ADDR1_MSB                  0x450C
#define P45_0D_CAP_M2_BOUNDARY_ADDR1_H                    0x450D
#define P45_0E_CAP_M2_BOUNDARY_ADDR1_M                    0x450E
#define P45_0F_CAP_M2_BOUNDARY_ADDR1_L                    0x450F
#define P45_10_CAP_M2_BOUNDARY_ADDR2_MSB                  0x4510
#define P45_11_CAP_M2_BOUNDARY_ADDR2_H                    0x4511
#define P45_12_CAP_M2_BOUNDARY_ADDR2_M                    0x4512
#define P45_13_CAP_M2_BOUNDARY_ADDR2_L                    0x4513
#define P45_14_CAP_M2_BOUNDARY_STATUS                     0x4514
#define P45_15_CAP_M2_BLOCK_STEP_MSB                      0x4515
#define P45_16_CAP_M2_BLOCK_STEP_H                        0x4516
#define P45_17_CAP_M2_BLOCK_STEP_M                        0x4517
#define P45_18_CAP_M2_BLOCK_STEP_L                        0x4518
#define P45_19_CAP_M2_LINE_STEP_MSB                       0x4519
#define P45_1A_CAP_M2_LINE_STEP_H                         0x451A
#define P45_1B_CAP_M2_LINE_STEP_M                         0x451B
#define P45_1C_CAP_M2_LINE_STEP_L                         0x451C
#define P45_1D_CAP_M2_WATER_LEVEL_H                       0x451D
#define P45_1E_CAP_M2_WATER_LEVEL_L                       0x451E
#define P45_1F_CAP_M2_PIXEL_NUM_H                         0x451F
#define P45_20_CAP_M2_PIXEL_NUM_L                         0x4520
#define P45_21_CAP_M2_LINE_NUM_H                          0x4521
#define P45_22_CAP_M2_LINE_NUM_L                          0x4522
#define P45_23_CAP_M2_WR_NUM_H                            0x4523
#define P45_24_CAP_M2_WR_NUM_L                            0x4524
#define P45_25_CAP_M2_WR_LEN                              0x4525
#define P45_26_CAP_M2_WR_REMAIN                           0x4526
#define P45_27_CAP_M2_DDR_CTRL1                           0x4527
#define P45_28_CAP_M2_DDR_CTRL2                           0x4528
#define P45_29_CAP_M2_DDR_CTRL3                           0x4529
#define P45_2A_CAP_M2_STATUS                              0x452A
#define P45_2B_CAP_M2_FIFO_STATUS                         0x452B
#define P45_2C_CAP_M2_ONEF_STATUS                         0x452C
#define P45_30_CAP_M2_BIST_CTRL                           0x4530
#define P45_31_CAP_M2_DRF_BIST_CTRL                       0x4531


//--------------------------------------------------
// FRC Disp_M2 (Page 45)
//--------------------------------------------------
#define P45_80_DISP_M2_READ_ADDR_MSB                      0x4580
#define P45_81_DISP_M2_READ_ADDR_H                        0x4581
#define P45_82_DISP_M2_READ_ADDR_M                        0x4582
#define P45_83_DISP_M2_READ_ADDR_L                        0x4583
#define P45_84_DISP_M2_BL2_ADDR_MSB                       0x4584
#define P45_85_DISP_M2_BL2_ADDR_H                         0x4585
#define P45_86_DISP_M2_BL2_ADDR_M                         0x4586
#define P45_87_DISP_M2_BL2_ADDR_L                         0x4587
#define P45_88_DISP_M2_BL3_ADDR_MSB                       0x4588
#define P45_89_DISP_M2_BL3_ADDR_H                         0x4589
#define P45_8A_DISP_M2_BL3_ADDR_M                         0x458A
#define P45_8B_DISP_M2_BL3_ADDR_L                         0x458B
#define P45_8C_DISP_M2_BOUNDARY_ADDR1_MSB                 0x458C
#define P45_8D_DISP_M2_BOUNDARY_ADDR1_H                   0x458D
#define P45_8E_DISP_M2_BOUNDARY_ADDR1_M                   0x458E
#define P45_8F_DISP_M2_BOUNDARY_ADDR1_L                   0x458F
#define P45_90_DISP_M2_BOUNDARY_ADDR2_MSB                 0x4590
#define P45_91_DISP_M2_BOUNDARY_ADDR2_H                   0x4591
#define P45_92_DISP_M2_BOUNDARY_ADDR2_M                   0x4592
#define P45_93_DISP_M2_BOUNDARY_ADDR2_L                   0x4593
#define P45_94_DISP_M2_BOUNDARY_STATUS                    0x4594
#define P45_95_DISP_M2_BLOCK_STEP_MSB                     0x4595
#define P45_96_DISP_M2_BLOCK_STEP_H                       0x4596
#define P45_97_DISP_M2_BLOCK_STEP_M                       0x4597
#define P45_98_DISP_M2_BLOCK_STEP_L                       0x4598
#define P45_99_DISP_M2_LINE_STEP_MSB                      0x4599
#define P45_9A_DISP_M2_LINE_STEP_H                        0x459A
#define P45_9B_DISP_M2_LINE_STEP_M                        0x459B
#define P45_9C_DISP_M2_LINE_STEP_L                        0x459C
#define P45_A0_DISP_M2_WTLVL_H                            0x45A0
#define P45_A1_DISP_M2_WTLVL_L                            0x45A1
#define P45_A2_DISP_M2_PXL_NUM_H                          0x45A2
#define P45_A3_DISP_M2_PXL_NUM_L                          0x45A3
#define P45_A4_DISP_M2_LINE_NUM_H                         0x45A4
#define P45_A5_DISP_M2_LINE_NUM_L                         0x45A5
#define P45_A6_DISP_M2_PRRD_VST_H                         0x45A6
#define P45_A7_DISP_M2_PRRD_VST_L                         0x45A7
#define P45_A8_DISP_M2_READ_NUM_H                         0x45A8
#define P45_A9_DISP_M2_READ_NUM_L                         0x45A9
#define P45_AA_DISP_M2_READ_LEN                           0x45AA
#define P45_AB_DISP_M2_READ_REMAIN                        0x45AB
#define P45_AC_DISP_M2_DISP_CTRL1                         0x45AC
#define P45_AD_DISP_STATUS                                0x45AD
#define P45_AE_DISP_M2_DISP_CTRL2                         0x45AE
#define P45_AF_DISP_M2_DISP_CTRL3                         0x45AF
#define P45_B0_DISP_M2_FIFO_STATUS                        0x45B0
#define P45_B1_DISP_M2_ONEF_DHF_H                         0x45B1
#define P45_B2_DISP_M2_ONEF_DHF_M                         0x45B2
#define P45_B3_DISP_M2_ONEF_DHF_L                         0x45B3
#define P45_B4_DISP_M2_ONEF_IHF                           0x45B4
#define P45_B5_DISP_M2_LINE_MAGN_L                        0x45B5
#define P45_B6_DISP_M2_ONEF_MAGN_H                        0x45B6
#define P45_B7_DISP_M2_ONEF_MAGN_L                        0x45B7
#define P45_C0_DISP_M2_BIST_CTRL                          0x45C0
#define P45_C1_DISP_M2_DRF_BIST_CTRL                      0x45C1
#define P45_C2_ADC_TEST                                   0x45C2
#define P45_C3_DISP_M2_NEW_FIFO_CRC_CTRL                  0x45C3
#define P45_C4_DISP_M2_NEW_FIFO_CRC1                      0x45C4
#define P45_C5_DISP_M2_NEW_FIFO_CRC2                      0x45C5
#define P45_C6_DISP_M2_NEW_FIFO_CRC3                      0x45C6
#define P45_C7_DISP_M2_NEW_FIFO_CRC4                      0x45C7
#define P45_C8_DISP_M2_NEW_FIFO_CRC5                      0x45C8
#define P45_C9_DISP_M2_NEW_FIFO_CRC6                      0x45C9


//--------------------------------------------------
// DCC (Page 47)
//--------------------------------------------------
#define P47_C7_DCC_CTRL_0_S                               0x47C7
#define P47_C8_DCC_CTRL_1_S                               0x47C8
#define P47_C9_DCC_ADDRESS_PORT_S                         0x47C9
#define P47_CA_DCC_DATA_PORT_S                            0x47CA


//--------------------------------------------------
// ICM (Page 47)
//--------------------------------------------------
#define P47_CC_SCM_BLOCK_ENABLE_M2                        0x47CC
#define P47_CD_SCM_BLOCK_SELECT_M2                        0x47CD
#define P47_CE_SCM_ACCESS_PORT_CONTROL_M2                 0x47CE
#define P47_CF_SCM_ACCESS_PORT_DATA_M2                    0x47CF
#define P47_D0_ICM_CONTROL_M2                             0x47D0
#define P47_D1_ICM_SEL_M2                                 0x47D1
#define P47_D2_ICM_ADDR_M2                                0x47D2
#define P47_D3_ICM_DATA_M2                                0x47D3
#define P47_D4_ICM_SEL2_M2                                0x47D4


//--------------------------------------------------
// IAPS Gain (Page 47)
//--------------------------------------------------
#define P47_E0_IAPS_GAIN_CTRL_M2                          0x47E0
#define P47_E1_GAIN_VALUE1_M2                             0x47E1
#define P47_E2_GAIN_VALUE0_M2                             0x47E2
#define P47_E3_SOFT_CLAMP_M2                              0x47E3
#define P47_E4_IAPS_GAIN_DB_CTRL_M2                       0x47E4


//--------------------------------------------------
// DisplayPort 1.2 Digital MAC MST2SST PART(Page 4A)
//--------------------------------------------------
#define P4A_00_MST2SST_RESET                              0x4A00
#define P4A_10_MSA_HTT_0                                  0x4A10
#define P4A_11_MSA_HTT_1                                  0x4A11
#define P4A_12_MSA_HST_0                                  0x4A12
#define P4A_13_MSA_HST_1                                  0x4A13
#define P4A_14_MSA_HWD_0                                  0x4A14
#define P4A_15_MSA_HWD_1                                  0x4A15
#define P4A_16_MSA_HSW_0                                  0x4A16
#define P4A_17_MSA_HSW_1                                  0x4A17
#define P4A_18_MSA_VTT_0                                  0x4A18
#define P4A_19_MSA_VTT_1                                  0x4A19
#define P4A_1A_MSA_VST_0                                  0x4A1A
#define P4A_1B_MSA_VST_1                                  0x4A1B
#define P4A_1C_MSA_VHT_0                                  0x4A1C
#define P4A_1D_MSA_VHT_1                                  0x4A1D
#define P4A_1E_MSA_VSW_0                                  0x4A1E
#define P4A_1F_MSA_VSW_1                                  0x4A1F
#define P4A_20_MSA_MVID_00                                0x4A20
#define P4A_21_MSA_MVID_01                                0x4A21
#define P4A_22_MSA_MVID_02                                0x4A22
#define P4A_23_MSA_NVID_00                                0x4A23
#define P4A_24_MSA_NVID_01                                0x4A24
#define P4A_25_MSA_NVID_02                                0x4A25
#define P4A_26_MSA_MISC_0                                 0x4A26
#define P4A_27_MSA_MISC_1                                 0x4A27
#define P4A_28_MSA_COLOR_BIT                              0x4A28
#define P4A_29_MST2SST_VBID                               0x4A29
#define P4A_30_PG_CTRL_0                                  0x4A30
#define P4A_31_PG_CTRL_1                                  0x4A31
#define P4A_32_PG_CTRL_2                                  0x4A32
#define P4A_33_PG_CTRL_3                                  0x4A33
#define P4A_34_RB422_YONLY                                0x4A34
#define P4A_35_DPF_CTRL_0                                 0x4A35
#define P4A_36_DP_OUTPUT_CTRL                             0x4A36
#define P4A_37_EVBLK2VS_H                                 0x4A37
#define P4A_38_EVBLK2VS_M                                 0x4A38
#define P4A_39_EVBLK2VS_L                                 0x4A39
#define P4A_3A_OVBLK2VS_H                                 0x4A3A
#define P4A_3B_OVBLK2VS_M                                 0x4A3B
#define P4A_3C_OVBLK2VS_L                                 0x4A3C
#define P4A_3D_BS2HS_0                                    0x4A3D
#define P4A_3E_BS2HS_1                                    0x4A3E
#define P4A_3F_VS_FRONT_PORCH                             0x4A3F
#define P4A_40_MN_DPF_HTT_M                               0x4A40
#define P4A_41_MN_DPF_HTT_L                               0x4A41
#define P4A_42_MN_DPF_HST_M                               0x4A42
#define P4A_43_MN_DPF_HST_L                               0x4A43
#define P4A_44_MN_DPF_HWD_M                               0x4A44
#define P4A_45_MN_DPF_HWD_L                               0x4A45
#define P4A_46_MN_DPF_HSW_M                               0x4A46
#define P4A_47_MN_DPF_HSW_L                               0x4A47
#define P4A_48_MN_DPF_VTT_M                               0x4A48
#define P4A_49_MN_DPF_VTT_L                               0x4A49
#define P4A_4A_MN_DPF_VST_M                               0x4A4A
#define P4A_4B_MN_DPF_VST_L                               0x4A4B
#define P4A_4C_MN_DPF_VHT_M                               0x4A4C
#define P4A_4D_MN_DPF_VHT_L                               0x4A4D
#define P4A_4E_MN_DPF_VSW_M                               0x4A4E
#define P4A_4F_MN_DPF_VSW_L                               0x4A4F
#define P4A_50_MN_DPF_BG_RED_M                            0x4A50
#define P4A_51_MN_DPF_BG_RED_L                            0x4A51
#define P4A_52_MN_DPF_BG_GRN_M                            0x4A52
#define P4A_53_MN_DPF_BG_GRN_L                            0x4A53
#define P4A_54_MN_DPF_BG_BLU_M                            0x4A54
#define P4A_55_MN_DPF_BG_BLU_L                            0x4A55
#define P4A_56_INTERLACE_MODE_CONFIG                      0x4A56
#define P4A_58_MN_MEAS_CTRL                               0x4A58
#define P4A_59_MN_MEAS_VLN_M                              0x4A59
#define P4A_5A_MN_MEAS_VLN_L                              0x4A5A
#define P4A_5B_MN_MEAS_HLN_M                              0x4A5B
#define P4A_5C_MN_MEAS_HLN_L                              0x4A5C
#define P4A_5D_VHEIGHT_MSB                                0x4A5D
#define P4A_5E_VHEIGHT_LSB                                0x4A5E
#define P4A_60_VBLANK_MSB                                 0x4A60
#define P4A_61_VBLANK_LSB                                 0x4A61
#define P4A_62_HBLANK_MSB                                 0x4A62
#define P4A_63_HBLANK_LSB                                 0x4A63
#define P4A_65_SRAM_BIST_0                                0x4A65
#define P4A_66_SRAM_BIST_1                                0x4A66
#define P4A_70_DP_CRC_CTRL                                0x4A70
#define P4A_71_DP_CRC_R_M                                 0x4A71
#define P4A_72_DP_CRC_R_L                                 0x4A72
#define P4A_73_DP_CRC_G_M                                 0x4A73
#define P4A_74_DP_CRC_G_L                                 0x4A74
#define P4A_75_DP_CRC_B_M                                 0x4A75
#define P4A_76_DP_CRC_B_L                                 0x4A76
#define P4A_77_DP_CRC_CB_M                                0x4A77
#define P4A_78_DP_CRC_CB_L                                0x4A78
#define P4A_80_MST2SST_TEST                               0x4A80
#define P4A_81_MST2SST_TEST1                              0x4A81
#define P4A_90_MST2SST_IRQ                                0x4A90
#define P4A_F0_DP_RSV0                                    0x4AF0
#define P4A_F1_DP_RSV1                                    0x4AF1
#define P4A_F2_DP_RSV2                                    0x4AF2
#define P4A_F3_DP_RSV3                                    0x4AF3
#define P4A_F4_DP_RSV4                                    0x4AF4
#define P4A_F5_DP_RSV5                                    0x4AF5
#define P4A_F6_DP_RSV6                                    0x4AF6
#define P4A_F7_DP_RSV7                                    0x4AF7
#define P4A_F8_DP_RSV8                                    0x4AF8
#define P4A_F9_DP_RSV9                                    0x4AF9
#define P4A_FA_DP_RSVA                                    0x4AFA


//--------------------------------------------------
// D0 DisplayPort 1.2 Digital MAC MST2SST PLL (Page 4A)
//--------------------------------------------------
#define P4A_A0_MN_SCLKG_CTRL                              0x4AA0
#define P4A_A1_MN_SCLKG_DIVM                              0x4AA1
#define P4A_A2_MN_SCLKG_DIVN                              0x4AA2
#define P4A_A3_MN_SCLKG_DIVS                              0x4AA3
#define P4A_A4_MN_SCLKG_OFFS_H                            0x4AA4
#define P4A_A5_MN_SCLKG_OFFS_M                            0x4AA5
#define P4A_A6_MN_SCLKG_OFFS_L                            0x4AA6
#define P4A_A7_MN_SCLKG_TRK_CTRL                          0x4AA7
#define P4A_A8_MN_SCLKG_TRK_MN_I_H                        0x4AA8
#define P4A_A9_MN_SCLKG_TRK_MN_I_M                        0x4AA9
#define P4A_AA_MN_SCLKG_TRK_MN_I_L                        0x4AAA
#define P4A_AB_MN_SCLKG_TRK_MN_P_H                        0x4AAB
#define P4A_AC_MN_SCLKG_TRK_MN_P_M                        0x4AAC
#define P4A_AD_MN_SCLKG_TRK_MN_P_L                        0x4AAD
#define P4A_AE_MN_SCLKG_TRK_MN_PE                         0x4AAE
#define P4A_AF_MN_SCLKG_TRK_MN_NLOCK                      0x4AAF
#define P4A_B0_MN_SCLKG_TRK_VS_I_H                        0x4AB0
#define P4A_B1_MN_SCLKG_TRK_VS_I_M                        0x4AB1
#define P4A_B2_MN_SCLKG_TRK_VS_I_L                        0x4AB2
#define P4A_B3_MN_SCLKG_TRK_VS_P_H                        0x4AB3
#define P4A_B4_MN_SCLKG_TRK_VS_P_M                        0x4AB4
#define P4A_B5_MN_SCLKG_TRK_VS_P_L                        0x4AB5
#define P4A_B6_MN_SCLKG_TRK_VS_PE                         0x4AB6
#define P4A_B7_MN_SCLKG_TRK_VS_NLOCK                      0x4AB7
#define P4A_B8_MN_SCLKG_SDM_CTRL                          0x4AB8
#define P4A_B9_MN_SCLKG_SDM_TEST                          0x4AB9
#define P4A_BA_MN_SCLKG_SDM_SUMC_H                        0x4ABA
#define P4A_BB_MN_SCLKG_SDM_SUMC_M                        0x4ABB
#define P4A_BC_MN_SCLKG_SDM_SUMC_L                        0x4ABC
#define P4A_BD_MN_SCLKG_PLL_PWR                           0x4ABD
#define P4A_BE_MN_SCLKG_PLL_CHP                           0x4ABE
#define P4A_BF_MN_SCLKG_PLL_WD                            0x4ABF
#define P4A_C0_MN_SCLKG_PLL_INSEL                         0x4AC0
#define P4A_C1_MN_SCLKG_PLL_RESERVE                       0x4AC1
#define P4A_C2_HS_TRACKING_NEW_MODE1                      0x4AC2
#define P4A_C3_HS_TRACKING_NEW_MODE2                      0x4AC3
#define P4A_C4_DUMMY_0                                    0x4AC4
#define P4A_C5_DUMMY_1                                    0x4AC5
#define P4A_C6_DUMMY_2                                    0x4AC6
#define P4A_C7_DUMMY_3                                    0x4AC7


//--------------------------------------------------
// M2 I Domain DLTI (Page 51)
//--------------------------------------------------
#define P51_A1_I_DLTI_CTRL_M2                             0x51A1
#define P51_A2_I_DLTI_SEARCH_RANGE_M2                     0x51A2
#define P51_A3_I_DLTI_ADJUST_M2                           0x51A3
#define P51_A4_I_DLTI_UPPER_THD_HSB_M2                    0x51A4
#define P51_A5_I_DLTI_UPPER_THD_LSB_M2                    0x51A5
#define P51_A6_I_DLTI_LOWER_THD_HSB_M2                    0x51A6
#define P51_A7_I_DLTI_LOWER_THD_LSB_M2                    0x51A7
#define P51_A8_I_DLTI_FILTER_C0_HSB_M2                    0x51A8
#define P51_A9_I_DLTI_FILTER_C0_LSB_M2                    0x51A9
#define P51_AA_I_DLTI_FILTER_C1_HSB_M2                    0x51AA
#define P51_AB_I_DLTI_FILTER_C1_LSB_M2                    0x51AB
#define P51_AC_I_DLTI_FILTER_C2_HSB_M2                    0x51AC
#define P51_AD_I_DLTI_FILTER_C2_LSB_M2                    0x51AD
#define P51_AE_I_DLTI_FILTER_C3_HSB_M2                    0x51AE
#define P51_AF_I_DLTI_FILTER_C3_LSB_M2                    0x51AF
#define P51_B0_I_DLTI_FILTER_C4_HSB_M2                    0x51B0
#define P51_B1_I_DLTI_FILTER_C4_LSB_M2                    0x51B1
#define P51_B2_I_DLTI_UPPER_LOWER_THD_M2                  0x51B2
#define P51_D4_I_DLTI_HLW_HOR_START_HSB_M2                0x51D4
#define P51_D5_I_DLTI_HLW_HOR_START_LSB_M2                0x51D5
#define P51_D6_I_DLTI_HLW_HOR_END_HSB_M2                  0x51D6
#define P51_D7_I_DLTI_HLW_HOR_END_LSB_M2                  0x51D7
#define P51_D8_I_DLTI_HLW_VER_START_HSB_M2                0x51D8
#define P51_D9_I_DLTI_HLW_VER_START_LSB_M2                0x51D9
#define P51_DA_I_DLTI_HLW_VER_END_HSB_M2                  0x51DA
#define P51_DB_I_DLTI_HLW_VER_END_LSB_M2                  0x51DB
#define P51_DC_I_DLTI_HLW_CTRL_M2                         0x51DC
#define P51_DD_I_DLTI_DUMMY_M2                            0x51DD


//--------------------------------------------------
// M2 Light Super Resolution (LSR) (Page 51)
//--------------------------------------------------
#define P51_B9_SCALER_LSR_HLW_M2                          0x51B9
#define P51_CC_LSR_HLW_H_START_HIGH_M2                    0x51CC
#define P51_CD_LSR_HLW_H_START_LOW_M2                     0x51CD
#define P51_CE_LSR_HLW_H_END_HIGH_M2                      0x51CE
#define P51_CF_LSR_HLW_H_END_LOW_M2                       0x51CF
#define P51_D0_LSR_HLW_V_START_HIGH_M2                    0x51D0
#define P51_D1_LSR_HLW_V_START_LOW_M2                     0x51D1
#define P51_D2_LSR_HLW_V_END_HIGH_M2                      0x51D2
#define P51_D3_LSR_HLW_V_END_LOW_M2                       0x51D3


//--------------------------------------------------
// M2 SHP (Page 52)
//--------------------------------------------------
#define P52_A0_SR_SHP_CTRL_0_M2                           0x52A0
#define P52_A1_SR_SHP_CTRL_1_M2                           0x52A1
#define P52_A3_SR_DEBUGMODE_0_M2                          0x52A3
#define P52_A4_SR_DEBUGMODE_1_M2                          0x52A4
#define P52_A5_SR_EDGE_SOBEL_M2                           0x52A5
#define P52_A6_SR_EDGE_SOBEL_UB_M2                        0x52A6
#define P52_A7_SR_EDGE_HPF_C0_HSB_M2                      0x52A7
#define P52_A8_SR_EDGE_HPF_C0_LSB_M2                      0x52A8
#define P52_A9_SR_EDGE_HPF_C1_HSB_M2                      0x52A9
#define P52_AA_SR_EDGE_HPF_C1_LSB_M2                      0x52AA
#define P52_AB_SR_EDGE_HPF_C2_M2                          0x52AB
#define P52_AC_SR_EDGE_HPF_C3_M2                          0x52AC
#define P52_AD_SR_EDGE_HPF_C4_M2                          0x52AD
#define P52_AE_SR_EDGE_HPF_C5_M2                          0x52AE
#define P52_AF_SR_EDGE_HPF_SHIFT_M2                       0x52AF
#define P52_B0_SR_EDGE_PEAKING_GAIN_BLR_M2                0x52B0
#define P52_B1_SR_EDGE_PEAKING_GAIN_POS_M2                0x52B1
#define P52_B2_SR_EDGE_PEAKING_GAIN_NEG_M2                0x52B2
#define P52_B3_SR_EDGE_PEAKING_HV_POS_HSB_M2              0x52B3
#define P52_B4_SR_EDGE_PEAKING_HV_POS_LSB_M2              0x52B4
#define P52_B5_SR_EDGE_PEAKING_HV_NEG_HSB_M2              0x52B5
#define P52_B6_SR_EDGE_PEAKING_HV_NEG_LSB_M2              0x52B6
#define P52_B7_SR_EDGE_PEAKING_LV_M2                      0x52B7
#define P52_B8_SR_HOR_EMF_GAIN_1_M2                       0x52B8
#define P52_B9_SR_HOR_EMF_GAIN_2_M2                       0x52B9
#define P52_BA_SR_HOR_EMF_OFFSET_0_HSB_M2                 0x52BA
#define P52_BB_SR_HOR_EMF_OFFSET_0_LSB_M2                 0x52BB
#define P52_BC_SR_HOR_EMF_OFFSET_1_HSB_M2                 0x52BC
#define P52_BD_SR_HOR_EMF_OFFSET_1_LSB_M2                 0x52BD
#define P52_BE_SR_HOR_EMF_OFFSET_2_HSB_M2                 0x52BE
#define P52_BF_SR_HOR_EMF_OFFSET_2_LSB_M2                 0x52BF
#define P52_C0_SR_HOR_EMF_RANGE_M2                        0x52C0
#define P52_C1_SR_HOR_EMF_EXT_M2                          0x52C1
#define P52_C2_SR_HOR_EMFMK2_CTRL_0_M2                    0x52C2
#define P52_C3_SR_HOR_EMFMK2_CTRL_1_M2                    0x52C3
#define P52_C4_SR_HOR_EMFMK2_CTRL_2_M2                    0x52C4
#define P52_C5_SR_TEX_DET_M2                              0x52C5
#define P52_C6_SR_TEX_DET_UB_M2                           0x52C6
#define P52_C7_SR_TEX_HPF_C0_HSB_M2                       0x52C7
#define P52_C8_SR_TEX_HPF_C0_LSB_M2                       0x52C8
#define P52_C9_SR_TEX_HPF_C1_HSB_M2                       0x52C9
#define P52_CA_SR_TEX_HPF_C1_LSB_M2                       0x52CA
#define P52_CB_SR_TEX_HPF_C2_M2                           0x52CB
#define P52_CC_SR_TEX_HPF_C3_M2                           0x52CC
#define P52_CD_SR_TEX_HPF_C4_M2                           0x52CD
#define P52_CE_SR_TEX_HPF_C5_M2                           0x52CE
#define P52_CF_SR_TEX_HPF_SHIFT_M2                        0x52CF
#define P52_D0_SR_HOR_WTSUM_M2                            0x52D0
#define P52_D1_SR_TEX_PEAKING_GAIN_BLR_M2                 0x52D1
#define P52_D2_SR_TEX_PEAKING_GAIN_POS_M2                 0x52D2
#define P52_D3_SR_TEX_PEAKING_GAIN_NEG_M2                 0x52D3
#define P52_D4_SR_TEX_PEAKING_HV_POS_HSB_M2               0x52D4
#define P52_D5_SR_TEX_PEAKING_HV_POS_LSB_M2               0x52D5
#define P52_D6_SR_TEX_PEAKING_HV_NEG_HSB_M2               0x52D6
#define P52_D7_SR_TEX_PEAKING_HV_NEG_LSB_M2               0x52D7
#define P52_D8_SR_TEX_PEAKING_LV_M2                       0x52D8
#define P52_D9_SR_TEX_EDGE_BLEND_M2                       0x52D9
#define P52_DE_SR_VER_WTSUM_M2                            0x52DE
#define P52_DF_SR_VER_PEAKING_GAIN_POS_M2                 0x52DF
#define P52_E0_SR_VER_PEAKING_GAIN_NEG_M2                 0x52E0
#define P52_E1_SR_VER_PEAKING_HV_POS_M2                   0x52E1
#define P52_E2_SR_VER_PEAKING_HV_NEG_M2                   0x52E2
#define P52_E3_SR_VER_PEAKING_LV_M2                       0x52E3
#define P52_E4_SR_VER_EMF_M2                              0x52E4
#define P52_E5_SR_VER_EMF_MODE_M2                         0x52E5
#define P52_E6_SR_DUMMY1                                  0x52E6


//--------------------------------------------------
// M2 SHP (Page53)
//--------------------------------------------------
#define P53_A0_SR_CDS_CTRL_0_M2                           0x53A0
#define P53_A1_SR_CDS_CTRL_1_M2                           0x53A1
#define P53_A2_SR_CDS_CM1_U_UB0_HSB_M2                    0x53A2
#define P53_A3_SR_CDS_CM1_U_UB0_LSB_M2                    0x53A3
#define P53_A4_SR_CDS_CM1_U_LB0_HSB_M2                    0x53A4
#define P53_A5_SR_CDS_CM1_U_LB0_LSB_M2                    0x53A5
#define P53_A6_SR_CDS_CM1_V_UB0_HSB_M2                    0x53A6
#define P53_A7_SR_CDS_CM1_V_UB0_LSB_M2                    0x53A7
#define P53_A8_SR_CDS_CM1_V_LB0_HSB_M2                    0x53A8
#define P53_A9_SR_CDS_CM1_V_LB0_LSB_M2                    0x53A9
#define P53_AA_SR_CDS_CM5_U_UB0_HSB_M2                    0x53AA
#define P53_AB_SR_CDS_CM5_U_UB0_LSB_M2                    0x53AB
#define P53_AC_SR_CDS_CM5_U_LB0_HSB_M2                    0x53AC
#define P53_AD_SR_CDS_CM5_U_LB0_LSB_M2                    0x53AD
#define P53_AE_SR_CDS_CM5_V_UB0_HSB_M2                    0x53AE
#define P53_AF_SR_CDS_CM5_V_UB0_LSB_M2                    0x53AF
#define P53_B0_SR_CDS_CM5_V_LB0_HSB_M2                    0x53B0
#define P53_B1_SR_CDS_CM5_V_LB0_LSB_M2                    0x53B1
#define P53_B2_SR_CDS_PEAKING_GAIN_BLR_CM1_M2             0x53B2
#define P53_B3_SR_CDS_PEAKING_GAIN_POS_CM1_M2             0x53B3
#define P53_B4_SR_CDS_PEAKING_GAIN_NEG_CM1_M2             0x53B4
#define P53_B5_SR_CDS_PEAKING_HV_POS_CM1_HSB_M2           0x53B5
#define P53_B6_SR_CDS_PEAKING_HV_POS_CM1_LSB_M2           0x53B6
#define P53_B7_SR_CDS_PEAKING_HV_NEG_CM1_HSB_M2           0x53B7
#define P53_B8_SR_CDS_PEAKING_HV_NEG_CM1_LSB_M2           0x53B8
#define P53_B9_SR_CDS_PEAKING_LV_CM1_M2                   0x53B9
#define P53_BA_SR_CDS_PEAKING_GAIN_BLR_CM5_M2             0x53BA
#define P53_BB_SR_CDS_PEAKING_GAIN_POS_CM5_M2             0x53BB
#define P53_BC_SR_CDS_PEAKING_GAIN_NEG_CM5_M2             0x53BC
#define P53_BD_SR_CDS_PEAKING_HV_POS_CM5_HSB_M2           0x53BD
#define P53_BE_SR_CDS_PEAKING_HV_POS_CM5_LSB_M2           0x53BE
#define P53_BF_SR_CDS_PEAKING_HV_NEG_CM5_HSB_M2           0x53BF
#define P53_C0_SR_CDS_PEAKING_HV_NEG_CM5_LSB_M2           0x53C0
#define P53_C1_SR_CDS_PEAKING_LV_CM5_M2                   0x53C1
#define P53_C2_SR_CDS_CM1_U_UB1_HSB_M2                    0x53C2
#define P53_C3_SR_CDS_CM1_U_UB1_LSB_M2                    0x53C3
#define P53_C4_SR_CDS_CM1_U_LB1_HSB_M2                    0x53C4
#define P53_C5_SR_CDS_CM1_U_LB1_LSB_M2                    0x53C5
#define P53_C6_SR_CDS_CM1_V_UB1_HSB_M2                    0x53C6
#define P53_C7_SR_CDS_CM1_V_UB1_LSB_M2                    0x53C7
#define P53_C8_SR_CDS_CM1_V_LB1_HSB_M2                    0x53C8
#define P53_C9_SR_CDS_CM1_V_LB1_LSB_M2                    0x53C9
#define P53_CA_SR_CDS_CM5_U_UB1_HSB_M2                    0x53CA
#define P53_CB_SR_CDS_CM5_U_UB1_LSB_M2                    0x53CB
#define P53_CC_SR_CDS_CM5_U_LB1_HSB_M2                    0x53CC
#define P53_CD_SR_CDS_CM5_U_LB1_LSB_M2                    0x53CD
#define P53_CE_SR_CDS_CM5_V_UB1_HSB_M2                    0x53CE
#define P53_CF_SR_CDS_CM5_V_UB1_LSB_M2                    0x53CF
#define P53_D0_SR_CDS_CM5_V_LB1_HSB_M2                    0x53D0
#define P53_D1_SR_CDS_CM5_V_LB1_LSB_M2                    0x53D1
#define P53_D4_SR_SKIPIR_CTRL1_M2                         0x53D4
#define P53_D5_SR_SKIPIR_CTRL2_M2                         0x53D5
#define P53_D6_SR_SKIPIR_CTRL3_M2                         0x53D6
#define P53_D7_SR_SKIPIR_CTRL4_M2                         0x53D7
#define P53_D8_SR_SKIPIR_CTRL5_M2                         0x53D8
#define P53_D9_SR_SKIPIR_CTRL6_M2                         0x53D9
#define P53_DA_SR_SKIPIR_ISLETLV_UB_M2                    0x53DA
#define P53_DB_SR_SKIPIR_ISLETGAIN_UB_M2                  0x53DB
#define P53_DC_SR_SKIPIR_REVLV_UB_M2                      0x53DC
#define P53_DD_SR_SKIPIR_REVGAIN_UB_M2                    0x53DD
#define P53_DE_SR_SKIPIR_DEBUG_M2                         0x53DE
#define P53_DF_SR_DNOISE_CTRL1_M2                         0x53DF
#define P53_E0_SR_DNOISE_CTRL2_M2                         0x53E0
#define P53_E1_SR_DNOISE_GAIN_UB_M2                       0x53E1
#define P53_E2_SR_DNOISE_LV_UB_M2                         0x53E2
#define P53_E3_SR_DNOISE_NOISE_GAIN_TH_M2                 0x53E3
#define P53_E4_SR_DNOISE_NOISE_LV_TH_M2                   0x53E4
#define P53_E5_SR_ECS_CTRL_0_M2                           0x53E5
#define P53_E6_SR_ECS_CTRL_1_M2                           0x53E6
#define P53_E7_SR_ECS_NOISE_LEVEL_HSB_M2                  0x53E7
#define P53_E8_SR_ECS_NOISE_LEVEL_LSB_M2                  0x53E8
#define P53_E9_SR_ECS_CTR_TH_HSB_M2                       0x53E9
#define P53_EA_SR_ECS_CTR_TH_LSB_M2                       0x53EA
#define P53_EB_SR_ECS_SAWTOOTH_TH_HSB_M2                  0x53EB
#define P53_EC_SR_ECS_SAWTOOTH_TH_LSB_M2                  0x53EC
#define P53_ED_SR_MF_UB_M2                                0x53ED
#define P53_EE_SR_MF_LB_M2                                0x53EE
#define P53_EF_SR_MF_WT_M2                                0x53EF
#define P53_F0_SR_TL_THD_MSB_M2                           0x53F0
#define P53_F1_SR_TL_THD_LSB_M2                           0x53F1
#define P53_F2_SR_TL_OFFSET_M2                            0x53F2
#define P53_F3_SR_BG_THD_MSB_M2                           0x53F3
#define P53_F4_SR_BG_THD_LSB_M2                           0x53F4
#define P53_F5_SR_BG_OFFSET_M2                            0x53F5
#define P53_F6_SR_SUMDIFF_RSFT_M2                         0x53F6
#define P53_F7_SR_SUMDIFF_THD_M2                          0x53F7
#define P53_F8_SR_SUMDIFF_OFFSET_M2                       0x53F8
#define P53_F9_SR_TL_GAIN_M2                              0x53F9
#define P53_FA_SR_TL_LEN_M2                               0x53FA
#define P53_FB_SR_DUMMY2                                  0x53FB


//--------------------------------------------------
// M2 Light Super Resolution (LSR) (Page 54)
//--------------------------------------------------
#define P54_00_LSR_V_SOB_SLP_LSB_M2                       0x5400
#define P54_01_LSR_V_SOB_TXT_COR_G_HP_UB_LSB_M2           0x5401
#define P54_02_LSR_V_HP_UP_COR_THD_LSB_M2                 0x5402
#define P54_03_LSR_V_COR_THD_HP_LB_LSB_M2                 0x5403
#define P54_04_LSR_V_HP_LB_SOB_TXT_LB_G_LSB_M2            0x5404
#define P54_05_LSR_V_SOB_TXT_COR_LB_G_LSB_M2              0x5405
#define P54_10_LSR_TL_THD_MSB_M2                          0x5410
#define P54_11_LSR_TL_THD_LSB_M2                          0x5411
#define P54_12_LSR_TL_OFFSET_M2                           0x5412
#define P54_13_LSR_BG_THD_MSB_M2                          0x5413
#define P54_14_LSR_BG_THD_LSB_M2                          0x5414
#define P54_15_LSR_BG_OFFSET_M2                           0x5415
#define P54_16_LSR_SUMDIFF_RSFT_M2                        0x5416
#define P54_17_LSR_SUMDIFF_THD_M2                         0x5417
#define P54_18_LSR_SUMDIFF_OFFSET_M2                      0x5418
#define P54_19_LSR_TL_GAIN_M2                             0x5419
#define P54_C0_LSR_CTRL_M2                                0x54C0
#define P54_C1_LSR_H_HP_FILTER_C0_M2                      0x54C1
#define P54_C2_LSR_H_HP_FILTER_C1C2_M2                    0x54C2
#define P54_C3_LSR_H_SOB_5TAP_M2                          0x54C3
#define P54_C4_LSR_H_SOB_THD2_MSB_M2                      0x54C4
#define P54_C5_LSR_H_SOB_THD2_LSB_M2                      0x54C5
#define P54_C6_LSR_H_SOB_THD1_MSB_M2                      0x54C6
#define P54_C7_LSR_H_SOB_THD1_LSB_M2                      0x54C7
#define P54_C8_LSR_H_SOB_THD0_M2                          0x54C8
#define P54_C9_LSR_H_SOB_BASE_M2                          0x54C9
#define P54_CA_LSR_H_SOB_SLP_R_M2                         0x54CA
#define P54_CB_LSR_H_SOB_SLP_F_M2                         0x54CB
#define P54_CC_LSR_H_SOB_TXT_COR_G_P_MSB_M2               0x54CC
#define P54_CD_LSR_H_SOB_TXT_COR_G_P_LSB_M2               0x54CD
#define P54_CE_LSR_H_HP_UB_P_M2                           0x54CE
#define P54_CF_LSR_H_HP_UB_N_M2                           0x54CF
#define P54_D0_LSR_H_COR_THD_P_M2                         0x54D0
#define P54_D1_LSR_H_COR_THD_N_M2                         0x54D1
#define P54_D2_LSR_H_HP_LB_P_M2                           0x54D2
#define P54_D3_LSR_H_HP_LB_N_M2                           0x54D3
#define P54_D4_LSR_H_SOB_TXT_LB_G_P_MSB_M2                0x54D4
#define P54_D5_LSR_H_SOB_TXT_LB_G_P_LSB_M2                0x54D5
#define P54_D6_LSR_H_SOB_TXT_COR_G_N_MSB_M2               0x54D6
#define P54_D7_LSR_H_SOB_TXT_COR_G_N_LSB_M2               0x54D7
#define P54_D8_LSR_H_SOB_TXT_LB_G_N_MSB_M2                0x54D8
#define P54_D9_LSR_H_SOB_TXT_LB_G_N_LSB_M2                0x54D9
#define P54_E0_LSR_V_SOB_THD2_MSB_M2                      0x54E0
#define P54_E1_LSR_V_SOB_THD2_LSB_M2                      0x54E1
#define P54_E2_LSR_V_SOB_THD1_MSB_M2                      0x54E2
#define P54_E3_LSR_V_SOB_THD1_LSB_M2                      0x54E3
#define P54_E4_SR_V_SOB_THD0_M2                           0x54E4
#define P54_E5_LSR_V_SOB_BASE_M2                          0x54E5
#define P54_E6_LSR_V_SOB_SLP_R_M2                         0x54E6
#define P54_E7_LSR_V_SOB_SLP_F_M2                         0x54E7
#define P54_E8_LSR_V_SOB_TXT_COR_G_P_MSB_M2               0x54E8
#define P54_E9_LSR_V_SOB_TXT_COR_G_P_LSB_M2               0x54E9
#define P54_EA_LSR_V_HP_UB_P_M2                           0x54EA
#define P54_EB_LSR_V_HP_UB_N_M2                           0x54EB
#define P54_EC_LSR_V_COR_THD_P_M2                         0x54EC
#define P54_ED_LSR_V_COR_THD_N_M2                         0x54ED
#define P54_EE_LSR_V_HP_LB_P_M2                           0x54EE
#define P54_EF_LSR_V_HP_LB_N_M2                           0x54EF
#define P54_F0_LSR_V_SOB_TXT_LB_G_P_MSB_M2                0x54F0
#define P54_F1_LSR_V_SOB_TXT_LB_G_P_LSB_M2                0x54F1
#define P54_F2_LSR_V_SOB_TXT_COR_G_N_MSB_M2               0x54F2
#define P54_F3_LSR_V_SOB_TXT_COR_G_N_LSB_M2               0x54F3
#define P54_F4_LSR_V_SOB_TXT_LB_G_N_MSB_M2                0x54F4
#define P54_F5_LSR_V_SOB_TXT_LB_G_N_LSB_M2                0x54F5
#define P54_F6_LSR_H_SOB_THD12_LSB_M2                     0x54F6
#define P54_F7_LSR_H_SOB_THD0_BASE_LSB_M2                 0x54F7
#define P54_F8_LSR_H_SOB_SLP_LSB_M2                       0x54F8
#define P54_F9_LSR_H_SOB_TXT_COR_G_HP_UB_LSB_M2           0x54F9
#define P54_FA_LSR_H_HP_UB_COR_THD_LSB_M2                 0x54FA
#define P54_FB_LSR_H_COR_THD_HP_LB_LSB_M2                 0x54FB
#define P54_FC_LSR_H_HP_LB_SOB_TXT_LB_G_LSB_M2            0x54FC
#define P54_FD_LSR_H_SOB_TXT_COR_LB_G_LSB_M2              0x54FD
#define P54_FE_LSR_V_SOB_THD12_LSB_M2                     0x54FE
#define P54_FF_LSR_V_SOB_THD0_BASE_LSB_M2                 0x54FF


//--------------------------------------------------
// Color Conversion 每 YCCtoRGB after SHP 12bit In / 12bit Out (Page 54)
//--------------------------------------------------
#define P54_A1_SR_YCC2RGB_CTRL_M2                         0x54A1
#define P54_A2_SR_YCC2RGB_COEF_K11_MSB_M2                 0x54A2
#define P54_A3_SR_YCC2RGB_COEF_K11_LSB_M2                 0x54A3
#define P54_A4_SR_YCC2RGB_COEF_K13_MSB_M2                 0x54A4
#define P54_A5_SR_YCC2RGB_COEF_K13_LSB_M2                 0x54A5
#define P54_A6_SR_YCC2RGB_COEF_K22_MSB_M2                 0x54A6
#define P54_A7_SR_YCC2RGB_COEF_K22_LSB_M2                 0x54A7
#define P54_A8_SR_YCC2RGB_COEF_K23_MSB_M2                 0x54A8
#define P54_A9_SR_YCC2RGB_COEF_K23_LSB_M2                 0x54A9
#define P54_AA_SR_YCC2RGB_COEF_K32_MSB_M2                 0x54AA
#define P54_AB_SR_YCC2RGB_COEF_K32_LSB_M2                 0x54AB
#define P54_AC_SR_YCC2RGB_R_OFFSET_MSB_M2                 0x54AC
#define P54_AD_SR_YCC2RGB_R_OFFSET_LSB_M2                 0x54AD
#define P54_AE_SR_YCC2RGB_G_OFFSET_MSB_M2                 0x54AE
#define P54_AF_SR_YCC2RGB_G_OFFSET_LSB_M2                 0x54AF
#define P54_B0_SR_YCC2RGB_B_OFFSET_MSB_M2                 0x54B0
#define P54_B1_SR_YCC2RGB_B_OFFSET_LSB_M2                 0x54B1
#define P54_B2_SR_YCC2RGB_R_GAIN_MSB_M2                   0x54B2
#define P54_B3_SR_YCC2RGB_R_GAIN_LSB_M2                   0x54B3
#define P54_B4_SR_YCC2RGB_G_GAIN_MSB_M2                   0x54B4
#define P54_B5_SR_YCC2RGB_G_GAIN_LSB_M2                   0x54B5
#define P54_B6_SR_YCC2RGB_B_GAIN_MSB_M2                   0x54B6
#define P54_B7_SR_YCC2RGB_B_GAIN_LSB_M2                   0x54B7
#define P54_B8_SR_YCC2RGB_DUMMY_M2                        0x54B8


//--------------------------------------------------
// TXCD Port Control for Analog LVDS (Page 55)
//--------------------------------------------------
#define P55_00_LVDS_COMMON_AB_CTRL0                       0x5500
#define P55_01_LVDS_COMMON_AB_CTRL1                       0x5501
#define P55_02_LVDS_COMMON_AB_CTRL2                       0x5502
#define P55_03_LVDS_COMMON_AB_CTRL3                       0x5503
#define P55_04_LVDS_COMMON_AB_CTRL4                       0x5504
#define P55_05_LVDS_COMMON_AB_CTRL5                       0x5505
#define P55_06_LVDS_COMMON_AB_CTRL6                       0x5506
#define P55_07_LVDS_COMMON_AB_CTRL7                       0x5507
#define P55_08_LVDS_COMMON_AB_CTRL8                       0x5508
#define P55_09_LVDS_COMMON_AB_CTRL9                       0x5509
#define P55_0A_LVDS_COMMON_AB_CTRL10                      0x550A
#define P55_0B_LVDS_COMMON_AB_CTRL11                      0x550B
#define P55_0C_LVDS_COMMON_AB_CTRL12                      0x550C
#define P55_0D_LVDS_COMMON_AB_CTRL13                      0x550D
#define P55_0E_LVDS_COMMON_AB_CTRL14                      0x550E
#define P55_0F_LVDS_COMMON_AB_CTRL15                      0x550F
#define P55_10_LVDS_COMMON_AB_CTRL16                      0x5510
#define P55_11_LVDS_COMMON_AB_CTRL17                      0x5511
#define P55_20_LVDS_PORTA_CTRL0                           0x5520
#define P55_21_LVDS_PORTA_CTRL1                           0x5521
#define P55_22_LVDS_PORTA_CTRL2                           0x5522
#define P55_23_LVDS_PORTA_CTRL3                           0x5523
#define P55_24_LVDS_PORTA_CTRL4                           0x5524
#define P55_25_LVDS_PORTA_CTRL5                           0x5525
#define P55_26_LVDS_PORTA_CTRL6                           0x5526
#define P55_27_LVDS_PORTA_CTRL7                           0x5527
#define P55_28_LVDS_PORTA_CTRL8                           0x5528
#define P55_29_LVDS_PORTA_CTRL9                           0x5529
#define P55_2A_LVDS_PORTA_CTRL10                          0x552A
#define P55_2B_LVDS_PORTA_CTRL11                          0x552B
#define P55_30_LVDS_PORTB_CTRL0                           0x5530
#define P55_31_LVDS_PORTB_CTRL1                           0x5531
#define P55_32_LVDS_PORTB_CTRL2                           0x5532
#define P55_33_LVDS_PORTB_CTRL3                           0x5533
#define P55_34_LVDS_PORTB_CTRL4                           0x5534
#define P55_35_LVDS_PORTB_CTRL5                           0x5535
#define P55_36_LVDS_PORTB_CTRL6                           0x5536
#define P55_37_LVDS_PORTB_CTRL7                           0x5537
#define P55_38_LVDS_PORTB_CTRL8                           0x5538
#define P55_39_LVDS_PORTB_CTRL9                           0x5539
#define P55_3A_LVDS_PORTB_CTRL10                          0x553A
#define P55_3B_LVDS_PORTB_CTRL11                          0x553B


//--------------------------------------------------
// M2 On-line Measure Block Overview (Page 56)
//--------------------------------------------------
#define P56_01_MEAS_CTL0                                  0x5601
#define P56_02_MEAS_CTL1                                  0x5602
#define P56_03_MEAS_ERROR_FLG0                            0x5603
#define P56_04_MEAS_ERROR_FLG1                            0x5604
#define P56_05_MEAS_HS_PERIOD_A_M                         0x5605
#define P56_06_MEAS_HS_PERIOD_A_L                         0x5606
#define P56_07_MEAS_HS_PERIOD_FRA_A                       0x5607
#define P56_08_MEAS_VS_PERIOD_A_M                         0x5608
#define P56_09_MEAS_VS_PERIOD_A_L                         0x5609
#define P56_0A_MEAS_HS_PULSE_A_M                          0x560A
#define P56_0B_MEAS_HS_PULSE_A_L                          0x560B
#define P56_0C_MEAS_VS_PULSE_A_M                          0x560C
#define P56_0D_MEAS_VS_PULSE_A_L                          0x560D
#define P56_0E_MEAS_HS_PERIOD_D_M                         0x560E
#define P56_0F_MEAS_HS_PERIOD_D_L                         0x560F
#define P56_10_MEAS_HS_PERIOD_FRA_D                       0x5610
#define P56_11_MEAS_VS_PERIOD_D_M                         0x5611
#define P56_12_MEAS_VS_PERIOD_D_L                         0x5612
#define P56_13_MEAS_HS_PULSE_D_M                          0x5613
#define P56_14_MEAS_HS_PULSE_D_L                          0x5614
#define P56_15_MEAS_HS_VS_DELTA_CTL                       0x5615
#define P56_16_MEAS_HS_VS_DELTA_IRQ                       0x5616
#define P56_17_MEAS_HS_VS_DELTA_WD                        0x5617
#define P56_18_MEAS_HS_VS_ERROR_WD                        0x5618
#define P56_19_MEAS_HS_VS_ERROR_IRQ                       0x5619
#define P56_1A_MEAS2_HS_VS_DLY                            0x561A
#define P56_1C_M2_MEASURE_DUMMY0                          0x561C
#define P56_1D_M2_MEASURE_DUMMY1                          0x561D


//--------------------------------------------------
// Overall CEC1 Function Block (Page 58)
//--------------------------------------------------
#define P58_A0_CEC_CR0_1                                  0x58A0
#define P58_A1_CEC_CR0_1_1                                0x58A1
#define P58_A2_CEC_CR_RSV_1                               0x58A2
#define P58_A3_CEC_CR0_2                                  0x58A3
#define P58_A4_CEC_CR0_3                                  0x58A4
#define P58_A5_CEC_CR0_4                                  0x58A5
#define P58_A6_CEC_CR0_5                                  0x58A6
#define P58_A7_CEC_CR0_RSV_1                              0x58A7
#define P58_A8_CEC_RTCR0_1                                0x58A8
#define P58_A9_CEC_RTCR0_2                                0x58A9
#define P58_AA_CEC_RTCR0_RSV_0                            0x58AA
#define P58_B0_CEC_RXCR0_1                                0x58B0
#define P58_B1_CEC_RXCR0_2                                0x58B1
#define P58_B2_CEC_RTCR0_RSV_1                            0x58B2
#define P58_B3_CEC_RTCR1_RSV_0                            0x58B3
#define P58_B4_CEC_TXCR0_1                                0x58B4
#define P58_B5_CEC_TXCR0_2                                0x58B5
#define P58_B6_CEC_TX_CR0_3                               0x58B6
#define P58_B7_CEC_TXCR0_RSV_0                            0x58B7
#define P58_B8_CEC_TXCR0_RSV_1                            0x58B8
#define P58_B9_CEC_TXDR0                                  0x58B9
#define P58_BA_CEC_TXDR0_RSV_0                            0x58BA
#define P58_C0_CEC_TXDR1_1                                0x58C0
#define P58_C1_CEC_TXDR1_2                                0x58C1
#define P58_C2_CEC_TXDR1_3                                0x58C2
#define P58_C3_CEC_TXDR1_4                                0x58C3
#define P58_C4_CEC_TXDR2_1                                0x58C4
#define P58_C5_CEC_TXDR2_2                                0x58C5
#define P58_C6_CEC_TXDR2_3                                0x58C6
#define P58_C7_CEC_TXDR2_4                                0x58C7
#define P58_C8_CEC_TXDR3_1                                0x58C8
#define P58_C9_CEC_TXDR3_2                                0x58C9
#define P58_CA_CEC_TXDR3_3                                0x58CA
#define P58_CB_CEC_TXDR3_4                                0x58CB
#define P58_CC_CEC_TXDR4_1                                0x58CC
#define P58_CD_CEC_TXDR4_2                                0x58CD
#define P58_CE_CEC_TXDR4_3                                0x58CE
#define P58_CF_CEC_TXDR4_4                                0x58CF
#define P58_D0_CEC_TXDR_FIFO_RSV_0                        0x58D0
#define P58_D1_CEC_TXDR_FIFO_RSV_1                        0x58D1
#define P58_D2_CEC_TXDR_FIFO_RSV_2                        0x58D2
#define P58_D3_CEC_RXDR1_1                                0x58D3
#define P58_D4_CEC_RXDR1_2                                0x58D4
#define P58_D5_CEC_RXDR1_3                                0x58D5
#define P58_D6_CEC_RXDR1_4                                0x58D6
#define P58_D7_CEC_RXDR2_1                                0x58D7
#define P58_D8_CEC_RXDR2_2                                0x58D8
#define P58_D9_CEC_RXDR2_3                                0x58D9
#define P58_DA_CEC_RXDR2_4                                0x58DA
#define P58_DB_CEC_RXDR3_1                                0x58DB
#define P58_DC_CEC_RXDR3_2                                0x58DC
#define P58_DD_CEC_RXDR3_3                                0x58DD
#define P58_DE_CEC_RXDR3_4                                0x58DE
#define P58_DF_CEC_RXDR4_1                                0x58DF
#define P58_E0_CEC_RXDR4_2                                0x58E0
#define P58_E1_CEC_RXDR4_3                                0x58E1
#define P58_E2_CEC_RXDR4_4                                0x58E2
#define P58_E3_CEC_RX_FIFO_RSV_0                          0x58E3
#define P58_E4_CEC_RX_FIFO_RSV_1                          0x58E4
#define P58_E5_CEC_RXTCR0_1                               0x58E5
#define P58_E6_CEC_RXTCR0_2                               0x58E6
#define P58_E7_CEC_RXTCR0_3                               0x58E7
#define P58_E8_CEC_RXTCR0_4                               0x58E8
#define P58_E9_CEC_RXTCR0_5                               0x58E9
#define P58_EA_CEC_RTCR1_RSV_1                            0x58EA
#define P58_EF_CEC_TXTCR0_1                               0x58EF
#define P58_F1_CEC_TXTCR0_2                               0x58F1
#define P58_F2_CEC_TXTCR1_1                               0x58F2
#define P58_F3_CEC_TXTCR1_2                               0x58F3
#define P58_F4_CEC_TXTCR1_3                               0x58F4
#define P58_F5_CEC_RXTCR1_ACK_0                           0x58F5
#define P58_F6_CEC_RXTCR1_ACK_1                           0x58F6
#define P58_F7_CEC_RXTCR1_ACK_2                           0x58F7
#define P58_F8_CEC_RXTCR1_ERR                             0x58F8
#define P58_F9_CEC_RXTCR1_RSV_0                           0x58F9
#define P58_FA_CEC_TIMING_CTRL_DATA                       0x58FA
#define P58_FB_CEC_TIMING_CTRL_0                          0x58FB
#define P58_FC_CEC_TIMING_CTRL_1                          0x58FC
#define P58_FD_CEC_TIMING_CTRL_COUNTER_0                  0x58FD
#define P58_FE_CEC_TIMING_CTRL_COUNTER_1                  0x58FE


//--------------------------------------------------
// Overall CEC1 Function Block (Page 59)
//--------------------------------------------------
#define P59_A0_GDI_CEC_COMPARE_OPCODE_01                  0x59A0
#define P59_A1_GDI_CEC_SEND_OPCODE_01                     0x59A1
#define P59_A2_GDI_CEC_SEND_OPERAND_NUMBER_01             0x59A2
#define P59_A3_GDI_CEC_OPERAND_01                         0x59A3
#define P59_A4_GDI_CEC_OPERAND_02                         0x59A4
#define P59_A5_GDI_CEC_OPERAND_03                         0x59A5
#define P59_A6_GDI_CEC_COMOP01_RSV_0                      0x59A6
#define P59_A7_GDI_CEC_COMOP01_RSV_1                      0x59A7
#define P59_A8_GDI_CEC_COMPARE_OPCODE_02                  0x59A8
#define P59_A9_GDI_CEC_SEND_OPCODE_02                     0x59A9
#define P59_AA_GDI_CEC_SEND_OPERAND_NUMBER_02             0x59AA
#define P59_AB_GDI_CEC_OPERAND_04                         0x59AB
#define P59_AC_GDI_CEC_OPERAND_05                         0x59AC
#define P59_AD_GDI_CEC_OPERAND_06                         0x59AD
#define P59_AE_GDI_CEC_COMOP02_RSV_0                      0x59AE
#define P59_AF_GDI_CEC_COMOP02_RSV_1                      0x59AF
#define P59_B0_GDI_CEC_COMPARE_OPCODE_03                  0x59B0
#define P59_B1_GDI_CEC_SEND_OPCODE_03                     0x59B1
#define P59_B2_GDI_CEC_SEND_OPERAND_NUMBER_03             0x59B2
#define P59_B3_GDI_CEC_OPERAND_07                         0x59B3
#define P59_B4_GDI_CEC_OPERAND_08                         0x59B4
#define P59_B5_GDI_CEC_OPERAND_09                         0x59B5
#define P59_B6_GDI_CEC_COMOP03_RSV_0                      0x59B6
#define P59_B7_GDI_CEC_COMOP03_RSV_1                      0x59B7
#define P59_B8_GDI_CEC_COMPARE_OPCODE_04                  0x59B8
#define P59_B9_GDI_CEC_SEND_OPCODE_04                     0x59B9
#define P59_BA_GDI_CEC_SEND_OPERAND_NUMBER_04             0x59BA
#define P59_BB_GDI_CEC_OPERAND_10                         0x59BB
#define P59_BC_GDI_CEC_OPERAND_11                         0x59BC
#define P59_BD_GDI_CEC_OPERAND_12                         0x59BD
#define P59_BE_GDI_CEC_COMOP04_RSV_0                      0x59BE
#define P59_BF_GDI_CEC_COMOP04_RSV_1                      0x59BF
#define P59_C0_GDI_CEC_COMPARE_OPCODE_05                  0x59C0
#define P59_C1_GDI_CEC_COMPARE_OPCODE_06                  0x59C1
#define P59_C2_GDI_CEC_COMPARE_OPCODE_07                  0x59C2
#define P59_C3_GDI_CEC_COMPARE_OPCODE_08                  0x59C3
#define P59_C4_GDI_CEC_COMPARE_OPCODE_09                  0x59C4
#define P59_C5_GDI_CEC_COMPARE_OPCODE_10                  0x59C5
#define P59_C6_GDI_CEC_COMPARE_OPCODE_11                  0x59C6
#define P59_C7_GDI_CEC_COMPARE_OPCODE_12                  0x59C7
#define P59_C8_GDI_CEC_COMPARE_OPCODE_13                  0x59C8
#define P59_C9_GDI_CEC_COMPARE_OPCODE_14                  0x59C9
#define P59_CA_GDI_CEC_COMPARE_OPCODE_15                  0x59CA
#define P59_CB_GDI_CEC_TXOP_RSV_0                         0x59CB
#define P59_CC_GDI_CEC_TXOP_RSV_1                         0x59CC
#define P59_CD_GDI_CEC_TXOP_RSV_2                         0x59CD
#define P59_D0_GDI_CEC_OPCODE_ENABLE_1                    0x59D0
#define P59_D1_GDI_CEC_OPCODE_ENABLE_2                    0x59D1
#define P59_D2_GDI_CEC_HIT_OPCODE_0                       0x59D2
#define P59_D3_GDI_CEC_HIT_OPCODE_1                       0x59D3
#define P59_D4_GDI_CEC_HIT_OPCODE_RSV_0                   0x59D4
#define P59_D5_GDI_CEC_HIT_OPCODE_RSV_1                   0x59D5
#define P59_D6_CEC_FUN_DEBUG_0                            0x59D6
#define P59_D7_CEC_FUN_RESERVED_1                         0x59D7
#define P59_D8_CEC_INTCR_RSV_1                            0x59D8
#define P59_D9_CEC_PS_RESERVED_0                          0x59D9
#define P59_DA_CEC_FUN_RESERVED_4                         0x59DA
#define P59_DB_CEC_FUN_RESERVED_5                         0x59DB
#define P59_E0_CEC_POWER_SAVING_MODE                      0x59E0
#define P59_E1_CEC_RTCR0_RSV_0                            0x59E1
#define P59_E2_CEC_RTCR0_RSV_1                            0x59E2
#define P59_E3_CEC_INTCR_01                               0x59E3
#define P59_E4_CEC_INTCR_02                               0x59E4
#define P59_E5_CEC_PS_RSV_0                               0x59E5
#define P59_E6_CEC_PS_RSV_1                               0x59E6
#define P59_E7_CEC_PS_RESERVED_1                          0x59E7
#define P59_E8_CEC_PS_RESERVED_2                          0x59E8
#define P59_E9_CEC_PS_RESERVED_3                          0x59E9
#define P59_EA_CEC_PS_RESERVED_4                          0x59EA
#define P59_EB_CEC_PS_RESERVED_5                          0x59EB
#define P59_F0_GDI_CEC_ANALOG_1                           0x59F0
#define P59_F1_POWER_SELECT                               0x59F1
#define P59_F2_CEC_Z0_OK                                  0x59F2
#define P59_F3_CEC_27K_INIS                               0x59F3
#define P59_F4_CEC_RESERVED                               0x59F4
#define P59_F5_CEC_PSM                                    0x59F5


//--------------------------------------------------
// Rotation FRC Cap_M2 (Page 60)
//--------------------------------------------------
#define P60_00_CAP_M2_MEM_ADDR_MSB                        0x6000
#define P60_01_CAP_M2_MEM_ADDR_H                          0x6001
#define P60_02_CAP_M2_MEM_ADDR_M                          0x6002
#define P60_03_CAP_M2_MEM_ADDR_L                          0x6003
#define P60_04_CAP_M2_BL2_ADDR_MSB                        0x6004
#define P60_05_CAP_M2_BL2_ADDR_H                          0x6005
#define P60_06_CAP_M2_BL2_ADDR_M                          0x6006
#define P60_07_CAP_M2_BL2_ADDR_L                          0x6007
#define P60_08_CAP_M2_BL3_ADDR_MSB                        0x6008
#define P60_09_CAP_M2_BL3_ADDR_H                          0x6009
#define P60_0A_CAP_M2_BL3_ADDR_M                          0x600A
#define P60_0B_CAP_M2_BL3_ADDR_L                          0x600B
#define P60_0C_CAP_M2_BOUNDARY_ADDR1_MSB                  0x600C
#define P60_0D_CAP_M2_BOUNDARY_ADDR1_H                    0x600D
#define P60_0E_CAP_M2_BOUNDARY_ADDR1_M                    0x600E
#define P60_0F_CAP_M2_BOUNDARY_ADDR1_L                    0x600F
#define P60_10_CAP_M2_BOUNDARY_ADDR2_MSB                  0x6010
#define P60_11_CAP_M2_BOUNDARY_ADDR2_H                    0x6011
#define P60_12_CAP_M2_BOUNDARY_ADDR2_M                    0x6012
#define P60_13_CAP_M2_BOUNDARY_ADDR2_L                    0x6013
#define P60_14_CAP_M2_BOUNDARY_STATUS                     0x6014
#define P60_15_CAP_M2_BLOCK_STEP_MSB                      0x6015
#define P60_16_CAP_M2_BLOCK_STEP_H                        0x6016
#define P60_17_CAP_M2_BLOCK_STEP_M                        0x6017
#define P60_18_CAP_M2_BLOCK_STEP_L                        0x6018
#define P60_19_CAP_M2_LINE_STEP_MSB                       0x6019
#define P60_1A_CAP_M2_LINE_STEP_H                         0x601A
#define P60_1B_CAP_M2_LINE_STEP_M                         0x601B
#define P60_1C_CAP_M2_LINE_STEP_L                         0x601C
#define P60_1D_CAP_M2_WATER_LEVEL_H                       0x601D
#define P60_1E_CAP_M2_WATER_LEVEL_L                       0x601E
#define P60_1F_CAP_M2_PIXEL_NUM_H                         0x601F
#define P60_20_CAP_M2_PIXEL_NUM_L                         0x6020
#define P60_21_CAP_M2_LINE_NUM_H                          0x6021
#define P60_22_CAP_M2_LINE_NUM_L                          0x6022
#define P60_23_CAP_M2_WR_NUM_H                            0x6023
#define P60_24_CAP_M2_WR_NUM_L                            0x6024
#define P60_25_CAP_M2_WR_LEN                              0x6025
#define P60_26_CAP_M2_WR_REMAIN                           0x6026
#define P60_27_CAP_M2_DDR_CTRL1                           0x6027
#define P60_28_CAP_M2_DDR_CTRL2                           0x6028
#define P60_29_CAP_M2_DDR_CTRL3                           0x6029
#define P60_2A_CAP_M2_STATUS                              0x602A
#define P60_2B_CAP_M2_FIFO_STATUS                         0x602B
#define P60_2C_CAP_M2_ONEF_STATUS                         0x602C
#define P60_30_CAP_M2_BIST_CTRL                           0x6030
#define P60_31_CAP_M2_DRF_BIST_CTRL                       0x6031
#define P60_32_ROT_CAP_M2_BLK_STRT_X_MSB                  0x6032
#define P60_33_ROT_CAP_M2_BLK_STRT_X_LSB                  0x6033
#define P60_34_ROT_CAP_M2_BLK_STRT_Y_MSB                  0x6034
#define P60_35_ROT_CAP_M2_BLK_STRT_Y_LSB                  0x6035
#define P60_36_ROT_CAP_M2_BLK_W                           0x6036
#define P60_37_ROT_CAP_M2_BLK_LR                          0x6037
#define P60_38_ROT_CAP_M2_CTRL1                           0x6038
#define P60_39_ROT_CAP_M2_GENERALPICT_NUM                 0x6039
#define P60_3A_ROT_CAP_M2_GENERALPICT_LEN                 0x603A
#define P60_3B_ROT_CAP_M2_GENERALPICT_REM                 0x603B
#define P60_3C_ROT_CAP_M2_REMAINPICT_NUM                  0x603C
#define P60_3D_ROT_CAP_M2_REMAINPICT_LEN                  0x603D
#define P60_3E_ROT_CAP_M2_REMAINPICT_REM                  0x603E
#define P60_3F_ROT_CAP_M2_PICT_FST_IDX                    0x603F
#define P60_40_ROT_CAP_M2_PICT_SEC_IDX                    0x6040
#define P60_41_ROT_CAP_M2_PICT_THI_IDX                    0x6041
#define P60_42_ROT_CAP_M2_PICT_NUM                        0x6042


//--------------------------------------------------
// Rotation FRC Disp_M2 (Page 60)
//--------------------------------------------------
#define P60_80_DISP_M2_READ_ADDR_MSB                      0x6080
#define P60_81_DISP_M2_READ_ADDR_H                        0x6081
#define P60_82_DISP_M2_READ_ADDR_M                        0x6082
#define P60_83_DISP_M2_READ_ADDR_L                        0x6083
#define P60_84_DISP_M2_BL2_ADDR_MSB                       0x6084
#define P60_85_DISP_M2_BL2_ADDR_H                         0x6085
#define P60_86_DISP_M2_BL2_ADDR_M                         0x6086
#define P60_87_DISP_M2_BL2_ADDR_L                         0x6087
#define P60_88_DISP_M2_BL3_ADDR_MSB                       0x6088
#define P60_89_DISP_M2_BL3_ADDR_H                         0x6089
#define P60_8A_DISP_M2_BL3_ADDR_M                         0x608A
#define P60_8B_DISP_M2_BL3_ADDR_L                         0x608B
#define P60_8C_DISP_M2_BOUNDARY_ADDR1_MSB                 0x608C
#define P60_8D_DISP_M2_BOUNDARY_ADDR1_H                   0x608D
#define P60_8E_DISP_M2_BOUNDARY_ADDR1_M                   0x608E
#define P60_8F_DISP_M2_BOUNDARY_ADDR1_L                   0x608F
#define P60_90_DISP_M2_BOUNDARY_ADDR2_MSB                 0x6090
#define P60_91_DISP_M2_BOUNDARY_ADDR2_H                   0x6091
#define P60_92_DISP_M2_BOUNDARY_ADDR2_M                   0x6092
#define P60_93_DISP_M2_BOUNDARY_ADDR2_L                   0x6093
#define P60_94_DISP_M2_BOUNDARY_STATUS                    0x6094
#define P60_95_DISP_M2_BLOCK_STEP_MSB                     0x6095
#define P60_96_DISP_M2_BLOCK_STEP_H                       0x6096
#define P60_97_DISP_M2_BLOCK_STEP_M                       0x6097
#define P60_98_DISP_M2_BLOCK_STEP_L                       0x6098
#define P60_99_DISP_M2_LINE_STEP_MSB                      0x6099
#define P60_9A_DISP_M2_LINE_STEP_H                        0x609A
#define P60_9B_DISP_M2_LINE_STEP_M                        0x609B
#define P60_9C_DISP_M2_LINE_STEP_L                        0x609C
#define P60_A0_DISP_M2_WTLVL_H                            0x60A0
#define P60_A1_DISP_M2_WTLVL_L                            0x60A1
#define P60_A2_DISP_M2_PXL_NUM_H                          0x60A2
#define P60_A3_DISP_M2_PXL_NUM_L                          0x60A3
#define P60_A4_DISP_M2_LINE_NUM_H                         0x60A4
#define P60_A5_DISP_M2_LINE_NUM_L                         0x60A5
#define P60_A6_DISP_M2_PRRD_VST_H                         0x60A6
#define P60_A7_DISP_M2_PRRD_VST_L                         0x60A7
#define P60_A8_DISP_M2_READ_NUM_H                         0x60A8
#define P60_A9_DISP_M2_READ_NUM_L                         0x60A9
#define P60_AA_DISP_M2_READ_LEN                           0x60AA
#define P60_AB_DISP_M2_READ_REMAIN                        0x60AB
#define P60_AC_DISP_M2_DISP_CTRL1                         0x60AC
#define P60_AD_DISP_STATUS                                0x60AD
#define P60_AE_DISP_M2_DISP_CTRL2                         0x60AE
#define P60_AF_DISP_M2_DISP_CTRL3                         0x60AF
#define P60_B0_DISP_M2_FIFO_STATUS                        0x60B0
#define P60_B1_DISP_M2_ONEF_DHF_H                         0x60B1
#define P60_B2_DISP_M2_ONEF_DHF_M                         0x60B2
#define P60_B3_DISP_M2_ONEF_DHF_L                         0x60B3
#define P60_B4_DISP_M2_ONEF_IHF                           0x60B4
#define P60_B5_DISP_M2_LINE_MAGN_L                        0x60B5
#define P60_B6_DISP_M2_ONEF_MAGN_H                        0x60B6
#define P60_B7_DISP_M2_ONEF_MAGN_L                        0x60B7
#define P60_C0_DISP_M2_BIST_CTRL                          0x60C0
#define P60_C1_DISP_M2_DRF_BIST_CTRL                      0x60C1
#define P60_C2_ADC_TEST                                   0x60C2
#define P60_C3_DISP_M2_NEW_FIFO_CRC_CTRL                  0x60C3
#define P60_C4_DISP_M2_NEW_FIFO_CRC1                      0x60C4
#define P60_C5_DISP_M2_NEW_FIFO_CRC2                      0x60C5
#define P60_C6_DISP_M2_NEW_FIFO_CRC3                      0x60C6
#define P60_C7_DISP_M2_NEW_FIFO_CRC4                      0x60C7
#define P60_C8_DISP_M2_NEW_FIFO_CRC5                      0x60C8
#define P60_C9_DISP_M2_NEW_FIFO_CRC6                      0x60C9
#define P60_CA_ROT_DISP_M2_BLK_STRT_X_MSB                 0x60CA
#define P60_CB_ROT_DISP_M2_BLK_STRT_X_LSB                 0x60CB
#define P60_CC_ROT_DISP_M2_BLK_STRT_Y_MSB                 0x60CC
#define P60_CD_ROT_DISP_M2_BLK_STRT_Y_LSB                 0x60CD
#define P60_CE_ROT_DISP_M2_BLK_W                          0x60CE
#define P60_CF_ROT_DISP_M2_BLK_LR                         0x60CF
#define P60_D0_ROT_DISP_M2_CTRL1                          0x60D0
#define P60_D1_ROT_DISP_M2_GENERALPICT_NUM                0x60D1
#define P60_D2_ROT_DISP_M2_GENERALPICT_LEN                0x60D2
#define P60_D3_ROT_DISP_M2_GENERALPICT_REM                0x60D3
#define P60_D4_ROT_DISP_M2_PICT_FST_IDX                   0x60D4
#define P60_D5_ROT_DISP_M2_PICT_SEC_IDX                   0x60D5
#define P60_D6_ROT_DISP_M2_PICT_THI_IDX                   0x60D6
#define P60_D7_ROT_DISP_M2_PICT_FST_WID_H                 0x60D7
#define P60_D8_ROT_DISP_M2_PICT_FST_WID_L                 0x60D8
#define P60_D9_ROT_DISP_M2_PICT_NUM                       0x60D9
#define P60_DA_ROT_DISP_M2_AR_HEIGHT_H                    0x60DA
#define P60_DB_ROT_DISP_M2_AR_HEIGHT_L                    0x60DB


//--------------------------------------------------
// CBUS PHY (Page 67)
//--------------------------------------------------
#define P67_A0_CBUS_EN_0                                  0x67A0
#define P67_A1_CBUS_EN_1                                  0x67A1
#define P67_A2_CBUS_RES_AUTOK_0                           0x67A2
#define P67_A3_CBUS_RES_AUTOK_1                           0x67A3
#define P67_A4_CBUS_RES_AUTOK_2                           0x67A4
#define P67_A5_CBUS_RES_AUTOK_3                           0x67A5
#define P67_A6_CBUS_INPUT_CONTROL                         0x67A6
#define P67_A7_CBUS_OUTPUT_CONTROL_0                      0x67A7
#define P67_A8_CBUS_OUTPUT_CONTROL_1                      0x67A8


//--------------------------------------------------
// CBUS3 MAC (Page 68)
//--------------------------------------------------
#define P68_A0_CBUS_CTRL_00                               0x68A0
#define P68_A1_CBUS_CTRL_01                               0x68A1
#define P68_A2_CBUS_CTRL_02                               0x68A2
#define P68_A3_CBUS_CTRL_03                               0x68A3
#define P68_A4_CBUS_CTRL_04                               0x68A4
#define P68_A5_CBUS_CTRL_05                               0x68A5
#define P68_A6_CBUS_CTRL_06                               0x68A6
#define P68_A7_CBUS_CTRL_07                               0x68A7
#define P68_A8_CBUS_CTRL_08                               0x68A8
#define P68_A9_CBUS_CTRL_09                               0x68A9
#define P68_AA_CBUS_CTRL_0A                               0x68AA
#define P68_AB_CBUS_CTRL_0B                               0x68AB
#define P68_AC_CBUS_CTRL_0C                               0x68AC
#define P68_AD_CBUS_CTRL_0D                               0x68AD
#define P68_AE_CBUS_CTRL_0E                               0x68AE
#define P68_AF_CBUS_CTRL_0F                               0x68AF
#define P68_B0_CBUS_CTRL_10                               0x68B0
#define P68_B1_CBUS_CTRL_11                               0x68B1
#define P68_B2_CBUS_CTRL_12                               0x68B2
#define P68_B3_CBUS_CTRL_13                               0x68B3
#define P68_B4_CBUS_CTRL_14                               0x68B4
#define P68_B5_CBUS_CTRL_15                               0x68B5
#define P68_B6_CBUS_CTRL_16                               0x68B6
#define P68_B7_CBUS_CTRL_17                               0x68B7
#define P68_B8_CBUS_CTRL_18                               0x68B8
#define P68_BA_CBUS_CTRL_1A                               0x68BA
#define P68_BB_CBUS_CTRL_1B                               0x68BB
#define P68_BC_CBUS_CTRL_1C                               0x68BC
#define P68_BD_CBUS_CTRL_1D                               0x68BD
#define P68_BE_CBUS_CTRL_1E                               0x68BE
#define P68_BF_CBUS_CTRL_1F                               0x68BF
#define P68_C0_CBUS_CTRL_20                               0x68C0
#define P68_C1_CBUS_CTRL_21                               0x68C1
#define P68_C2_CBUS_CTRL_22                               0x68C2
#define P68_C3_CBUS_CTRL_23                               0x68C3
#define P68_C4_CBUS_CTRL_24                               0x68C4
#define P68_C5_CBUS_CTRL_25                               0x68C5
#define P68_C6_CBUS_CTRL_26                               0x68C6
#define P68_C8_CBUS_CTRL_28                               0x68C8
#define P68_C9_CBUS_CTRL_29                               0x68C9
#define P68_CA_CBUS_CTRL_2A                               0x68CA
#define P68_CB_CBUS_CTRL_2B                               0x68CB
#define P68_CC_CBUS_CTRL_2C                               0x68CC
#define P68_CD_CBUS_CTRL_2D                               0x68CD
#define P68_CE_CBUS_CTRL_2E                               0x68CE
#define P68_CF_CBUS_CTRL_2F                               0x68CF
#define P68_D0_CBUS_CTRL_30                               0x68D0
#define P68_D1_CBUS_CTRL_31                               0x68D1
#define P68_D2_CBUS_CTRL_32                               0x68D2
#define P68_D3_CBUS_CTRL_33                               0x68D3
#define P68_D4_CBUS_CTRL_34                               0x68D4
#define P68_D5_CBUS_CTRL_35                               0x68D5
#define P68_D6_CBUS_CTRL_36                               0x68D6
#define P68_D7_CBUS_CTRL_37                               0x68D7
#define P68_D8_CBUS_CTRL_38                               0x68D8
#define P68_D9_CBUS_CTRL_39                               0x68D9
#define P68_DA_CBUS_CTRL_3A                               0x68DA
#define P68_DB_CBUS_CTRL_3B                               0x68DB
#define P68_DC_CBUS_CTRL_3C                               0x68DC
#define P68_DD_CBUS_CTRL_3D                               0x68DD
#define P68_DE_CBUS_CTRL_3E                               0x68DE
#define P68_DF_CBUS_CTRL_3F                               0x68DF
#define P68_E0_CBUS_CTRL_40                               0x68E0
#define P68_E1_CBUS_CTRL_41                               0x68E1
#define P68_E2_CBUS_CTRL_42                               0x68E2
#define P68_E3_CBUS_CTRL_43                               0x68E3
#define P68_E4_CBUS_CTRL_44                               0x68E4
#define P68_E5_CBUS_CTRL_45                               0x68E5
#define P68_E6_CBUS_CTRL_46                               0x68E6
#define P68_E7_CBUS_CTRL_47                               0x68E7
#define P68_E8_CBUS_CTRL_48                               0x68E8
#define P68_E9_CBUS_CTRL_49                               0x68E9
#define P68_EA_CBUS_CTRL_4A                               0x68EA
#define P68_EB_CBUS_CTRL_4B                               0x68EB
#define P68_EC_CBUS_CTRL_4C                               0x68EC
#define P68_ED_CBUS_CTRL_4D                               0x68ED
#define P68_EE_CBUS_CTRL_4E                               0x68EE
#define P68_EF_CBUS_CTRL_4F                               0x68EF
#define P68_F0_CBUS_CTRL_50                               0x68F0
#define P68_F1_CBUS_CTRL_51                               0x68F1
#define P68_F2_CBUS_CTRL_52                               0x68F2
#define P68_F3_CBUS_CTRL_53                               0x68F3
#define P68_F4_CBUS_CTRL_54                               0x68F4
#define P68_F5_CBUS_CTRL_55                               0x68F5
#define P68_F6_CBUS_CTRL_56                               0x68F6
#define P68_F7_CBUS_CTRL_57                               0x68F7
#define P68_F8_CBUS_CTRL_58                               0x68F8
#define P68_F9_CBUS_CTRL_59                               0x68F9
#define P68_FA_CBUS_CTRL_5A                               0x68FA
#define P68_FB_CBUS_CTRL_5B                               0x68FB
#define P68_FC_CBUS_CTRL_5C                               0x68FC
#define P68_FD_CBUS_CTRL_5D                               0x68FD


//--------------------------------------------------
// CBUS4 MAC (Page 69)
//--------------------------------------------------
#define P69_A0_CBUS_CTRL_00                               0x69A0
#define P69_A1_CBUS_CTRL_01                               0x69A1
#define P69_A2_CBUS_CTRL_02                               0x69A2
#define P69_A3_CBUS_CTRL_03                               0x69A3
#define P69_A4_CBUS_CTRL_04                               0x69A4
#define P69_A5_CBUS_CTRL_05                               0x69A5
#define P69_A6_CBUS_CTRL_06                               0x69A6
#define P69_A7_CBUS_CTRL_07                               0x69A7
#define P69_A8_CBUS_CTRL_08                               0x69A8
#define P69_A9_CBUS_CTRL_09                               0x69A9
#define P69_AA_CBUS_CTRL_0A                               0x69AA
#define P69_AB_CBUS_CTRL_0B                               0x69AB
#define P69_AC_CBUS_CTRL_0C                               0x69AC
#define P69_AD_CBUS_CTRL_0D                               0x69AD
#define P69_AE_CBUS_CTRL_0E                               0x69AE
#define P69_AF_CBUS_CTRL_0F                               0x69AF
#define P69_B0_CBUS_CTRL_10                               0x69B0
#define P69_B1_CBUS_CTRL_11                               0x69B1
#define P69_B2_CBUS_CTRL_12                               0x69B2
#define P69_B3_CBUS_CTRL_13                               0x69B3
#define P69_B4_CBUS_CTRL_14                               0x69B4
#define P69_B5_CBUS_CTRL_15                               0x69B5
#define P69_B6_CBUS_CTRL_16                               0x69B6
#define P69_B7_CBUS_CTRL_17                               0x69B7
#define P69_B8_CBUS_CTRL_18                               0x69B8
#define P69_BA_CBUS_CTRL_1A                               0x69BA
#define P69_BB_CBUS_CTRL_1B                               0x69BB
#define P69_BC_CBUS_CTRL_1C                               0x69BC
#define P69_BD_CBUS_CTRL_1D                               0x69BD
#define P69_BE_CBUS_CTRL_1E                               0x69BE
#define P69_BF_CBUS_CTRL_1F                               0x69BF
#define P69_C0_CBUS_CTRL_20                               0x69C0
#define P69_C1_CBUS_CTRL_21                               0x69C1
#define P69_C2_CBUS_CTRL_22                               0x69C2
#define P69_C3_CBUS_CTRL_23                               0x69C3
#define P69_C4_CBUS_CTRL_24                               0x69C4
#define P69_C5_CBUS_CTRL_25                               0x69C5
#define P69_C6_CBUS_CTRL_26                               0x69C6
#define P69_C8_CBUS_CTRL_28                               0x69C8
#define P69_C9_CBUS_CTRL_29                               0x69C9
#define P69_CA_CBUS_CTRL_2A                               0x69CA
#define P69_CB_CBUS_CTRL_2B                               0x69CB
#define P69_CC_CBUS_CTRL_2C                               0x69CC
#define P69_CD_CBUS_CTRL_2D                               0x69CD
#define P69_CE_CBUS_CTRL_2E                               0x69CE
#define P69_CF_CBUS_CTRL_2F                               0x69CF
#define P69_D0_CBUS_CTRL_30                               0x69D0
#define P69_D1_CBUS_CTRL_31                               0x69D1
#define P69_D2_CBUS_CTRL_32                               0x69D2
#define P69_D3_CBUS_CTRL_33                               0x69D3
#define P69_D4_CBUS_CTRL_34                               0x69D4
#define P69_D5_CBUS_CTRL_35                               0x69D5
#define P69_D6_CBUS_CTRL_36                               0x69D6
#define P69_D7_CBUS_CTRL_37                               0x69D7
#define P69_D8_CBUS_CTRL_38                               0x69D8
#define P69_D9_CBUS_CTRL_39                               0x69D9
#define P69_DA_CBUS_CTRL_3A                               0x69DA
#define P69_DB_CBUS_CTRL_3B                               0x69DB
#define P69_DC_CBUS_CTRL_3C                               0x69DC
#define P69_DD_CBUS_CTRL_3D                               0x69DD
#define P69_DE_CBUS_CTRL_3E                               0x69DE
#define P69_DF_CBUS_CTRL_3F                               0x69DF
#define P69_E0_CBUS_CTRL_40                               0x69E0
#define P69_E1_CBUS_CTRL_41                               0x69E1
#define P69_E2_CBUS_CTRL_42                               0x69E2
#define P69_E3_CBUS_CTRL_43                               0x69E3
#define P69_E4_CBUS_CTRL_44                               0x69E4
#define P69_E5_CBUS_CTRL_45                               0x69E5
#define P69_E6_CBUS_CTRL_46                               0x69E6
#define P69_E7_CBUS_CTRL_47                               0x69E7
#define P69_E8_CBUS_CTRL_48                               0x69E8
#define P69_E9_CBUS_CTRL_49                               0x69E9
#define P69_EA_CBUS_CTRL_4A                               0x69EA
#define P69_EB_CBUS_CTRL_4B                               0x69EB
#define P69_EC_CBUS_CTRL_4C                               0x69EC
#define P69_ED_CBUS_CTRL_4D                               0x69ED
#define P69_EE_CBUS_CTRL_4E                               0x69EE
#define P69_EF_CBUS_CTRL_4F                               0x69EF
#define P69_F0_CBUS_CTRL_50                               0x69F0
#define P69_F1_CBUS_CTRL_51                               0x69F1
#define P69_F2_CBUS_CTRL_52                               0x69F2
#define P69_F3_CBUS_CTRL_53                               0x69F3
#define P69_F4_CBUS_CTRL_54                               0x69F4
#define P69_F5_CBUS_CTRL_55                               0x69F5
#define P69_F6_CBUS_CTRL_56                               0x69F6
#define P69_F7_CBUS_CTRL_57                               0x69F7
#define P69_F8_CBUS_CTRL_58                               0x69F8
#define P69_F9_CBUS_CTRL_59                               0x69F9
#define P69_FA_CBUS_CTRL_5A                               0x69FA
#define P69_FB_CBUS_CTRL_5B                               0x69FB
#define P69_FC_CBUS_CTRL_5C                               0x69FC
#define P69_FD_CBUS_CTRL_5D                               0x69FD


//--------------------------------------------------
// CBUS5 MAC (Page 6A)
//--------------------------------------------------
#define P6A_A0_CBUS_CTRL_00                               0x6AA0
#define P6A_A1_CBUS_CTRL_01                               0x6AA1
#define P6A_A2_CBUS_CTRL_02                               0x6AA2
#define P6A_A3_CBUS_CTRL_03                               0x6AA3
#define P6A_A4_CBUS_CTRL_04                               0x6AA4
#define P6A_A5_CBUS_CTRL_05                               0x6AA5
#define P6A_A6_CBUS_CTRL_06                               0x6AA6
#define P6A_A7_CBUS_CTRL_07                               0x6AA7
#define P6A_A8_CBUS_CTRL_08                               0x6AA8
#define P6A_A9_CBUS_CTRL_09                               0x6AA9
#define P6A_AA_CBUS_CTRL_0A                               0x6AAA
#define P6A_AB_CBUS_CTRL_0B                               0x6AAB
#define P6A_AC_CBUS_CTRL_0C                               0x6AAC
#define P6A_AD_CBUS_CTRL_0D                               0x6AAD
#define P6A_AE_CBUS_CTRL_0E                               0x6AAE
#define P6A_AF_CBUS_CTRL_0F                               0x6AAF
#define P6A_B0_CBUS_CTRL_10                               0x6AB0
#define P6A_B1_CBUS_CTRL_11                               0x6AB1
#define P6A_B2_CBUS_CTRL_12                               0x6AB2
#define P6A_B3_CBUS_CTRL_13                               0x6AB3
#define P6A_B4_CBUS_CTRL_14                               0x6AB4
#define P6A_B5_CBUS_CTRL_15                               0x6AB5
#define P6A_B6_CBUS_CTRL_16                               0x6AB6
#define P6A_B7_CBUS_CTRL_17                               0x6AB7
#define P6A_B8_CBUS_CTRL_18                               0x6AB8
#define P6A_BA_CBUS_CTRL_1A                               0x6ABA
#define P6A_BB_CBUS_CTRL_1B                               0x6ABB
#define P6A_BC_CBUS_CTRL_1C                               0x6ABC
#define P6A_BD_CBUS_CTRL_1D                               0x6ABD
#define P6A_BE_CBUS_CTRL_1E                               0x6ABE
#define P6A_BF_CBUS_CTRL_1F                               0x6ABF
#define P6A_C0_CBUS_CTRL_20                               0x6AC0
#define P6A_C1_CBUS_CTRL_21                               0x6AC1
#define P6A_C2_CBUS_CTRL_22                               0x6AC2
#define P6A_C3_CBUS_CTRL_23                               0x6AC3
#define P6A_C4_CBUS_CTRL_24                               0x6AC4
#define P6A_C5_CBUS_CTRL_25                               0x6AC5
#define P6A_C6_CBUS_CTRL_26                               0x6AC6
#define P6A_C8_CBUS_CTRL_28                               0x6AC8
#define P6A_C9_CBUS_CTRL_29                               0x6AC9
#define P6A_CA_CBUS_CTRL_2A                               0x6ACA
#define P6A_CB_CBUS_CTRL_2B                               0x6ACB
#define P6A_CC_CBUS_CTRL_2C                               0x6ACC
#define P6A_CD_CBUS_CTRL_2D                               0x6ACD
#define P6A_CE_CBUS_CTRL_2E                               0x6ACE
#define P6A_CF_CBUS_CTRL_2F                               0x6ACF
#define P6A_D0_CBUS_CTRL_30                               0x6AD0
#define P6A_D1_CBUS_CTRL_31                               0x6AD1
#define P6A_D2_CBUS_CTRL_32                               0x6AD2
#define P6A_D3_CBUS_CTRL_33                               0x6AD3
#define P6A_D4_CBUS_CTRL_34                               0x6AD4
#define P6A_D5_CBUS_CTRL_35                               0x6AD5
#define P6A_D6_CBUS_CTRL_36                               0x6AD6
#define P6A_D7_CBUS_CTRL_37                               0x6AD7
#define P6A_D8_CBUS_CTRL_38                               0x6AD8
#define P6A_D9_CBUS_CTRL_39                               0x6AD9
#define P6A_DA_CBUS_CTRL_3A                               0x6ADA
#define P6A_DB_CBUS_CTRL_3B                               0x6ADB
#define P6A_DC_CBUS_CTRL_3C                               0x6ADC
#define P6A_DD_CBUS_CTRL_3D                               0x6ADD
#define P6A_DE_CBUS_CTRL_3E                               0x6ADE
#define P6A_DF_CBUS_CTRL_3F                               0x6ADF
#define P6A_E0_CBUS_CTRL_40                               0x6AE0
#define P6A_E1_CBUS_CTRL_41                               0x6AE1
#define P6A_E2_CBUS_CTRL_42                               0x6AE2
#define P6A_E3_CBUS_CTRL_43                               0x6AE3
#define P6A_E4_CBUS_CTRL_44                               0x6AE4
#define P6A_E5_CBUS_CTRL_45                               0x6AE5
#define P6A_E6_CBUS_CTRL_46                               0x6AE6
#define P6A_E7_CBUS_CTRL_47                               0x6AE7
#define P6A_E8_CBUS_CTRL_48                               0x6AE8
#define P6A_E9_CBUS_CTRL_49                               0x6AE9
#define P6A_EA_CBUS_CTRL_4A                               0x6AEA
#define P6A_EB_CBUS_CTRL_4B                               0x6AEB
#define P6A_EC_CBUS_CTRL_4C                               0x6AEC
#define P6A_ED_CBUS_CTRL_4D                               0x6AED
#define P6A_EE_CBUS_CTRL_4E                               0x6AEE
#define P6A_EF_CBUS_CTRL_4F                               0x6AEF
#define P6A_F0_CBUS_CTRL_50                               0x6AF0
#define P6A_F1_CBUS_CTRL_51                               0x6AF1
#define P6A_F2_CBUS_CTRL_52                               0x6AF2
#define P6A_F3_CBUS_CTRL_53                               0x6AF3
#define P6A_F4_CBUS_CTRL_54                               0x6AF4
#define P6A_F5_CBUS_CTRL_55                               0x6AF5
#define P6A_F6_CBUS_CTRL_56                               0x6AF6
#define P6A_F7_CBUS_CTRL_57                               0x6AF7
#define P6A_F8_CBUS_CTRL_58                               0x6AF8
#define P6A_F9_CBUS_CTRL_59                               0x6AF9
#define P6A_FA_CBUS_CTRL_5A                               0x6AFA
#define P6A_FB_CBUS_CTRL_5B                               0x6AFB
#define P6A_FC_CBUS_CTRL_5C                               0x6AFC
#define P6A_FD_CBUS_CTRL_5D                               0x6AFD


//--------------------------------------------------
// D4 Port GDI Deep Color PLL (Page 6D)
//--------------------------------------------------
#define P6D_A0_MN_SCLKG_CTRL                              0x6DA0
#define P6D_A1_MN_SCLKG_DIVM                              0x6DA1
#define P6D_A2_MN_SCLKG_DIVN                              0x6DA2
#define P6D_A3_MN_SCLKG_DIVS                              0x6DA3
#define P6D_A4_MN_SCLKG_OFFS_H                            0x6DA4
#define P6D_A5_MN_SCLKG_OFFS_M                            0x6DA5
#define P6D_A6_MN_SCLKG_OFFS_L                            0x6DA6
#define P6D_A7_MN_SCLKG_TRK_CTRL                          0x6DA7
#define P6D_B8_MN_SCLKG_SDM_CTRL                          0x6DB8
#define P6D_B9_MN_SCLKG_SDM_TEST                          0x6DB9
#define P6D_BA_MN_SCLKG_SDM_SUMC_H                        0x6DBA
#define P6D_BB_MN_SCLKG_SDM_SUMC_M                        0x6DBB
#define P6D_BC_MN_SCLKG_SDM_SUMC_L                        0x6DBC
#define P6D_BD_MN_SCLKG_PLL_PWR                           0x6DBD
#define P6D_BE_MN_SCLKG_PLL_CHP                           0x6DBE
#define P6D_BF_MN_SCLKG_PLL_WD                            0x6DBF
#define P6D_C0_MN_SCLKG_PLL_INSEL                         0x6DC0
#define P6D_C1_MN_SCLKG_PLL_RESERVE                       0x6DC1
#define P6D_C2_DUMMY_0                                    0x6DC2
#define P6D_C3_DUMMY_1                                    0x6DC3
#define P6D_C4_DUMMY_2                                    0x6DC4
#define P6D_C5_DUMMY_3                                    0x6DC5


//--------------------------------------------------
// D5 Port GDI Deep Color PLL(Page 6E)
//--------------------------------------------------
#define P6E_A0_MN_SCLKG_CTRL                              0x6EA0
#define P6E_A1_MN_SCLKG_DIVM                              0x6EA1
#define P6E_A2_MN_SCLKG_DIVN                              0x6EA2
#define P6E_A3_MN_SCLKG_DIVS                              0x6EA3
#define P6E_A4_MN_SCLKG_OFFS_H                            0x6EA4
#define P6E_A5_MN_SCLKG_OFFS_M                            0x6EA5
#define P6E_A6_MN_SCLKG_OFFS_L                            0x6EA6
#define P6E_A7_MN_SCLKG_TRK_CTRL                          0x6EA7
#define P6E_B8_MN_SCLKG_SDM_CTRL                          0x6EB8
#define P6E_B9_MN_SCLKG_SDM_TEST                          0x6EB9
#define P6E_BA_MN_SCLKG_SDM_SUMC_H                        0x6EBA
#define P6E_BB_MN_SCLKG_SDM_SUMC_M                        0x6EBB
#define P6E_BC_MN_SCLKG_SDM_SUMC_L                        0x6EBC
#define P6E_BD_MN_SCLKG_PLL_PWR                           0x6EBD
#define P6E_BE_MN_SCLKG_PLL_CHP                           0x6EBE
#define P6E_BF_MN_SCLKG_PLL_WD                            0x6EBF
#define P6E_C0_MN_SCLKG_PLL_INSEL                         0x6EC0
#define P6E_C1_MN_SCLKG_PLL_RESERVE                       0x6EC1
#define P6E_C2_DUMMY_0                                    0x6EC2
#define P6E_C3_DUMMY_1                                    0x6EC3
#define P6E_C4_DUMMY_2                                    0x6EC4
#define P6E_C5_DUMMY_3                                    0x6EC5


//--------------------------------------------------
// ADI Global Control (Page 6F)
//--------------------------------------------------
#define P6F_00_MUX_DIG_OUT                                0x6F00
#define P6F_01_MUX_DA_DVC_IN                              0x6F01
#define P6F_02_MUX_DP_I2S_IN                              0x6F02
#define P6F_03_MUX_TST_OUT                                0x6F03
#define P6F_04_CBUS0_MAP_DDC                              0x6F04
#define P6F_05_CBUS1_MAP_DDC                              0x6F05
#define P6F_06_CBUS2_MAP_DDC                              0x6F06
#define P6F_07_CBUS3_MAP_DDC                              0x6F07
#define P6F_08_SPI_MAP_CBUS                               0x6F08
#define P6F_10_ADI_IRQ_CTRL                               0x6F10


//--------------------------------------------------
// HDMI2.0 Function (Page 70)
//--------------------------------------------------
#define P70_00_HDMI_CTRL_00                               0x7000
#define P70_01_HDMI_CTRL_01                               0x7001
#define P70_02_HDMI_CTRL_02                               0x7002
#define P70_03_HDMI_CTRL_03                               0x7003
#define P70_04_HDMI_CTRL_04                               0x7004
#define P70_05_HDMI_CTRL_05                               0x7005
#define P70_06_HDMI_CTRL_06                               0x7006
#define P70_07_HDMI_CTRL_07                               0x7007
#define P70_08_HDMI_CTRL_08                               0x7008
#define P70_0B_HDMI_CTRL_0B                               0x700B
#define P70_0C_HDMI_CTRL_0C                               0x700C
#define P70_0D_HDMI_CTRL_0D                               0x700D
#define P70_0E_HDMI_CTRL_0E                               0x700E
#define P70_0F_HDMI_CTRL_0F                               0x700F
#define P70_10_HDMI_CTRL_10                               0x7010
#define P70_11_HDMI_CTRL_11                               0x7011
#define P70_12_HDMI_CTRL_12                               0x7012
#define P70_13_HDMI_CTRL_13                               0x7013
#define P70_14_HDMI_CTRL_14                               0x7014
#define P70_15_HDMI_CTRL_15                               0x7015
#define P70_16_HDMI_CTRL_16                               0x7016
#define P70_17_HDMI_CTRL_17                               0x7017
#define P70_18_HDMI_CTRL_18                               0x7018
#define P70_19_HDMI_CTRL_19                               0x7019
#define P70_1A_HDMI_CTRL_1A                               0x701A
#define P70_1B_HDMI_CTRL_1B                               0x701B
#define P70_1C_HDMI_CTRL_1C                               0x701C
#define P70_1D_HDMI_CTRL_1D                               0x701D
#define P70_1E_HDMI_CTRL_1E                               0x701E
#define P70_1F_HDMI_CTRL_1F                               0x701F
#define P70_20_HDMI_CTRL_20                               0x7020
#define P70_21_HDMI_CTRL_21                               0x7021
#define P70_22_HDMI_CTRL_22                               0x7022
#define P70_23_HDMI_CTRL_23                               0x7023
#define P70_24_HDMI_CTRL_24                               0x7024
#define P70_25_HDMI_CTRL_25                               0x7025
#define P70_26_HDMI_CTRL_26                               0x7026
#define P70_27_HDMI_CTRL_27                               0x7027
#define P70_28_HDMI_CTRL_28                               0x7028
#define P70_29_HDMI_CTRL_29                               0x7029
#define P70_2A_HDMI_CTRL_2A                               0x702A
#define P70_2B_HDMI_CTRL_2B                               0x702B
#define P70_2C_HDMI_CTRL_2C                               0x702C
#define P70_2D_HDMI_CTRL_2D                               0x702D
#define P70_2E_HDMI_CTRL_2E                               0x702E
#define P70_38_HDMI_CTRL_38                               0x7038
#define P70_39_HDMI_CTRL_39                               0x7039
#define P70_3A_HDMI_CTRL_3A                               0x703A
#define P70_40_HDMI_PCK_40                                0x7040
#define P70_41_HDMI_PCK_41                                0x7041
#define P70_42_HDMI_PCK_42                                0x7042
#define P70_43_HDMI_PCK_43                                0x7043
#define P70_44_HDMI_PCK_44                                0x7044
#define P70_45_HDMI_PCK_45                                0x7045
#define P70_46_HDMI_PCK_46                                0x7046
#define P70_47_HDMI_PCK_47                                0x7047
#define P70_48_HDMI_PCK_48                                0x7048
#define P70_49_HDMI_20_49                                 0x7049
#define P70_50_HDMI_20_50                                 0x7050
#define P70_51_HDMI_20_51                                 0x7051
#define P70_A1_TMDS_MSR                                   0x70A1
#define P70_A2_TMDS_MRR0                                  0x70A2
#define P70_A3_TMDS_MRR1                                  0x70A3
#define P70_A4_TMDS_CTRL                                  0x70A4
#define P70_A5_TMDS_CRCOB2                                0x70A5
#define P70_A6_TMDS_OUTCTL                                0x70A6
#define P70_A7_TMDS_PWDCTL                                0x70A7
#define P70_A8_TMDS_ACC0                                  0x70A8
#define P70_A9_TMDS_ABC0                                  0x70A9
#define P70_AA_TMDS_ABC1                                  0x70AA
#define P70_AB_TMDS_ACC2                                  0x70AB
#define P70_AC_TMDS_Z0CC2                                 0x70AC
#define P70_AD_TMDS_CPS                                   0x70AD
#define P70_AE_TMDS_RPS                                   0x70AE
#define P70_AF_TMDS_WDC                                   0x70AF
#define P70_B0_TMDS_CHANNEL_FIFO                          0x70B0
#define P70_B4_TMDS_DPC0                                  0x70B4
#define P70_B5_TMDS_UDC0                                  0x70B5
#define P70_B6_TMDS_UDC1                                  0x70B6
#define P70_B7_TMDS_UDC2                                  0x70B7
#define P70_B8_TMDS_DPC1                                  0x70B8
#define P70_B9_TMDS_OUT_CTRL                              0x70B9
#define P70_BA_TMDS_ROUT_HIGH_BYTE                        0x70BA
#define P70_BB_TMDS_ROUT_LOW_BYTE                         0x70BB
#define P70_BC_TMDS_GOUT_HIGH_BYTE                        0x70BC
#define P70_BD_TMDS_GOUT_LOW_BYTE                         0x70BD
#define P70_BE_TMDS_BOUT_HIGH_BYTE                        0x70BE
#define P70_BF_TMDS_BOUT_LOW_BYTE                         0x70BF
#define P70_C0_HDCP_CR                                    0x70C0
#define P70_C1_HDCP_DKAP                                  0x70C1
#define P70_C2_HDCP_PCR                                   0x70C2
#define P70_C3_HDCP_AP                                    0x70C3
#define P70_C4_HDCP_DP                                    0x70C4
#define P70_C8_HDMI_APC                                   0x70C8
#define P70_C9_HDMI_AP                                    0x70C9
#define P70_CA_HDMI_DP                                    0x70CA
#define P70_CB_HDMI_SR                                    0x70CB
#define P70_CC_HDMI_GPVS                                  0x70CC
#define P70_CD_HDMI_PSAP                                  0x70CD
#define P70_CE_HDMI_PSDP                                  0x70CE
#define P70_E0_AUX_PS_CTRL                                0x70E0
#define P70_E1_AUX_PS_REPLY                               0x70E1
#define P70_E6_HDMI_FREQDET_CTRL                          0x70E6
#define P70_E7_HDMI_FREQDET_OFFSET                        0x70E7
#define P70_E8_HDMI_FREQDET_UPPER_M                       0x70E8
#define P70_E9_HDMI_FREQDET_UPPER_L                       0x70E9
#define P70_EA_HDMI_FREQDET_LOWER_M                       0x70EA
#define P70_EB_HDMI_FREQDET_LOWER_L                       0x70EB
#define P70_EC_HDMI_FREQDET_STABLE                        0x70EC
#define P70_ED_HDMI_FREQDET_RESULT_M                      0x70ED
#define P70_EE_HDMI_FREQDET_RESULT_L                      0x70EE
#define P70_EF_HDMI_ERROR_TH                              0x70EF
#define P70_F6_HDMI_FREQDET_BOUND_H                       0x70F6
#define P70_F7_HDMI_FREQDET_RESULT_H                      0x70F7


//--------------------------------------------------
// D2 Port Overall HDMI System Function Block (Page 71)
//--------------------------------------------------
#define P71_00_HDMI_CTRL_00                               0x7100
#define P71_19_HDMI_CTRL_19                               0x7119
#define P71_A1_TMDS_MSR                                   0x71A1
#define P71_A2_TMDS_MRR0                                  0x71A2
#define P71_A3_TMDS_MRR1                                  0x71A3
#define P71_A4_TMDS_CTRL                                  0x71A4
#define P71_A5_TMDS_CRCOB2                                0x71A5
#define P71_A6_TMDS_OUTCTL                                0x71A6
#define P71_A7_TMDS_PWDCTL                                0x71A7
#define P71_A8_TMDS_ACC0                                  0x71A8
#define P71_A9_TMDS_ABC0                                  0x71A9
#define P71_AA_TMDS_ABC1                                  0x71AA
#define P71_AB_TMDS_ACC2                                  0x71AB
#define P71_AC_TMDS_Z0CC2                                 0x71AC
#define P71_AD_TMDS_CPS                                   0x71AD
#define P71_AE_TMDS_RPS                                   0x71AE
#define P71_AF_TMDS_WDC                                   0x71AF
#define P71_B0_TMDS_CHANNEL_FIFO                          0x71B0
#define P71_B4_TMDS_DPC0                                  0x71B4
#define P71_B5_TMDS_UDC0                                  0x71B5
#define P71_B6_TMDS_UDC1                                  0x71B6
#define P71_B7_TMDS_UDC2                                  0x71B7
#define P71_B8_TMDS_DPC1                                  0x71B8
#define P71_B9_TMDS_OUT_CTRL                              0x71B9
#define P71_BA_TMDS_ROUT_HIGH_BYTE                        0x71BA
#define P71_BB_TMDS_ROUT_LOW_BYTE                         0x71BB
#define P71_BC_TMDS_GOUT_HIGH_BYTE                        0x71BC
#define P71_BD_TMDS_GOUT_LOW_BYTE                         0x71BD
#define P71_BE_TMDS_BOUT_HIGH_BYTE                        0x71BE
#define P71_BF_TMDS_BOUT_LOW_BYTE                         0x71BF
#define P71_C0_HDCP_CR                                    0x71C0
#define P71_C1_HDCP_DKAP                                  0x71C1
#define P71_C2_HDCP_PCR                                   0x71C2
#define P71_C3_HDCP_AP                                    0x71C3
#define P71_C4_HDCP_DP                                    0x71C4
#define P71_C8_HDMI_APC                                   0x71C8
#define P71_C9_HDMI_AP                                    0x71C9
#define P71_CA_HDMI_DP                                    0x71CA
#define P71_CB_HDMI_SR                                    0x71CB
#define P71_CC_HDMI_GPVS                                  0x71CC
#define P71_CD_HDMI_PSAP                                  0x71CD
#define P71_CE_HDMI_PSDP                                  0x71CE
#define P71_E0_AUX_PS_CTRL                                0x71E0
#define P71_E1_AUX_PS_REPLY                               0x71E1
#define P71_E6_HDMI_FREQDET_CTRL                          0x71E6
#define P71_E7_HDMI_FREQDET_OFFSET                        0x71E7
#define P71_E8_HDMI_FREQDET_UPPER_M                       0x71E8
#define P71_E9_HDMI_FREQDET_UPPER_L                       0x71E9
#define P71_EA_HDMI_FREQDET_LOWER_M                       0x71EA
#define P71_EB_HDMI_FREQDET_LOWER_L                       0x71EB
#define P71_EC_HDMI_FREQDET_STABLE                        0x71EC
#define P71_ED_HDMI_FREQDET_RESULT_M                      0x71ED
#define P71_EE_HDMI_FREQDET_RESULT_L                      0x71EE
#define P71_EF_HDMI_ERROR_TH                              0x71EF
#define P71_F6_HDMI_FREQDET_BOUND_H                       0x71F6
#define P71_F7_HDMI_FREQDET_RESULT_H                      0x71F7


//--------------------------------------------------
// D3 Port Overall HDMI System Function Block (Page 72)
//--------------------------------------------------
#define P72_00_HDMI_CTRL_00                               0x7200
#define P72_19_HDMI_CTRL_19                               0x7219
#define P72_A1_TMDS_MSR                                   0x72A1
#define P72_A2_TMDS_MRR0                                  0x72A2
#define P72_A3_TMDS_MRR1                                  0x72A3
#define P72_A4_TMDS_CTRL                                  0x72A4
#define P72_A5_TMDS_CRCOB2                                0x72A5
#define P72_A6_TMDS_OUTCTL                                0x72A6
#define P72_A7_TMDS_PWDCTL                                0x72A7
#define P72_A8_TMDS_ACC0                                  0x72A8
#define P72_A9_TMDS_ABC0                                  0x72A9
#define P72_AA_TMDS_ABC1                                  0x72AA
#define P72_AB_TMDS_ACC2                                  0x72AB
#define P72_AC_TMDS_Z0CC2                                 0x72AC
#define P72_AD_TMDS_CPS                                   0x72AD
#define P72_AE_TMDS_RPS                                   0x72AE
#define P72_AF_TMDS_WDC                                   0x72AF
#define P72_B0_TMDS_CHANNEL_FIFO                          0x72B0
#define P72_B4_TMDS_DPC0                                  0x72B4
#define P72_B5_TMDS_UDC0                                  0x72B5
#define P72_B6_TMDS_UDC1                                  0x72B6
#define P72_B7_TMDS_UDC2                                  0x72B7
#define P72_B8_TMDS_DPC1                                  0x72B8
#define P72_B9_TMDS_OUT_CTRL                              0x72B9
#define P72_BA_TMDS_ROUT_HIGH_BYTE                        0x72BA
#define P72_BB_TMDS_ROUT_LOW_BYTE                         0x72BB
#define P72_BC_TMDS_GOUT_HIGH_BYTE                        0x72BC
#define P72_BD_TMDS_GOUT_LOW_BYTE                         0x72BD
#define P72_BE_TMDS_BOUT_HIGH_BYTE                        0x72BE
#define P72_BF_TMDS_BOUT_LOW_BYTE                         0x72BF
#define P72_C0_HDCP_CR                                    0x72C0
#define P72_C1_HDCP_DKAP                                  0x72C1
#define P72_C2_HDCP_PCR                                   0x72C2
#define P72_C3_HDCP_AP                                    0x72C3
#define P72_C4_HDCP_DP                                    0x72C4
#define P72_C8_HDMI_APC                                   0x72C8
#define P72_C9_HDMI_AP                                    0x72C9
#define P72_CA_HDMI_DP                                    0x72CA
#define P72_CB_HDMI_SR                                    0x72CB
#define P72_CC_HDMI_GPVS                                  0x72CC
#define P72_CD_HDMI_PSAP                                  0x72CD
#define P72_CE_HDMI_PSDP                                  0x72CE
#define P72_E0_AUX_PS_CTRL                                0x72E0
#define P72_E1_AUX_PS_REPLY                               0x72E1
#define P72_E6_HDMI_FREQDET_CTRL                          0x72E6
#define P72_E7_HDMI_FREQDET_OFFSET                        0x72E7
#define P72_E8_HDMI_FREQDET_UPPER_M                       0x72E8
#define P72_E9_HDMI_FREQDET_UPPER_L                       0x72E9
#define P72_EA_HDMI_FREQDET_LOWER_M                       0x72EA
#define P72_EB_HDMI_FREQDET_LOWER_L                       0x72EB
#define P72_EC_HDMI_FREQDET_STABLE                        0x72EC
#define P72_ED_HDMI_FREQDET_RESULT_M                      0x72ED
#define P72_EE_HDMI_FREQDET_RESULT_L                      0x72EE
#define P72_EF_HDMI_ERROR_TH                              0x72EF
#define P72_F6_HDMI_FREQDET_BOUND_H                       0x72F6
#define P72_F7_HDMI_FREQDET_RESULT_H                      0x72F7


//--------------------------------------------------
// D4 Port Overall HDMI System Function Block (Page 73)
//--------------------------------------------------
#define P73_00_HDMI_CTRL_00                               0x7300
#define P73_19_HDMI_CTRL_19                               0x7319
#define P73_A1_TMDS_MSR                                   0x73A1
#define P73_A2_TMDS_MRR0                                  0x73A2
#define P73_A3_TMDS_MRR1                                  0x73A3
#define P73_A4_TMDS_CTRL                                  0x73A4
#define P73_A5_TMDS_CRCOB2                                0x73A5
#define P73_A6_TMDS_OUTCTL                                0x73A6
#define P73_A7_TMDS_PWDCTL                                0x73A7
#define P73_A8_TMDS_ACC0                                  0x73A8
#define P73_A9_TMDS_ABC0                                  0x73A9
#define P73_AA_TMDS_ABC1                                  0x73AA
#define P73_AB_TMDS_ACC2                                  0x73AB
#define P73_AC_TMDS_Z0CC2                                 0x73AC
#define P73_AD_TMDS_CPS                                   0x73AD
#define P73_AE_TMDS_RPS                                   0x73AE
#define P73_AF_TMDS_WDC                                   0x73AF
#define P73_B0_TMDS_CHANNEL_FIFO                          0x73B0
#define P73_B4_TMDS_DPC0                                  0x73B4
#define P73_B5_TMDS_UDC0                                  0x73B5
#define P73_B6_TMDS_UDC1                                  0x73B6
#define P73_B7_TMDS_UDC2                                  0x73B7
#define P73_B8_TMDS_DPC1                                  0x73B8
#define P73_B9_TMDS_OUT_CTRL                              0x73B9
#define P73_BA_TMDS_ROUT_HIGH_BYTE                        0x73BA
#define P73_BB_TMDS_ROUT_LOW_BYTE                         0x73BB
#define P73_BC_TMDS_GOUT_HIGH_BYTE                        0x73BC
#define P73_BD_TMDS_GOUT_LOW_BYTE                         0x73BD
#define P73_BE_TMDS_BOUT_HIGH_BYTE                        0x73BE
#define P73_BF_TMDS_BOUT_LOW_BYTE                         0x73BF
#define P73_C0_HDCP_CR                                    0x73C0
#define P73_C1_HDCP_DKAP                                  0x73C1
#define P73_C2_HDCP_PCR                                   0x73C2
#define P73_C3_HDCP_AP                                    0x73C3
#define P73_C4_HDCP_DP                                    0x73C4
#define P73_C8_HDMI_APC                                   0x73C8
#define P73_C9_HDMI_AP                                    0x73C9
#define P73_CA_HDMI_DP                                    0x73CA
#define P73_CB_HDMI_SR                                    0x73CB
#define P73_CC_HDMI_GPVS                                  0x73CC
#define P73_CD_HDMI_PSAP                                  0x73CD
#define P73_CE_HDMI_PSDP                                  0x73CE
#define P73_E0_AUX_PS_CTRL                                0x73E0
#define P73_E1_AUX_PS_REPLY                               0x73E1
#define P73_E6_HDMI_FREQDET_CTRL                          0x73E6
#define P73_E7_HDMI_FREQDET_OFFSET                        0x73E7
#define P73_E8_HDMI_FREQDET_UPPER_M                       0x73E8
#define P73_E9_HDMI_FREQDET_UPPER_L                       0x73E9
#define P73_EA_HDMI_FREQDET_LOWER_M                       0x73EA
#define P73_EB_HDMI_FREQDET_LOWER_L                       0x73EB
#define P73_EC_HDMI_FREQDET_STABLE                        0x73EC
#define P73_ED_HDMI_FREQDET_RESULT_M                      0x73ED
#define P73_EE_HDMI_FREQDET_RESULT_L                      0x73EE
#define P73_EF_HDMI_ERROR_TH                              0x73EF
#define P73_F6_HDMI_FREQDET_BOUND_H                       0x73F6
#define P73_F7_HDMI_FREQDET_RESULT_H                      0x73F7


//--------------------------------------------------
// D5 Port Overall HDMI System Function Block (Page 74)
//--------------------------------------------------
#define P74_00_HDMI_CTRL_00                               0x7400
#define P74_19_HDMI_CTRL_19                               0x7419
#define P74_A1_TMDS_MSR                                   0x74A1
#define P74_A2_TMDS_MRR0                                  0x74A2
#define P74_A3_TMDS_MRR1                                  0x74A3
#define P74_A4_TMDS_CTRL                                  0x74A4
#define P74_A5_TMDS_CRCOB2                                0x74A5
#define P74_A6_TMDS_OUTCTL                                0x74A6
#define P74_A7_TMDS_PWDCTL                                0x74A7
#define P74_A8_TMDS_ACC0                                  0x74A8
#define P74_A9_TMDS_ABC0                                  0x74A9
#define P74_AA_TMDS_ABC1                                  0x74AA
#define P74_AB_TMDS_ACC2                                  0x74AB
#define P74_AC_TMDS_Z0CC2                                 0x74AC
#define P74_AD_TMDS_CPS                                   0x74AD
#define P74_AE_TMDS_RPS                                   0x74AE
#define P74_AF_TMDS_WDC                                   0x74AF
#define P74_B0_TMDS_CHANNEL_FIFO                          0x74B0
#define P74_B4_TMDS_DPC0                                  0x74B4
#define P74_B5_TMDS_UDC0                                  0x74B5
#define P74_B6_TMDS_UDC1                                  0x74B6
#define P74_B7_TMDS_UDC2                                  0x74B7
#define P74_B8_TMDS_DPC1                                  0x74B8
#define P74_B9_TMDS_OUT_CTRL                              0x74B9
#define P74_BA_TMDS_ROUT_HIGH_BYTE                        0x74BA
#define P74_BB_TMDS_ROUT_LOW_BYTE                         0x74BB
#define P74_BC_TMDS_GOUT_HIGH_BYTE                        0x74BC
#define P74_BD_TMDS_GOUT_LOW_BYTE                         0x74BD
#define P74_BE_TMDS_BOUT_HIGH_BYTE                        0x74BE
#define P74_BF_TMDS_BOUT_LOW_BYTE                         0x74BF
#define P74_C0_HDCP_CR                                    0x74C0
#define P74_C1_HDCP_DKAP                                  0x74C1
#define P74_C2_HDCP_PCR                                   0x74C2
#define P74_C3_HDCP_AP                                    0x74C3
#define P74_C4_HDCP_DP                                    0x74C4
#define P74_C8_HDMI_APC                                   0x74C8
#define P74_C9_HDMI_AP                                    0x74C9
#define P74_CA_HDMI_DP                                    0x74CA
#define P74_CB_HDMI_SR                                    0x74CB
#define P74_CC_HDMI_GPVS                                  0x74CC
#define P74_CD_HDMI_PSAP                                  0x74CD
#define P74_CE_HDMI_PSDP                                  0x74CE
#define P74_E0_AUX_PS_CTRL                                0x74E0
#define P74_E1_AUX_PS_REPLY                               0x74E1
#define P74_E6_HDMI_FREQDET_CTRL                          0x74E6
#define P74_E7_HDMI_FREQDET_OFFSET                        0x74E7
#define P74_E8_HDMI_FREQDET_UPPER_M                       0x74E8
#define P74_E9_HDMI_FREQDET_UPPER_L                       0x74E9
#define P74_EA_HDMI_FREQDET_LOWER_M                       0x74EA
#define P74_EB_HDMI_FREQDET_LOWER_L                       0x74EB
#define P74_EC_HDMI_FREQDET_STABLE                        0x74EC
#define P74_ED_HDMI_FREQDET_RESULT_M                      0x74ED
#define P74_EE_HDMI_FREQDET_RESULT_L                      0x74EE
#define P74_EF_HDMI_ERROR_TH                              0x74EF
#define P74_F6_HDMI_FREQDET_BOUND_H                       0x74F6
#define P74_F7_HDMI_FREQDET_RESULT_H                      0x74F7


//--------------------------------------------------
// MHL MAC (Page 75)
//--------------------------------------------------
#define P75_A0_MHL_CTRL_00                                0x75A0
#define P75_A1_MHL_CTRL_01                                0x75A1
#define P75_A2_MHL_CTRL_02                                0x75A2
#define P75_A3_MHL_CTRL_03                                0x75A3
#define P75_A4_MHL_CTRL_04                                0x75A4
#define P75_A5_MHL_CTRL_05                                0x75A5
#define P75_A6_MHL_CTRL_06                                0x75A6
#define P75_A7_MHL_CTRL_07                                0x75A7
#define P75_A8_MHL_CTRL_08                                0x75A8
#define P75_A9_MHL_CTRL_09                                0x75A9
#define P75_AA_MHL_CTRL_0A                                0x75AA
#define P75_AB_MHL_CTRL_0B                                0x75AB
#define P75_AC_MHL_CTRL_0C                                0x75AC
#define P75_AD_MHL_CTRL_0D                                0x75AD
#define P75_AE_MHL_CTRL_0E                                0x75AE
#define P75_AF_MHL_CTRL_0F                                0x75AF
#define P75_B0_MHL_CTRL_10                                0x75B0
#define P75_B1_MHL_CTRL_11                                0x75B1
#define P75_B2_MHL_CTRL_12                                0x75B2
#define P75_B3_MHL_CTRL_13                                0x75B3
#define P75_B4_MHL_CTRL_14                                0x75B4
#define P75_B5_MHL_CTRL_15                                0x75B5
#define P75_B6_MHL_CTRL_16                                0x75B6


//--------------------------------------------------
// MHL MAC (Page 76)
//--------------------------------------------------
#define P76_A0_MHL_CTRL_00                                0x76A0
#define P76_A1_MHL_CTRL_01                                0x76A1
#define P76_A2_MHL_CTRL_02                                0x76A2
#define P76_A3_MHL_CTRL_03                                0x76A3
#define P76_A4_MHL_CTRL_04                                0x76A4
#define P76_A5_MHL_CTRL_05                                0x76A5
#define P76_A6_MHL_CTRL_06                                0x76A6
#define P76_A7_MHL_CTRL_07                                0x76A7
#define P76_A8_MHL_CTRL_08                                0x76A8
#define P76_A9_MHL_CTRL_09                                0x76A9
#define P76_AA_MHL_CTRL_0A                                0x76AA
#define P76_AB_MHL_CTRL_0B                                0x76AB
#define P76_AC_MHL_CTRL_0C                                0x76AC
#define P76_AD_MHL_CTRL_0D                                0x76AD
#define P76_AE_MHL_CTRL_0E                                0x76AE
#define P76_AF_MHL_CTRL_0F                                0x76AF
#define P76_B0_MHL_CTRL_10                                0x76B0
#define P76_B1_MHL_CTRL_11                                0x76B1
#define P76_B2_MHL_CTRL_12                                0x76B2
#define P76_B3_MHL_CTRL_13                                0x76B3
#define P76_B4_MHL_CTRL_14                                0x76B4
#define P76_B5_MHL_CTRL_15                                0x76B5
#define P76_B6_MHL_CTRL_16                                0x76B6


//--------------------------------------------------
// MHL MAC (Page 77)
//--------------------------------------------------
#define P77_A0_MHL_CTRL_00                                0x77A0
#define P77_A1_MHL_CTRL_01                                0x77A1
#define P77_A2_MHL_CTRL_02                                0x77A2
#define P77_A3_MHL_CTRL_03                                0x77A3
#define P77_A4_MHL_CTRL_04                                0x77A4
#define P77_A5_MHL_CTRL_05                                0x77A5
#define P77_A6_MHL_CTRL_06                                0x77A6
#define P77_A7_MHL_CTRL_07                                0x77A7
#define P77_A8_MHL_CTRL_08                                0x77A8
#define P77_A9_MHL_CTRL_09                                0x77A9
#define P77_AA_MHL_CTRL_0A                                0x77AA
#define P77_AB_MHL_CTRL_0B                                0x77AB
#define P77_AC_MHL_CTRL_0C                                0x77AC
#define P77_AD_MHL_CTRL_0D                                0x77AD
#define P77_AE_MHL_CTRL_0E                                0x77AE
#define P77_AF_MHL_CTRL_0F                                0x77AF
#define P77_B0_MHL_CTRL_10                                0x77B0
#define P77_B1_MHL_CTRL_11                                0x77B1
#define P77_B2_MHL_CTRL_12                                0x77B2
#define P77_B3_MHL_CTRL_13                                0x77B3
#define P77_B4_MHL_CTRL_14                                0x77B4
#define P77_B5_MHL_CTRL_15                                0x77B5
#define P77_B6_MHL_CTRL_16                                0x77B6


//--------------------------------------------------
// MHL MAC (Page 78)
//--------------------------------------------------
#define P78_A0_MHL_CTRL_00                                0x78A0
#define P78_A1_MHL_CTRL_01                                0x78A1
#define P78_A2_MHL_CTRL_02                                0x78A2
#define P78_A3_MHL_CTRL_03                                0x78A3
#define P78_A4_MHL_CTRL_04                                0x78A4
#define P78_A5_MHL_CTRL_05                                0x78A5
#define P78_A6_MHL_CTRL_06                                0x78A6
#define P78_A7_MHL_CTRL_07                                0x78A7
#define P78_A8_MHL_CTRL_08                                0x78A8
#define P78_A9_MHL_CTRL_09                                0x78A9
#define P78_AA_MHL_CTRL_0A                                0x78AA
#define P78_AB_MHL_CTRL_0B                                0x78AB
#define P78_AC_MHL_CTRL_0C                                0x78AC
#define P78_AD_MHL_CTRL_0D                                0x78AD
#define P78_AE_MHL_CTRL_0E                                0x78AE
#define P78_AF_MHL_CTRL_0F                                0x78AF
#define P78_B0_MHL_CTRL_10                                0x78B0
#define P78_B1_MHL_CTRL_11                                0x78B1
#define P78_B2_MHL_CTRL_12                                0x78B2
#define P78_B3_MHL_CTRL_13                                0x78B3
#define P78_B4_MHL_CTRL_14                                0x78B4
#define P78_B5_MHL_CTRL_15                                0x78B5
#define P78_B6_MHL_CTRL_16                                0x78B6


//--------------------------------------------------
// MHL MAC (Page 79)
//--------------------------------------------------
#define P79_A0_MHL_CTRL_00                                0x79A0
#define P79_A1_MHL_CTRL_01                                0x79A1
#define P79_A2_MHL_CTRL_02                                0x79A2
#define P79_A3_MHL_CTRL_03                                0x79A3
#define P79_A4_MHL_CTRL_04                                0x79A4
#define P79_A5_MHL_CTRL_05                                0x79A5
#define P79_A6_MHL_CTRL_06                                0x79A6
#define P79_A7_MHL_CTRL_07                                0x79A7
#define P79_A8_MHL_CTRL_08                                0x79A8
#define P79_A9_MHL_CTRL_09                                0x79A9
#define P79_AA_MHL_CTRL_0A                                0x79AA
#define P79_AB_MHL_CTRL_0B                                0x79AB
#define P79_AC_MHL_CTRL_0C                                0x79AC
#define P79_AD_MHL_CTRL_0D                                0x79AD
#define P79_AE_MHL_CTRL_0E                                0x79AE
#define P79_AF_MHL_CTRL_0F                                0x79AF
#define P79_B0_MHL_CTRL_10                                0x79B0
#define P79_B1_MHL_CTRL_11                                0x79B1
#define P79_B2_MHL_CTRL_12                                0x79B2
#define P79_B3_MHL_CTRL_13                                0x79B3
#define P79_B4_MHL_CTRL_14                                0x79B4
#define P79_B5_MHL_CTRL_15                                0x79B5
#define P79_B6_MHL_CTRL_16                                0x79B6


//--------------------------------------------------
// GDI DFE (Page 7A)
//--------------------------------------------------
#define P7A_A0_L0_DFE_EN_1                                0x7AA0
#define P7A_A1_L0_DFE_EN_2                                0x7AA1
#define P7A_A2_L0_LIMIT_INIT                              0x7AA2
#define P7A_A3_L0_INIT_1                                  0x7AA3
#define P7A_A4_L0_INIT_2                                  0x7AA4
#define P7A_A5_L0_INIT_3                                  0x7AA5
#define P7A_A6_L0_INIT_4                                  0x7AA6
#define P7A_A7_L0_INIT_5                                  0x7AA7
#define P7A_A8_L0_INIT_6                                  0x7AA8
#define P7A_A9_L0_INIT_7                                  0x7AA9
#define P7A_AA_L0_INIT_8                                  0x7AAA
#define P7A_AB_L0_STABLE_FLAG                             0x7AAB
#define P7A_AC_L0_DFE_EN_3                                0x7AAC
#define P7A_AD_L0_INIT_9                                  0x7AAD
#define P7A_AE_L0_INIT_10                                 0x7AAE
#define P7A_AF_L0_GDI_DE                                  0x7AAF
#define P7A_B0_L1_DFE_EN_1                                0x7AB0
#define P7A_B1_L1_DFE_EN_2                                0x7AB1
#define P7A_B2_L1_LIMIT_INIT                              0x7AB2
#define P7A_B3_L1_INIT_1                                  0x7AB3
#define P7A_B4_L1_INIT_2                                  0x7AB4
#define P7A_B5_L1_INIT_3                                  0x7AB5
#define P7A_B6_L1_INIT_4                                  0x7AB6
#define P7A_B7_L1_INIT_5                                  0x7AB7
#define P7A_B8_L1_INIT_6                                  0x7AB8
#define P7A_B9_L1_INIT_7                                  0x7AB9
#define P7A_BA_L1_INIT_8                                  0x7ABA
#define P7A_BB_L1_STABLE_FLAG                             0x7ABB
#define P7A_BC_L1_DFE_EN_3                                0x7ABC
#define P7A_BD_L1_INIT_9                                  0x7ABD
#define P7A_BE_L1_INIT_10                                 0x7ABE
#define P7A_BF_L1_GDI_DE                                  0x7ABF
#define P7A_C0_L2_DFE_EN_1                                0x7AC0
#define P7A_C1_L2_DFE_EN_2                                0x7AC1
#define P7A_C2_L2_LIMIT_INIT                              0x7AC2
#define P7A_C3_L2_INIT_1                                  0x7AC3
#define P7A_C4_L2_INIT_2                                  0x7AC4
#define P7A_C5_L2_INIT_3                                  0x7AC5
#define P7A_C6_L2_INIT_4                                  0x7AC6
#define P7A_C7_L2_INIT_5                                  0x7AC7
#define P7A_C8_L2_INIT_6                                  0x7AC8
#define P7A_C9_L2_INIT_7                                  0x7AC9
#define P7A_CA_L2_INIT_8                                  0x7ACA
#define P7A_CB_L2_STABLE_FLAG                             0x7ACB
#define P7A_CC_L2_DFE_EN_3                                0x7ACC
#define P7A_CD_L2_INIT_9                                  0x7ACD
#define P7A_CE_L2_INIT_10                                 0x7ACE
#define P7A_CF_L2_GDI_DE                                  0x7ACF
#define P7A_D0_L3_DFE_EN_1                                0x7AD0
#define P7A_D1_L3_DFE_EN_2                                0x7AD1
#define P7A_D2_L3_LIMIT_INIT                              0x7AD2
#define P7A_D3_L3_INIT_1                                  0x7AD3
#define P7A_D4_L3_INIT_2                                  0x7AD4
#define P7A_D5_L3_INIT_3                                  0x7AD5
#define P7A_D6_L3_INIT_4                                  0x7AD6
#define P7A_D7_L3_INIT_5                                  0x7AD7
#define P7A_D8_L3_INIT_6                                  0x7AD8
#define P7A_D9_L3_INIT_7                                  0x7AD9
#define P7A_DA_L3_INIT_8                                  0x7ADA
#define P7A_DB_L3_STABLE_FLAG                             0x7ADB
#define P7A_DC_L3_DFE_EN_3                                0x7ADC
#define P7A_DD_L3_INIT_9                                  0x7ADD
#define P7A_DE_L3_INIT_10                                 0x7ADE
#define P7A_DF_L3_GDI_DE                                  0x7ADF
#define P7A_E0_MODE_TIMER                                 0x7AE0
#define P7A_E1_TIMER                                      0x7AE1
#define P7A_E2_GAIN_1                                     0x7AE2
#define P7A_E3_GAIN_2                                     0x7AE3
#define P7A_E4_GAIN_3                                     0x7AE4
#define P7A_E5_GAIN_4                                     0x7AE5
#define P7A_E6_LIMIT_1                                    0x7AE6
#define P7A_E7_LIMIT_2                                    0x7AE7
#define P7A_E8_LIMIT_3                                    0x7AE8
#define P7A_E9_LIMIT_4                                    0x7AE9
#define P7A_EA_LIMIT_5                                    0x7AEA
#define P7A_EB_LIMIT_6                                    0x7AEB
#define P7A_EC_LOOP_DIV_1                                 0x7AEC
#define P7A_ED_LOOP_DIV_2                                 0x7AED
#define P7A_EE_GRAY_DEC_1                                 0x7AEE
#define P7A_EF_RESET_1                                    0x7AEF
#define P7A_F0_COEF_1                                     0x7AF0
#define P7A_F1_COEF_2                                     0x7AF1
#define P7A_F2_COEF_3                                     0x7AF2
#define P7A_F3_COEF_4                                     0x7AF3
#define P7A_F4_LIMIT_7                                    0x7AF4
#define P7A_F5_LIMIT_8                                    0x7AF5
#define P7A_F6_LIMIT_9                                    0x7AF6
#define P7A_F7_GAIN_5                                     0x7AF7
#define P7A_F8_GRAY_DEC_2                                 0x7AF8
#define P7A_F9_LIMIT_10                                   0x7AF9
#define P7A_FA_GAIN_PREC                                  0x7AFA
#define P7A_FB_DEBUG                                      0x7AFB


//--------------------------------------------------
// GDI DFE (Page 7B)
//--------------------------------------------------
#define P7B_A0_L0_DFE_EN_1                                0x7BA0
#define P7B_A1_L0_DFE_EN_2                                0x7BA1
#define P7B_A2_L0_LIMIT_INIT                              0x7BA2
#define P7B_A3_L0_INIT_1                                  0x7BA3
#define P7B_A4_L0_INIT_2                                  0x7BA4
#define P7B_A5_L0_INIT_3                                  0x7BA5
#define P7B_A6_L0_INIT_4                                  0x7BA6
#define P7B_A7_L0_INIT_5                                  0x7BA7
#define P7B_A8_L0_INIT_6                                  0x7BA8
#define P7B_A9_L0_INIT_7                                  0x7BA9
#define P7B_AA_L0_INIT_8                                  0x7BAA
#define P7B_AB_L0_STABLE_FLAG                             0x7BAB
#define P7B_AF_L0_GDI_DE                                  0x7BAF
#define P7B_B0_L1_DFE_EN_1                                0x7BB0
#define P7B_B1_L1_DFE_EN_2                                0x7BB1
#define P7B_B2_L1_LIMIT_INIT                              0x7BB2
#define P7B_B3_L1_INIT_1                                  0x7BB3
#define P7B_B4_L1_INIT_2                                  0x7BB4
#define P7B_B5_L1_INIT_3                                  0x7BB5
#define P7B_B6_L1_INIT_4                                  0x7BB6
#define P7B_B7_L1_INIT_5                                  0x7BB7
#define P7B_B8_L1_INIT_6                                  0x7BB8
#define P7B_B9_L1_INIT_7                                  0x7BB9
#define P7B_BA_L1_INIT_8                                  0x7BBA
#define P7B_BB_L1_STABLE_FLAG                             0x7BBB
#define P7B_BF_L1_GDI_DE                                  0x7BBF
#define P7B_C0_L2_DFE_EN_1                                0x7BC0
#define P7B_C1_L2_DFE_EN_2                                0x7BC1
#define P7B_C2_L2_LIMIT_INIT                              0x7BC2
#define P7B_C3_L2_INIT_1                                  0x7BC3
#define P7B_C4_L2_INIT_2                                  0x7BC4
#define P7B_C5_L2_INIT_3                                  0x7BC5
#define P7B_C6_L2_INIT_4                                  0x7BC6
#define P7B_C7_L2_INIT_5                                  0x7BC7
#define P7B_C8_L2_INIT_6                                  0x7BC8
#define P7B_C9_L2_INIT_7                                  0x7BC9
#define P7B_CA_L2_INIT_8                                  0x7BCA
#define P7B_CB_L2_STABLE_FLAG                             0x7BCB
#define P7B_CF_L2_GDI_DE                                  0x7BCF
#define P7B_E0_MODE_TIMER                                 0x7BE0
#define P7B_E1_TIMER                                      0x7BE1
#define P7B_E2_GAIN_1                                     0x7BE2
#define P7B_E3_GAIN_2                                     0x7BE3
#define P7B_E4_GAIN_3                                     0x7BE4
#define P7B_E5_GAIN_4                                     0x7BE5
#define P7B_E6_LIMIT_1                                    0x7BE6
#define P7B_E7_LIMIT_2                                    0x7BE7
#define P7B_E8_LIMIT_3                                    0x7BE8
#define P7B_E9_LIMIT_4                                    0x7BE9
#define P7B_EA_LIMIT_5                                    0x7BEA
#define P7B_EB_LIMIT_6                                    0x7BEB
#define P7B_EC_LOOP_DIV_1                                 0x7BEC
#define P7B_ED_LOOP_DIV_2                                 0x7BED
#define P7B_EE_GRAY_DEC_1                                 0x7BEE
#define P7B_EF_RESET_1                                    0x7BEF
#define P7B_F0_COEF_1                                     0x7BF0
#define P7B_F1_COEF_2                                     0x7BF1
#define P7B_F2_COEF_3                                     0x7BF2
#define P7B_F3_COEF_4                                     0x7BF3
#define P7B_F8_GRAY_DEC_2                                 0x7BF8
#define P7B_F9_LIMIT_10                                   0x7BF9
#define P7B_FA_GAIN_PREC                                  0x7BFA
#define P7B_FB_DEBUG                                      0x7BFB


//--------------------------------------------------
// GDI DFE (Page 7C)
//--------------------------------------------------
#define P7C_A0_L0_DFE_EN_1                                0x7CA0
#define P7C_A1_L0_DFE_EN_2                                0x7CA1
#define P7C_A2_L0_LIMIT_INIT                              0x7CA2
#define P7C_A3_L0_INIT_1                                  0x7CA3
#define P7C_A4_L0_INIT_2                                  0x7CA4
#define P7C_A5_L0_INIT_3                                  0x7CA5
#define P7C_A6_L0_INIT_4                                  0x7CA6
#define P7C_A7_L0_INIT_5                                  0x7CA7
#define P7C_A8_L0_INIT_6                                  0x7CA8
#define P7C_A9_L0_INIT_7                                  0x7CA9
#define P7C_AA_L0_INIT_8                                  0x7CAA
#define P7C_AB_L0_STABLE_FLAG                             0x7CAB
#define P7C_AF_L0_GDI_DE                                  0x7CAF
#define P7C_B0_L1_DFE_EN_1                                0x7CB0
#define P7C_B1_L1_DFE_EN_2                                0x7CB1
#define P7C_B2_L1_LIMIT_INIT                              0x7CB2
#define P7C_B3_L1_INIT_1                                  0x7CB3
#define P7C_B4_L1_INIT_2                                  0x7CB4
#define P7C_B5_L1_INIT_3                                  0x7CB5
#define P7C_B6_L1_INIT_4                                  0x7CB6
#define P7C_B7_L1_INIT_5                                  0x7CB7
#define P7C_B8_L1_INIT_6                                  0x7CB8
#define P7C_B9_L1_INIT_7                                  0x7CB9
#define P7C_BA_L1_INIT_8                                  0x7CBA
#define P7C_BB_L1_STABLE_FLAG                             0x7CBB
#define P7C_BF_L1_GDI_DE                                  0x7CBF
#define P7C_C0_L2_DFE_EN_1                                0x7CC0
#define P7C_C1_L2_DFE_EN_2                                0x7CC1
#define P7C_C2_L2_LIMIT_INIT                              0x7CC2
#define P7C_C3_L2_INIT_1                                  0x7CC3
#define P7C_C4_L2_INIT_2                                  0x7CC4
#define P7C_C5_L2_INIT_3                                  0x7CC5
#define P7C_C6_L2_INIT_4                                  0x7CC6
#define P7C_C7_L2_INIT_5                                  0x7CC7
#define P7C_C8_L2_INIT_6                                  0x7CC8
#define P7C_C9_L2_INIT_7                                  0x7CC9
#define P7C_CA_L2_INIT_8                                  0x7CCA
#define P7C_CB_L2_STABLE_FLAG                             0x7CCB
#define P7C_CF_L2_GDI_DE                                  0x7CCF
#define P7C_E0_MODE_TIMER                                 0x7CE0
#define P7C_E1_TIMER                                      0x7CE1
#define P7C_E2_GAIN_1                                     0x7CE2
#define P7C_E3_GAIN_2                                     0x7CE3
#define P7C_E4_GAIN_3                                     0x7CE4
#define P7C_E5_GAIN_4                                     0x7CE5
#define P7C_E6_LIMIT_1                                    0x7CE6
#define P7C_E7_LIMIT_2                                    0x7CE7
#define P7C_E8_LIMIT_3                                    0x7CE8
#define P7C_E9_LIMIT_4                                    0x7CE9
#define P7C_EA_LIMIT_5                                    0x7CEA
#define P7C_EB_LIMIT_6                                    0x7CEB
#define P7C_EC_LOOP_DIV_1                                 0x7CEC
#define P7C_ED_LOOP_DIV_2                                 0x7CED
#define P7C_EE_GRAY_DEC_1                                 0x7CEE
#define P7C_EF_RESET_1                                    0x7CEF
#define P7C_F0_COEF_1                                     0x7CF0
#define P7C_F1_COEF_2                                     0x7CF1
#define P7C_F2_COEF_3                                     0x7CF2
#define P7C_F3_COEF_4                                     0x7CF3
#define P7C_F8_GRAY_DEC_2                                 0x7CF8
#define P7C_F9_LIMIT_10                                   0x7CF9
#define P7C_FA_GAIN_PREC                                  0x7CFA
#define P7C_FB_DEBUG                                      0x7CFB


//--------------------------------------------------
// GDI DFE (Page 7D)
//--------------------------------------------------
#define P7D_A0_L0_DFE_EN_1                                0x7DA0
#define P7D_A1_L0_DFE_EN_2                                0x7DA1
#define P7D_A2_L0_LIMIT_INIT                              0x7DA2
#define P7D_A3_L0_INIT_1                                  0x7DA3
#define P7D_A4_L0_INIT_2                                  0x7DA4
#define P7D_A5_L0_INIT_3                                  0x7DA5
#define P7D_A6_L0_INIT_4                                  0x7DA6
#define P7D_A7_L0_INIT_5                                  0x7DA7
#define P7D_A8_L0_INIT_6                                  0x7DA8
#define P7D_A9_L0_INIT_7                                  0x7DA9
#define P7D_AA_L0_INIT_8                                  0x7DAA
#define P7D_AB_L0_STABLE_FLAG                             0x7DAB
#define P7D_AF_L0_GDI_DE                                  0x7DAF
#define P7D_B0_L1_DFE_EN_1                                0x7DB0
#define P7D_B1_L1_DFE_EN_2                                0x7DB1
#define P7D_B2_L1_LIMIT_INIT                              0x7DB2
#define P7D_B3_L1_INIT_1                                  0x7DB3
#define P7D_B4_L1_INIT_2                                  0x7DB4
#define P7D_B5_L1_INIT_3                                  0x7DB5
#define P7D_B6_L1_INIT_4                                  0x7DB6
#define P7D_B7_L1_INIT_5                                  0x7DB7
#define P7D_B8_L1_INIT_6                                  0x7DB8
#define P7D_B9_L1_INIT_7                                  0x7DB9
#define P7D_BA_L1_INIT_8                                  0x7DBA
#define P7D_BB_L1_STABLE_FLAG                             0x7DBB
#define P7D_BF_L1_GDI_DE                                  0x7DBF
#define P7D_C0_L2_DFE_EN_1                                0x7DC0
#define P7D_C1_L2_DFE_EN_2                                0x7DC1
#define P7D_C2_L2_LIMIT_INIT                              0x7DC2
#define P7D_C3_L2_INIT_1                                  0x7DC3
#define P7D_C4_L2_INIT_2                                  0x7DC4
#define P7D_C5_L2_INIT_3                                  0x7DC5
#define P7D_C6_L2_INIT_4                                  0x7DC6
#define P7D_C7_L2_INIT_5                                  0x7DC7
#define P7D_C8_L2_INIT_6                                  0x7DC8
#define P7D_C9_L2_INIT_7                                  0x7DC9
#define P7D_CA_L2_INIT_8                                  0x7DCA
#define P7D_CB_L2_STABLE_FLAG                             0x7DCB
#define P7D_CF_L2_GDI_DE                                  0x7DCF
#define P7D_E0_MODE_TIMER                                 0x7DE0
#define P7D_E1_TIMER                                      0x7DE1
#define P7D_E2_GAIN_1                                     0x7DE2
#define P7D_E3_GAIN_2                                     0x7DE3
#define P7D_E4_GAIN_3                                     0x7DE4
#define P7D_E5_GAIN_4                                     0x7DE5
#define P7D_E6_LIMIT_1                                    0x7DE6
#define P7D_E7_LIMIT_2                                    0x7DE7
#define P7D_E8_LIMIT_3                                    0x7DE8
#define P7D_E9_LIMIT_4                                    0x7DE9
#define P7D_EA_LIMIT_5                                    0x7DEA
#define P7D_EB_LIMIT_6                                    0x7DEB
#define P7D_EC_LOOP_DIV_1                                 0x7DEC
#define P7D_ED_LOOP_DIV_2                                 0x7DED
#define P7D_EE_GRAY_DEC_1                                 0x7DEE
#define P7D_EF_RESET_1                                    0x7DEF
#define P7D_F0_COEF_1                                     0x7DF0
#define P7D_F1_COEF_2                                     0x7DF1
#define P7D_F2_COEF_3                                     0x7DF2
#define P7D_F3_COEF_4                                     0x7DF3
#define P7D_F8_GRAY_DEC_2                                 0x7DF8
#define P7D_F9_LIMIT_10                                   0x7DF9
#define P7D_FA_GAIN_PREC                                  0x7DFA
#define P7D_FB_DEBUG                                      0x7DFB


//--------------------------------------------------
// GDI DFE (Page 7E)
//--------------------------------------------------
#define P7E_A0_L0_DFE_EN_1                                0x7EA0
#define P7E_A1_L0_DFE_EN_2                                0x7EA1
#define P7E_A2_L0_LIMIT_INIT                              0x7EA2
#define P7E_A3_L0_INIT_1                                  0x7EA3
#define P7E_A4_L0_INIT_2                                  0x7EA4
#define P7E_A5_L0_INIT_3                                  0x7EA5
#define P7E_A6_L0_INIT_4                                  0x7EA6
#define P7E_A7_L0_INIT_5                                  0x7EA7
#define P7E_A8_L0_INIT_6                                  0x7EA8
#define P7E_A9_L0_INIT_7                                  0x7EA9
#define P7E_AA_L0_INIT_8                                  0x7EAA
#define P7E_AB_L0_STABLE_FLAG                             0x7EAB
#define P7E_AF_L0_GDI_DE                                  0x7EAF
#define P7E_B0_L1_DFE_EN_1                                0x7EB0
#define P7E_B1_L1_DFE_EN_2                                0x7EB1
#define P7E_B2_L1_LIMIT_INIT                              0x7EB2
#define P7E_B3_L1_INIT_1                                  0x7EB3
#define P7E_B4_L1_INIT_2                                  0x7EB4
#define P7E_B5_L1_INIT_3                                  0x7EB5
#define P7E_B6_L1_INIT_4                                  0x7EB6
#define P7E_B7_L1_INIT_5                                  0x7EB7
#define P7E_B8_L1_INIT_6                                  0x7EB8
#define P7E_B9_L1_INIT_7                                  0x7EB9
#define P7E_BA_L1_INIT_8                                  0x7EBA
#define P7E_BB_L1_STABLE_FLAG                             0x7EBB
#define P7E_BF_L1_GDI_DE                                  0x7EBF
#define P7E_C0_L2_DFE_EN_1                                0x7EC0
#define P7E_C1_L2_DFE_EN_2                                0x7EC1
#define P7E_C2_L2_LIMIT_INIT                              0x7EC2
#define P7E_C3_L2_INIT_1                                  0x7EC3
#define P7E_C4_L2_INIT_2                                  0x7EC4
#define P7E_C5_L2_INIT_3                                  0x7EC5
#define P7E_C6_L2_INIT_4                                  0x7EC6
#define P7E_C7_L2_INIT_5                                  0x7EC7
#define P7E_C8_L2_INIT_6                                  0x7EC8
#define P7E_C9_L2_INIT_7                                  0x7EC9
#define P7E_CA_L2_INIT_8                                  0x7ECA
#define P7E_CB_L2_STABLE_FLAG                             0x7ECB
#define P7E_CF_L2_GDI_DE                                  0x7ECF
#define P7E_E0_MODE_TIMER                                 0x7EE0
#define P7E_E1_TIMER                                      0x7EE1
#define P7E_E2_GAIN_1                                     0x7EE2
#define P7E_E3_GAIN_2                                     0x7EE3
#define P7E_E4_GAIN_3                                     0x7EE4
#define P7E_E5_GAIN_4                                     0x7EE5
#define P7E_E6_LIMIT_1                                    0x7EE6
#define P7E_E7_LIMIT_2                                    0x7EE7
#define P7E_E8_LIMIT_3                                    0x7EE8
#define P7E_E9_LIMIT_4                                    0x7EE9
#define P7E_EA_LIMIT_5                                    0x7EEA
#define P7E_EB_LIMIT_6                                    0x7EEB
#define P7E_EC_LOOP_DIV_1                                 0x7EEC
#define P7E_ED_LOOP_DIV_2                                 0x7EED
#define P7E_EE_GRAY_DEC_1                                 0x7EEE
#define P7E_EF_RESET_1                                    0x7EEF
#define P7E_F0_COEF_1                                     0x7EF0
#define P7E_F1_COEF_2                                     0x7EF1
#define P7E_F2_COEF_3                                     0x7EF2
#define P7E_F3_COEF_4                                     0x7EF3
#define P7E_F8_GRAY_DEC_2                                 0x7EF8
#define P7E_F9_LIMIT_10                                   0x7EF9
#define P7E_FA_GAIN_PREC                                  0x7EFA
#define P7E_FB_DEBUG                                      0x7EFB


//--------------------------------------------------
// S1 IRQ Status (Page 80)
//--------------------------------------------------
#define P80_02_S1_STATUS0                                 0x8002
#define P80_03_S1_STATUS1                                 0x8003
#define P80_04_S1_IRQ_CTRL0                               0x8004
#define P80_05_S1_IRQ_CTRL1                               0x8005


//--------------------------------------------------
// GDI Clock Divider (Page 80)
//--------------------------------------------------
#define P80_06_GDI_CLK_DIVIDER                            0x8006
#define P80_08_S1_IRQ_CTRL2                               0x8008


//--------------------------------------------------
// GroupE Power Control (Page 80)
//--------------------------------------------------
#define P80_0A_GE_POWER_CTRL                              0x800A
#define P80_0B_TOP_DUMMY6                                 0x800B


//--------------------------------------------------
// S1 Watch Dog (Page 80)
//--------------------------------------------------
#define P80_0C_S1_WATCH_DOG_CTRL0                         0x800C
#define P80_0D_TOP_DUMMY7                                 0x800D


//--------------------------------------------------
// XTAL (Page 80)
//--------------------------------------------------
#define P80_0E_XTAL_CTRL0                                 0x800E
#define P80_0F_XTAL_CTRL1                                 0x800F


//--------------------------------------------------
// S1 Input Video Capture (Page 80)
//--------------------------------------------------
#define P80_10_S1_VGIP_CTRL                               0x8010
#define P80_11_S1_VGIP_SIGINV                             0x8011
#define P80_12_S1_VGIP_DELAY_CTRL                         0x8012
#define P80_13_S1_VGIP_ODD_CTRL                           0x8013


//--------------------------------------------------
// S1 Input Frame Window (Page 80)
//--------------------------------------------------
#define P80_14_S1_IPH_ACT_STA_H                           0x8014
#define P80_15_S1_IPH_ACT_STA_L                           0x8015
#define P80_16_S1_IPH_ACT_WID_H                           0x8016
#define P80_17_S1_IPH_ACT_WID_L                           0x8017
#define P80_18_S1_IPV_ACT_STA_H                           0x8018
#define P80_19_S1_IPV_ACT_STA_L                           0x8019
#define P80_1A_S1_IPV_ACT_LEN_H                           0x801A
#define P80_1B_S1_IPV_ACT_LEN_L                           0x801B
#define P80_1C_S1_IVS_DELAY                               0x801C
#define P80_1D_S1_IHS_DELAY                               0x801D
#define P80_1E_S1_VGIP_HV_DELAY                           0x801E
#define P80_1F_S1_ICLK_GATED_CTRL1                        0x801F
#define P80_20_S1_DUMMY2                                  0x8020


//--------------------------------------------------
// S1 FIFO Frequency (Page 80)
//--------------------------------------------------
#define P80_22_S1_FIFO_CLOCK_SELECT                       0x8022


//--------------------------------------------------
// S1 Scaling Down Control (Page 80)
//--------------------------------------------------
#define P80_23_SCALE_DOWN_CTRL_S1                         0x8023
#define P80_24_SD_ADDRESS_PORT_S1                         0x8024
#define P80_25_SD_DATA_PORT_S1                            0x8025
#define P80_26_SD_FILTER_CONTROL_REG_S1                   0x8026
#define P80_27_SD_USER_FILTER_ACCESS_PORT_S1              0x8027


//--------------------------------------------------
// Display Format (Page 80)
//--------------------------------------------------
#define P80_28_VIDEO_DISPLAY_CONTROL_REG_S1               0x8028
#define P80_2A_DISPLAY_FORMAT_ADDR_PORT_S                 0x802A
#define P80_2B_DISPLAY_FORMAT_DATA_PORT_S                 0x802B


//--------------------------------------------------
// FIFO Window (Page 80)
//--------------------------------------------------
#define P80_30_FIFO_WINDOW_ADDR_PORT_S                    0x8030
#define P80_31_FIFO_WINDOW_DATA_PORT_S                    0x8031


//--------------------------------------------------
// S1 Scaling Up Function (Page 80)
//--------------------------------------------------
#define P80_32_SCALE_CONTROL_REG_S1                       0x8032
#define P80_33_SF_ADDR_PORT_S1                            0x8033
#define P80_34_SF_DATA_PORT_S1                            0x8034
#define P80_35_FILTER_CONTROL_REG_S1                      0x8035
#define P80_36_USER_DEF_FILTER_ACCESS_PORT_S1             0x8036
#define P80_37_SCALE_UP_FOR_LINE_INTERLEAVE_S1            0x8037


//--------------------------------------------------
// S1 Back ground color (Page 80)
//--------------------------------------------------
#define P80_6C_BG_COLOR_ACCESS_EN_S1                      0x806C
#define P80_6D_BG_COLOR_DATA_PORT_S1                      0x806D


//--------------------------------------------------
// S1 Image Auto Function (Page 80)
//--------------------------------------------------
#define P80_70_S1_H_BOUNDARY_H                            0x8070
#define P80_71_S1_H_BOUNDARY_STA_L                        0x8071
#define P80_72_S1_H_BOUNDARY_END_L                        0x8072
#define P80_73_S1_V_BOUNDARY_H                            0x8073
#define P80_74_V_BOUNDARY_STA_L                           0x8074
#define P80_75_S1_V_BOUNDARY_END_L                        0x8075
#define P80_76_S1_RED_NOISE_MARGIN                        0x8076
#define P80_77_S1_GRN_NOISE_MARGIN                        0x8077
#define P80_78_S1_BLU_NOISE_MARGIN                        0x8078
#define P80_79_S1_DIFF_THRESHOLD                          0x8079
#define P80_7A_S1_AUTO_ADJ_CTRL0                          0x807A
#define P80_7B_S1_HW_AUTO_PHASE_CTRL0                     0x807B
#define P80_7C_S1_AUTO_DUMMY                              0x807C
#define P80_7D_S1_AUTO_ADJ_CTRL1                          0x807D
#define P80_7E_S1_VER_START_END_H                         0x807E
#define P80_7F_S1_VER_START_L                             0x807F
#define P80_80_S1_VER_END_L                               0x8080
#define P80_81_S1_H_START_END_H                           0x8081
#define P80_82_S1_H_START_L                               0x8082
#define P80_83_S1_H_END_L                                 0x8083
#define P80_84_S1_AUTO_PHASE_3                            0x8084
#define P80_85_S1_AUTO_PHASE_2                            0x8085
#define P80_86_S1_AUTO_PHASE_1                            0x8086
#define P80_87_S1_AUTO_PHASE_0                            0x8087


//--------------------------------------------------
// S1 Dithering Control (For Input Domain) (Page 80)
//--------------------------------------------------
#define P80_88_I_DITHER_DATA_ACCESS_SETB                  0x8088
#define P80_89_I_DITHER_COMMON_CTRL1_SETB                 0x8089
#define P80_8A_I_DITHER_COMMON_CTRL2_SETB                 0x808A


//--------------------------------------------------
// Color Conversion 每 RGBtoYCC before IDLTI 12bit In / 12bit Out (Page 80)
//--------------------------------------------------
#define P80_9C_RGB2YCC_CTRL_S1                            0x809C
#define P80_9D_RGB2YCC_COEF_DATA_S1                       0x809D


//--------------------------------------------------
// FRC Cap_S1 (Page 85)
//--------------------------------------------------
#define P85_00_CAP_S1_MEM_ADDR_MSB                        0x8500
#define P85_01_CAP_S1_MEM_ADDR_H                          0x8501
#define P85_02_CAP_S1_MEM_ADDR_M                          0x8502
#define P85_03_CAP_S1_MEM_ADDR_L                          0x8503
#define P85_04_CAP_S1_BL2_ADDR_MSB                        0x8504
#define P85_05_CAP_S1_BL2_ADDR_H                          0x8505
#define P85_06_CAP_S1_BL2_ADDR_M                          0x8506
#define P85_07_CAP_S1_BL2_ADDR_L                          0x8507
#define P85_08_CAP_S1_BL3_ADDR_MSB                        0x8508
#define P85_09_CAP_S1_BL3_ADDR_H                          0x8509
#define P85_0A_CAP_S1_BL3_ADDR_M                          0x850A
#define P85_0B_CAP_S1_BL3_ADDR_L                          0x850B
#define P85_0C_CAP_S1_BOUNDARY_ADDR1_MSB                  0x850C
#define P85_0D_CAP_S1_BOUNDARY_ADDR1_H                    0x850D
#define P85_0E_CAP_S1_BOUNDARY_ADDR1_M                    0x850E
#define P85_0F_CAP_S1_BOUNDARY_ADDR1_L                    0x850F
#define P85_10_CAP_S1_BOUNDARY_ADDR2_MSB                  0x8510
#define P85_11_CAP_S1_BOUNDARY_ADDR2_H                    0x8511
#define P85_12_CAP_S1_BOUNDARY_ADDR2_M                    0x8512
#define P85_13_CAP_S1_BOUNDARY_ADDR2_L                    0x8513
#define P85_14_CAP_S1_BOUNDARY_STATUS                     0x8514
#define P85_15_CAP_S1_BLOCK_STEP_MSB                      0x8515
#define P85_16_CAP_S1_BLOCK_STEP_H                        0x8516
#define P85_17_CAP_S1_BLOCK_STEP_M                        0x8517
#define P85_18_CAP_S1_BLOCK_STEP_L                        0x8518
#define P85_19_CAP_S1_LINE_STEP_MSB                       0x8519
#define P85_1A_CAP_S1_LINE_STEP_H                         0x851A
#define P85_1B_CAP_S1_LINE_STEP_M                         0x851B
#define P85_1C_CAP_S1_LINE_STEP_L                         0x851C
#define P85_1D_CAP_S1_WATER_LEVEL_H                       0x851D
#define P85_1E_CAP_S1_WATER_LEVEL_L                       0x851E
#define P85_1F_CAP_S1_PIXEL_NUM_H                         0x851F
#define P85_20_CAP_S1_PIXEL_NUM_L                         0x8520
#define P85_21_CAP_S1_LINE_NUM_H                          0x8521
#define P85_22_CAP_S1_LINE_NUM_L                          0x8522
#define P85_23_CAP_S1_WR_NUM_H                            0x8523
#define P85_24_CAP_S1_WR_NUM_L                            0x8524
#define P85_25_CAP_S1_WR_LEN                              0x8525
#define P85_26_CAP_S1_WR_REMAIN                           0x8526
#define P85_27_CAP_S1_DDR_CTRL1                           0x8527
#define P85_28_CAP_S1_DDR_CTRL2                           0x8528
#define P85_29_CAP_S1_DDR_CTRL3                           0x8529
#define P85_2A_CAP_S1_STATUS                              0x852A
#define P85_2B_CAP_S1_FIFO_STATUS                         0x852B
#define P85_2C_CAP_S1_ONEF_STATUS                         0x852C
#define P85_30_CAP_S1_BIST_CTRL                           0x8530
#define P85_31_CAP_S1_DRF_BIST_CTRL                       0x8531


//--------------------------------------------------
// FRC Disp_S1 (Page 85)
//--------------------------------------------------
#define P85_80_DISP_S1_READ_ADDR_MSB                      0x8580
#define P85_81_DISP_S1_READ_ADDR_H                        0x8581
#define P85_82_DISP_S1_READ_ADDR_M                        0x8582
#define P85_83_DISP_S1_READ_ADDR_L                        0x8583
#define P85_84_DISP_S1_BL2_ADDR_MSB                       0x8584
#define P85_85_DISP_S1_BL2_ADDR_H                         0x8585
#define P85_86_DISP_S1_BL2_ADDR_M                         0x8586
#define P85_87_DISP_S1_BL2_ADDR_L                         0x8587
#define P85_88_DISP_S1_BL3_ADDR_MSB                       0x8588
#define P85_89_DISP_S1_BL3_ADDR_H                         0x8589
#define P85_8A_DISP_S1_BL3_ADDR_M                         0x858A
#define P85_8B_DISP_S1_BL3_ADDR_L                         0x858B
#define P85_8C_DISP_S1_BOUNDARY_ADDR1_MSB                 0x858C
#define P85_8D_DISP_S1_BOUNDARY_ADDR1_H                   0x858D
#define P85_8E_DISP_S1_BOUNDARY_ADDR1_M                   0x858E
#define P85_8F_DISP_S1_BOUNDARY_ADDR1_L                   0x858F
#define P85_90_DISP_S1_BOUNDARY_ADDR2_MSB                 0x8590
#define P85_91_DISP_S1_BOUNDARY_ADDR2_H                   0x8591
#define P85_92_DISP_S1_BOUNDARY_ADDR2_M                   0x8592
#define P85_93_DISP_S1_BOUNDARY_ADDR2_L                   0x8593
#define P85_94_DISP_S1_BOUNDARY_STATUS                    0x8594
#define P85_95_DISP_S1_BLOCK_STEP_MSB                     0x8595
#define P85_96_DISP_S1_BLOCK_STEP_H                       0x8596
#define P85_97_DISP_S1_BLOCK_STEP_M                       0x8597
#define P85_98_DISP_S1_BLOCK_STEP_L                       0x8598
#define P85_99_DISP_S1_LINE_STEP_MSB                      0x8599
#define P85_9A_DISP_S1_LINE_STEP_H                        0x859A
#define P85_9B_DISP_S1_LINE_STEP_M                        0x859B
#define P85_9C_DISP_S1_LINE_STEP_L                        0x859C
#define P85_A0_DISP_S1_WTLVL_H                            0x85A0
#define P85_A1_DISP_S1_WTLVL_L                            0x85A1
#define P85_A2_DISP_S1_PXL_NUM_H                          0x85A2
#define P85_A3_DISP_S1_PXL_NUM_L                          0x85A3
#define P85_A4_DISP_S1_LINE_NUM_H                         0x85A4
#define P85_A5_DISP_S1_LINE_NUM_L                         0x85A5
#define P85_A6_DISP_S1_PRRD_VST_H                         0x85A6
#define P85_A7_DISP_S1_PRRD_VST_L                         0x85A7
#define P85_A8_DISP_S1_READ_NUM_H                         0x85A8
#define P85_A9_DISP_S1_READ_NUM_L                         0x85A9
#define P85_AA_DISP_S1_READ_LEN                           0x85AA
#define P85_AB_DISP_S1_READ_REMAIN                        0x85AB
#define P85_AC_DISP_S1_DISP_CTRL1                         0x85AC
#define P85_AD_DISP_STATUS                                0x85AD
#define P85_AE_DISP_S1_DISP_CTRL2                         0x85AE
#define P85_AF_DISP_S1_DISP_CTRL3                         0x85AF
#define P85_B0_DISP_S1_FIFO_STATUS                        0x85B0
#define P85_B1_DISP_S1_ONEF_DHF_H                         0x85B1
#define P85_B2_DISP_S1_ONEF_DHF_M                         0x85B2
#define P85_B3_DISP_S1_ONEF_DHF_L                         0x85B3
#define P85_B4_DISP_S1_ONEF_IHF                           0x85B4
#define P85_B5_DISP_S1_LINE_MAGN_L                        0x85B5
#define P85_B6_DISP_S1_ONEF_MAGN_H                        0x85B6
#define P85_B7_DISP_S1_ONEF_MAGN_L                        0x85B7
#define P85_C0_DISP_S1_BIST_CTRL                          0x85C0
#define P85_C1_DISP_S1_DRF_BIST_CTRL                      0x85C1
#define P85_C2_ADC_TEST                                   0x85C2
#define P85_C3_DISP_S1_NEW_FIFO_CRC_CTRL                  0x85C3
#define P85_C4_DISP_S1_NEW_FIFO_CRC1                      0x85C4
#define P85_C5_DISP_S1_NEW_FIFO_CRC2                      0x85C5
#define P85_C6_DISP_S1_NEW_FIFO_CRC3                      0x85C6
#define P85_C7_DISP_S1_NEW_FIFO_CRC4                      0x85C7
#define P85_C8_DISP_S1_NEW_FIFO_CRC5                      0x85C8
#define P85_C9_DISP_S1_NEW_FIFO_CRC6                      0x85C9


//--------------------------------------------------
// D-domain Pattern Generator (Page 87)
//--------------------------------------------------
#define P87_F0_DISP_PG_R_CTRL_SUB                         0x87F0
#define P87_F1_DISP_PG_G_CTRL_SUB                         0x87F1
#define P87_F2_DISP_PG_B_CTRL_SUB                         0x87F2
#define P87_F3_DISP_PG_R_INITIAL_SUB                      0x87F3
#define P87_F4_DISP_PG_G_INITIAL_SUB                      0x87F4
#define P87_F5_DISP_PG_B_INITIAL_SUB                      0x87F5
#define P87_F6_DISP_PG_PIXEL_DELTA_H_SUB                  0x87F6
#define P87_F7_DISP_PG_LINE_DELTA_H_SUB                   0x87F7
#define P87_F8_DISP_PG_PIXEL_STEP_H_SUB                   0x87F8
#define P87_F9_DISP_PG_LINE_STEP_H_SBU                    0x87F9
#define P87_FA_DISP_PG_DELTA_H_STEP_M_SUB                 0x87FA
#define P87_FB_D_PG_CTRL_0_SUB                            0x87FB
#define P87_FC_D_PG_INITIAL_M_STEP_L_SUB                  0x87FC
#define P87_FD_D_PG_INITIAL_L_CTRL_SUB                    0x87FD
#define P87_FE_DISP_PG_DELTA_L_SUB                        0x87FE
#define P87_FF_D_PATTERN_RESET_SUB                        0x87FF


//--------------------------------------------------
// S1 I Domain DLTI (Page 91)
//--------------------------------------------------
#define P91_A1_I_DLTI_CTRL_S1                             0x91A1
#define P91_A2_I_DLTI_SEARCH_RANGE_S1                     0x91A2
#define P91_A3_I_DLTI_ADJUST_S1                           0x91A3
#define P91_A4_I_DLTI_UPPER_THD_HSB_S1                    0x91A4
#define P91_A5_I_DLTI_UPPER_THD_LSB_S1                    0x91A5
#define P91_A6_I_DLTI_LOWER_THD_HSB_S1                    0x91A6
#define P91_A7_I_DLTI_LOWER_THD_LSB_S1                    0x91A7
#define P91_A8_I_DLTI_FILTER_C0_HSB_S1                    0x91A8
#define P91_A9_I_DLTI_FILTER_C0_LSB_S1                    0x91A9
#define P91_AA_I_DLTI_FILTER_C1_HSB_S1                    0x91AA
#define P91_AB_I_DLTI_FILTER_C1_LSB_S1                    0x91AB
#define P91_AC_I_DLTI_FILTER_C2_HSB_S1                    0x91AC
#define P91_AD_I_DLTI_FILTER_C2_LSB_S1                    0x91AD
#define P91_AE_I_DLTI_FILTER_C3_HSB_S1                    0x91AE
#define P91_AF_I_DLTI_FILTER_C3_LSB_S1                    0x91AF
#define P91_B0_I_DLTI_FILTER_C4_HSB_S1                    0x91B0
#define P91_B1_I_DLTI_FILTER_C4_LSB_S1                    0x91B1
#define P91_B2_I_DLTI_UPPER_LOWER_THD_S1                  0x91B2
#define P91_D4_I_DLTI_HLW_HOR_START_HSB_S1                0x91D4
#define P91_D5_I_DLTI_HLW_HOR_START_LSB_S1                0x91D5
#define P91_D6_I_DLTI_HLW_HOR_END_HSB_S1                  0x91D6
#define P91_D7_I_DLTI_HLW_HOR_END_LSB_S1                  0x91D7
#define P91_D8_I_DLTI_HLW_VER_START_HSB_S1                0x91D8
#define P91_D9_I_DLTI_HLW_VER_START_LSB_S1                0x91D9
#define P91_DA_I_DLTI_HLW_VER_END_HSB_S1                  0x91DA
#define P91_DB_I_DLTI_HLW_VER_END_LSB_S1                  0x91DB
#define P91_DC_I_DLTI_HLW_CTRL_S1                         0x91DC
#define P91_DD_I_DLTI_DUMMY_S1                            0x91DD


//--------------------------------------------------
// S1 Light Super Resolution (LSR) (Page 91)
//--------------------------------------------------
#define P91_B9_SCALER_LSR_HLW_S1                          0x91B9
#define P91_CC_LSR_HLW_H_START_HIGH_S1                    0x91CC
#define P91_CD_LSR_HLW_H_START_LOW_S1                     0x91CD
#define P91_CE_LSR_HLW_H_END_HIGH_S1                      0x91CE
#define P91_CF_LSR_HLW_H_END_LOW_S1                       0x91CF
#define P91_D0_LSR_HLW_V_START_HIGH_S1                    0x91D0
#define P91_D1_LSR_HLW_V_START_LOW_S1                     0x91D1
#define P91_D2_LSR_HLW_V_END_HIGH_S1                      0x91D2
#define P91_D3_LSR_HLW_V_END_LOW_S1                       0x91D3


//--------------------------------------------------
// S1 SHP (Page 92)
//--------------------------------------------------
#define P92_A0_SR_SHP_CTRL_0_S1                           0x92A0
#define P92_A1_SR_SHP_CTRL_1_S1                           0x92A1
#define P92_A2_SR_SHP_BIST_CTRL_0                         0x92A2
#define P92_A3_SR_DEBUGMODE_0_S1                          0x92A3
#define P92_A4_SR_DEBUGMODE_1_S1                          0x92A4
#define P92_A5_SR_EDGE_SOBEL_S1                           0x92A5
#define P92_A6_SR_EDGE_SOBEL_UB_S1                        0x92A6
#define P92_A7_SR_EDGE_HPF_C0_HSB_S1                      0x92A7
#define P92_A8_SR_EDGE_HPF_C0_LSB_S1                      0x92A8
#define P92_A9_SR_EDGE_HPF_C1_HSB_S1                      0x92A9
#define P92_AA_SR_EDGE_HPF_C1_LSB_S1                      0x92AA
#define P92_AB_SR_EDGE_HPF_C2_S1                          0x92AB
#define P92_AC_SR_EDGE_HPF_C3_S1                          0x92AC
#define P92_AD_SR_EDGE_HPF_C4_S1                          0x92AD
#define P92_AE_SR_EDGE_HPF_C5_S1                          0x92AE
#define P92_AF_SR_EDGE_HPF_SHIFT_S1                       0x92AF
#define P92_B0_SR_EDGE_PEAKING_GAIN_BLR_S1                0x92B0
#define P92_B1_SR_EDGE_PEAKING_GAIN_POS_S1                0x92B1
#define P92_B2_SR_EDGE_PEAKING_GAIN_NEG_S1                0x92B2
#define P92_B3_SR_EDGE_PEAKING_HV_POS_HSB_S1              0x92B3
#define P92_B4_SR_EDGE_PEAKING_HV_POS_LSB_S1              0x92B4
#define P92_B5_SR_EDGE_PEAKING_HV_NEG_HSB_S1              0x92B5
#define P92_B6_SR_EDGE_PEAKING_HV_NEG_LSB_S1              0x92B6
#define P92_B7_SR_EDGE_PEAKING_LV_S1                      0x92B7
#define P92_B8_SR_HOR_EMF_GAIN_1_S1                       0x92B8
#define P92_B9_SR_HOR_EMF_GAIN_2_S1                       0x92B9
#define P92_BA_SR_HOR_EMF_OFFSET_0_HSB_S1                 0x92BA
#define P92_BB_SR_HOR_EMF_OFFSET_0_LSB_S1                 0x92BB
#define P92_BC_SR_HOR_EMF_OFFSET_1_HSB_S1                 0x92BC
#define P92_BD_SR_HOR_EMF_OFFSET_1_LSB_S1                 0x92BD
#define P92_BE_SR_HOR_EMF_OFFSET_2_HSB_S1                 0x92BE
#define P92_BF_SR_HOR_EMF_OFFSET_2_LSB_S1                 0x92BF
#define P92_C0_SR_HOR_EMF_RANGE_S1                        0x92C0
#define P92_C1_SR_HOR_EMF_EXT_S1                          0x92C1
#define P92_C2_SR_HOR_EMFMK2_CTRL_0_S1                    0x92C2
#define P92_C3_SR_HOR_EMFMK2_CTRL_1_S1                    0x92C3
#define P92_C4_SR_HOR_EMFMK2_CTRL_2_S1                    0x92C4
#define P92_C5_SR_TEX_DET_S1                              0x92C5
#define P92_C6_SR_TEX_DET_UB_S1                           0x92C6
#define P92_C7_SR_TEX_HPF_C0_HSB_S1                       0x92C7
#define P92_C8_SR_TEX_HPF_C0_LSB_S1                       0x92C8
#define P92_C9_SR_TEX_HPF_C1_HSB_S1                       0x92C9
#define P92_CA_SR_TEX_HPF_C1_LSB_S1                       0x92CA
#define P92_CB_SR_TEX_HPF_C2_S1                           0x92CB
#define P92_CC_SR_TEX_HPF_C3_S1                           0x92CC
#define P92_CD_SR_TEX_HPF_C4_S1                           0x92CD
#define P92_CE_SR_TEX_HPF_C5_S1                           0x92CE
#define P92_CF_SR_TEX_HPF_SHIFT_S1                        0x92CF
#define P92_D0_SR_HOR_WTSUM_S1                            0x92D0
#define P92_D1_SR_TEX_PEAKING_GAIN_BLR_S1                 0x92D1
#define P92_D2_SR_TEX_PEAKING_GAIN_POS_S1                 0x92D2
#define P92_D3_SR_TEX_PEAKING_GAIN_NEG_S1                 0x92D3
#define P92_D4_SR_TEX_PEAKING_HV_POS_HSB_S1               0x92D4
#define P92_D5_SR_TEX_PEAKING_HV_POS_LSB_S1               0x92D5
#define P92_D6_SR_TEX_PEAKING_HV_NEG_HSB_S1               0x92D6
#define P92_D7_SR_TEX_PEAKING_HV_NEG_LSB_S1               0x92D7
#define P92_D8_SR_TEX_PEAKING_LV_S1                       0x92D8
#define P92_D9_SR_TEX_EDGE_BLEND_S1                       0x92D9
#define P92_DE_SR_VER_WTSUM_S1                            0x92DE
#define P92_DF_SR_VER_PEAKING_GAIN_POS_S1                 0x92DF
#define P92_E0_SR_VER_PEAKING_GAIN_NEG_S1                 0x92E0
#define P92_E1_SR_VER_PEAKING_HV_POS_S1                   0x92E1
#define P92_E2_SR_VER_PEAKING_HV_NEG_S1                   0x92E2
#define P92_E3_SR_VER_PEAKING_LV_S1                       0x92E3
#define P92_E4_SR_VER_EMF_S1                              0x92E4
#define P92_E5_SR_VER_EMF_MODE_S1                         0x92E5
#define P92_E6_SR_DUMMY1                                  0x92E6
#define P92_E7_SR_SHP_BIST_CTRL_1                         0x92E7


//--------------------------------------------------
// S1 SHP (Page93)
//--------------------------------------------------
#define P93_A0_SR_CDS_CTRL_0_S1                           0x93A0
#define P93_A1_SR_CDS_CTRL_1_S1                           0x93A1
#define P93_A2_SR_CDS_CM1_U_UB0_HSB_S1                    0x93A2
#define P93_A3_SR_CDS_CM1_U_UB0_LSB_S1                    0x93A3
#define P93_A4_SR_CDS_CM1_U_LB0_HSB_S1                    0x93A4
#define P93_A5_SR_CDS_CM1_U_LB0_LSB_S1                    0x93A5
#define P93_A6_SR_CDS_CM1_V_UB0_HSB_S1                    0x93A6
#define P93_A7_SR_CDS_CM1_V_UB0_LSB_S1                    0x93A7
#define P93_A8_SR_CDS_CM1_V_LB0_HSB_S1                    0x93A8
#define P93_A9_SR_CDS_CM1_V_LB0_LSB_S1                    0x93A9
#define P93_AA_SR_CDS_CM5_U_UB0_HSB_S1                    0x93AA
#define P93_AB_SR_CDS_CM5_U_UB0_LSB_S1                    0x93AB
#define P93_AC_SR_CDS_CM5_U_LB0_HSB_S1                    0x93AC
#define P93_AD_SR_CDS_CM5_U_LB0_LSB_S1                    0x93AD
#define P93_AE_SR_CDS_CM5_V_UB0_HSB_S1                    0x93AE
#define P93_AF_SR_CDS_CM5_V_UB0_LSB_S1                    0x93AF
#define P93_B0_SR_CDS_CM5_V_LB0_HSB_S1                    0x93B0
#define P93_B1_SR_CDS_CM5_V_LB0_LSB_S1                    0x93B1
#define P93_B2_SR_CDS_PEAKING_GAIN_BLR_CM1_S1             0x93B2
#define P93_B3_SR_CDS_PEAKING_GAIN_POS_CM1_S1             0x93B3
#define P93_B4_SR_CDS_PEAKING_GAIN_NEG_CM1_S1             0x93B4
#define P93_B5_SR_CDS_PEAKING_HV_POS_CM1_HSB_S1           0x93B5
#define P93_B6_SR_CDS_PEAKING_HV_POS_CM1_LSB_S1           0x93B6
#define P93_B7_SR_CDS_PEAKING_HV_NEG_CM1_HSB_S1           0x93B7
#define P93_B8_SR_CDS_PEAKING_HV_NEG_CM1_LSB_S1           0x93B8
#define P93_B9_SR_CDS_PEAKING_LV_CM1_S1                   0x93B9
#define P93_BA_SR_CDS_PEAKING_GAIN_BLR_CM5_S1             0x93BA
#define P93_BB_SR_CDS_PEAKING_GAIN_POS_CM5_S1             0x93BB
#define P93_BC_SR_CDS_PEAKING_GAIN_NEG_CM5_S1             0x93BC
#define P93_BD_SR_CDS_PEAKING_HV_POS_CM5_HSB_S1           0x93BD
#define P93_BE_SR_CDS_PEAKING_HV_POS_CM5_LSB_S1           0x93BE
#define P93_BF_SR_CDS_PEAKING_HV_NEG_CM5_HSB_S1           0x93BF
#define P93_C0_SR_CDS_PEAKING_HV_NEG_CM5_LSB_S1           0x93C0
#define P93_C1_SR_CDS_PEAKING_LV_CM5_S1                   0x93C1
#define P93_C2_SR_CDS_CM1_U_UB1_HSB_S1                    0x93C2
#define P93_C3_SR_CDS_CM1_U_UB1_LSB_S1                    0x93C3
#define P93_C4_SR_CDS_CM1_U_LB1_HSB_S1                    0x93C4
#define P93_C5_SR_CDS_CM1_U_LB1_LSB_S1                    0x93C5
#define P93_C6_SR_CDS_CM1_V_UB1_HSB_S1                    0x93C6
#define P93_C7_SR_CDS_CM1_V_UB1_LSB_S1                    0x93C7
#define P93_C8_SR_CDS_CM1_V_LB1_HSB_S1                    0x93C8
#define P93_C9_SR_CDS_CM1_V_LB1_LSB_S1                    0x93C9
#define P93_CA_SR_CDS_CM5_U_UB1_HSB_S1                    0x93CA
#define P93_CB_SR_CDS_CM5_U_UB1_LSB_S1                    0x93CB
#define P93_CC_SR_CDS_CM5_U_LB1_HSB_S1                    0x93CC
#define P93_CD_SR_CDS_CM5_U_LB1_LSB_S1                    0x93CD
#define P93_CE_SR_CDS_CM5_V_UB1_HSB_S1                    0x93CE
#define P93_CF_SR_CDS_CM5_V_UB1_LSB_S1                    0x93CF
#define P93_D0_SR_CDS_CM5_V_LB1_HSB_S1                    0x93D0
#define P93_D1_SR_CDS_CM5_V_LB1_LSB_S1                    0x93D1
#define P93_D4_SR_SKIPIR_CTRL1_S1                         0x93D4
#define P93_D5_SR_SKIPIR_CTRL2_S1                         0x93D5
#define P93_D6_SR_SKIPIR_CTRL3_S1                         0x93D6
#define P93_D7_SR_SKIPIR_CTRL4_S1                         0x93D7
#define P93_D8_SR_SKIPIR_CTRL5_S1                         0x93D8
#define P93_D9_SR_SKIPIR_CTRL6_S1                         0x93D9
#define P93_DA_SR_SKIPIR_ISLETLV_UB_S1                    0x93DA
#define P93_DB_SR_SKIPIR_ISLETGAIN_UB_S1                  0x93DB
#define P93_DC_SR_SKIPIR_REVLV_UB_S1                      0x93DC
#define P93_DD_SR_SKIPIR_REVGAIN_UB_S1                    0x93DD
#define P93_DE_SR_SKIPIR_DEBUG_S1                         0x93DE
#define P93_DF_SR_DNOISE_CTRL1_S1                         0x93DF
#define P93_E0_SR_DNOISE_CTRL2_S1                         0x93E0
#define P93_E1_SR_DNOISE_GAIN_UB_S1                       0x93E1
#define P93_E2_SR_DNOISE_LV_UB_S1                         0x93E2
#define P93_E3_SR_DNOISE_NOISE_GAIN_TH_S1                 0x93E3
#define P93_E4_SR_DNOISE_NOISE_LV_TH_S1                   0x93E4
#define P93_E5_SR_ECS_CTRL_0_S1                           0x93E5
#define P93_E6_SR_ECS_CTRL_1_S1                           0x93E6
#define P93_E7_SR_ECS_NOISE_LEVEL_HSB_S1                  0x93E7
#define P93_E8_SR_ECS_NOISE_LEVEL_LSB_S1                  0x93E8
#define P93_E9_SR_ECS_CTR_TH_HSB_S1                       0x93E9
#define P93_EA_SR_ECS_CTR_TH_LSB_S1                       0x93EA
#define P93_EB_SR_ECS_SAWTOOTH_TH_HSB_S1                  0x93EB
#define P93_EC_SR_ECS_SAWTOOTH_TH_LSB_S1                  0x93EC
#define P93_ED_SR_MF_UB_S1                                0x93ED
#define P93_EE_SR_MF_LB_S1                                0x93EE
#define P93_EF_SR_MF_WT_S1                                0x93EF
#define P93_F0_SR_TL_THD_MSB_S1                           0x93F0
#define P93_F1_SR_TL_THD_LSB_S1                           0x93F1
#define P93_F2_SR_TL_OFFSET_S1                            0x93F2
#define P93_F3_SR_BG_THD_MSB_S1                           0x93F3
#define P93_F4_SR_BG_THD_LSB_S1                           0x93F4
#define P93_F5_SR_BG_OFFSET_S1                            0x93F5
#define P93_F6_SR_SUMDIFF_RSFT_S1                         0x93F6
#define P93_F7_SR_SUMDIFF_THD_S1                          0x93F7
#define P93_F8_SR_SUMDIFF_OFFSET_S1                       0x93F8
#define P93_F9_SR_TL_GAIN_S1                              0x93F9
#define P93_FA_SR_TL_LEN_S1                               0x93FA
#define P93_FB_SR_DUMMY2                                  0x93FB


//--------------------------------------------------
// S1 Light Super Resolution (LSR) (Page 94)
//--------------------------------------------------
#define P94_00_LSR_V_SOB_SLP_LSB_S1                       0x9400
#define P94_01_LSR_V_SOB_TXT_COR_G_HP_UB_LSB_S1           0x9401
#define P94_02_LSR_V_HP_UP_COR_THD_LSB_S1                 0x9402
#define P94_03_LSR_V_COR_THD_HP_LB_LSB_S1                 0x9403
#define P94_04_LSR_V_HP_LB_SOB_TXT_LB_G_LSB_S1            0x9404
#define P94_05_LSR_V_SOB_TXT_COR_LB_G_LSB_S1              0x9405
#define P94_10_LSR_TL_THD_MSB_S1                          0x9410
#define P94_11_LSR_TL_THD_LSB_S1                          0x9411
#define P94_12_LSR_TL_OFFSET_S1                           0x9412
#define P94_13_LSR_BG_THD_MSB_S1                          0x9413
#define P94_14_LSR_BG_THD_LSB_S1                          0x9414
#define P94_15_LSR_BG_OFFSET_S1                           0x9415
#define P94_16_LSR_SUMDIFF_RSFT_S1                        0x9416
#define P94_17_LSR_SUMDIFF_THD_S1                         0x9417
#define P94_18_LSR_SUMDIFF_OFFSET_S1                      0x9418
#define P94_19_LSR_TL_GAIN_S1                             0x9419
#define P94_C0_LSR_CTRL_S1                                0x94C0
#define P94_C1_LSR_H_HP_FILTER_C0_S1                      0x94C1
#define P94_C2_LSR_H_HP_FILTER_C1C2_S1                    0x94C2
#define P94_C3_LSR_H_SOB_5TAP_S1                          0x94C3
#define P94_C4_LSR_H_SOB_THD2_MSB_S1                      0x94C4
#define P94_C5_LSR_H_SOB_THD2_LSB_S1                      0x94C5
#define P94_C6_LSR_H_SOB_THD1_MSB_S1                      0x94C6
#define P94_C7_LSR_H_SOB_THD1_LSB_S1                      0x94C7
#define P94_C8_LSR_H_SOB_THD0_S1                          0x94C8
#define P94_C9_LSR_H_SOB_BASE_S1                          0x94C9
#define P94_CA_LSR_H_SOB_SLP_R_S1                         0x94CA
#define P94_CB_LSR_H_SOB_SLP_F_S1                         0x94CB
#define P94_CC_LSR_H_SOB_TXT_COR_G_P_MSB_S1               0x94CC
#define P94_CD_LSR_H_SOB_TXT_COR_G_P_LSB_S1               0x94CD
#define P94_CE_LSR_H_HP_UB_P_S1                           0x94CE
#define P94_CF_LSR_H_HP_UB_N_S1                           0x94CF
#define P94_D0_LSR_H_COR_THD_P_S1                         0x94D0
#define P94_D1_LSR_H_COR_THD_N_S1                         0x94D1
#define P94_D2_LSR_H_HP_LB_P_S1                           0x94D2
#define P94_D3_LSR_H_HP_LB_N_S1                           0x94D3
#define P94_D4_LSR_H_SOB_TXT_LB_G_P_MSB_S1                0x94D4
#define P94_D5_LSR_H_SOB_TXT_LB_G_P_LSB_S1                0x94D5
#define P94_D6_LSR_H_SOB_TXT_COR_G_N_MSB_S1               0x94D6
#define P94_D7_LSR_H_SOB_TXT_COR_G_N_LSB_S1               0x94D7
#define P94_D8_LSR_H_SOB_TXT_LB_G_N_MSB_S1                0x94D8
#define P94_D9_LSR_H_SOB_TXT_LB_G_N_LSB_S1                0x94D9
#define P94_E0_LSR_V_SOB_THD2_MSB_S1                      0x94E0
#define P94_E1_LSR_V_SOB_THD2_LSB_S1                      0x94E1
#define P94_E2_LSR_V_SOB_THD1_MSB_S1                      0x94E2
#define P94_E3_LSR_V_SOB_THD1_LSB_S1                      0x94E3
#define P94_E4_SR_V_SOB_THD0_S1                           0x94E4
#define P94_E5_LSR_V_SOB_BASE_S1                          0x94E5
#define P94_E6_LSR_V_SOB_SLP_R_S1                         0x94E6
#define P94_E7_LSR_V_SOB_SLP_F_S1                         0x94E7
#define P94_E8_LSR_V_SOB_TXT_COR_G_P_MSB_S1               0x94E8
#define P94_E9_LSR_V_SOB_TXT_COR_G_P_LSB_S1               0x94E9
#define P94_EA_LSR_V_HP_UB_P_S1                           0x94EA
#define P94_EB_LSR_V_HP_UB_N_S1                           0x94EB
#define P94_EC_LSR_V_COR_THD_P_S1                         0x94EC
#define P94_ED_LSR_V_COR_THD_N_S1                         0x94ED
#define P94_EE_LSR_V_HP_LB_P_S1                           0x94EE
#define P94_EF_LSR_V_HP_LB_N_S1                           0x94EF
#define P94_F0_LSR_V_SOB_TXT_LB_G_P_MSB_S1                0x94F0
#define P94_F1_LSR_V_SOB_TXT_LB_G_P_LSB_S1                0x94F1
#define P94_F2_LSR_V_SOB_TXT_COR_G_N_MSB_S1               0x94F2
#define P94_F3_LSR_V_SOB_TXT_COR_G_N_LSB_S1               0x94F3
#define P94_F4_LSR_V_SOB_TXT_LB_G_N_MSB_S1                0x94F4
#define P94_F5_LSR_V_SOB_TXT_LB_G_N_LSB_S1                0x94F5
#define P94_F6_LSR_H_SOB_THD12_LSB_S1                     0x94F6
#define P94_F7_LSR_H_SOB_THD0_BASE_LSB_S1                 0x94F7
#define P94_F8_LSR_H_SOB_SLP_LSB_S1                       0x94F8
#define P94_F9_LSR_H_SOB_TXT_COR_G_HP_UB_LSB_S1           0x94F9
#define P94_FA_LSR_H_HP_UB_COR_THD_LSB_S1                 0x94FA
#define P94_FB_LSR_H_COR_THD_HP_LB_LSB_S1                 0x94FB
#define P94_FC_LSR_H_HP_LB_SOB_TXT_LB_G_LSB_S1            0x94FC
#define P94_FD_LSR_H_SOB_TXT_COR_LB_G_LSB_S1              0x94FD
#define P94_FE_LSR_V_SOB_THD12_LSB_S1                     0x94FE
#define P94_FF_LSR_V_SOB_THD0_BASE_LSB_S1                 0x94FF


//--------------------------------------------------
// Color Conversion 每 YCCtoRGB after SHP 12bit In / 12bit Out (Page 94)
//--------------------------------------------------
#define P94_A1_SR_YCC2RGB_CTRL_S1                         0x94A1
#define P94_A2_SR_YCC2RGB_COEF_K11_MSB_S1                 0x94A2
#define P94_A3_SR_YCC2RGB_COEF_K11_LSB_S1                 0x94A3
#define P94_A4_SR_YCC2RGB_COEF_K13_MSB_S1                 0x94A4
#define P94_A5_SR_YCC2RGB_COEF_K13_LSB_S1                 0x94A5
#define P94_A6_SR_YCC2RGB_COEF_K22_MSB_S1                 0x94A6
#define P94_A7_SR_YCC2RGB_COEF_K22_LSB_S1                 0x94A7
#define P94_A8_SR_YCC2RGB_COEF_K23_MSB_S1                 0x94A8
#define P94_A9_SR_YCC2RGB_COEF_K23_LSB_S1                 0x94A9
#define P94_AA_SR_YCC2RGB_COEF_K32_MSB_S1                 0x94AA
#define P94_AB_SR_YCC2RGB_COEF_K32_LSB_S1                 0x94AB
#define P94_AC_SR_YCC2RGB_R_OFFSET_MSB_S1                 0x94AC
#define P94_AD_SR_YCC2RGB_R_OFFSET_LSB_S1                 0x94AD
#define P94_AE_SR_YCC2RGB_G_OFFSET_MSB_S1                 0x94AE
#define P94_AF_SR_YCC2RGB_G_OFFSET_LSB_S1                 0x94AF
#define P94_B0_SR_YCC2RGB_B_OFFSET_MSB_S1                 0x94B0
#define P94_B1_SR_YCC2RGB_B_OFFSET_LSB_S1                 0x94B1
#define P94_B2_SR_YCC2RGB_R_GAIN_MSB_S1                   0x94B2
#define P94_B3_SR_YCC2RGB_R_GAIN_LSB_S1                   0x94B3
#define P94_B4_SR_YCC2RGB_G_GAIN_MSB_S1                   0x94B4
#define P94_B5_SR_YCC2RGB_G_GAIN_LSB_S1                   0x94B5
#define P94_B6_SR_YCC2RGB_B_GAIN_MSB_S1                   0x94B6
#define P94_B7_SR_YCC2RGB_B_GAIN_LSB_S1                   0x94B7
#define P94_B8_SR_YCC2RGB_DUMMY_S1                        0x94B8


//--------------------------------------------------
// TXEF Port Control for Analog LVDS (Page 95)
//--------------------------------------------------
#define P95_00_LVDS_COMMON_AB_CTRL0                       0x9500
#define P95_01_LVDS_COMMON_AB_CTRL1                       0x9501
#define P95_02_LVDS_COMMON_AB_CTRL2                       0x9502
#define P95_03_LVDS_COMMON_AB_CTRL3                       0x9503
#define P95_04_LVDS_COMMON_AB_CTRL4                       0x9504
#define P95_05_LVDS_COMMON_AB_CTRL5                       0x9505
#define P95_06_LVDS_COMMON_AB_CTRL6                       0x9506
#define P95_07_LVDS_COMMON_AB_CTRL7                       0x9507
#define P95_08_LVDS_COMMON_AB_CTRL8                       0x9508
#define P95_09_LVDS_COMMON_AB_CTRL9                       0x9509
#define P95_0A_LVDS_COMMON_AB_CTRL10                      0x950A
#define P95_0B_LVDS_COMMON_AB_CTRL11                      0x950B
#define P95_0C_LVDS_COMMON_AB_CTRL12                      0x950C
#define P95_0D_LVDS_COMMON_AB_CTRL13                      0x950D
#define P95_0E_LVDS_COMMON_AB_CTRL14                      0x950E
#define P95_0F_LVDS_COMMON_AB_CTRL15                      0x950F
#define P95_10_LVDS_COMMON_AB_CTRL16                      0x9510
#define P95_11_LVDS_COMMON_AB_CTRL17                      0x9511
#define P95_20_LVDS_PORTA_CTRL0                           0x9520
#define P95_21_LVDS_PORTA_CTRL1                           0x9521
#define P95_22_LVDS_PORTA_CTRL2                           0x9522
#define P95_23_LVDS_PORTA_CTRL3                           0x9523
#define P95_24_LVDS_PORTA_CTRL4                           0x9524
#define P95_25_LVDS_PORTA_CTRL5                           0x9525
#define P95_26_LVDS_PORTA_CTRL6                           0x9526
#define P95_27_LVDS_PORTA_CTRL7                           0x9527
#define P95_28_LVDS_PORTA_CTRL8                           0x9528
#define P95_29_LVDS_PORTA_CTRL9                           0x9529
#define P95_2A_LVDS_PORTA_CTRL10                          0x952A
#define P95_2B_LVDS_PORTA_CTRL11                          0x952B
#define P95_30_LVDS_PORTB_CTRL0                           0x9530
#define P95_31_LVDS_PORTB_CTRL1                           0x9531
#define P95_32_LVDS_PORTB_CTRL2                           0x9532
#define P95_33_LVDS_PORTB_CTRL3                           0x9533
#define P95_34_LVDS_PORTB_CTRL4                           0x9534
#define P95_35_LVDS_PORTB_CTRL5                           0x9535
#define P95_36_LVDS_PORTB_CTRL6                           0x9536
#define P95_37_LVDS_PORTB_CTRL7                           0x9537
#define P95_38_LVDS_PORTB_CTRL8                           0x9538
#define P95_39_LVDS_PORTB_CTRL9                           0x9539
#define P95_3A_LVDS_PORTB_CTRL10                          0x953A
#define P95_3B_LVDS_PORTB_CTRL11                          0x953B


//--------------------------------------------------
// S1 On-line Measure Block Overview (Page 96)
//--------------------------------------------------
#define P96_01_MEAS_CTL0                                  0x9601
#define P96_02_MEAS_CTL1                                  0x9602
#define P96_03_MEAS_ERROR_FLG0                            0x9603
#define P96_04_MEAS_ERROR_FLG1                            0x9604
#define P96_05_MEAS_HS_PERIOD_A_M                         0x9605
#define P96_06_MEAS_HS_PERIOD_A_L                         0x9606
#define P96_07_MEAS_HS_PERIOD_FRA_A                       0x9607
#define P96_08_MEAS_VS_PERIOD_A_M                         0x9608
#define P96_09_MEAS_VS_PERIOD_A_L                         0x9609
#define P96_0A_MEAS_HS_PULSE_A_M                          0x960A
#define P96_0B_MEAS_HS_PULSE_A_L                          0x960B
#define P96_0C_MEAS_VS_PULSE_A_M                          0x960C
#define P96_0D_MEAS_VS_PULSE_A_L                          0x960D
#define P96_0E_MEAS_HS_PERIOD_D_M                         0x960E
#define P96_0F_MEAS_HS_PERIOD_D_L                         0x960F
#define P96_10_MEAS_HS_PERIOD_FRA_D                       0x9610
#define P96_11_MEAS_VS_PERIOD_D_M                         0x9611
#define P96_12_MEAS_VS_PERIOD_D_L                         0x9612
#define P96_13_MEAS_HS_PULSE_D_M                          0x9613
#define P96_14_MEAS_HS_PULSE_D_L                          0x9614
#define P96_15_MEAS_HS_VS_DELTA_CTL                       0x9615
#define P96_16_MEAS_HS_VS_DELTA_IRQ                       0x9616
#define P96_17_MEAS_HS_VS_DELTA_WD                        0x9617
#define P96_18_MEAS_HS_VS_ERROR_WD                        0x9618
#define P96_19_MEAS_HS_VS_ERROR_IRQ                       0x9619
#define P96_1A_MEAS2_HS_VS_DLY                            0x961A
#define P96_1C_S1_MEASURE_DUMMY0                          0x961C
#define P96_1D_S1_MEASURE_DUMMY1                          0x961D


//--------------------------------------------------
// DisplayPort 1.1 Tx1 Digital PHY CTRL (Page 9C)
//--------------------------------------------------
#define P9C_00_DP_PHY_CTRL                                0x9C00
#define P9C_01_DPTX_ML_PAT_SEL                            0x9C01
#define P9C_0D_DPTX_PHY_CTRL                              0x9C0D


//--------------------------------------------------
// DisplayPort Tx Analog PHY CTRL (Page 9C)
//--------------------------------------------------
#define P9C_10_DPTX_SFIFO_CTRL0                           0x9C10
#define P9C_11_DPTX_SFIFO_CTRL1                           0x9C11
#define P9C_12_DPTX_SFIFO_LANE_SWAP0                      0x9C12
#define P9C_13_DPTX_SFIFO_LANE_SWAP1                      0x9C13
#define P9C_14_DPTX_SFIFO_INT_EN                          0x9C14


//--------------------------------------------------
// DisplayPort 1.1 Tx1 HPD Detection (PAGE 9C)
//--------------------------------------------------
#define P9C_70_HPD_CTRL                                   0x9C70
#define P9C_71_HPD_IRQ                                    0x9C71
#define P9C_72_HPD_IRQ_EN                                 0x9C72
#define P9C_73_HPD_TIMER1                                 0x9C73
#define P9C_74_HPD_TIMER2                                 0x9C74
#define P9C_75_HPD_TIMER3                                 0x9C75
#define P9C_76_HPD_TIMER4                                 0x9C76
#define P9C_77_HPD_TIMER5                                 0x9C77
#define P9C_78_HPD_TIMER6                                 0x9C78
#define P9C_79_HPD_TIMER7                                 0x9C79
#define P9C_7A_HPD_LONG0                                  0x9C7A
#define P9C_7B_HPD_LONG1                                  0x9C7B
#define P9C_7C_HPD_STATE                                  0x9C7C
#define P9C_7D_RESERVED_0                                 0x9C7D
#define P9C_7E_RESERVED_1                                 0x9C7E


//--------------------------------------------------
// DisplayPort 1.1 Tx1 MAC CTRL (Page 9C)
//--------------------------------------------------
#define P9C_A0_DP_MAC_CTRL                                0x9CA0
#define P9C_A1_DP_RESET_CTRL                              0x9CA1
#define P9C_A2_DP_DEBUG_CTRL                              0x9CA2
#define P9C_A3_DPTX_IRQ_CTRL                              0x9CA3
#define P9C_A4_PG_FIFO_CTRL                               0x9CA4
#define P9C_A5_MAX_WL                                     0x9CA5
#define P9C_A6_LFIFO_WL                                   0x9CA6
#define P9C_A7_PG_INTERRUPT_CTRL                          0x9CA7
#define P9C_A8_MN_VID_AUTO_EN_1                           0x9CA8
#define P9C_A9_MN_M_VID_H                                 0x9CA9
#define P9C_AA_MN_M_VID_M                                 0x9CAA
#define P9C_AB_MN_M_VID_L                                 0x9CAB
#define P9C_AC_MN_N_VID_H                                 0x9CAC
#define P9C_AD_MN_N_VID_M                                 0x9CAD
#define P9C_AE_MN_N_VID_L                                 0x9CAE
#define P9C_AF_MVID_AUTO_H                                0x9CAF
#define P9C_B0_MVID_AUTO_M                                0x9CB0
#define P9C_B1_MVID_AUTO_L                                0x9CB1
#define P9C_B2_NVID_ASYNC_M                               0x9CB2
#define P9C_B3_NVID_ASYNC_L                               0x9CB3
#define P9C_B4_MSA_CTRL                                   0x9CB4
#define P9C_B5_MSA_MISC0                                  0x9CB5
#define P9C_B6_MN_STRM_ATTR_MISC1                         0x9CB6
#define P9C_B7_MN_STRM_ATTR_HTT_M                         0x9CB7
#define P9C_B8_MN_STRM_ATTR_HTT_L                         0x9CB8
#define P9C_B9_MN_STRM_ATTR_HST_M                         0x9CB9
#define P9C_BA_MN_STRM_ATTR_HST_L                         0x9CBA
#define P9C_BB_MN_STRM_ATTR_HWD_M                         0x9CBB
#define P9C_BC_MN_STRM_ATTR_HWD_L                         0x9CBC
#define P9C_BD_MN_STRM_ATTR_HSW_M                         0x9CBD
#define P9C_BE_MN_STRM_ATTR_HSW_L                         0x9CBE
#define P9C_BF_MN_STRM_ATTR_VTTE_M                        0x9CBF
#define P9C_C0_MN_STRM_ATTR_VTTE_L                        0x9CC0
#define P9C_C1_MN_STRM_ATTR_VST_M                         0x9CC1
#define P9C_C2_MN_STRM_ATTR_VST_L                         0x9CC2
#define P9C_C3_MN_STRM_ATTR_VHT_M                         0x9CC3
#define P9C_C4_MN_STRM_ATTR_VHT_L                         0x9CC4
#define P9C_C5_MN_STRM_ATTR_VSW_M                         0x9CC5
#define P9C_C6_MN_STRM_ATTR_VSW_L                         0x9CC6
#define P9C_C7_VBID                                       0x9CC7
#define P9C_C8_VBID_FW_CTL                                0x9CC8
#define P9C_C9_ARBITER_CTRL                               0x9CC9
#define P9C_CA_V_DATA_PER_LINE0                           0x9CCA
#define P9C_CB_V_DATA_PER_LINE1                           0x9CCB
#define P9C_CC_TU_SIZE                                    0x9CCC
#define P9C_CD_TU_DATA_SIZE0                              0x9CCD
#define P9C_CE_TU_DATA_SIZE1                              0x9CCE
#define P9C_CF_HDEALY0                                    0x9CCF
#define P9C_D0_HDEALY1                                    0x9CD0
#define P9C_D1_AUTO_HDEALY0                               0x9CD1
#define P9C_D2_AUTO_HDEALY1                               0x9CD2
#define P9C_D3_LFIFO_WL_SET                               0x9CD3
#define P9C_D4_ARBITER_SEC_END_CNT_HB                     0x9CD4
#define P9C_D5_ARBITER_SEC_END_CNT_LB                     0x9CD5
#define P9C_D6_ARBITER_DEBUG                              0x9CD6
#define P9C_D7_DPTX_CTSFIFO_CTRL                          0x9CD7
#define P9C_D8_DPTX_CTSFIFO_RSV1                          0x9CD8
#define P9C_D9_DPTX_TOP_CTL                               0x9CD9
#define P9C_DA_DPTX_TOP_RSV1                              0x9CDA
#define P9C_DB_DPTX_TOP_RSV2                              0x9CDB
#define P9C_DC_ARBITER_MIN_H_BLANK_WIDTH_HB               0x9CDC
#define P9C_DD_ARBITER_MIN_H_BLANK_WIDTH_LB               0x9CDD
#define P9C_DE_ARBITER_INTERRUPT_CTRL                     0x9CDE
#define P9C_DF_VESA_FMT_REGEN                             0x9CDF
#define P9C_E0_DPTX_CLK_GEN                               0x9CE0
#define P9C_E1_PG_MBIST_CTRL                              0x9CE1
#define P9C_E2_PG_DRF_MBIST_CTRL                          0x9CE2
#define P9C_F0_DPTX_TOP_RSV3                              0x9CF0
#define P9C_F1_DPTX_TOP_RSV4                              0x9CF1
#define P9C_F2_DPTX_TOP_RSV5                              0x9CF2
#define P9C_F3_DPTX_TOP_RSV6                              0x9CF3
#define P9C_F4_DPTX_TOP_RSV7                              0x9CF4
#define P9C_F5_DPTX_TOP_RSV8                              0x9CF5
#define P9C_F6_DPTX_TOP_RSV9                              0x9CF6
#define P9C_F7_DPTX_TOP_RSV10                             0x9CF7


//--------------------------------------------------
// DisplayPort 1.1 Tx1 AUX  (Page 9D)
//--------------------------------------------------
#define P9D_60_DIG_TX_04                                  0x9D60
#define P9D_61_AUX_1                                      0x9D61
#define P9D_62_AUX_2                                      0x9D62
#define P9D_63_AUX_3                                      0x9D63
#define P9D_64_AUX_4                                      0x9D64
#define P9D_65_AUX_5                                      0x9D65
#define P9D_66_AUX_6                                      0x9D66
#define P9D_67_DIG_TX_03                                  0x9D67


//--------------------------------------------------
// DisplayPort 1.1 Tx1 AUX MAC CTRL (Page 9D)
//--------------------------------------------------
#define P9D_A0_AUX_TX_CTRL                                0x9DA0
#define P9D_A1_AUX_TIMEOUT                                0x9DA1
#define P9D_A2_AUX_FSM_STATUS                             0x9DA2
#define P9D_A3_AUXTX_TRAN_CTRL                            0x9DA3
#define P9D_A4_AUXTX_REQ_CMD                              0x9DA4
#define P9D_A5_AUXTX_REQ_ADDR_M                           0x9DA5
#define P9D_A6_AUXTX_REQ_ADDR_L                           0x9DA6
#define P9D_A7_AUXTX_REQ_LEN                              0x9DA7
#define P9D_A8_AUXTX_REQ_DATA                             0x9DA8
#define P9D_A9_AUX_REPLY_CMD                              0x9DA9
#define P9D_AA_AUX_REPLY_DATA                             0x9DAA
#define P9D_AB_AUX_FIFO_CTRL                              0x9DAB
#define P9D_AC_AUX_TX_FIFO_STATUS                         0x9DAC
#define P9D_AD_AUX_FIFO_RD_PTR                            0x9DAD
#define P9D_AE_AUX_FIFO_WR_PTR                            0x9DAE
#define P9D_AF_AUX_RETRY_1                                0x9DAF
#define P9D_B0_AUX_RETRY_2                                0x9DB0
#define P9D_B1_AUX_IRQ_EVENT                              0x9DB1
#define P9D_B2_AUX_IRQ_EN                                 0x9DB2
#define P9D_F0_AUX_DIG_PHY2                               0x9DF0
#define P9D_F1_AUX_DIG_PHY3                               0x9DF1
#define P9D_F2_AUX_DIG_PHY4                               0x9DF2
#define P9D_F3_AUX_DIG_PHY5                               0x9DF3
#define P9D_F4_AUX_DIG_PHY6                               0x9DF4
#define P9D_F5_AUX_DIG_PHY7                               0x9DF5
#define P9D_F6_AUX_DIG_PHY8                               0x9DF6
#define P9D_F7_AUX_DIG_PHY9                               0x9DF7
#define P9D_F8_AUX_DEBUG                                  0x9DF8


//--------------------------------------------------
// DisplayPort 1.1 Tx1 Digital PHY CTRL (Page 9E)
//--------------------------------------------------
#define P9E_00_DP_PHY_CTRL                                0x9E00
#define P9E_01_DPTX_ML_PAT_SEL                            0x9E01
#define P9E_0D_DPTX_PHY_CTRL                              0x9E0D


//--------------------------------------------------
// DisplayPort Tx Analog PHY CTRL (Page 9E)
//--------------------------------------------------
#define P9E_10_DPTX_SFIFO_CTRL0                           0x9E10
#define P9E_11_DPTX_SFIFO_CTRL1                           0x9E11
#define P9E_12_DPTX_SFIFO_LANE_SWAP0                      0x9E12
#define P9E_13_DPTX_SFIFO_LANE_SWAP1                      0x9E13
#define P9E_14_DPTX_SFIFO_INT_EN                          0x9E14


//--------------------------------------------------
// DisplayPort 1.1 Tx2 HPD Detection (PAGE 9E)
//--------------------------------------------------
#define P9E_70_HPD_CTRL                                   0x9E70
#define P9E_71_HPD_IRQ                                    0x9E71
#define P9E_72_HPD_IRQ_EN                                 0x9E72
#define P9E_73_HPD_TIMER1                                 0x9E73
#define P9E_74_HPD_TIMER2                                 0x9E74
#define P9E_75_HPD_TIMER3                                 0x9E75
#define P9E_76_HPD_TIMER4                                 0x9E76
#define P9E_77_HPD_TIMER5                                 0x9E77
#define P9E_78_HPD_TIMER6                                 0x9E78
#define P9E_79_HPD_TIMER7                                 0x9E79
#define P9E_7A_HPD_LONG0                                  0x9E7A
#define P9E_7B_HPD_LONG1                                  0x9E7B
#define P9E_7C_HPD_STATE                                  0x9E7C
#define P9E_7D_RESERVED_0                                 0x9E7D
#define P9E_7E_RESERVED_1                                 0x9E7E


//--------------------------------------------------
// DisplayPort 1.1 Tx1 MAC CTRL (Page 9E)
//--------------------------------------------------
#define P9E_A0_DP_MAC_CTRL                                0x9EA0
#define P9E_A1_DP_RESET_CTRL                              0x9EA1
#define P9E_A2_DP_DEBUG_CTRL                              0x9EA2
#define P9E_A3_DPTX_IRQ_CTRL                              0x9EA3
#define P9E_A4_PG_FIFO_CTRL                               0x9EA4
#define P9E_A5_MAX_WL                                     0x9EA5
#define P9E_A6_LFIFO_WL                                   0x9EA6
#define P9E_A7_PG_INTERRUPT_CTRL                          0x9EA7
#define P9E_A8_MN_VID_AUTO_EN_1                           0x9EA8
#define P9E_A9_MN_M_VID_H                                 0x9EA9
#define P9E_AA_MN_M_VID_M                                 0x9EAA
#define P9E_AB_MN_M_VID_L                                 0x9EAB
#define P9E_AC_MN_N_VID_H                                 0x9EAC
#define P9E_AD_MN_N_VID_M                                 0x9EAD
#define P9E_AE_MN_N_VID_L                                 0x9EAE
#define P9E_AF_MVID_AUTO_H                                0x9EAF
#define P9E_B0_MVID_AUTO_M                                0x9EB0
#define P9E_B1_MVID_AUTO_L                                0x9EB1
#define P9E_B2_NVID_ASYNC_M                               0x9EB2
#define P9E_B3_NVID_ASYNC_L                               0x9EB3
#define P9E_B4_MSA_CTRL                                   0x9EB4
#define P9E_B5_MSA_MISC0                                  0x9EB5
#define P9E_B6_MN_STRM_ATTR_MISC1                         0x9EB6
#define P9E_B7_MN_STRM_ATTR_HTT_M                         0x9EB7
#define P9E_B8_MN_STRM_ATTR_HTT_L                         0x9EB8
#define P9E_B9_MN_STRM_ATTR_HST_M                         0x9EB9
#define P9E_BA_MN_STRM_ATTR_HST_L                         0x9EBA
#define P9E_BB_MN_STRM_ATTR_HWD_M                         0x9EBB
#define P9E_BC_MN_STRM_ATTR_HWD_L                         0x9EBC
#define P9E_BD_MN_STRM_ATTR_HSW_M                         0x9EBD
#define P9E_BE_MN_STRM_ATTR_HSW_L                         0x9EBE
#define P9E_BF_MN_STRM_ATTR_VTTE_M                        0x9EBF
#define P9E_C0_MN_STRM_ATTR_VTTE_L                        0x9EC0
#define P9E_C1_MN_STRM_ATTR_VST_M                         0x9EC1
#define P9E_C2_MN_STRM_ATTR_VST_L                         0x9EC2
#define P9E_C3_MN_STRM_ATTR_VHT_M                         0x9EC3
#define P9E_C4_MN_STRM_ATTR_VHT_L                         0x9EC4
#define P9E_C5_MN_STRM_ATTR_VSW_M                         0x9EC5
#define P9E_C6_MN_STRM_ATTR_VSW_L                         0x9EC6
#define P9E_C7_VBID                                       0x9EC7
#define P9E_C8_VBID_FW_CTL                                0x9EC8
#define P9E_C9_ARBITER_CTRL                               0x9EC9
#define P9E_CA_V_DATA_PER_LINE0                           0x9ECA
#define P9E_CB_V_DATA_PER_LINE1                           0x9ECB
#define P9E_CC_TU_SIZE                                    0x9ECC
#define P9E_CD_TU_DATA_SIZE0                              0x9ECD
#define P9E_CE_TU_DATA_SIZE1                              0x9ECE
#define P9E_CF_HDEALY0                                    0x9ECF
#define P9E_D0_HDEALY1                                    0x9ED0
#define P9E_D1_AUTO_HDEALY0                               0x9ED1
#define P9E_D2_AUTO_HDEALY1                               0x9ED2
#define P9E_D3_LFIFO_WL_SET                               0x9ED3
#define P9E_D4_ARBITER_SEC_END_CNT_HB                     0x9ED4
#define P9E_D5_ARBITER_SEC_END_CNT_LB                     0x9ED5
#define P9E_D6_ARBITER_DEBUG                              0x9ED6
#define P9E_D7_DPTX_CTSFIFO_CTRL                          0x9ED7
#define P9E_D8_DPTX_CTSFIFO_RSV1                          0x9ED8
#define P9E_D9_DPTX_TOP_CTL                               0x9ED9
#define P9E_DA_DPTX_TOP_RSV1                              0x9EDA
#define P9E_DB_DPTX_TOP_RSV2                              0x9EDB
#define P9E_DC_ARBITER_MIN_H_BLANK_WIDTH_HB               0x9EDC
#define P9E_DD_ARBITER_MIN_H_BLANK_WIDTH_LB               0x9EDD
#define P9E_DE_ARBITER_INTERRUPT_CTRL                     0x9EDE
#define P9E_DF_VESA_FMT_REGEN                             0x9EDF
#define P9E_E0_DPTX_CLK_GEN                               0x9EE0
#define P9E_E1_PG_MBIST_CTRL                              0x9EE1
#define P9E_E2_PG_DRF_MBIST_CTRL                          0x9EE2
#define P9E_F0_DPTX_TOP_RSV3                              0x9EF0
#define P9E_F1_DPTX_TOP_RSV4                              0x9EF1
#define P9E_F2_DPTX_TOP_RSV5                              0x9EF2
#define P9E_F3_DPTX_TOP_RSV6                              0x9EF3
#define P9E_F4_DPTX_TOP_RSV7                              0x9EF4
#define P9E_F5_DPTX_TOP_RSV8                              0x9EF5
#define P9E_F6_DPTX_TOP_RSV9                              0x9EF6
#define P9E_F7_DPTX_TOP_RSV10                             0x9EF7


//--------------------------------------------------
// DisplayPort 1.1 Tx2 AUX (Page 9F)
//--------------------------------------------------
#define P9F_60_DIG_TX_04                                  0x9F60
#define P9F_61_AUX_1                                      0x9F61
#define P9F_62_AUX_2                                      0x9F62
#define P9F_63_AUX_3                                      0x9F63
#define P9F_64_AUX_4                                      0x9F64
#define P9F_65_AUX_5                                      0x9F65
#define P9F_66_AUX_6                                      0x9F66
#define P9F_67_DIG_TX_03                                  0x9F67


//--------------------------------------------------
// DisplayPort 1.1 Tx2 AUX MAC CTRL (Page 9F)
//--------------------------------------------------
#define P9F_A0_AUX_TX_CTRL                                0x9FA0
#define P9F_A1_AUX_TIMEOUT                                0x9FA1
#define P9F_A2_AUX_FSM_STATUS                             0x9FA2
#define P9F_A3_AUXTX_TRAN_CTRL                            0x9FA3
#define P9F_A4_AUXTX_REQ_CMD                              0x9FA4
#define P9F_A5_AUXTX_REQ_ADDR_M                           0x9FA5
#define P9F_A6_AUXTX_REQ_ADDR_L                           0x9FA6
#define P9F_A7_AUXTX_REQ_LEN                              0x9FA7
#define P9F_A8_AUXTX_REQ_DATA                             0x9FA8
#define P9F_A9_AUX_REPLY_CMD                              0x9FA9
#define P9F_AA_AUX_REPLY_DATA                             0x9FAA
#define P9F_AB_AUX_FIFO_CTRL                              0x9FAB
#define P9F_AC_AUX_TX_FIFO_STATUS                         0x9FAC
#define P9F_AD_AUX_FIFO_RD_PTR                            0x9FAD
#define P9F_AE_AUX_FIFO_WR_PTR                            0x9FAE
#define P9F_AF_AUX_RETRY_1                                0x9FAF
#define P9F_B0_AUX_RETRY_2                                0x9FB0
#define P9F_B1_AUX_IRQ_EVENT                              0x9FB1
#define P9F_B2_AUX_IRQ_EN                                 0x9FB2
#define P9F_F0_AUX_DIG_PHY2                               0x9FF0
#define P9F_F1_AUX_DIG_PHY3                               0x9FF1
#define P9F_F2_AUX_DIG_PHY4                               0x9FF2
#define P9F_F3_AUX_DIG_PHY5                               0x9FF3
#define P9F_F4_AUX_DIG_PHY6                               0x9FF4
#define P9F_F5_AUX_DIG_PHY7                               0x9FF5
#define P9F_F6_AUX_DIG_PHY8                               0x9FF6
#define P9F_F7_AUX_DIG_PHY9                               0x9FF7
#define P9F_F8_AUX_DEBUG                                  0x9FF8


//--------------------------------------------------
// DC_SYS (Page A0)
//--------------------------------------------------
#define PA0_00_DC_PICT_SET                                0xA000
#define PA0_01_DC_PICT_SET                                0xA001
#define PA0_02_DC_PICT_SET                                0xA002
#define PA0_03_DC_PICT_SET                                0xA003
#define PA0_04_DC_SYS_MISC                                0xA004
#define PA0_05_DC_SYS_MISC                                0xA005
#define PA0_06_DC_SYS_MISC                                0xA006
#define PA0_07_DC_SYS_MISC                                0xA007
#define PA0_40_DC_PRIORITY_C0                             0xA040
#define PA0_41_DC_PRIORITY_C0                             0xA041
#define PA0_42_DC_PRIORITY_C0                             0xA042
#define PA0_43_DC_PRIORITY_C0                             0xA043
#define PA0_44_DC_PRIORITY_C1                             0xA044
#define PA0_45_DC_PRIORITY_C1                             0xA045
#define PA0_46_DC_PRIORITY_C1                             0xA046
#define PA0_47_DC_PRIORITY_C1                             0xA047
#define PA0_48_DC_PRIORITY_C2                             0xA048
#define PA0_49_DC_PRIORITY_C2                             0xA049
#define PA0_4A_DC_PRIORITY_C2                             0xA04A
#define PA0_4B_DC_PRIORITY_C2                             0xA04B
#define PA0_4C_DC_PRIORITY_C3                             0xA04C
#define PA0_4D_DC_PRIORITY_C3                             0xA04D
#define PA0_4E_DC_PRIORITY_C3                             0xA04E
#define PA0_4F_DC_PRIORITY_C3                             0xA04F
#define PA0_50_DC_PRIORITY_C4                             0xA050
#define PA0_51_DC_PRIORITY_C4                             0xA051
#define PA0_52_DC_PRIORITY_C4                             0xA052
#define PA0_53_DC_PRIORITY_C4                             0xA053
#define PA0_54_DC_PRIORITY_C5                             0xA054
#define PA0_55_DC_PRIORITY_C5                             0xA055
#define PA0_56_DC_PRIORITY_C5                             0xA056
#define PA0_57_DC_PRIORITY_C5                             0xA057
#define PA0_58_DC_PRIORITY_C6                             0xA058
#define PA0_59_DC_PRIORITY_C6                             0xA059
#define PA0_5A_DC_PRIORITY_C6                             0xA05A
#define PA0_5B_DC_PRIORITY_C6                             0xA05B
#define PA0_5C_DC_PRIORITY_C7                             0xA05C
#define PA0_5D_DC_PRIORITY_C7                             0xA05D
#define PA0_5E_DC_PRIORITY_C7                             0xA05E
#define PA0_5F_DC_PRIORITY_C7                             0xA05F
#define PA0_60_DC_PRIORITY_CNT_PERIO                      0xA060
#define PA0_61_DC_PRIORITY_CNT_PERIO                      0xA061
#define PA0_62_DC_PRIORITY_CNT_PERIO                      0xA062
#define PA0_63_DC_PRIORITY_CNT_PERIO                      0xA063
#define PA1_EC_DC_PROS_CTRL                               0xA1EC
#define PA1_ED_DC_PROS_CTRL                               0xA1ED
#define PA1_EE_DC_PROS_CTRL                               0xA1EE
#define PA1_EF_DC_PROS_CTRL                               0xA1EF
#define PA0_20_DC_PICT_SET_OFFSET                         0xA020
#define PA0_21_DC_PICT_SET_OFFSET                         0xA021
#define PA0_22_DC_PICT_SET_OFFSET                         0xA022
#define PA0_23_DC_PICT_SET_OFFSET                         0xA023
#define PA0_24_DC_REQ_STATUS                              0xA024
#define PA0_25_DC_REQ_STATUS                              0xA025
#define PA0_26_DC_REQ_STATUS                              0xA026
#define PA0_27_DC_REQ_STATUS                              0xA027
#define PA0_28_DC_SYS_MISC2                               0xA028
#define PA0_29_DC_SYS_MISC2                               0xA029
#define PA0_2A_DC_SYS_MISC2                               0xA02A
#define PA0_2B_DC_SYS_MISC2                               0xA02B
#define PA0_2C_DC_SYS_MISC3                               0xA02C
#define PA0_2D_DC_SYS_MISC3                               0xA02D
#define PA0_2E_DC_SYS_MISC3                               0xA02E
#define PA0_2F_DC_SYS_MISC3                               0xA02F
#define PA0_30_DC_PC_CTRL                                 0xA030
#define PA0_31_DC_PC_CTRL                                 0xA031
#define PA0_32_DC_PC_CTRL                                 0xA032
#define PA0_33_DC_PC_CTRL                                 0xA033
#define PA0_34_DC_PC_TOTA_MON_NUM                         0xA034
#define PA0_35_DC_PC_TOTA_MON_NUM                         0xA035
#define PA0_36_DC_PC_TOTA_MON_NUM                         0xA036
#define PA0_37_DC_PC_TOTA_MON_NUM                         0xA037
#define PA0_38_DC_PC_TOTA_ACK_NUM                         0xA038
#define PA0_39_DC_PC_TOTA_ACK_NUM                         0xA039
#define PA0_3A_DC_PC_TOTA_ACK_NUM                         0xA03A
#define PA0_3B_DC_PC_TOTA_ACK_NUM                         0xA03B
#define PA0_3C_DC_PC_TOTA_IDL_NUM                         0xA03C
#define PA0_3D_DC_PC_TOTA_IDL_NUM                         0xA03D
#define PA0_3E_DC_PC_TOTA_IDL_NUM                         0xA03E
#define PA0_3F_DC_PC_TOTA_IDL_NUM                         0xA03F
#define PA0_70_DC_PC_PROG_0_ACC_LAT                       0xA070
#define PA0_71_DC_PC_PROG_0_ACC_LAT                       0xA071
#define PA0_72_DC_PC_PROG_0_ACC_LAT                       0xA072
#define PA0_73_DC_PC_PROG_0_ACC_LAT                       0xA073
#define PA0_80_DC_PC_PROG_1_ACC_LAT                       0xA080
#define PA0_81_DC_PC_PROG_1_ACC_LAT                       0xA081
#define PA0_82_DC_PC_PROG_1_ACC_LAT                       0xA082
#define PA0_83_DC_PC_PROG_1_ACC_LAT                       0xA083
#define PA0_90_DC_PC_PROG_2_ACC_LAT                       0xA090
#define PA0_91_DC_PC_PROG_2_ACC_LAT                       0xA091
#define PA0_92_DC_PC_PROG_2_ACC_LAT                       0xA092
#define PA0_93_DC_PC_PROG_2_ACC_LAT                       0xA093
#define PA0_74_DC_PC_PROG_0_MAX_LAT                       0xA074
#define PA0_75_DC_PC_PROG_0_MAX_LAT                       0xA075
#define PA0_76_DC_PC_PROG_0_MAX_LAT                       0xA076
#define PA0_77_DC_PC_PROG_0_MAX_LAT                       0xA077
#define PA0_84_DC_PC_PROG_1_MAX_LAT                       0xA084
#define PA0_85_DC_PC_PROG_1_MAX_LAT                       0xA085
#define PA0_86_DC_PC_PROG_1_MAX_LAT                       0xA086
#define PA0_87_DC_PC_PROG_1_MAX_LAT                       0xA087
#define PA0_94_DC_PC_PROG_2_MAX_LAT                       0xA094
#define PA0_95_DC_PC_PROG_2_MAX_LAT                       0xA095
#define PA0_96_DC_PC_PROG_2_MAX_LAT                       0xA096
#define PA0_97_DC_PC_PROG_2_MAX_LAT                       0xA097
#define PA0_78_DC_PC_PROG_0_REQ_NUM                       0xA078
#define PA0_79_DC_PC_PROG_0_REQ_NUM                       0xA079
#define PA0_7A_DC_PC_PROG_0_REQ_NUM                       0xA07A
#define PA0_7B_DC_PC_PROG_0_REQ_NUM                       0xA07B
#define PA0_88_DC_PC_PROG_1_REQ_NUM                       0xA088
#define PA0_89_DC_PC_PROG_1_REQ_NUM                       0xA089
#define PA0_8A_DC_PC_PROG_1_REQ_NUM                       0xA08A
#define PA0_8B_DC_PC_PROG_1_REQ_NUM                       0xA08B
#define PA0_98_DC_PC_PROG_2_REQ_NUM                       0xA098
#define PA0_99_DC_PC_PROG_2_REQ_NUM                       0xA099
#define PA0_9A_DC_PC_PROG_2_REQ_NUM                       0xA09A
#define PA0_9B_DC_PC_PROG_2_REQ_NUM                       0xA09B
#define PA0_7C_DC_PC_PROG_0_ACK_NUM                       0xA07C
#define PA0_7D_DC_PC_PROG_0_ACK_NUM                       0xA07D
#define PA0_7E_DC_PC_PROG_0_ACK_NUM                       0xA07E
#define PA0_7F_DC_PC_PROG_0_ACK_NUM                       0xA07F
#define PA0_8C_DC_PC_PROG_1_ACK_NUM                       0xA08C
#define PA0_8D_DC_PC_PROG_1_ACK_NUM                       0xA08D
#define PA0_8E_DC_PC_PROG_1_ACK_NUM                       0xA08E
#define PA0_8F_DC_PC_PROG_1_ACK_NUM                       0xA08F
#define PA0_1C_DC_PC_PROG_2_ACK_NUM                       0xA01C
#define PA0_1D_DC_PC_PROG_2_ACK_NUM                       0xA01D
#define PA0_1E_DC_PC_PROG_2_ACK_NUM                       0xA01E
#define PA0_1F_DC_PC_PROG_2_ACK_NUM                       0xA01F
#define PA0_B0_DC_PC_PROG_CTRL                            0xA0B0
#define PA0_B1_DC_PC_PROG_CTRL                            0xA0B1
#define PA0_B2_DC_PC_PROG_CTRL                            0xA0B2
#define PA0_B3_DC_PC_PROG_CTRL                            0xA0B3
#define PA0_C0_SFMODE_PATTERN0                            0xA0C0
#define PA0_C1_SFMODE_PATTERN0                            0xA0C1
#define PA0_C2_SFMODE_PATTERN0                            0xA0C2
#define PA0_C3_SFMODE_PATTERN0                            0xA0C3
#define PA0_C4_SFMODE_PATTERN1                            0xA0C4
#define PA0_C5_SFMODE_PATTERN1                            0xA0C5
#define PA0_C6_SFMODE_PATTERN1                            0xA0C6
#define PA0_C7_SFMODE_PATTERN1                            0xA0C7
#define PA0_C8_SFMODE_PATTERN2                            0xA0C8
#define PA0_C9_SFMODE_PATTERN2                            0xA0C9
#define PA0_CA_SFMODE_PATTERN2                            0xA0CA
#define PA0_CB_SFMODE_PATTERN2                            0xA0CB
#define PA0_CC_SFMODE_PATTERN3                            0xA0CC
#define PA0_CD_SFMODE_PATTERN3                            0xA0CD
#define PA0_CE_SFMODE_PATTERN3                            0xA0CE
#define PA0_CF_SFMODE_PATTERN3                            0xA0CF
#define PA0_D0_SFMODE_CMP_RLT0                            0xA0D0
#define PA0_D1_SFMODE_CMP_RLT0                            0xA0D1
#define PA0_D2_SFMODE_CMP_RLT0                            0xA0D2
#define PA0_D3_SFMODE_CMP_RLT0                            0xA0D3
#define PA0_D4_SFMODE_CMP_RLT1                            0xA0D4
#define PA0_D5_SFMODE_CMP_RLT1                            0xA0D5
#define PA0_D6_SFMODE_CMP_RLT1                            0xA0D6
#define PA0_D7_SFMODE_CMP_RLT1                            0xA0D7
#define PA0_D8_SFMODE_CMP_RLT2                            0xA0D8
#define PA0_D9_SFMODE_CMP_RLT2                            0xA0D9
#define PA0_DA_SFMODE_CMP_RLT2                            0xA0DA
#define PA0_DB_SFMODE_CMP_RLT2                            0xA0DB
#define PA0_DC_SFMODE_CMP_RLT3                            0xA0DC
#define PA0_DD_SFMODE_CMP_RLT3                            0xA0DD
#define PA0_DE_SFMODE_CMP_RLT3                            0xA0DE
#define PA0_DF_SFMODE_CMP_RLT3                            0xA0DF
#define PA0_E0_DC_64_WRITE_BUF_CTRL                       0xA0E0
#define PA0_E1_DC_64_WRITE_BUF_CTRL                       0xA0E1
#define PA0_E2_DC_64_WRITE_BUF_CTRL                       0xA0E2
#define PA0_E3_DC_64_WRITE_BUF_CTRL                       0xA0E3
#define PA0_E4_DC_64_READ_BUF_CTRL                        0xA0E4
#define PA0_E5_DC_64_READ_BUF_CTRL                        0xA0E5
#define PA0_E6_DC_64_READ_BUF_CTRL                        0xA0E6
#define PA0_E7_DC_64_READ_BUF_CTRL                        0xA0E7


//--------------------------------------------------
// DC_SYS (Page A1)
//--------------------------------------------------
#define PA1_10_DC_PIC_OFFSET_X_DETECTION                  0xA110
#define PA1_11_DC_PIC_OFFSET_X_DETECTION                  0xA111
#define PA1_12_DC_PIC_OFFSET_X_DETECTION                  0xA112
#define PA1_13_DC_PIC_OFFSET_X_DETECTION                  0xA113
#define PA1_C0_DC_BIST_MODE                               0xA1C0
#define PA1_C1_DC_BIST_MODE                               0xA1C1
#define PA1_C2_DC_BIST_MODE                               0xA1C2
#define PA1_C3_DC_BIST_MODE                               0xA1C3
#define PA1_C4_DC_BIST_DONE                               0xA1C4
#define PA1_C5_DC_BIST_DONE                               0xA1C5
#define PA1_C6_DC_BIST_DONE                               0xA1C6
#define PA1_C7_DC_BIST_DONE                               0xA1C7
#define PA1_C8_DC_BIST_FAIL                               0xA1C8
#define PA1_C9_DC_BIST_FAIL                               0xA1C9
#define PA1_CA_DC_BIST_FAIL                               0xA1CA
#define PA1_CB_DC_BIST_FAIL                               0xA1CB
#define PA1_CC_DC_BIST_DRF                                0xA1CC
#define PA1_CD_DC_BIST_DRF                                0xA1CD
#define PA1_CE_DC_BIST_DRF                                0xA1CE
#define PA1_CF_DC_BIST_DRF                                0xA1CF
#define PA1_D0_DC_BIST_RESUME                             0xA1D0
#define PA1_D1_DC_BIST_RESUME                             0xA1D1
#define PA1_D2_DC_BIST_RESUME                             0xA1D2
#define PA1_D3_DC_BIST_RESUME                             0xA1D3
#define PA1_D4_DC_BIST0_DRF_DONE                          0xA1D4
#define PA1_D5_DC_BIST0_DRF_DONE                          0xA1D5
#define PA1_D6_DC_BIST0_DRF_DONE                          0xA1D6
#define PA1_D7_DC_BIST0_DRF_DONE                          0xA1D7
#define PA1_D8_DC_BIST_DRF_PAUSE                          0xA1D8
#define PA1_D9_DC_BIST_DRF_PAUSE                          0xA1D9
#define PA1_DA_DC_BIST_DRF_PAUSE                          0xA1DA
#define PA1_DB_DC_BIST_DRF_PAUSE                          0xA1DB
#define PA1_DC_DC_BIST_DRF_FAIL                           0xA1DC
#define PA1_DD_DC_BIST_DRF_FAIL                           0xA1DD
#define PA1_DE_DC_BIST_DRF_FAIL                           0xA1DE
#define PA1_DF_DC_BIST_DRF_FAIL                           0xA1DF
#define PA1_E0_DC_BIST_DETAIL                             0xA1E0
#define PA1_E1_DC_BIST_DETAIL                             0xA1E1
#define PA1_E2_DC_BIST_DETAIL                             0xA1E2
#define PA1_E3_DC_BIST_DETAIL                             0xA1E3
#define PA1_E4_DC_BIST_RM                                 0xA1E4
#define PA1_E5_DC_BIST_RM                                 0xA1E5
#define PA1_E6_DC_BIST_RM                                 0xA1E6
#define PA1_E7_DC_BIST_RM                                 0xA1E7
#define PA1_F0_DUMMY_REG0                                 0xA1F0
#define PA1_F1_DUMMY_REG0                                 0xA1F1
#define PA1_F2_DUMMY_REG0                                 0xA1F2
#define PA1_F3_DUMMY_REG0                                 0xA1F3
#define PA1_F4_DUMMY_REG1                                 0xA1F4
#define PA1_F5_DUMMY_REG1                                 0xA1F5
#define PA1_F6_DUMMY_REG1                                 0xA1F6
#define PA1_F7_DUMMY_REG1                                 0xA1F7
#define PA1_F8_DUMMY_REG2                                 0xA1F8
#define PA1_F9_DUMMY_REG2                                 0xA1F9
#define PA1_FA_DUMMY_REG2                                 0xA1FA
#define PA1_FB_DUMMY_REG2                                 0xA1FB
#define PA1_FC_DUMMY_REG3                                 0xA1FC
#define PA1_FD_DUMMY_REG3                                 0xA1FD
#define PA1_FE_DUMMY_REG3                                 0xA1FE
#define PA1_FF_DUMMY_REG3                                 0xA1FF


//--------------------------------------------------
// DC_SYS (Page A2)
//--------------------------------------------------
#define PA2_00_DC_MT_SADDR                                0xA200
#define PA2_01_DC_MT_SADDR                                0xA201
#define PA2_02_DC_MT_SADDR                                0xA202
#define PA2_03_DC_MT_SADDR                                0xA203
#define PA2_20_DC_MT_EADDR                                0xA220
#define PA2_21_DC_MT_EADDR                                0xA221
#define PA2_22_DC_MT_EADDR                                0xA222
#define PA2_23_DC_MT_EADDR                                0xA223
#define PA2_40_DC_MT_MODE                                 0xA240
#define PA2_41_DC_MT_MODE                                 0xA241
#define PA2_42_DC_MT_MODE                                 0xA242
#define PA2_43_DC_MT_MODE                                 0xA243
#define PA2_60_DC_MT_TABLE                                0xA260
#define PA2_61_DC_MT_TABLE                                0xA261
#define PA2_62_DC_MT_TABLE                                0xA262
#define PA2_63_DC_MT_TABLE                                0xA263
#define PA2_80_DC_MT_ADDCMD_HI                            0xA280
#define PA2_81_DC_MT_ADDCMD_HI                            0xA281
#define PA2_82_DC_MT_ADDCMD_HI                            0xA282
#define PA2_83_DC_MT_ADDCMD_HI                            0xA283
#define PA2_A0_DC_MT_ADDCMD_LO                            0xA2A0
#define PA2_A1_DC_MT_ADDCMD_LO                            0xA2A1
#define PA2_A2_DC_MT_ADDCMD_LO                            0xA2A2
#define PA2_A3_DC_MT_ADDCMD_LO                            0xA2A3
#define PA2_C0_DC_MT_MISC_1                               0xA2C0
#define PA2_C1_DC_MT_MISC_2                               0xA2C1
#define PA2_C2_DC_MT_MISC_3                               0xA2C2
#define PA2_C3_DC_MT_MISC_4                               0xA2C3


//--------------------------------------------------
// DC_SYS (Page A3)
//--------------------------------------------------
#define PA3_00_DC_EC_CTRL                                 0xA300
#define PA3_01_DC_EC_CTRL                                 0xA301
#define PA3_02_DC_EC_CTRL                                 0xA302
#define PA3_03_DC_EC_CTRL                                 0xA303
#define PA3_04_DC_EC_ADDCMD_HI                            0xA304
#define PA3_05_DC_EC_ADDCMD_HI                            0xA305
#define PA3_06_DC_EC_ADDCMD_HI                            0xA306
#define PA3_07_DC_EC_ADDCMD_HI                            0xA307
#define PA3_08_DC_EC_ADDCMD_LO                            0xA308
#define PA3_09_DC_EC_ADDCMD_LO                            0xA309
#define PA3_0A_DC_EC_ADDCMD_LO                            0xA30A
#define PA3_0B_DC_EC_ADDCMD_LO                            0xA30B
#define PA3_0C_DC_RD_TAG_CHECK                            0xA30C
#define PA3_0D_DC_RD_TAG_CHECK                            0xA30D
#define PA3_0E_DC_RD_TAG_CHECK                            0xA30E
#define PA3_0F_DC_RD_TAG_CHECK                            0xA30F
#define PA3_10_DC_RD_TAG_CHECK_ST                         0xA310
#define PA3_11_DC_RD_TAG_CHECK_ST                         0xA311
#define PA3_12_DC_RD_TAG_CHECK_ST                         0xA312
#define PA3_13_DC_RD_TAG_CHECK_ST                         0xA313
#define PA3_80_DC_MEM_PROTECT_CTRL                        0xA380
#define PA3_81_DC_MEM_PROTECT_CTRL                        0xA381
#define PA3_82_DC_MEM_PROTECT_CTRL                        0xA382
#define PA3_83_DC_MEM_PROTECT_CTRL                        0xA383
#define PA3_84_DC_MEM_PROTECT_SADDR                       0xA384
#define PA3_85_DC_MEM_PROTECT_SADDR                       0xA385
#define PA3_86_DC_MEM_PROTECT_SADDR                       0xA386
#define PA3_87_DC_MEM_PROTECT_SADDR                       0xA387
#define PA3_88_DC_MEM_PROTECT_EADDR                       0xA388
#define PA3_89_DC_MEM_PROTECT_EADDR                       0xA389
#define PA3_8A_DC_MEM_PROTECT_EADDR                       0xA38A
#define PA3_8B_DC_MEM_PROTECT_EADDR                       0xA38B


//--------------------------------------------------
// DDR System Bridge (Page A4)
//--------------------------------------------------
#define PA4_00_SB_ARB_CR00                                0xA400
#define PA4_01_SB_ARB_CR01                                0xA401
#define PA4_02_SB_ARB_CR02                                0xA402
#define PA4_03_SB_ARB_CR03                                0xA403
#define PA4_04_SB_ARB_CR04                                0xA404
#define PA4_08_SB_LATCNT_CR10                             0xA408
#define PA4_09_SB_LATCNT_CR11                             0xA409
#define PA4_0A_SB_LATCNT_CR12                             0xA40A
#define PA4_0B_SB_LATCNT_CR13                             0xA40B
#define PA4_0C_SB_LATCNT_CR20                             0xA40C
#define PA4_0D_SB_LATCNT_CR21                             0xA40D
#define PA4_0E_SB_LATCNT_CR22                             0xA40E
#define PA4_0F_SB_LATCNT_CR23                             0xA40F
#define PA4_10_SB_LATCNT_CR30                             0xA410
#define PA4_11_SB_LATCNT_CR31                             0xA411
#define PA4_12_SB_LATCNT_CR32                             0xA412
#define PA4_13_SB_LATCNT_CR33                             0xA413
#define PA4_14_SB_LATCNT_CR40                             0xA414
#define PA4_15_SB_LATCNT_CR41                             0xA415
#define PA4_16_SB_LATCNT_CR42                             0xA416
#define PA4_17_SB_LATCNT_CR43                             0xA417
#define PA4_18_SB_LATCNT_CR50                             0xA418
#define PA4_19_SB_LATCNT_CR51                             0xA419
#define PA4_1A_SB_LATCNT_CR52                             0xA41A
#define PA4_1B_SB_LATCNT_CR53                             0xA41B
#define PA4_1C_SB_LATCNT_CR60                             0xA41C
#define PA4_1D_SB_LATCNT_CR61                             0xA41D
#define PA4_1E_SB_LATCNT_CR62                             0xA41E
#define PA4_1F_SB_LATCNT_CR63                             0xA41F
#define PA4_20_SB_LATCNT_CR70                             0xA420
#define PA4_21_SB_LATCNT_CR71                             0xA421
#define PA4_22_SB_LATCNT_CR72                             0xA422
#define PA4_23_SB_LATCNT_CR73                             0xA423
#define PA4_24_SB_LATCNT_CR80                             0xA424
#define PA4_25_SB_LATCNT_CR81                             0xA425
#define PA4_26_SB_LATCNT_CR82                             0xA426
#define PA4_27_SB_LATCNT_CR83                             0xA427
#define PA4_28_SB_LATCNT_CR90                             0xA428
#define PA4_29_SB_LATCNT_CR91                             0xA429
#define PA4_2A_SB_LATCNT_CR92                             0xA42A
#define PA4_2B_SB_LATCNT_CR93                             0xA42B
#define PA4_2C_SB_LATCNT_CRA0                             0xA42C
#define PA4_2D_SB_LATCNT_CRA1                             0xA42D
#define PA4_2E_SB_LATCNT_CRA2                             0xA42E
#define PA4_2F_SB_LATCNT_CRA3                             0xA42F
#define PA4_30_SB_LATCNT_CRB0                             0xA430
#define PA4_31_SB_LATCNT_CRB1                             0xA431
#define PA4_32_SB_LATCNT_CRB2                             0xA432
#define PA4_33_SB_LATCNT_CRB3                             0xA433
#define PA4_34_SB_LATCNT_CRC0                             0xA434
#define PA4_35_SB_LATCNT_CRC1                             0xA435
#define PA4_36_SB_LATCNT_CRC2                             0xA436
#define PA4_37_SB_LATCNT_CRC3                             0xA437
#define PA4_38_SB_LATCNT_CRD0                             0xA438
#define PA4_39_SB_LATCNT_CRD1                             0xA439
#define PA4_3A_SB_LATCNT_CRD2                             0xA43A
#define PA4_3B_SB_LATCNT_CRD3                             0xA43B
#define PA4_3C_SB_LATCNT_CRE0                             0xA43C
#define PA4_3D_SB_LATCNT_CRE1                             0xA43D
#define PA4_3E_SB_LATCNT_CRE2                             0xA43E
#define PA4_3F_SB_LATCNT_CRE3                             0xA43F
#define PA4_40_SB_LATCNT_CRF0                             0xA440
#define PA4_41_SB_LATCNT_CRF1                             0xA441
#define PA4_42_SB_LATCNT_CRF2                             0xA442
#define PA4_43_SB_LATCNT_CRF3                             0xA443
#define PA4_44_SB_WDRR_CR10                               0xA444
#define PA4_45_SB_WDRR_CR11                               0xA445
#define PA4_46_SB_WDRR_CR12                               0xA446
#define PA4_47_SB_WDRR_CR13                               0xA447
#define PA4_48_SB_WDRR_CR20                               0xA448
#define PA4_49_SB_WDRR_CR21                               0xA449
#define PA4_4A_SB_WDRR_CR22                               0xA44A
#define PA4_4B_SB_WDRR_CR23                               0xA44B
#define PA4_4C_SB_WDRR_CR30                               0xA44C
#define PA4_4D_SB_WDRR_CR31                               0xA44D
#define PA4_4E_SB_WDRR_CR32                               0xA44E
#define PA4_4F_SB_WDRR_CR33                               0xA44F
#define PA4_50_SB_WDRR_CR40                               0xA450
#define PA4_51_SB_WDRR_CR41                               0xA451
#define PA4_52_SB_WDRR_CR42                               0xA452
#define PA4_53_SB_WDRR_CR43                               0xA453
#define PA4_54_SB_WDRR_CR50                               0xA454
#define PA4_55_SB_WDRR_CR51                               0xA455
#define PA4_56_SB_WDRR_CR52                               0xA456
#define PA4_57_SB_WDRR_CR53                               0xA457
#define PA4_58_SB_WDRR_CR60                               0xA458
#define PA4_59_SB_WDRR_CR61                               0xA459
#define PA4_5A_SB_WDRR_CR62                               0xA45A
#define PA4_5B_SB_WDRR_CR63                               0xA45B
#define PA4_5C_SB_WDRR_CR70                               0xA45C
#define PA4_5D_SB_WDRR_CR71                               0xA45D
#define PA4_5E_SB_WDRR_CR72                               0xA45E
#define PA4_5F_SB_WDRR_CR73                               0xA45F
#define PA4_60_SB_WDRR_CR80                               0xA460
#define PA4_61_SB_WDRR_CR81                               0xA461
#define PA4_62_SB_WDRR_CR82                               0xA462
#define PA4_63_SB_WDRR_CR83                               0xA463
#define PA4_64_SB_WDRR_CR90                               0xA464
#define PA4_65_SB_WDRR_CR91                               0xA465
#define PA4_66_SB_WDRR_CR92                               0xA466
#define PA4_67_SB_WDRR_CR93                               0xA467
#define PA4_68_SB_WDRR_CRA0                               0xA468
#define PA4_69_SB_WDRR_CRA1                               0xA469
#define PA4_6A_SB_WDRR_CRA2                               0xA46A
#define PA4_6B_SB_WDRR_CRA3                               0xA46B
#define PA4_6C_SB_WDRR_CRB0                               0xA46C
#define PA4_6D_SB_WDRR_CRB1                               0xA46D
#define PA4_6E_SB_WDRR_CRB2                               0xA46E
#define PA4_6F_SB_WDRR_CRB3                               0xA46F
#define PA4_70_SB_WDRR_CRC0                               0xA470
#define PA4_71_SB_WDRR_CRC1                               0xA471
#define PA4_72_SB_WDRR_CRC2                               0xA472
#define PA4_73_SB_WDRR_CRC3                               0xA473
#define PA4_74_SB_WDRR_CRD0                               0xA474
#define PA4_75_SB_WDRR_CRD1                               0xA475
#define PA4_76_SB_WDRR_CRD2                               0xA476
#define PA4_77_SB_WDRR_CRD3                               0xA477
#define PA4_78_SB_WDRR_CRE0                               0xA478
#define PA4_79_SB_WDRR_CRE1                               0xA479
#define PA4_7A_SB_WDRR_CRE2                               0xA47A
#define PA4_7B_SB_WDRR_CRE3                               0xA47B
#define PA4_7C_SB_WDRR_CRF0                               0xA47C
#define PA4_7D_SB_WDRR_CRF1                               0xA47D
#define PA4_7E_SB_WDRR_CRF2                               0xA47E
#define PA4_7F_SB_WDRR_CRF3                               0xA47F
#define PA4_80_SB_ARB_CNTR_SET10                          0xA480
#define PA4_81_SB_ARB_CNTR_SET11                          0xA481
#define PA4_82_SB_ARB_CNTR_SET12                          0xA482
#define PA4_83_SB_ARB_CNTR_SET13                          0xA483
#define PA4_84_SB_ARB_CNTR_SET20                          0xA484
#define PA4_85_SB_ARB_CNTR_SET21                          0xA485
#define PA4_86_SB_ARB_CNTR_SET22                          0xA486
#define PA4_87_SB_ARB_CNTR_SET23                          0xA487
#define PA4_88_SB_ARB_CNTR_SET30                          0xA488
#define PA4_89_SB_ARB_CNTR_SET31                          0xA489
#define PA4_8A_SB_ARB_CNTR_SET32                          0xA48A
#define PA4_8B_SB_ARB_CNTR_SET33                          0xA48B
#define PA4_8C_SB_ARB_CNTR_SET40                          0xA48C
#define PA4_8D_SB_ARB_CNTR_SET41                          0xA48D
#define PA4_8E_SB_ARB_CNTR_SET42                          0xA48E
#define PA4_8F_SB_ARB_CNTR_SET43                          0xA48F
#define PA4_90_SB_ARB_CNTR_SET50                          0xA490
#define PA4_91_SB_ARB_CNTR_SET51                          0xA491
#define PA4_92_SB_ARB_CNTR_SET52                          0xA492
#define PA4_93_SB_ARB_CNTR_SET53                          0xA493
#define PA4_94_SB_ARB_CNTR_SET60                          0xA494
#define PA4_95_SB_ARB_CNTR_SET61                          0xA495
#define PA4_96_SB_ARB_CNTR_SET62                          0xA496
#define PA4_97_SB_ARB_CNTR_SET63                          0xA497
#define PA4_98_SB_ARB_CNTR_SET70                          0xA498
#define PA4_99_SB_ARB_CNTR_SET71                          0xA499
#define PA4_9A_SB_ARB_CNTR_SET72                          0xA49A
#define PA4_9B_SB_ARB_CNTR_SET73                          0xA49B
#define PA4_A0_SB_ARB_CNTR_SET80                          0xA4A0
#define PA4_A1_SB_ARB_CNTR_SET81                          0xA4A1
#define PA4_A2_SB_ARB_CNTR_SET82                          0xA4A2
#define PA4_A3_SB_ARB_CNTR_SET83                          0xA4A3
#define PA4_A4_SB_ARB_CNTR_SET90                          0xA4A4
#define PA4_A5_SB_ARB_CNTR_SET91                          0xA4A5
#define PA4_A6_SB_ARB_CNTR_SET92                          0xA4A6
#define PA4_A7_SB_ARB_CNTR_SET93                          0xA4A7
#define PA4_A8_SB_ARB_CNTR_SETA0                          0xA4A8
#define PA4_A9_SB_ARB_CNTR_SETA1                          0xA4A9
#define PA4_AA_SB_ARB_CNTR_SETA2                          0xA4AA
#define PA4_AB_SB_ARB_CNTR_SETA3                          0xA4AB
#define PA4_AC_SB_ARB_CNTR_SETB0                          0xA4AC
#define PA4_AD_SB_ARB_CNTR_SETB1                          0xA4AD
#define PA4_AE_SB_ARB_CNTR_SETB2                          0xA4AE
#define PA4_AF_SB_ARB_CNTR_SETB3                          0xA4AF
#define PA4_B0_SB_ARB_CNTR_SETC0                          0xA4B0
#define PA4_B1_SB_ARB_CNTR_SETC1                          0xA4B1
#define PA4_B2_SB_ARB_CNTR_SETC2                          0xA4B2
#define PA4_B3_SB_ARB_CNTR_SETC3                          0xA4B3
#define PA4_B4_SB_ARB_CNTR_SETD0                          0xA4B4
#define PA4_B5_SB_ARB_CNTR_SETD1                          0xA4B5
#define PA4_B6_SB_ARB_CNTR_SETD2                          0xA4B6
#define PA4_B7_SB_ARB_CNTR_SETD3                          0xA4B7
#define PA4_B8_SB_ARB_CNTR_SETE0                          0xA4B8
#define PA4_B9_SB_ARB_CNTR_SETE1                          0xA4B9
#define PA4_BA_SB_ARB_CNTR_SETE2                          0xA4BA
#define PA4_BB_SB_ARB_CNTR_SETE3                          0xA4BB
#define PA4_BC_SB_ARB_CNTR_SETF0                          0xA4BC
#define PA4_BD_SB_ARB_CNTR_SETF1                          0xA4BD
#define PA4_BE_SB_ARB_CNTR_SETF2                          0xA4BE
#define PA4_BF_SB_ARB_CNTR_SETF3                          0xA4BF
#define PA4_C0_SB_CNTR_SETB0                              0xA4C0
#define PA4_C1_SB_CNTR_SETB1                              0xA4C1
#define PA4_C2_SB_CNTR_SETB2                              0xA4C2
#define PA4_C3_SB_CNTR_SETB3                              0xA4C3
#define PA4_C4_SB_REQ_CR00                                0xA4C4
#define PA4_C5_SB_REQ_CR01                                0xA4C5
#define PA4_C6_SB_REQ_CR02                                0xA4C6
#define PA4_C7_SB_REQ_CR03                                0xA4C7
#define PA4_C8_SB_ARB_SR10                                0xA4C8
#define PA4_C9_SB_ARB_SR11                                0xA4C9
#define PA4_CA_SB_ARB_SR12                                0xA4CA
#define PA4_CB_SB_ARB_SR13                                0xA4CB
#define PA4_CC_SB_ARB_SR14                                0xA4CC
#define PA4_CD_SB_ARB_SR15                                0xA4CD
#define PA4_D0_SB_ARB_SR20                                0xA4D0
#define PA4_D1_SB_ARB_SR21                                0xA4D1
#define PA4_D2_SB_ARB_SR22                                0xA4D2
#define PA4_D3_SB_ARB_SR23                                0xA4D3
#define PA4_D4_SB_LOW_LATCNT_CR10                         0xA4D4
#define PA4_D5_SB_LOW_LATCNT_CR11                         0xA4D5
#define PA4_D6_SB_LOW_LATCNT_CR12                         0xA4D6
#define PA4_D7_SB_LOW_LATCNT_CR13                         0xA4D7
#define PA4_D8_SB_LOW_LATCNT_CR20                         0xA4D8
#define PA4_D9_SB_LOW_LATCNT_CR21                         0xA4D9
#define PA4_DA_SB_LOW_LATCNT_CR22                         0xA4DA
#define PA4_DB_SB_LOW_LATCNT_CR23                         0xA4DB
#define PA4_DC_SB_LOW_LATCNT_CR30                         0xA4DC
#define PA4_DD_SB_LOW_LATCNT_CR31                         0xA4DD
#define PA4_DE_SB_LOW_LATCNT_CR32                         0xA4DE
#define PA4_DF_SB_LOW_LATCNT_CR33                         0xA4DF
#define PA4_E0_SB_LOW_LATCNT_CR40                         0xA4E0
#define PA4_E1_SB_LOW_LATCNT_CR41                         0xA4E1
#define PA4_E2_SB_LOW_LATCNT_CR42                         0xA4E2
#define PA4_E3_SB_LOW_LATCNT_CR43                         0xA4E3
#define PA4_E4_SB_LOW_LATCNT_CR50                         0xA4E4
#define PA4_E5_SB_LOW_LATCNT_CR51                         0xA4E5
#define PA4_E6_SB_LOW_LATCNT_CR52                         0xA4E6
#define PA4_E7_SB_LOW_LATCNT_CR53                         0xA4E7
#define PA4_E8_SB_LOW_LATCNT_CR60                         0xA4E8
#define PA4_E9_SB_LOW_LATCNT_CR61                         0xA4E9
#define PA4_EA_SB_LOW_LATCNT_CR62                         0xA4EA
#define PA4_EB_SB_LOW_LATCNT_CR63                         0xA4EB
#define PA4_EC_SB_LOW_LATCNT_CR70                         0xA4EC
#define PA4_ED_SB_LOW_LATCNT_CR71                         0xA4ED
#define PA4_EE_SB_LOW_LATCNT_CR72                         0xA4EE
#define PA4_EF_SB_LOW_LATCNT_CR73                         0xA4EF
#define PA4_F0_SB_LOW_LATCNT_CR80                         0xA4F0
#define PA4_F1_SB_LOW_LATCNT_CR81                         0xA4F1
#define PA4_F2_SB_LOW_LATCNT_CR82                         0xA4F2
#define PA4_F3_SB_LOW_LATCNT_CR83                         0xA4F3
#define PA4_F4_SB_LOW_LATCNT_CR90                         0xA4F4
#define PA4_F5_SB_LOW_LATCNT_CR91                         0xA4F5
#define PA4_F6_SB_LOW_LATCNT_CR92                         0xA4F6
#define PA4_F7_SB_LOW_LATCNT_CR93                         0xA4F7


//--------------------------------------------------
// DDR3 PLL (Page A5)
//--------------------------------------------------
#define PA5_00_SYS_PLL_DDR1_1                             0xA500
#define PA5_01_SYS_PLL_DDR1_2                             0xA501
#define PA5_02_SYS_PLL_DDR1_3                             0xA502
#define PA5_03_SYS_PLL_DDR1_4                             0xA503
#define PA5_04_SYS_PLL_DDR2_1                             0xA504
#define PA5_05_SYS_PLL_DDR2_2                             0xA505
#define PA5_06_SYS_PLL_DDR2_3                             0xA506
#define PA5_07_SYS_PLL_DDR2_4                             0xA507
#define PA5_08_SYS_PLL_DDR3_1                             0xA508
#define PA5_09_SYS_PLL_DDR3_2                             0xA509
#define PA5_0A_SYS_PLL_DDR3_3                             0xA50A
#define PA5_0B_SYS_PLL_DDR3_4                             0xA50B
#define PA5_0C_SYS_PLL_DDR4_1                             0xA50C
#define PA5_0D_SYS_PLL_DDR4_2                             0xA50D
#define PA5_0E_SYS_PLL_DDR4_3                             0xA50E
#define PA5_0F_SYS_PLL_DDR4_4                             0xA50F
#define PA5_10_SYS_PLL_DDR_SSC1_1                         0xA510
#define PA5_11_SYS_PLL_DDR_SSC1_2                         0xA511
#define PA5_12_SYS_PLL_DDR_SSC1_3                         0xA512
#define PA5_13_SYS_PLL_DDR_SSC1_4                         0xA513
#define PA5_14_SYS_PLL_DDR_SSC2_1                         0xA514
#define PA5_15_SYS_PLL_DDR_SSC2_2                         0xA515
#define PA5_16_SYS_PLL_DDR_SSC2_3                         0xA516
#define PA5_17_SYS_PLL_DDR_SSC2_4                         0xA517
#define PA5_18_SYS_PLL_DDR_SSC3_1                         0xA518
#define PA5_19_SYS_PLL_DDR_SSC3_2                         0xA519
#define PA5_1A_SYS_PLL_DDR_SSC3_3                         0xA51A
#define PA5_1B_SYS_PLL_DDR_SSC3_4                         0xA51B
#define PA5_1C_SYS_PLL5_1                                 0xA51C
#define PA5_1D_SYS_PLL5_2                                 0xA51D
#define PA5_1E_SYS_PLL5_3                                 0xA51E
#define PA5_1F_SYS_PLL5_4                                 0xA51F


//--------------------------------------------------
// DDR Phy Pattern Generator Introduction (Page A6)
//--------------------------------------------------
#define PA6_00_CFG_REG_00_1                               0xA600
#define PA6_01_CFG_REG_00_2                               0xA601
#define PA6_02_CFG_REG_00_3                               0xA602
#define PA6_03_CFG_REG_00_4                               0xA603
#define PA6_04_CFG_REG_04_1                               0xA604
#define PA6_05_CFG_REG_04_2                               0xA605
#define PA6_06_CFG_REG_04_3                               0xA606
#define PA6_07_CFG_REG_04_4                               0xA607
#define PA6_08_CFG_REG_08_1                               0xA608
#define PA6_09_CFG_REG_08_2                               0xA609
#define PA6_0A_CFG_REG_08_3                               0xA60A
#define PA6_0B_CFG_REG_08_4                               0xA60B
#define PA6_0C_CFG_REG_0C_1                               0xA60C
#define PA6_0D_CFG_REG_0C_2                               0xA60D
#define PA6_0E_CFG_REG_0C_3                               0xA60E
#define PA6_0F_CFG_REG_0C_4                               0xA60F
#define PA6_10_CFG_REG_10_1                               0xA610
#define PA6_11_CFG_REG_10_2                               0xA611
#define PA6_12_CFG_REG_10_3                               0xA612
#define PA6_13_CFG_REG_10_4                               0xA613
#define PA6_14_HW_SW_CTRL_1                               0xA614
#define PA6_15_HW_SW_CTRL_2                               0xA615
#define PA6_16_HW_SW_CTRL_3                               0xA616
#define PA6_17_HW_SW_CTRL_4                               0xA617
#define PA6_18_CMD_SRAM_CTRL_1                            0xA618
#define PA6_19_CMD_SRAM_CTRL_2                            0xA619
#define PA6_1A_CMD_SRAM_CTRL_3                            0xA61A
#define PA6_1B_CMD_SRAM_CTRL_4                            0xA61B
#define PA6_1C_CMD_SRAM_ADDR_1                            0xA61C
#define PA6_1D_CMD_SRAM_ADDR_2                            0xA61D
#define PA6_1E_CMD_SRAM_ADDR_3                            0xA61E
#define PA6_1F_CMD_SRAM_ADDR_4                            0xA61F
#define PA6_20_CMD_SRAM_0_1                               0xA620
#define PA6_21_CMD_SRAM_0_2                               0xA621
#define PA6_22_CMD_SRAM_0_3                               0xA622
#define PA6_23_CMD_SRAM_0_4                               0xA623
#define PA6_24_CMD_SRAM_1_1                               0xA624
#define PA6_25_CMD_SRAM_1_2                               0xA625
#define PA6_26_CMD_SRAM_1_3                               0xA626
#define PA6_27_CMD_SRAM_1_4                               0xA627
#define PA6_28_CMP_FAIL_CMD_0_1                           0xA628
#define PA6_29_CMP_FAIL_CMD_0_2                           0xA629
#define PA6_2A_CMP_FAIL_CMD_0_3                           0xA62A
#define PA6_2B_CMP_FAIL_CMD_0_4                           0xA62B
#define PA6_2C_CMP_FAIL_CMD_1_1                           0xA62C
#define PA6_2D_CMP_FAIL_CMD_1_2                           0xA62D
#define PA6_2E_CMP_FAIL_CMD_1_3                           0xA62E
#define PA6_2F_CMP_FAIL_CMD_1_4                           0xA62F
#define PA6_30_CMP_FAIL_EXP_0_1                           0xA630
#define PA6_31_CMP_FAIL_EXP_0_2                           0xA631
#define PA6_32_CMP_FAIL_EXP_0_3                           0xA632
#define PA6_33_CMP_FAIL_EXP_0_4                           0xA633
#define PA6_34_CMP_FAIL_EXP_1_1                           0xA634
#define PA6_35_CMP_FAIL_EXP_1_2                           0xA635
#define PA6_36_CMP_FAIL_EXP_1_3                           0xA636
#define PA6_37_CMP_FAIL_EXP_1_4                           0xA637
#define PA6_38_CMP_FAIL_EXP_2_1                           0xA638
#define PA6_39_CMP_FAIL_EXP_2_2                           0xA639
#define PA6_3A_CMP_FAIL_EXP_2_3                           0xA63A
#define PA6_3B_CMP_FAIL_EXP_2_4                           0xA63B
#define PA6_3C_CMP_FAIL_EXP_3_1                           0xA63C
#define PA6_3D_CMP_FAIL_EXP_3_2                           0xA63D
#define PA6_3E_CMP_FAIL_EXP_3_3                           0xA63E
#define PA6_3F_CMP_FAIL_EXP_3_4                           0xA63F
#define PA6_40_CMP_FAIL_READ_0_1                          0xA640
#define PA6_41_CMP_FAIL_READ_0_2                          0xA641
#define PA6_42_CMP_FAIL_READ_0_3                          0xA642
#define PA6_43_CMP_FAIL_READ_0_4                          0xA643
#define PA6_44_CMP_FAIL_READ_1_1                          0xA644
#define PA6_45_CMP_FAIL_READ_1_2                          0xA645
#define PA6_46_CMP_FAIL_READ_1_3                          0xA646
#define PA6_47_CMP_FAIL_READ_1_4                          0xA647
#define PA6_48_CMP_FAIL_READ_2_1                          0xA648
#define PA6_49_CMP_FAIL_READ_2_2                          0xA649
#define PA6_4A_CMP_FAIL_READ_2_3                          0xA64A
#define PA6_4B_CMP_FAIL_READ_2_4                          0xA64B
#define PA6_4C_CMP_FAIL_READ_3_1                          0xA64C
#define PA6_4D_CMP_FAIL_READ_3_2                          0xA64D
#define PA6_4E_CMP_FAIL_READ_3_3                          0xA64E
#define PA6_4F_CMP_FAIL_READ_3_4                          0xA64F
#define PA6_50_STS_0_1                                    0xA650
#define PA6_51_STS_0_2                                    0xA651
#define PA6_52_STS_0_3                                    0xA652
#define PA6_53_STS_0_4                                    0xA653
#define PA6_54_STS_1_1                                    0xA654
#define PA6_55_STS_1_2                                    0xA655
#define PA6_56_STS_1_3                                    0xA656
#define PA6_57_STS_1_4                                    0xA657
#define PA6_58_STS_2_1                                    0xA658
#define PA6_59_STS_2_2                                    0xA659
#define PA6_5A_STS_2_3                                    0xA65A
#define PA6_5B_STS_2_4                                    0xA65B
#define PA6_5C_STS_3_1                                    0xA65C
#define PA6_5D_STS_3_2                                    0xA65D
#define PA6_5E_STS_3_3                                    0xA65E
#define PA6_5F_STS_3_4                                    0xA65F
#define PA6_60_RANDOM_0_1                                 0xA660
#define PA6_61_RANDOM_0_2                                 0xA661
#define PA6_62_RANDOM_0_3                                 0xA662
#define PA6_63_RANDOM_0_4                                 0xA663
#define PA6_64_RANDOM_1_1                                 0xA664
#define PA6_65_RANDOM_1_2                                 0xA665
#define PA6_66_RANDOM_1_3                                 0xA666
#define PA6_67_RANDOM_1_4                                 0xA667
#define PA6_68_RANDOM_2_1                                 0xA668
#define PA6_69_RANDOM_2_2                                 0xA669
#define PA6_6A_RANDOM_2_3                                 0xA66A
#define PA6_6B_RANDOM_2_4                                 0xA66B
#define PA6_6C_RANDOM_3_1                                 0xA66C
#define PA6_6D_RANDOM_3_2                                 0xA66D
#define PA6_6E_RANDOM_3_3                                 0xA66E
#define PA6_6F_RANDOM_3_4                                 0xA66F
#define PA6_88_CTRL_DDR_1                                 0xA688
#define PA6_89_CTRL_DDR_2                                 0xA689
#define PA6_8A_CTRL_DDR_3                                 0xA68A
#define PA6_8B_CTRL_DDR_4                                 0xA68B
#define PA6_BC_DBG_1                                      0xA6BC
#define PA6_BD_DBG_2                                      0xA6BD
#define PA6_BE_DBG_3                                      0xA6BE
#define PA6_BF_DBG_4                                      0xA6BF
#define PA7_00_WMASK_0_1                                  0xA700
#define PA7_01_WMASK_0_2                                  0xA701
#define PA7_02_WMASK_0_3                                  0xA702
#define PA7_03_WMASK_0_4                                  0xA703
#define PA7_04_WMASK_1_1                                  0xA704
#define PA7_05_WMASK_1_2                                  0xA705
#define PA7_06_WMASK_1_3                                  0xA706
#define PA7_07_WMASK_1_4                                  0xA707
#define PA7_08_WMASK_2_1                                  0xA708
#define PA7_09_WMASK_2_2                                  0xA709
#define PA7_0A_WMASK_2_3                                  0xA70A
#define PA7_0B_WMASK_2_4                                  0xA70B
#define PA7_0C_WMASK_3_1                                  0xA70C
#define PA7_0D_WMASK_3_2                                  0xA70D
#define PA7_0E_WMASK_3_3                                  0xA70E
#define PA7_0F_WMASK_3_4                                  0xA70F
#define PA7_10_WMASK_4_1                                  0xA710
#define PA7_11_WMASK_4_2                                  0xA711
#define PA7_12_WMASK_4_3                                  0xA712
#define PA7_13_WMASK_4_4                                  0xA713
#define PA7_14_WMASK_5_1                                  0xA714
#define PA7_15_WMASK_5_2                                  0xA715
#define PA7_16_WMASK_5_3                                  0xA716
#define PA7_17_WMASK_5_4                                  0xA717
#define PA7_18_WMASK_6_1                                  0xA718
#define PA7_19_WMASK_6_2                                  0xA719
#define PA7_1A_WMASK_6_3                                  0xA71A
#define PA7_1B_WMASK_6_4                                  0xA71B
#define PA7_1C_WMASK_7_1                                  0xA71C
#define PA7_1D_WMASK_7_2                                  0xA71D
#define PA7_1E_WMASK_7_3                                  0xA71E
#define PA7_1F_WMASK_7_4                                  0xA71F


//--------------------------------------------------
// DDR Phy Register (Page A8)
//--------------------------------------------------
#define PA8_00_TMCTRL0                                    0xA800
#define PA8_01_TMCTRL1                                    0xA801
#define PA8_02_TMCTRL2                                    0xA802
#define PA8_03_TMCTRL3                                    0xA803
#define PA8_04_TMCTRL1_1                                  0xA804
#define PA8_05_TMCTRL1_2                                  0xA805
#define PA8_06_TMCTRL1_3                                  0xA806
#define PA8_07_TMCTRL1_4                                  0xA807
#define PA8_08_TMCTRL2_1                                  0xA808
#define PA8_09_TMCTRL2_2                                  0xA809
#define PA8_0A_TMCTRL2_3                                  0xA80A
#define PA8_0B_TMCTRL2_4                                  0xA80B
#define PA8_0C_TMCTRL3_1                                  0xA80C
#define PA8_0D_TMCTRL3_2                                  0xA80D
#define PA8_0E_TMCTRL3_3                                  0xA80E
#define PA8_0F_TMCTRL3_4                                  0xA80F
#define PA8_10_TMCTRL4_1                                  0xA810
#define PA8_11_TMCTRL4_2                                  0xA811
#define PA8_12_TMCTRL4_3                                  0xA812
#define PA8_13_TMCTRL4_4                                  0xA813
#define PA8_14_TMCTRL5_1                                  0xA814
#define PA8_15_TMCTRL5_2                                  0xA815
#define PA8_16_TMCTRL5_3                                  0xA816
#define PA8_17_TMCTRL5_4                                  0xA817
#define PA8_18_TMCTRL6_1                                  0xA818
#define PA8_19_TMCTRL6_2                                  0xA819
#define PA8_1A_TMCTRL6_3                                  0xA81A
#define PA8_1B_TMCTRL56_4                                 0xA81B
#define PA8_20_ODT_CTRL0_1                                0xA820
#define PA8_21_ODT_CTRL0_2                                0xA821
#define PA8_22_ODT_CTRL0_3                                0xA822
#define PA8_23_ODT_CTRL0_4                                0xA823
#define PA8_24_ODT_CTRL1_1                                0xA824
#define PA8_25_ODT_CTRL1_2                                0xA825
#define PA8_26_ODT_CTRL1_3                                0xA826
#define PA8_27_ODT_CTRL1_4                                0xA827
#define PA8_28_DC_MIS2_1                                  0xA828
#define PA8_29_DC_MIS2_2                                  0xA829
#define PA8_2A_DC_MIS2_3                                  0xA82A
#define PA8_2B_DC_MIS2_4                                  0xA82B
#define PA8_2C_DC_MIS_1                                   0xA82C
#define PA8_2F_DC_MIS_4                                   0xA82F
#define PA8_30_DC_MISA_1                                  0xA830
#define PA8_33_DC_MISA_4                                  0xA833
#define PA8_34_DC_MISB_1                                  0xA834
#define PA8_35_DC_MISB_2                                  0xA835
#define PA8_36_DC_MISB_3                                  0xA836
#define PA8_37_DC_MISB_4                                  0xA837
#define PA8_38_DC_MISC_1                                  0xA838
#define PA8_39_DC_MISC_2                                  0xA839
#define PA8_3A_DC_MISC_3                                  0xA83A
#define PA8_3B_DC_MISC_4                                  0xA83B
#define PA8_3C_C_TEST_MODE_SEL_1                          0xA83C
#define PA8_3D_C_TEST_MODE_SEL_2                          0xA83D
#define PA8_3E_C_TEST_MODE_SEL_3                          0xA83E
#define PA8_3F_C_TEST_MODE_SEL_4                          0xA83F
#define PA8_40_DC_DDR3_CTL_1                              0xA840
#define PA8_41_DC_DDR3_CTL_2                              0xA841
#define PA8_42_DC_DDR3_CTL_3                              0xA842
#define PA8_43_DC_DDR3_CTL_4                              0xA843
#define PA8_44_MOD_REG_1                                  0xA844
#define PA8_45_MOD_REG_2                                  0xA845
#define PA8_46_MOD_REG_3                                  0xA846
#define PA8_47_MOD_REG_4                                  0xA847
#define PA8_48_MOD23_REG_1                                0xA848
#define PA8_49_MOD23_REG_2                                0xA849
#define PA8_4A_MOD23_REG_3                                0xA84A
#define PA8_4B_MOD23_REG_4                                0xA84B
#define PA8_4C_RFIFO_CTL_1                                0xA84C
#define PA8_4D_RFIFO_CTL_2                                0xA84D
#define PA8_4E_RFIFO_CTL_3                                0xA84E
#define PA8_4F_RFIFO_CTL_4                                0xA84F
#define PA8_50_ERR_STATUS_1                               0xA850
#define PA8_51_ERR_STATUS_2                               0xA851
#define PA8_52_ERR_STATUS_3                               0xA852
#define PA8_53_ERR_STATUS_4                               0xA853
#define PA8_54_DC_WRITE_LEVE_1                            0xA854
#define PA8_55_DC_WRITE_LEVE_2                            0xA855
#define PA8_56_DC_WRITE_LEVE_3                            0xA856
#define PA8_57_DC_WRITE_LEVE_4                            0xA857
#define PA8_58_INT_ENABLE_1                               0xA858
#define PA8_59_INT_ENABLE_2                               0xA859
#define PA8_5A_INT_ENABLE_3                               0xA85A
#define PA8_5B_INT_ENABLE_4                               0xA85B
#define PA8_5C_RFIFO_MAXCNT_1                             0xA85C
#define PA8_5D_RFIFO_MAXCNT_2                             0xA85D
#define PA8_5E_RFIFO_MAXCN_3                              0xA85E
#define PA8_5F_RFIFO_MAXCNT_4                             0xA85F
#define PA8_60_SM_STATUS_1                                0xA860
#define PA8_61_SM_STATUS_2                                0xA861
#define PA8_62_SM_STATUS_3                                0xA862
#define PA8_63_SM_STATUS_4                                0xA863
#define PA8_64_WFIFO_CNT_1                                0xA864
#define PA8_65_WFIFO_CNT_2                                0xA865
#define PA8_66_WFIFO_CNT_3                                0xA866
#define PA8_67_WFIFO_CNT_4                                0xA867
#define PA8_68_DC_DEBUG_1                                 0xA868
#define PA8_69_DC_DEBUG_2                                 0xA869
#define PA8_6A_DC_DEBUG_3                                 0xA86A
#define PA8_6B_DC_DEBUG_4                                 0xA86B
#define PA8_6C_PRE_CNT_1                                  0xA86C
#define PA8_6D_PRE_CNT_2                                  0xA86D
#define PA8_6E_PRE_CNT_3                                  0xA86E
#define PA8_6F_PRE_CNT_4                                  0xA86F
#define PA8_70_WFIFO_SYS_REQ_WAIT_1                       0xA870
#define PA8_71_WFIFO_SYS_REQ_WAIT_2                       0xA871
#define PA8_72_WFIFO_SYS_REQ_WAIT_3                       0xA872
#define PA8_73_WFIFO_SYS_REQ_WAIT_4                       0xA873
#define PA8_74_WFIFO_DDR_REQ_WAIT_1                       0xA874
#define PA8_75_WFIFO_DDR_REQ_WAIT_2                       0xA875
#define PA8_76_WFIFO_DDR_REQ_WAIT_3                       0xA876
#define PA8_77_WFIFO_DDR_REQ_WAIT_4                       0xA877
#define PA8_78_WFIFO_MAX_REQ_WAIT_1                       0xA878
#define PA8_79_WFIFO_MAX_REQ_WAIT_2                       0xA879
#define PA8_7A_WFIFO_MAX_REQ_WAIT_3                       0xA87A
#define PA8_7B_WFIFO_MAX_REQ_WAIT_4                       0xA87B
#define PA8_7C_PARSER_ST1                                 0xA87C
#define PA8_7D_PARSER_ST2                                 0xA87D
#define PA8_7E_PARSER_ST3                                 0xA87E
#define PA8_7F_PARSER_ST4                                 0xA87F


//--------------------------------------------------
// PHY registers (Page AC)
//--------------------------------------------------
#define PAC_50_RCV_1ST_CTL0_0                             0xAC50
#define PAC_51_RCV_1ST_CTL0_1                             0xAC51
#define PAC_52_RCV_1ST_CTL0_2                             0xAC52
#define PAC_53_RCV_1ST_CTL0_3                             0xAC53
#define PAC_54_RCV_1ST_CTL1_0                             0xAC54
#define PAC_55_RCV_1ST_CTL1_1                             0xAC55
#define PAC_56_RCV_1ST_CTL1_2                             0xAC56
#define PAC_57_RCV_1ST_CTL1_3                             0xAC57
#define PAC_58_RCV_1ST_CTL2_0                             0xAC58
#define PAC_59_RCV_1ST_CTL2_1                             0xAC59
#define PAC_5A_RCV_1ST_CTL2_2                             0xAC5A
#define PAC_5B_RCV_1ST_CTL2_3                             0xAC5B
#define PAC_5C_RCV_1ST_CTL3_0                             0xAC5C
#define PAC_5D_RCV_1ST_CTL3_1                             0xAC5D
#define PAC_5E_RCV_1ST_CTL3_2                             0xAC5E
#define PAC_5F_RCV_1ST_CTL3_3                             0xAC5F
#define PA8_80_DQ0_1_DLYN_1                               0xA880
#define PA8_81_DQ0_1_DLYN_2                               0xA881
#define PA8_82_DQ0_1_DLYN_3                               0xA882
#define PA8_83_DQ0_1_DLYN_4                               0xA883
#define PA8_84_DQ2_3_DLYN_1                               0xA884
#define PA8_85_DQ2_3_DLYN_2                               0xA885
#define PA8_86_DQ2_3_DLYN_3                               0xA886
#define PA8_87_DQ2_3_DLYN_4                               0xA887
#define PA8_88_DQ4_5_DLYN_1                               0xA888
#define PA8_89_DQ4_5_DLYN_2                               0xA889
#define PA8_8A_DQ4_5_DLYN_3                               0xA88A
#define PA8_8B_DQ4_5_DLYN_4                               0xA88B
#define PA8_8C_DQ6_7_DLYN_1                               0xA88C
#define PA8_8D_DQ6_7_DLYN_2                               0xA88D
#define PA8_8E_DQ6_7_DLYN_3                               0xA88E
#define PA8_8F_DQ6_7_DLYN_4                               0xA88F
#define PA8_90_DQ8_9_DLYN_1                               0xA890
#define PA8_91_DQ8_9_DLYN_2                               0xA891
#define PA8_92_DQ8_9_DLYN_3                               0xA892
#define PA8_93_DQ8_9_DLYN_4                               0xA893
#define PA8_94_DQ10_11_DLYN_1                             0xA894
#define PA8_95_DQ10_11_DLYN_2                             0xA895
#define PA8_96_DQ10_11_DLYN_3                             0xA896
#define PA8_97_DQ10_11_DLYN_4                             0xA897
#define PA8_98_DQ12_13_DLYN_1                             0xA898
#define PA8_99_DQ12_13_DLYN_2                             0xA899
#define PA8_9A_DQ12_13_DLYN_3                             0xA89A
#define PA8_9B_DQ12_13_DLYN_4                             0xA89B
#define PA8_1C_DQ14_15_DLYN_1                             0xA81C
#define PA8_1D_DQ14_15_DLYN_2                             0xA81D
#define PA8_1E_DQ14_15_DLYN_3                             0xA81E
#define PA8_1F_DQ14_15_DLYN_4                             0xA81F
#define PA8_A0_DQ16_17_DLYN_1                             0xA8A0
#define PA8_A1_DQ16_17_DLYN_2                             0xA8A1
#define PA8_A2_DQ16_17_DLYN_3                             0xA8A2
#define PA8_A3_DQ16_17_DLYN_4                             0xA8A3
#define PA8_A4_DQ18_19_DLYN_1                             0xA8A4
#define PA8_A5_DQ18_19_DLYN_2                             0xA8A5
#define PA8_A6_DQ18_19_DLYN_3                             0xA8A6
#define PA8_A7_DQ18_19_DLYN_4                             0xA8A7
#define PA8_A8_DQ20_21_DLYN_1                             0xA8A8
#define PA8_A9_DQ20_21_DLYN_2                             0xA8A9
#define PA8_AA_DQ20_21_DLYN_3                             0xA8AA
#define PA8_AB_DQ20_21_DLYN_4                             0xA8AB
#define PA8_AC_DQ22_23_DLYN_1                             0xA8AC
#define PA8_AD_DQ22_23_DLYN_2                             0xA8AD
#define PA8_AE_DQ22_23_DLYN_3                             0xA8AE
#define PA8_AF_DQ22_23_DLYN_4                             0xA8AF
#define PA8_B0_DQ24_25_DLYN_1                             0xA8B0
#define PA8_B1_DQ24_25_DLYN_2                             0xA8B1
#define PA8_B2_DQ24_25_DLYN_3                             0xA8B2
#define PA8_B3_DQ24_25_DLYN_4                             0xA8B3
#define PA8_B4_DQ26_27_DLYN_1                             0xA8B4
#define PA8_B5_DQ26_27_DLYN_2                             0xA8B5
#define PA8_B6_DQ26_27_DLYN_3                             0xA8B6
#define PA8_B7_DQ26_27_DLYN_4                             0xA8B7
#define PA8_B8_DQ28_29_DLYN_1                             0xA8B8
#define PA8_B9_DQ28_29_DLYN_2                             0xA8B9
#define PA8_BA_DQ28_29_DLYN_3                             0xA8BA
#define PA8_BB_DQ28_29_DLYN_4                             0xA8BB
#define PA8_BC_DQ30_31_DLYN_1                             0xA8BC
#define PA8_BD_DQ30_31_DLYN_2                             0xA8BD
#define PA8_BE_DQ30_31_DLYN_3                             0xA8BE
#define PA8_BF_DQ30_31_DLYN_4                             0xA8BF
#define PA8_C0_CAL0_1_DLYN_1                              0xA8C0
#define PA8_C1_CAL0_1_DLYN_2                              0xA8C1
#define PA8_C2_CAL0_1_DLYN_3                              0xA8C2
#define PA8_C3_CAL0_1_DLYN_4                              0xA8C3
#define PA8_C4_CAL2_3_DLYN_1                              0xA8C4
#define PA8_C5_CAL2_3_DLYN_2                              0xA8C5
#define PA8_C6_CAL2_3_DLYN_3                              0xA8C6
#define PA8_C7_CAL2_3_DLYN_4                              0xA8C7
#define PA8_C8_CAL4_5_DLYN_1                              0xA8C8
#define PA8_C9_CAL4_5_DLYN_2                              0xA8C9
#define PA8_CA_CAL4_5_DLYN_3                              0xA8CA
#define PA8_CB_CAL4_5_DLYN_4                              0xA8CB
#define PA8_CC_CAL6_7_DLYN_1                              0xA8CC
#define PA8_CD_CAL6_7_DLYN_2                              0xA8CD
#define PA8_CE_CAL6_7_DLYN_3                              0xA8CE
#define PA8_CF_CAL6_7_DLYN_4                              0xA8CF
#define PA8_D0_CAL8_9_DLYN_1                              0xA8D0
#define PA8_D1_CAL8_9_DLYN_2                              0xA8D1
#define PA8_D2_CAL8_9_DLYN_3                              0xA8D2
#define PA8_D3_CAL8_9_DLYN_4                              0xA8D3
#define PA8_D4_CAL10_11_DLYN_1                            0xA8D4
#define PA8_D5_CAL10_11_DLYN_2                            0xA8D5
#define PA8_D6_CAL10_11_DLYN_3                            0xA8D6
#define PA8_D7_CAL10_11_DLYN_4                            0xA8D7
#define PA8_D8_CAL12_13_DLYN_1                            0xA8D8
#define PA8_D9_CAL12_13_DLYN_2                            0xA8D9
#define PA8_DA_CAL12_13_DLYN_3                            0xA8DA
#define PA8_DB_CAL12_13_DLYN_4                            0xA8DB
#define PA8_DC_CAL14_15_DLYN_1                            0xA8DC
#define PA8_DD_CAL14_15_DLYN_2                            0xA8DD
#define PA8_DE_CAL14_15_DLYN_3                            0xA8DE
#define PA8_DF_CAL14_15_DLYN_4                            0xA8DF
#define PA8_E0_CAL16_17_DLYN_1                            0xA8E0
#define PA8_E1_CAL16_17_DLYN_2                            0xA8E1
#define PA8_E2_CAL16_17_DLYN_3                            0xA8E2
#define PA8_E3_CAL16_17_DLYN_4                            0xA8E3
#define PA8_E4_CAL18_19_DLYN_1                            0xA8E4
#define PA8_E5_CAL18_19_DLYN_2                            0xA8E5
#define PA8_E6_CAL18_19_DLYN_3                            0xA8E6
#define PA8_E7_CAL18_19_DLYN_4                            0xA8E7
#define PA8_E8_CAL20_21_DLYN_1                            0xA8E8
#define PA8_E9_CAL20_21_DLYN_2                            0xA8E9
#define PA8_EA_CAL20_21_DLYN_3                            0xA8EA
#define PA8_EB_CAL20_21_DLYN_4                            0xA8EB
#define PA8_EC_CAL22_23_DLYN_1                            0xA8EC
#define PA8_ED_CAL22_23_DLYN_2                            0xA8ED
#define PA8_EE_CAL22_23_DLYN_3                            0xA8EE
#define PA8_EF_CAL22_23_DLYN_4                            0xA8EF
#define PA8_F0_CAL24_25_DLYN_1                            0xA8F0
#define PA8_F1_CAL24_25_DLYN_2                            0xA8F1
#define PA8_F2_CAL24_25_DLYN_3                            0xA8F2
#define PA8_F3_CAL24_25_DLYN_4                            0xA8F3
#define PA8_F4_CAL26_27_DLYN_1                            0xA8F4
#define PA8_F5_CAL26_27_DLYN_2                            0xA8F5
#define PA8_F6_CAL26_27_DLYN_3                            0xA8F6
#define PA8_F7_CAL26_27_DLYN_4                            0xA8F7
#define PA8_F8_AL28_29_DLYN_1                             0xA8F8
#define PA8_F9_CAL28_29_DLYN_2                            0xA8F9
#define PA8_FA_CAL28_29_DLYN_3                            0xA8FA
#define PA8_FB_CAL28_29_DLYN_4                            0xA8FB
#define PA8_FC_CAL30_31_DLYN1                             0xA8FC
#define PA8_FD_CAL30_31_DLYN2                             0xA8FD
#define PA8_FE_CAL30_31_DLYN3                             0xA8FE
#define PA8_FF_CAL30_31_DLYN4                             0xA8FF
#define PA9_04_READ_COM_CTRL1                             0xA904
#define PA9_05_READ_COM_CTRL2                             0xA905
#define PA9_06_READ_COM_CTRL3                             0xA906
#define PA9_07_READ_COM_CTRL4                             0xA907
#define PA9_08_CAL_CTRL1                                  0xA908
#define PA9_09_CAL_CTRL2                                  0xA909
#define PA9_0A_CAL_CTRL3                                  0xA90A
#define PA9_0B_CAL_CTRL4                                  0xA90B
#define PA9_94_CAL_MS_CTRL_0                              0xA994
#define PA9_95_CAL_MS_CTRL_1                              0xA995
#define PA9_96_CAL_MS_CTRL_2                              0xA996
#define PA9_97_CAL_MS_CTRL_3                              0xA997
#define PA9_98_CAL_MS_STS_0                               0xA998
#define PA9_99_CAL_MS_STS_1                               0xA999
#define PA9_9A_CAL_MS_STS_2                               0xA99A
#define PA9_9B_CAL_MS_STS_3                               0xA99B
#define PA9_1C_CAL_MS_DLY_PH_SEL_0                        0xA91C
#define PA9_1D_CAL_MS_DLY_PH_SEL_1                        0xA91D
#define PA9_1E_CAL_MS_DLY_PH_SEL_2                        0xA91E
#define PA9_1F_CAL_MS_DLY_PH_SEL_3                        0xA91F
#define PA9_0C_FIFO_DLYN1                                 0xA90C
#define PA9_0D_FIFO_DLYN2                                 0xA90D
#define PA9_0E_FIFO_DLYN3                                 0xA90E
#define PA9_0F_FIFO_DLYN4                                 0xA90F
#define PA9_10_PAD_OE_CTL1                                0xA910
#define PA9_11_PAD_OE_CTL2                                0xA911
#define PA9_12_PAD_OE_CTL3                                0xA912
#define PA9_13_PAD_OE_CTL4                                0xA913
#define PA9_18_PAD_IDDQ0_1                                0xA918
#define PA9_19_PAD_IDDQ0_2                                0xA919
#define PA9_1A_PAD_IDDQ0_3                                0xA91A
#define PA9_1B_PAD_IDDQ0_4                                0xA91B
#define PA9_24_PAD_ZCTRL_OVRD1                            0xA924
#define PA9_25_PAD_ZCTRL_OVRD2                            0xA925
#define PA9_26_PAD_ZCTRL_OVRD3                            0xA926
#define PA9_27_PAD_ZCTRL_OVRD4                            0xA927
#define PA9_28_PAD_CTRL_PROG1                             0xA928
#define PA9_29_PAD_CTRL_PROG2                             0xA929
#define PA9_2A_PAD_CTRL_PROG3                             0xA92A
#define PA9_2B_PAD_CTRL_PROG4                             0xA92B
#define PA9_2C_PAD_ZCTRL_STATUS1                          0xA92C
#define PA9_2D_PAD_ZCTRL_STATUS2                          0xA92D
#define PA9_2E_PAD_ZCTRL_STATUS3                          0xA92E
#define PA9_2F_PAD_ZCTRL_STATUS4                          0xA92F
#define PA9_30_DQ_DLY_SEL0_1                              0xA930
#define PA9_31_DQ_DLY_SEL0_2                              0xA931
#define PA9_32_DQ_DLY_SEL0_3                              0xA932
#define PA9_33_DQ_DLY_SEL0_4                              0xA933
#define PA9_34_DQ_DLY_SEL1_1                              0xA934
#define PA9_35_DQ_DLY_SEL1_2                              0xA935
#define PA9_36_DQ_DLY_SEL1_3                              0xA936
#define PA9_37_DQ_DLY_SEL1_4                              0xA937
#define PA9_38_DQ_DLY_SEL2_1                              0xA938
#define PA9_39_DQ_DLY_SEL2_2                              0xA939
#define PA9_3A_DQ_DLY_SEL2_3                              0xA93A
#define PA9_3B_DQ_DLY_SEL2_4                              0xA93B
#define PA9_3C_DQ_DLY_SEL3_1                              0xA93C
#define PA9_3D_DQ_DLY_SEL3_2                              0xA93D
#define PA9_3E_DQ_DLY_SEL3_3                              0xA93E
#define PA9_3F_DQ_DLY_SEL3_4                              0xA93F
#define PA9_40_DUMMY_REG_1                                0xA940
#define PA9_41_DUMMY_REG_2                                0xA941
#define PA9_42_DUMMY_REG_3                                0xA942
#define PA9_43_DUMMY_REG_4                                0xA943
#define PA9_44_HALF_CYCLE_CAL_EN1                         0xA944
#define PA9_45_HALF_CYCLE_CAL_EN2                         0xA945
#define PA9_46_HALF_CYCLE_CAL_EN3                         0xA946
#define PA9_47_HALF_CYCLE_CAL_EN4                         0xA947
#define PA9_48_HALF_CYCLE_CAL_SET1                        0xA948
#define PA9_49_HALF_CYCLE_CAL_SET2                        0xA949
#define PA9_4A_HALF_CYCLE_CAL_SET3                        0xA94A
#define PA9_4B_HALF_CYCLE_CAL_SET4                        0xA94B
#define PA9_4C_PUPD_DLY_NUM1                              0xA94C
#define PA9_4D_PUPD_DLY_NUM2                              0xA94D
#define PA9_4E_PUPD_DLY_NUM3                              0xA94E
#define PA9_4F_PUPD_DLY_NUM4                              0xA94F
#define PA9_F0_PUPD_DLY_NUM1_1                            0xA9F0
#define PA9_F1_PUPD_DLY_NUM1_2                            0xA9F1
#define PA9_F2_PUPD_DLY_NUM1_3                            0xA9F2
#define PA9_F3_PUPD_DLY_NUM1_4                            0xA9F3
#define PA9_F4_PUPD_DLY_NUM2_1                            0xA9F4
#define PA9_F5_PUPD_DLY_NUM2_2                            0xA9F5
#define PA9_F6_PUPD_DLY_NUM2_3                            0xA9F6
#define PA9_F7_PUPD_DLY_NUM2_4                            0xA9F7
#define PA9_50_DQS_DLYN1                                  0xA950
#define PA9_51_DQS_DLYN2                                  0xA951
#define PA9_52_DQS_DLYN3                                  0xA952
#define PA9_53_DQS_DLYN4                                  0xA953
#define PA9_54_CAL_MODE1                                  0xA954
#define PA9_55_CAL_MODE2                                  0xA955
#define PA9_56_CAL_MODE3                                  0xA956
#define PA9_57_CAL_MODE4                                  0xA957
#define PA9_58_CAL_ADDR1                                  0xA958
#define PA9_59_CAL_ADDR2                                  0xA959
#define PA9_5A_CAL_ADDR3                                  0xA95A
#define PA9_5B_CAL_ADDR4                                  0xA95B
#define PA9_5C_RESULT_CAL_TAP_0_1                         0xA95C
#define PA9_5D_RESULT_CAL_TAP_0_2                         0xA95D
#define PA9_5E_RESULT_CAL_TAP_0_3                         0xA95E
#define PA9_5F_RESULT_CAL_TAP_0_4                         0xA95F
#define PA9_60_RESULT_CAL_TAP_1_1                         0xA960
#define PA9_61_RESULT_CAL_TAP_1_2                         0xA961
#define PA9_62_RESULT_CAL_TAP_1_3                         0xA962
#define PA9_63_RESULT_CAL_TAP_1_4                         0xA963
#define PA9_64_RESULT_CAL_TAP_2_1                         0xA964
#define PA9_65_RESULT_CAL_TAP_2_2                         0xA965
#define PA9_66_RESULT_CAL_TAP_2_3                         0xA966
#define PA9_67_RESULT_CAL_TAP_2_4                         0xA967
#define PA9_68_RESULT_CAL_TAP_3_1                         0xA968
#define PA9_69_RESULT_CAL_TAP_3_2                         0xA969
#define PA9_6A_RESULT_CAL_TAP_3_3                         0xA96A
#define PA9_6B_RESULT_CAL_TAP_3_4                         0xA96B
#define PA9_6C_RESULT_CAL_TAP_4_1                         0xA96C
#define PA9_6D_RESULT_CAL_TAP_4_2                         0xA96D
#define PA9_6E_RESULT_CAL_TAP_4_3                         0xA96E
#define PA9_6F_RESULT_CAL_TAP_4_4                         0xA96F
#define PA9_70_RESULT_CAL_TAP_5_1                         0xA970
#define PA9_71_RESULT_CAL_TAP_5_2                         0xA971
#define PA9_72_RESULT_CAL_TAP_5_3                         0xA972
#define PA9_73_RESULT_CAL_TAP_5_4                         0xA973
#define PA9_74_RESULT_CAL_TAP_6_1                         0xA974
#define PA9_75_RESULT_CAL_TAP_6_2                         0xA975
#define PA9_76_RESULT_CAL_TAP_6_3                         0xA976
#define PA9_77_RESULT_CAL_TAP_6_4                         0xA977
#define PA9_78_SYNC_RST_WK1                               0xA978
#define PA9_79_SYNC_RST_WK2                               0xA979
#define PA9_7A_SYNC_RST_WK3                               0xA97A
#define PA9_7B_SYNC_RST_WK4                               0xA97B
#define PA9_7C_SYNC_RST_FIFO_PT1                          0xA97C
#define PA9_7D_SYNC_RST_FIFO_PT2                          0xA97D
#define PA9_7E_SYNC_RST_FIFO_PT3                          0xA97E
#define PA9_7F_SYNC_RST_FIFO_PT4                          0xA97F
#define PA9_80_CAL_OUT_DATA_A1                            0xA980
#define PA9_81_CAL_OUT_DATA_A2                            0xA981
#define PA9_82_CAL_OUT_DATA_A3                            0xA982
#define PA9_83_CAL_OUT_DATA_A4                            0xA983
#define PA9_84_CAL_OUT_DATA_B1                            0xA984
#define PA9_85_CAL_OUT_DATA_B2                            0xA985
#define PA9_86_CAL_OUT_DATA_B3                            0xA986
#define PA9_87_CAL_OUT_DATA_B4                            0xA987
#define PA9_88_CAL_GLD_DATA_A1                            0xA988
#define PA9_89_CAL_GLD_DATA_A2                            0xA989
#define PA9_8A_CAL_GLD_DATA_A3                            0xA98A
#define PA9_8B_CAL_GLD_DATA_A4                            0xA98B
#define PA9_8C_CAL_GLD_DATA_B1                            0xA98C
#define PA9_8D_CAL_GLD_DATA_B2                            0xA98D
#define PA9_8E_CAL_GLD_DATA_B3                            0xA98E
#define PA9_8F_CAL_GLD_DATA_B4                            0xA98F
#define PA9_90_CAL_CNT_CTRL1                              0xA990
#define PA9_91_CAL_CNT_CTRL2                              0xA991
#define PA9_92_CAL_CNT_CTRL3                              0xA992
#define PA9_93_CAL_CNT_CTRL4                              0xA993
#define PAC_60_ZQ_SEL0_1                                  0xAC60
#define PAC_61_ZQ_SEL0_2                                  0xAC61
#define PAC_62_ZQ_SEL0_3                                  0xAC62
#define PAC_63_ZQ_SEL0_4                                  0xAC63
#define PAC_64_ZQ_SEL1_1                                  0xAC64
#define PAC_65_ZQ_SEL1_2                                  0xAC65
#define PAC_66_ZQ_SEL1_3                                  0xAC66
#define PAC_67_ZQ_SEL1_4                                  0xAC67
#define PAC_68_ZQ_SEL2_1                                  0xAC68
#define PAC_69_ZQ_SEL2_2                                  0xAC69
#define PAC_6A_ZQ_SEL2_3                                  0xAC6A
#define PAC_6B_ZQ_SEL2_4                                  0xAC6B
#define PAC_70_ZQGRPSEL0_1                                0xAC70
#define PAC_71_ZQGRPSEL0_2                                0xAC71
#define PAC_72_ZQGRPSEL0_3                                0xAC72
#define PAC_73_ZQGRPSEL0_4                                0xAC73
#define PAC_74_ZQGRPSEL1_1                                0xAC74
#define PAC_75_ZQGRPSEL1_2                                0xAC75
#define PAC_76_ZQGRPSEL1_3                                0xAC76
#define PAC_77_ZQGRPSEL1_4                                0xAC77
#define PAC_78_ZQGRPSEL3_1                                0xAC78
#define PAC_79_ZQGRPSEL3_2                                0xAC79
#define PAC_7A_ZQGRPSEL3_3                                0xAC7A
#define PAC_7B_ZQGRPSEL3_4                                0xAC7B
#define PAC_7C_ZQGRPSEL2_1                                0xAC7C
#define PAC_7D_ZQGRPSEL2_2                                0xAC7D
#define PAC_7E_ZQGRPSEL2_3                                0xAC7E
#define PAC_7F_ZQGRPSEL2_4                                0xAC7F
#define PAC_80_ZQGRPSEL4_1                                0xAC80
#define PAC_81_ZQGRPSEL4_2                                0xAC81
#define PAC_82_ZQGRPSEL4_3                                0xAC82
#define PAC_83_ZQGRPSEL4_4                                0xAC83
#define PAC_90_PAD_CTRL_CK_1                              0xAC90
#define PAC_91_PAD_CTRL_CK_2                              0xAC91
#define PAC_92_PAD_CTRL_CK_3                              0xAC92
#define PAC_93_PAD_CTRL_CK_4                              0xAC93
#define PAC_94_PAD_CTRL_CKB_1                             0xAC94
#define PAC_95_PAD_CTRL_CKB_2                             0xAC95
#define PAC_96_PAD_CTRL_CKB_3                             0xAC96
#define PAC_97_PAD_CTRL_CKB_4                             0xAC97
#define PAC_98_PAD_CTRL_ADDR_1                            0xAC98
#define PAC_99_PAD_CTRL_ADDR_2                            0xAC99
#define PAC_9A_PAD_CTRL_ADDR_3                            0xAC9A
#define PAC_9B_PAD_CTRL_ADDR_4                            0xAC9B
#define PAC_1C_PAD_CTRL_CMD_1                             0xAC1C
#define PAC_1D_PAD_CTRL_CMD_2                             0xAC1D
#define PAC_1E_PAD_CTRL_CMD_3                             0xAC1E
#define PAC_1F_PAD_CTRL_CMD_4                             0xAC1F
#define PAC_A0_PAD_CTRL_CS_1                              0xACA0
#define PAC_A1_PAD_CTRL_CS_2                              0xACA1
#define PAC_A2_PAD_CTRL_CS_3                              0xACA2
#define PAC_A3_PAD_CTRL_CS_4                              0xACA3
#define PAC_A4_PAD_CTRL_DQS0_1                            0xACA4
#define PAC_A5_PAD_CTRL_DQS0_2                            0xACA5
#define PAC_A6_PAD_CTRL_DQS0_3                            0xACA6
#define PAC_A7_PAD_CTRL_DQS0_4                            0xACA7
#define PAC_A8_PAD_CTRL_DQS0B_1                           0xACA8
#define PAC_A9_PAD_CTRL_DQS0B_2                           0xACA9
#define PAC_AA_PAD_CTRL_DQS0B_3                           0xACAA
#define PAC_AB_PAD_CTRL_DQS0B_4                           0xACAB
#define PAC_AC_PAD_CTRL_DQS1_1                            0xACAC
#define PAC_AD_PAD_CTRL_DQS1_2                            0xACAD
#define PAC_AE_PAD_CTRL_DQS1_3                            0xACAE
#define PAC_AF_PAD_CTRL_DQS1_4                            0xACAF
#define PAC_B0_PAD_CTRL_DQS1B_1                           0xACB0
#define PAC_B1_PAD_CTRL_DQS1B_2                           0xACB1
#define PAC_B2_PAD_CTRL_DQS1B_3                           0xACB2
#define PAC_B3_PAD_CTRL_DQS1B_4                           0xACB3
#define PAC_B4_PAD_CTRL_DQS2_1                            0xACB4
#define PAC_B5_PAD_CTRL_DQS2_2                            0xACB5
#define PAC_B6_PAD_CTRL_DQS2_3                            0xACB6
#define PAC_B7_PAD_CTRL_DQS2_4                            0xACB7
#define PAC_B8_PAD_CTRL_DQS2B_1                           0xACB8
#define PAC_B9_PAD_CTRL_DQS2B_2                           0xACB9
#define PAC_BA_PAD_CTRL_DQS2B_3                           0xACBA
#define PAC_BB_PAD_CTRL_DQS2B_4                           0xACBB
#define PAC_BC_PAD_CTRL_DQS3_1                            0xACBC
#define PAC_BD_PAD_CTRL_DQS3_2                            0xACBD
#define PAC_BE_PAD_CTRL_DQS3_3                            0xACBE
#define PAC_BF_PAD_CTRL_DQS3_4                            0xACBF
#define PAC_C0_PAD_CTRL_DQS3B_1                           0xACC0
#define PAC_C1_PAD_CTRL_DQS3B_2                           0xACC1
#define PAC_C2_PAD_CTRL_DQS3B_3                           0xACC2
#define PAC_C3_PAD_CTRL_DQS3B_4                           0xACC3
#define PAC_C4_PAD_CTRL_DQS0700_1                         0xACC4
#define PAC_C5_PAD_CTRL_DQS0700_2                         0xACC5
#define PAC_C6_PAD_CTRL_DQS0700_3                         0xACC6
#define PAC_C7_PAD_CTRL_DQS0700_4                         0xACC7
#define PAC_C8_PAD_CTRL_DQS1508_1                         0xACC8
#define PAC_C9_PAD_CTRL_DQS1508_2                         0xACC9
#define PAC_CA_PAD_CTRL_DQS1508_3                         0xACCA
#define PAC_CB_PAD_CTRL_DQS1508_4                         0xACCB
#define PAC_CC_PAD_CTRL_DQS2316_1                         0xACCC
#define PAC_CD_PAD_CTRL_DQS2316_2                         0xACCD
#define PAC_CE_PAD_CTRL_DQS2316_3                         0xACCE
#define PAC_CF_PAD_CTRL_DQS2316_4                         0xACCF
#define PAC_D0_PAD_CTRL_DQS3124_1                         0xACD0
#define PAC_D1_PAD_CTRL_DQS3124_2                         0xACD1
#define PAC_D2_PAD_CTRL_DQS3124_3                         0xACD2
#define PAC_D3_PAD_CTRL_DQS3124_4                         0xACD3
#define PAC_E0_ZQ_G0_1                                    0xACE0
#define PAC_E1_ZQ_G0_2                                    0xACE1
#define PAC_E2_ZQ_G0_3                                    0xACE2
#define PAC_E3_ZQ_G0_4                                    0xACE3
#define PAC_E4_ZQ_G1_1                                    0xACE4
#define PAC_E5_ZQ_G1_2                                    0xACE5
#define PAC_E6_ZQ_G1_3                                    0xACE6
#define PAC_E7_ZQ_G1_4                                    0xACE7
#define PAC_E8_ZQ_G2_1                                    0xACE8
#define PAC_E9_ZQ_G2_2                                    0xACE9
#define PAC_EA_ZQ_G2_3                                    0xACEA
#define PAC_EB_ZQ_G2_4                                    0xACEB
#define PAC_EC_ZQ_G3_1                                    0xACEC
#define PAC_ED_ZQ_G3_2                                    0xACED
#define PAC_EE_ZQ_G3_3                                    0xACEE
#define PAC_EF_ZQ_G3_4                                    0xACEF
#define PAC_F0_ZQ_G4_1                                    0xACF0
#define PAC_F1_ZQ_G4_2                                    0xACF1
#define PAC_F2_ZQ_G4_3                                    0xACF2
#define PAC_F3_ZQ_G4_4                                    0xACF3
#define PAC_F4_ZQ_G5_1                                    0xACF4
#define PAC_F5_ZQ_G5_2                                    0xACF5
#define PAC_F6_ZQ_G5_3                                    0xACF6
#define PAC_F7_ZQ_G5_4                                    0xACF7
#define PAC_F8_ZQ_G6_1                                    0xACF8
#define PAC_F9_ZQ_G6_2                                    0xACF9
#define PAC_FA_ZQ_G6_3                                    0xACFA
#define PAC_FB_ZQ_G6_4                                    0xACFB
#define PAC_FC_ZQ_G7_1                                    0xACFC
#define PAC_FD_ZQ_G7_2                                    0xACFD
#define PAC_FE_ZQ_G7_3                                    0xACFE
#define PAC_FF_ZQ_G7_4                                    0xACFF
#define PAA_4C_BIT_OFFSET1                                0xAA4C
#define PAA_4D_BIT_OFFSET2                                0xAA4D
#define PAA_4E_BIT_OFFSET3                                0xAA4E
#define PAA_4F_BIT_OFFSET4                                0xAA4F
#define PAA_50_DQS_CAL31                                  0xAA50
#define PAA_51_DQS_CAL32                                  0xAA51
#define PAA_52_DQS_CAL33                                  0xAA52
#define PAA_53_DQS_CAL34                                  0xAA53
#define PAA_54_DQS_CAL21                                  0xAA54
#define PAA_55_DQS_CAL22                                  0xAA55
#define PAA_56_DQS_CAL23                                  0xAA56
#define PAA_57_DQS_CAL24                                  0xAA57
#define PAA_58_DQS_CAL11                                  0xAA58
#define PAA_59_DQS_CAL12                                  0xAA59
#define PAA_5A_DQS_CAL13                                  0xAA5A
#define PAA_5B_DQS_CAL14                                  0xAA5B
#define PAA_5C_DQS_CAL01                                  0xAA5C
#define PAA_5D_DQS_CAL02                                  0xAA5D
#define PAA_5E_DQS_CAL03                                  0xAA5E
#define PAA_5F_DQS_CAL04                                  0xAA5F
#define PAA_A0_DQS_CAL_STS1                               0xAAA0
#define PAA_A1_DQS_CAL_STS2                               0xAAA1
#define PAA_A2_DQS_CAL_STS3                               0xAAA2
#define PAA_A3_DQS_CAL_STS4                               0xAAA3
#define PAA_60_FB_DQ_DLYN_00_1                            0xAA60
#define PAA_61_FB_DQ_DLYN_00_2                            0xAA61
#define PAA_62_FB_DQ_DLYN_00_3                            0xAA62
#define PAA_63_FB_DQ_DLYN_00_4                            0xAA63
#define PAA_64_FB_DQ_DLYN_01_1                            0xAA64
#define PAA_65_FB_DQ_DLYN_01_2                            0xAA65
#define PAA_66_FB_DQ_DLYN_01_3                            0xAA66
#define PAA_67_FB_DQ_DLYN_01_4                            0xAA67
#define PAA_68_FB_DQ_DLYN_10_1                            0xAA68
#define PAA_69_FB_DQ_DLYN_10_2                            0xAA69
#define PAA_6A_FB_DQ_DLYN_10_3                            0xAA6A
#define PAA_6B_FB_DQ_DLYN_10_4                            0xAA6B
#define PAA_6C_FB_DQ_DLYN_11_1                            0xAA6C
#define PAA_6D_FB_DQ_DLYN_11_2                            0xAA6D
#define PAA_6E_FB_DQ_DLYN_11_3                            0xAA6E
#define PAA_6F_FB_DQ_DLYN_11_4                            0xAA6F
#define PAA_70_FB_DQ_DLYN_20_1                            0xAA70
#define PAA_71_FB_DQ_DLYN_20_2                            0xAA71
#define PAA_72_FB_DQ_DLYN_20_3                            0xAA72
#define PAA_73_FB_DQ_DLYN_20_4                            0xAA73
#define PAA_74_FB_DQ_DLYN_21_1                            0xAA74
#define PAA_75_FB_DQ_DLYN_21_2                            0xAA75
#define PAA_76_FB_DQ_DLYN_21_3                            0xAA76
#define PAA_77_FB_DQ_DLYN_21_4                            0xAA77
#define PAA_78_FB_DQ_DLYN_30_1                            0xAA78
#define PAA_79_FB_DQ_DLYN_30_2                            0xAA79
#define PAA_7A_FB_DQ_DLYN_30_3                            0xAA7A
#define PAA_7B_FB_DQ_DLYN_30_4                            0xAA7B
#define PAA_7C_FB_DQ_DLYN_31_1                            0xAA7C
#define PAA_7D_FB_DQ_DLYN_31_2                            0xAA7D
#define PAA_7E_FB_DQ_DLYN_31_3                            0xAA7E
#define PAA_7F_FB_DQ_DLYN_31_4                            0xAA7F
#define PAA_80_CAL_FB_DQ_DLYN_00_1                        0xAA80
#define PAA_81_CAL_FB_DQ_DLYN_00_2                        0xAA81
#define PAA_82_CAL_FB_DQ_DLYN_00_3                        0xAA82
#define PAA_83_CAL_FB_DQ_DLYN_00_4                        0xAA83
#define PAA_84_CAL_FB_DQ_DLYN_01_1                        0xAA84
#define PAA_85_CAL_FB_DQ_DLYN_01_2                        0xAA85
#define PAA_86_CAL_FB_DQ_DLYN_01_3                        0xAA86
#define PAA_87_CAL_FB_DQ_DLYN_01_4                        0xAA87
#define PAA_88_CAL_FB_DQ_DLYN_10_1                        0xAA88
#define PAA_89_CAL_FB_DQ_DLYN_10_2                        0xAA89
#define PAA_8A_CAL_FB_DQ_DLYN_10_3                        0xAA8A
#define PAA_8B_CAL_FB_DQ_DLYN_10_4                        0xAA8B
#define PAA_8C_CAL_FB_DQ_DLYN_11_1                        0xAA8C
#define PAA_8D_CAL_FB_DQ_DLYN_11_2                        0xAA8D
#define PAA_8E_CAL_FB_DQ_DLYN_11_3                        0xAA8E
#define PAA_8F_CAL_FB_DQ_DLYN_11_4                        0xAA8F
#define PAA_90_CAL_FB_DQ_DLYN_20_1                        0xAA90
#define PAA_91_CAL_FB_DQ_DLYN_20_2                        0xAA91
#define PAA_92_CAL_FB_DQ_DLYN_20_3                        0xAA92
#define PAA_93_CAL_FB_DQ_DLYN_20_4                        0xAA93
#define PAA_94_CAL_FB_DQ_DLYN_21_1                        0xAA94
#define PAA_95_CAL_FB_DQ_DLYN_21_2                        0xAA95
#define PAA_96_CAL_FB_DQ_DLYN_21_3                        0xAA96
#define PAA_97_CAL_FB_DQ_DLYN_21_4                        0xAA97
#define PAA_98_CAL_FB_DQ_DLYN_30_1                        0xAA98
#define PAA_99_CAL_FB_DQ_DLYN_30_2                        0xAA99
#define PAA_9A_CAL_FB_DQ_DLYN_30_3                        0xAA9A
#define PAA_9B_CAL_FB_DQ_DLYN_30_4                        0xAA9B
#define PAA_1C_CAL_FB_DQ_DLYN_31_1                        0xAA1C
#define PAA_1D_CAL_FB_DQ_DLYN_31_2                        0xAA1D
#define PAA_1E_CAL_FB_DQ_DLYN_31_3                        0xAA1E
#define PAA_1F_CAL_FB_DQ_DLYN_31_4                        0xAA1F
#define PAB_00_PAD_BUS_01                                 0xAB00
#define PAB_01_PAD_BUS_02                                 0xAB01
#define PAB_02_PAD_BUS_03                                 0xAB02
#define PAB_03_PAD_BUS_04                                 0xAB03
#define PAB_04_PAD_BUS_11                                 0xAB04
#define PAB_05_PAD_BUS_12                                 0xAB05
#define PAB_06_PAD_BUS_13                                 0xAB06
#define PAB_07_PAD_BUS_14                                 0xAB07
#define PAB_20_ANA_DLL1                                   0xAB20
#define PAB_21_ANA_DLL2                                   0xAB21
#define PAB_22_ANA_DLL3                                   0xAB22
#define PAB_23_ANA_DLL4                                   0xAB23
#define PAB_24_LPDDR_CTRL1                                0xAB24
#define PAB_25_LPDDR_CTRL2                                0xAB25
#define PAB_26_LPDDR_CTRL3                                0xAB26
#define PAB_27_LPDDR_CTRL4                                0xAB27
#define PAB_28_LPDDR_RDAT1                                0xAB28
#define PAB_29_LPDDR_RDAT2                                0xAB29
#define PAB_2A_LPDDR_RDAT3                                0xAB2A
#define PAB_2B_LPDDR_RDAT4                                0xAB2B
#define PAB_2C_LPDDR_MOD1                                 0xAB2C
#define PAB_2D_LPDDR_MOD2                                 0xAB2D
#define PAB_2E_LPDDR_MOD3                                 0xAB2E
#define PAB_2F_LPDDR_MOD4                                 0xAB2F
#define PAB_30_ZQCMP1                                     0xAB30
#define PAB_31_ZQCMP2                                     0xAB31
#define PAB_32_ZQCMP3                                     0xAB32
#define PAB_33_ZQCMP4                                     0xAB33
#define PAE_00_FIFO_ARB_01                                0xAE00
#define PAE_01_FIFO_ARB_02                                0xAE01
#define PAE_02_FIFO_ARB_03                                0xAE02
#define PAE_03_FIFO_ARB_04                                0xAE03
#define PAE_04_FIFO_ARB_11                                0xAE04
#define PAE_05_FIFO_ARB_12                                0xAE05
#define PAE_06_FIFO_ARB_13                                0xAE06
#define PAE_07_FIFO_ARB_14                                0xAE07
#define PAE_08_FIFO_ARB_21                                0xAE08
#define PAE_09_FIFO_ARB_22                                0xAE09
#define PAE_0A_FIFO_ARB_23                                0xAE0A
#define PAE_0B_FIFO_ARB_24                                0xAE0B
#define PAE_0C_FIFO_ARB_31                                0xAE0C
#define PAE_0D_FIFO_ARB_32                                0xAE0D
#define PAE_0E_FIFO_ARB_33                                0xAE0E
#define PAE_0F_FIFO_ARB_34                                0xAE0F
#define PAE_10_FIFO_ARB_41                                0xAE10
#define PAE_11_FIFO_ARB_42                                0xAE11
#define PAE_12_FIFO_ARB_43                                0xAE12
#define PAE_13_FIFO_ARB_44                                0xAE13
#define PAE_14_FIFO_ARB_51                                0xAE14
#define PAE_15_FIFO_ARB_52                                0xAE15
#define PAE_16_FIFO_ARB_53                                0xAE16
#define PAE_17_FIFO_ARB_54                                0xAE17
#define PAE_18_FIFO_ARB_61                                0xAE18
#define PAE_19_FIFO_ARB_62                                0xAE19
#define PAE_1A_FIFO_ARB_63                                0xAE1A
#define PAE_1B_FIFO_ARB_64                                0xAE1B
#define PAE_1C_FIFO_ARB_71                                0xAE1C
#define PAE_1D_FIFO_ARB_72                                0xAE1D
#define PAE_1E_FIFO_ARB_73                                0xAE1E
#define PAE_1F_FIFO_ARB_74                                0xAE1F
#define PAE_20_FIFO_ARB_81                                0xAE20
#define PAE_21_FIFO_ARB_82                                0xAE21
#define PAE_22_FIFO_ARB_83                                0xAE22
#define PAE_23_FIFO_ARB_84                                0xAE23
#define PAE_24_FIFO_ARB_91                                0xAE24
#define PAE_25_FIFO_ARB_92                                0xAE25
#define PAE_26_FIFO_ARB_93                                0xAE26
#define PAE_27_FIFO_ARB_94                                0xAE27
#define PAE_28_FIFO_ARB_101                               0xAE28
#define PAE_29_FIFO_ARB_102                               0xAE29
#define PAE_2A_FIFO_ARB_103                               0xAE2A
#define PAE_2B_FIFO_ARB_104                               0xAE2B
#define PAE_2C_FIFO_ARB_111                               0xAE2C
#define PAE_2D_FIFO_ARB_112                               0xAE2D
#define PAE_2E_FIFO_ARB_113                               0xAE2E
#define PAE_2F_FIFO_ARB_114                               0xAE2F
#define PAE_30_FIFO_ARB_121                               0xAE30
#define PAE_31_FIFO_ARB_122                               0xAE31
#define PAE_32_FIFO_ARB_123                               0xAE32
#define PAE_33_FIFO_ARB_124                               0xAE33
#define PAE_34_FIFO_ARB_131                               0xAE34
#define PAE_35_FIFO_ARB_132                               0xAE35
#define PAE_36_FIFO_ARB_133                               0xAE36
#define PAE_37_FIFO_ARB_134                               0xAE37
#define PAE_38_FIFO_ARB_141                               0xAE38
#define PAE_39_FIFO_ARB_142                               0xAE39
#define PAE_3A_FIFO_ARB_143                               0xAE3A
#define PAE_3B_FIFO_ARB_144                               0xAE3B
#define PAE_3C_FIFO_ARB_151                               0xAE3C
#define PAE_3D_FIFO_ARB_152                               0xAE3D
#define PAE_3E_FIFO_ARB_153                               0xAE3E
#define PAE_3F_FIFO_ARB_154                               0xAE3F
#define PAE_40_FIFO_ARB_161                               0xAE40
#define PAE_41_FIFO_ARB_162                               0xAE41
#define PAE_42_FIFO_ARB_163                               0xAE42
#define PAE_43_FIFO_ARB_164                               0xAE43
#define PAE_44_FIFO_ARB_171                               0xAE44
#define PAE_45_FIFO_ARB_172                               0xAE45
#define PAE_46_FIFO_ARB_173                               0xAE46
#define PAE_47_FIFO_ARB_174                               0xAE47
#define PAE_48_FIFO_ARB_181                               0xAE48
#define PAE_49_FIFO_ARB_182                               0xAE49
#define PAE_4A_FIFO_ARB_183                               0xAE4A
#define PAE_4B_FIFO_ARB_184                               0xAE4B
#define PAE_4C_FIFO_ARB_191                               0xAE4C
#define PAE_4D_FIFO_ARB_192                               0xAE4D
#define PAE_4E_FIFO_ARB_193                               0xAE4E
#define PAE_4F_FIFO_ARB_194                               0xAE4F
#define PAE_50_FIFO_ARB_201                               0xAE50
#define PAE_51_FIFO_ARB_202                               0xAE51
#define PAE_52_FIFO_ARB_203                               0xAE52
#define PAE_53_FIFO_ARB_204                               0xAE53
#define PAE_54_FIFO_ARB_211                               0xAE54
#define PAE_55_FIFO_ARB_212                               0xAE55
#define PAE_56_FIFO_ARB_213                               0xAE56
#define PAE_57_FIFO_ARB_214                               0xAE57
#define PAE_58_FIFO_ARB_221                               0xAE58
#define PAE_59_FIFO_ARB_222                               0xAE59
#define PAE_5A_FIFO_ARB_223                               0xAE5A
#define PAE_5B_FIFO_ARB_224                               0xAE5B
#define PAE_5C_FIFO_ARB_231                               0xAE5C
#define PAE_5D_FIFO_ARB_232                               0xAE5D
#define PAE_5E_FIFO_ARB_233                               0xAE5E
#define PAE_5F_FIFO_ARB_234                               0xAE5F
#define PAE_60_FIFO_ARB_241                               0xAE60
#define PAE_61_FIFO_ARB_242                               0xAE61
#define PAE_62_FIFO_ARB_243                               0xAE62
#define PAE_63_FIFO_ARB_244                               0xAE63
#define PAE_64_FIFO_ARB_251                               0xAE64
#define PAE_65_FIFO_ARB_252                               0xAE65
#define PAE_66_FIFO_ARB_253                               0xAE66
#define PAE_67_FIFO_ARB_254                               0xAE67
#define PAE_68_FIFO_ARB_261                               0xAE68
#define PAE_69_FIFO_ARB_262                               0xAE69
#define PAE_6A_FIFO_ARB_263                               0xAE6A
#define PAE_6B_FIFO_ARB_264                               0xAE6B
#define PAE_6C_FIFO_ARB_271                               0xAE6C
#define PAE_6D_FIFO_ARB_272                               0xAE6D
#define PAE_6E_FIFO_ARB_273                               0xAE6E
#define PAE_6F_FIFO_ARB_274                               0xAE6F
#define PAE_70_FIFO_ARB_281                               0xAE70
#define PAE_71_FIFO_ARB_282                               0xAE71
#define PAE_72_FIFO_ARB_283                               0xAE72
#define PAE_73_FIFO_ARB_284                               0xAE73
#define PAE_E0_DUMMY_01                                   0xAEE0
#define PAE_E1_DUMMY_02                                   0xAEE1
#define PAE_E2_DUMMY_03                                   0xAEE2
#define PAE_E3_DUMMY_04                                   0xAEE3
#define PAE_E4_DUMMY_11                                   0xAEE4
#define PAE_E5_DUMMY_12                                   0xAEE5
#define PAE_E6_DUMMY_13                                   0xAEE6
#define PAE_E7_DUMMY_14                                   0xAEE7
#define PAE_E8_DUMMY_21                                   0xAEE8
#define PAE_E9_DUMMY_22                                   0xAEE9
#define PAE_EA_DUMMY_23                                   0xAEEA
#define PAE_EB_DUMMY_24                                   0xAEEB
#define PAE_EC_DUMMY_31                                   0xAEEC
#define PAE_ED_DUMMY_32                                   0xAEED
#define PAE_EE_DUMMY_33                                   0xAEEE
#define PAE_EF_DUMMY_34                                   0xAEEF
#define PAE_F0_DUMMY_41                                   0xAEF0
#define PAE_F1_DUMMY_42                                   0xAEF1
#define PAE_F2_DUMMY_43                                   0xAEF2
#define PAE_F3_DUMMY_44                                   0xAEF3
#define PAE_F4_DUMMY_51                                   0xAEF4
#define PAE_F5_DUMMY_52                                   0xAEF5
#define PAE_F6_DUMMY_53                                   0xAEF6
#define PAE_F7_DUMMY_54                                   0xAEF7
#define PAE_F8_DUMMY_61                                   0xAEF8
#define PAE_F9_DUMMY_62                                   0xAEF9
#define PAE_FA_DUMMY_63                                   0xAEFA
#define PAE_FB_DUMMY_64                                   0xAEFB
#define PAE_FC_DUMMY_71                                   0xAEFC
#define PAE_FD_DUMMY_72                                   0xAEFD
#define PAE_FE_DUMMY_73                                   0xAEFE
#define PAE_FF_DUMMY_74                                   0xAEFF
#define PAE_80_CMD0_DLYN_0_0                              0xAE80
#define PAE_81_CMD0_DLYN_0_1                              0xAE81
#define PAE_82_CMD0_DLYN_0_2                              0xAE82
#define PAE_83_CMD0_DLYN_0_3                              0xAE83
#define PAE_84_CMD0_DLYN_1_0                              0xAE84
#define PAE_85_CMD0_DLYN_1_1                              0xAE85
#define PAE_86_CMD0_DLYN_1_2                              0xAE86
#define PAE_87_CMD0_DLYN_1_3                              0xAE87
#define PAE_88_CMD0_DLYN_2_0                              0xAE88
#define PAE_89_CMD0_DLYN_2_1                              0xAE89
#define PAE_8A_CMD0_DLYN_2_2                              0xAE8A
#define PAE_8B_CMD0_DLYN_2_3                              0xAE8B
#define PAE_8C_CMD0_DLYN_3_0                              0xAE8C
#define PAE_8D_CMD0_DLYN_3_1                              0xAE8D
#define PAE_8E_CMD0_DLYN_3_2                              0xAE8E
#define PAE_8F_CMD0_DLYN_3_3                              0xAE8F
#define PAF_00_CMD_DLY_1T1                                0xAF00
#define PAF_01_CMD_DLY_1T2                                0xAF01
#define PAF_02_CMD_DLY_1T3                                0xAF02
#define PAF_03_CMD_DLY_1T4                                0xAF03
#define PAF_04_EXP_LANE_CTRL1                             0xAF04
#define PAF_05_EXP_LANE_CTRL2                             0xAF05
#define PAF_06_EXP_LANE_CTRL3                             0xAF06
#define PAF_07_EXP_LANE_CTRL4                             0xAF07
#define PAF_08_CMD_DLYN_01                                0xAF08
#define PAF_09_CMD_DLYN_02                                0xAF09
#define PAF_0A_CMD_DLYN_03                                0xAF0A
#define PAF_0B_CMD_DLYN_04                                0xAF0B
#define PAF_10_ADR_DLYN_01                                0xAF10
#define PAF_11_ADR_DLYN_02                                0xAF11
#define PAF_12_ADR_DLYN_03                                0xAF12
#define PAF_13_ADR_DLYN_04                                0xAF13
#define PAF_18_SCPU_PC_TOTA_MON_NUM1                      0xAF18
#define PAF_19_SCPU_PC_TOTA_MON_NUM2                      0xAF19
#define PAF_1A_SCPU_PC_TOTA_MON_NUM3                      0xAF1A
#define PAF_1B_SCPU_PC_TOTA_MON_NUM4                      0xAF1B
#define PAF_1C_SCPU_PC_TOTA_ACK_NUM1                      0xAF1C
#define PAF_1D_SCPU_PC_TOTA_ACK_NUM2                      0xAF1D
#define PAF_1E_SCPU_PC_TOTA_ACK_NUM3                      0xAF1E
#define PAF_1F_SCPU_PC_TOTA_ACK_NUM4                      0xAF1F
#define PAF_20_SCPU_PC_TOTA_IDL1                          0xAF20
#define PAF_21_SCPU_PC_TOTA_IDL2                          0xAF21
#define PAF_22_SCPU_PC_TOTA_IDL3                          0xAF22
#define PAF_23_SCPU_PC_TOTA_IDL4                          0xAF23
#define PAF_24_SCPU_PC_ACC_LAT1                           0xAF24
#define PAF_25_SCPU_PC_ACC_LAT2                           0xAF25
#define PAF_26_SCPU_PC_ACC_LAT3                           0xAF26
#define PAF_27_SCPU_PC_ACC_LAT4                           0xAF27
#define PAF_28_SCPU_PC_MAX_LAT1                           0xAF28
#define PAF_29_SCPU_PC_MAX_LAT2                           0xAF29
#define PAF_2A_SCPU_PC_MAX_LAT3                           0xAF2A
#define PAF_2B_SCPU_PC_MAX_LAT4                           0xAF2B
#define PAF_2C_SCPU_PC_REQ_NUM1                           0xAF2C
#define PAF_2D_SCPU_PC_REQ_NUM2                           0xAF2D
#define PAF_2E_SCPU_PC_REQ_NUM3                           0xAF2E
#define PAF_2F_SCPU_PC_REQ_NUM4                           0xAF2F
#define PAF_30_SCPU_PC_ACK_NUM1                           0xAF30
#define PAF_31_SCPU_PC_ACK_NUM2                           0xAF31
#define PAF_32_SCPU_PC_ACK_NUM3                           0xAF32
#define PAF_33_SCPU_PC_ACK_NUM4                           0xAF33
#define PAF_34_SCPU_PC_CTRL1                              0xAF34
#define PAF_35_SCPU_PC_CTRL2                              0xAF35
#define PAF_36_SCPU_PC_CTRL3                              0xAF36
#define PAF_37_SCPU_PC_CTRL4                              0xAF37
#define PAF_38_GCK_CTRL1                                  0xAF38
#define PAF_39_GCK_CTRL2                                  0xAF39
#define PAF_3A_GCK_CTRL3                                  0xAF3A
#define PAF_3B_GCK_CTRL4                                  0xAF3B
#define PAF_3C_SCPU_LEAKY_BUCKET_CTRL_01                  0xAF3C
#define PAF_3D_SCPU_LEAKY_BUCKET_CTRL_02                  0xAF3D
#define PAF_3E_SCPU_LEAKY_BUCKET_CTRL_03                  0xAF3E
#define PAF_3F_SCPU_LEAKY_BUCKET_CTRL_04                  0xAF3F
#define PAF_40_SCPU_LEAKY_BUCKET_CTRL_11                  0xAF40
#define PAF_41_SCPU_LEAKY_BUCKET_CTRL_12                  0xAF41
#define PAF_42_SCPU_LEAKY_BUCKET_CTRL_13                  0xAF42
#define PAF_43_SCPU_LEAKY_BUCKET_CTRL_14                  0xAF43
#define PAF_44_SCPU_LEAKY_BUCKET_CTRL_21                  0xAF44
#define PAF_45_SCPU_LEAKY_BUCKET_CTRL_22                  0xAF45
#define PAF_46_SCPU_LEAKY_BUCKET_CTRL_23                  0xAF46
#define PAF_47_SCPU_LEAKY_BUCKET_CTRL_24                  0xAF47
#define PAF_48_SCPU_PC_MERGE_NUM1                         0xAF48
#define PAF_49_SCPU_PC_MERGE_NUM2                         0xAF49
#define PAF_4A_SCPU_PC_MERGE_NUM3                         0xAF4A
#define PAF_4B_SCPU_PC_MERGE_NUM4                         0xAF4B
#define PAF_4C_SCPU_PC_WR_REQ_NUM1                        0xAF4C
#define PAF_4D_SCPU_PC_WR_REQ_NUM2                        0xAF4D
#define PAF_4E_SCPU_PC_WR_REQ_NUM3                        0xAF4E
#define PAF_4F_SCPU_PC_WR_REQ_NUM4                        0xAF4F
#define PAF_50_SPEED_SENSOR_CTRL1                         0xAF50
#define PAF_51_SPEED_SENSOR_CTRL2                         0xAF51
#define PAF_52_SPEED_SENSOR_CTRL3                         0xAF52
#define PAF_53_SPEED_SENSOR_CTRL4                         0xAF53
#define PAF_54_SPEED_SENSOR_STATUS1                       0xAF54
#define PAF_55_SPEED_SENSOR_STATUS2                       0xAF55
#define PAF_56_SPEED_SENSOR_STATUS3                       0xAF56
#define PAF_57_SPEED_SENSOR_STATUS4                       0xAF57
#define PAF_58_EXPRESS_LANE_CTRL_MISC1                    0xAF58
#define PAF_59_EXPRESS_LANE_CTRL_MISC2                    0xAF59
#define PAF_5A_EXPRESS_LANE_CTRL_MISC3                    0xAF5A
#define PAF_5B_EXPRESS_LANE_CTRL_MISC4                    0xAF5B
#define PAF_64_DEBUG011                                   0xAF64
#define PAF_65_DEBUG012                                   0xAF65
#define PAF_66_DEBUG013                                   0xAF66
#define PAF_67_DEBUG014                                   0xAF67
#define PAF_68_DEBUG231                                   0xAF68
#define PAF_69_DEBUG232                                   0xAF69
#define PAF_6A_DEBUG233                                   0xAF6A
#define PAF_6B_DEBUG234                                   0xAF6B
#define PAF_70_DQ_DA_PRBS7_EN1                            0xAF70
#define PAF_71_DQ_DA_PRBS7_EN2                            0xAF71
#define PAF_72_DQ_DA_PRBS7_EN3                            0xAF72
#define PAF_73_DQ_DA_PRBS7_EN4                            0xAF73
#define PAF_74_DA_SEL_0_71                                0xAF74
#define PAF_75_DA_SEL_0_72                                0xAF75
#define PAF_76_DA_SEL_0_73                                0xAF76
#define PAF_77_DA_SEL_0_74                                0xAF77
#define PAF_78_DA_SEL_8_151                               0xAF78
#define PAF_79_DA_SEL_8_152                               0xAF79
#define PAF_7A_DA_SEL_8_153                               0xAF7A
#define PAF_7B_DA_SEL_8_154                               0xAF7B
#define PAF_7C_DQ_SEL_0_71                                0xAF7C
#define PAF_7D_DQ_SEL_0_72                                0xAF7D
#define PAF_7E_DQ_SEL_0_73                                0xAF7E
#define PAF_7F_DQ_SEL_0_74                                0xAF7F
#define PAF_80_DQ_SEL_8_151                               0xAF80
#define PAF_81_DQ_SEL_8_152                               0xAF81
#define PAF_82_DQ_SEL_8_153                               0xAF82
#define PAF_83_DQ_SEL_8_154                               0xAF83
#define PAF_84_DQ_SEL_16_231                              0xAF84
#define PAF_85_DQ_SEL_16_232                              0xAF85
#define PAF_86_DQ_SEL_16_233                              0xAF86
#define PAF_87_DQ_SEL_16_234                              0xAF87
#define PAF_88_DQ_SEL_24_311                              0xAF88
#define PAF_89_DQ_SEL_24_312                              0xAF89
#define PAF_8A_DQ_SEL_24_313                              0xAF8A
#define PAF_8B_DQ_SEL_24_314                              0xAF8B
#define PAF_8C_DA1_SEL_4_51                               0xAF8C
#define PAF_8D_DA1_SEL_4_52                               0xAF8D
#define PAF_8E_DA1_SEL_4_53                               0xAF8E
#define PAF_8F_DA1_SEL_4_54                               0xAF8F
#define PAF_90_OTHER_PRBS7_SEL1                           0xAF90
#define PAF_91_OTHER_PRBS7_SEL2                           0xAF91
#define PAF_92_OTHER_PRBS7_SEL3                           0xAF92
#define PAF_93_OTHER_PRBS7_SEL4                           0xAF93
#define PAF_94_DQS_COMPHL_DLY1                            0xAF94
#define PAF_95_DQS_COMPHL_DLY2                            0xAF95
#define PAF_96_DQS_COMPHL_DLY3                            0xAF96
#define PAF_97_DQS_COMPHL_DLY4                            0xAF97
#define PAF_98_DQS_EN_TRACKING_RESULT1                    0xAF98
#define PAF_99_DQS_EN_TRACKING_RESULT2                    0xAF99
#define PAF_9A_DQS_EN_TRACKING_RESULT3                    0xAF9A
#define PAF_9B_DQS_EN_TRACKING_RESULT4                    0xAF9B
#define PAF_C0_DC_PHY_BIST_MODE1                          0xAFC0
#define PAF_C1_DC_PHY_BIST_MODE2                          0xAFC1
#define PAF_C2_DC_PHY_BIST_MODE3                          0xAFC2
#define PAF_C3_DC_PHY_BIST_MODE4                          0xAFC3
#define PAF_C4_DC_PHY_BIST_DONE1                          0xAFC4
#define PAF_C5_DC_PHY_BIST_DONE2                          0xAFC5
#define PAF_C6_DC_PHY_BIST_DONE3                          0xAFC6
#define PAF_C7_DC_PHY_BIST_DONE4                          0xAFC7
#define PAF_C8_DC_PHY_BIST_FAIL1                          0xAFC8
#define PAF_C9_DC_PHY_BIST_FAIL2                          0xAFC9
#define PAF_CA_DC_PHY_BIST_FAIL3                          0xAFCA
#define PAF_CB_DC_PHY_BIST_FAIL4                          0xAFCB
#define PAF_CC_DC_PHY_BIST_DRF1                           0xAFCC
#define PAF_CD_DC_PHY_BIST_DRF2                           0xAFCD
#define PAF_CE_DC_PHY_BIST_DRF3                           0xAFCE
#define PAF_CF_DC_PHY_BIST_DRF4                           0xAFCF
#define PAF_D0_DC_PHY_BIST_RESUME1                        0xAFD0
#define PAF_D1_DC_PHY_BIST_RESUME2                        0xAFD1
#define PAF_D2_DC_PHY_BIST_RESUME3                        0xAFD2
#define PAF_D3_DC_PHY_BIST_RESUME4                        0xAFD3
#define PAF_D4_DC_PHY_BIST0_DRF_DONE1                     0xAFD4
#define PAF_D5_DC_PHY_BIST0_DRF_DONE2                     0xAFD5
#define PAF_D6_DC_PHY_BIST0_DRF_DONE3                     0xAFD6
#define PAF_D7_DC_PHY_BIST0_DRF_DONE4                     0xAFD7
#define PAF_D8_DC_PHY_BIST_DRF_PAUSE1                     0xAFD8
#define PAF_D9_DC_PHY_BIST_DRF_PAUSE12                    0xAFD9
#define PAF_DA_DC_PHY_BIST_DRF_PAUSE13                    0xAFDA
#define PAF_DB_DC_PHY_BIST_DRF_PAUSE14                    0xAFDB
#define PAF_DC_DC_PHY_BIST_DRF_FAIL1                      0xAFDC
#define PAF_DD_DC_PHY_BIST_DRF_FAIL2                      0xAFDD
#define PAF_DE_DC_PHY_BIST_DRF_FAIL3                      0xAFDE
#define PAF_DF_DC_PHY_BIST_DRF_FAIL4                      0xAFDF
#define PAF_E0_DC_PHY_BIST_DETAIL1                        0xAFE0
#define PAF_E1_DC_PHY_BIST_DETAIL2                        0xAFE1
#define PAF_E2_DC_PHY_BIST_DETAIL3                        0xAFE2
#define PAF_E3_DC_PHY_BIST_DETAIL4                        0xAFE3
#define PAF_E4_DC_PHY_BIST_RM1                            0xAFE4
#define PAF_E5_DC_PHY_BIST_RM2                            0xAFE5
#define PAF_E6_DC_PHY_BIST_RM3                            0xAFE6
#define PAF_E7_DC_PHY_BIST_RM4                            0xAFE7
#define PAF_F8_PTG_READY1                                 0xAFF8
#define PAF_F9_PTG_READY2                                 0xAFF9
#define PAF_FA_PTG_READY3                                 0xAFFA
#define PAF_FB_PTG_READY4                                 0xAFFB
#define PAF_FC_PTG_SELECT1                                0xAFFC
#define PAF_FD_PTG_SELECT2                                0xAFFD
#define PAF_FE_PTG_SELECT3                                0xAFFE
#define PAF_FF_PTG_SELECT4                                0xAFFF
#define PAC_00_WL_CTRL_01                                 0xAC00
#define PAC_01_WL_CTRL_02                                 0xAC01
#define PAC_02_WL_CTRL_03                                 0xAC02
#define PAC_03_WL_CTRL_04                                 0xAC03
#define PAC_04_WL_CTRL_11                                 0xAC04
#define PAC_05_WL_CTRL_12                                 0xAC05
#define PAC_06_WL_CTRL_13                                 0xAC06
#define PAC_07_WL_CTRL_14                                 0xAC07
#define PAC_08_WL_CTRL_21                                 0xAC08
#define PAC_09_WL_CTRL_22                                 0xAC09
#define PAC_0A_WL_CTRL_23                                 0xAC0A
#define PAC_0B_WL_CTRL_24                                 0xAC0B
#define PAC_0C_WL_CTRL_31                                 0xAC0C
#define PAC_0D_WL_CTRL_32                                 0xAC0D
#define PAC_0E_WL_CTRL_33                                 0xAC0E
#define PAC_0F_WL_CTRL_34                                 0xAC0F
#define PAC_10_WL_CTRL_41                                 0xAC10
#define PAC_11_WL_CTRL_42                                 0xAC11
#define PAC_12_WL_CTRL_43                                 0xAC12
#define PAC_13_WL_CTRL_44                                 0xAC13
#define PAC_14_WL_CTRL_51                                 0xAC14
#define PAC_15_WL_CTRL_52                                 0xAC15
#define PAC_16_WL_CTRL_53                                 0xAC16
#define PAC_17_WL_CTRL_54                                 0xAC17
#define PAC_20_OE_DLY_01                                  0xAC20
#define PAC_21_OE_DLY_02                                  0xAC21
#define PAC_22_OE_DLY_03                                  0xAC22
#define PAC_23_OE_DLY_04                                  0xAC23
#define PAC_30_DQS_PRE_PST_AMBLE_CTRL1                    0xAC30
#define PAC_31_DQS_PRE_PST_AMBLE_CTRL2                    0xAC31
#define PAC_32_DQS_PRE_PST_AMBLE_CTRL3                    0xAC32
#define PAC_33_DQS_PRE_PST_AMBLE_CTRL4                    0xAC33
#define PAC_34_PAD_INT_ZQ_CTRL_0                          0xAC34
#define PAC_35_PAD_INT_ZQ_CTRL_1                          0xAC35
#define PAC_36_PAD_INT_ZQ_CTRL_2                          0xAC36
#define PAC_37_PAD_INT_ZQ_CTRL_3                          0xAC37
#define PAC_38_PAD_INT_ZQ_STATUS_0                        0xAC38
#define PAC_39_PAD_INT_ZQ_STATUS_1                        0xAC39
#define PAC_3A_PAD_INT_ZQ_STATUS_2                        0xAC3A
#define PAC_3B_PAD_INT_ZQ_STATUS_3                        0xAC3B

/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////// Page B0: D1 DisplayPort Digital PHY //////////////////
/////////////////////////////////////////////////////////////////////////////////////////
//--------------------------------------------------
// D1 Port DisplayPort 1.2 Digital PHY(Page B0)
//--------------------------------------------------
#define PB0_00_HD_DP_SEL                                  0xB000
#define PB0_01_PHY_DIG_RESET_CTRL                         0xB001
#define PB0_03_LANE_MUX                                   0xB003
#define PB0_04_CHANNEL_FIFO_SYNC                          0xB004
#define PB0_05_SAMPLE_EDGE                                0xB005
#define PB0_06_DECODE_10B8B_ERROR                         0xB006
#define PB0_07_SCRAMBLE_CTRL                              0xB007
#define PB0_08_BIST_PATTERN_SEL                           0xB008
#define PB0_09_BIST_PATTERN1                              0xB009
#define PB0_0A_BIST_PATTERN2                              0xB00A
#define PB0_0B_BIST_PATTERN3                              0xB00B
#define PB0_0C_BIST_PATTERN4                              0xB00C
#define PB0_0D_BIST_SEED_0                                0xB00D
#define PB0_0E_DESKEW_PHY                                 0xB00E
#define PB0_0F_DESKEW_PHY2                                0xB00F
#define PB0_10_DUMMY1                                     0xB010
#define PB0_11_PHY_CH_FIFO_SYNC                           0xB011
#define PB0_12_EQ_CRC_1                                   0xB012
#define PB0_13_EQ_CRC_2                                   0xB013
#define PB0_14_EQ_CRC_3                                   0xB014
#define PB0_15_EQ_CRC_4                                   0xB015
#define PB0_16_EQ_CRC_5                                   0xB016
#define PB0_17_DP_HDCP_CONTROL                            0xB017
#define PB0_18_DP_HDCP_DOWNLOAD_PORT                      0xB018
#define PB0_19_DP_HDCP_KEY_OUTPUT                         0xB019
#define PB0_1A_HDCP_IRQ                                   0xB01A
#define PB0_1B_HDCP_INTGT_VRF                             0xB01B
#define PB0_1C_HDCP_INTGT_VRF_PAT_MSB                     0xB01C
#define PB0_1D_HDCP_INTGT_VRF_PAT_LSB                     0xB01D
#define PB0_1E_HDCP_INTGT_VRF_ANS_MSB                     0xB01E
#define PB0_1F_HDCP_INTGT_VRF_ANS_LSB                     0xB01F
#define PB0_20_HDCP_DEBUG                                 0xB020
#define PB0_21_KM_BYTE_6                                  0xB021
#define PB0_22_KM_BYTE_5                                  0xB022
#define PB0_23_KM_BYTE_4                                  0xB023
#define PB0_24_KM_BYTE_3                                  0xB024
#define PB0_25_KM_BYTE_2                                  0xB025
#define PB0_26_KM_BYTE_1                                  0xB026
#define PB0_27_KM_BYTE_0                                  0xB027
#define PB0_28_M0_BYTE_7                                  0xB028
#define PB0_29_M0_BYTE_6                                  0xB029
#define PB0_2A_M0_BYTE_5                                  0xB02A
#define PB0_2B_M0_BYTE_4                                  0xB02B
#define PB0_2C_M0_BYTE_3                                  0xB02C
#define PB0_2D_M0_BYTE_2                                  0xB02D
#define PB0_2E_M0_BYTE_1                                  0xB02E
#define PB0_2F_M0_BYTE_0                                  0xB02F
#define PB0_30_SHA_CONTRL                                 0xB030
#define PB0_31_SHA_DATA1                                  0xB031
#define PB0_32_SHA_DATA2                                  0xB032
#define PB0_33_SHA_DATA3                                  0xB033
#define PB0_34_SHA_DATA4                                  0xB034
#define PB0_36_SHA_0                                      0xB036
#define PB0_37_SHA_1                                      0xB037
#define PB0_38_SHA_2                                      0xB038
#define PB0_39_SHA_3                                      0xB039
#define PB0_3A_SHA_4                                      0xB03A
#define PB0_3B_SHA_5                                      0xB03B
#define PB0_3C_SHA_6                                      0xB03C
#define PB0_3D_SHA_7                                      0xB03D
#define PB0_3E_SHA_8                                      0xB03E
#define PB0_3F_SHA_9                                      0xB03F
#define PB0_40_SHA_10                                     0xB040
#define PB0_41_SHA_11                                     0xB041
#define PB0_42_SHA_12                                     0xB042
#define PB0_43_SHA_13                                     0xB043
#define PB0_44_SHA_14                                     0xB044
#define PB0_45_SHA_15                                     0xB045
#define PB0_46_SHA_16                                     0xB046
#define PB0_47_SHA_17                                     0xB047
#define PB0_48_SHA_18                                     0xB048
#define PB0_49_SHA_19                                     0xB049
#define PB0_50_DP_SIG_DET_0                               0xB050
#define PB0_51_DP_SIG_DET_1                               0xB051
#define PB0_52_DP_SIG_DET_2                               0xB052
#define PB0_53_DP_SIG_DET_3                               0xB053
#define PB0_54_DP_SIG_DET_4                               0xB054
#define PB0_60_DEBUG0                                     0xB060
#define PB0_61_DEBUG1                                     0xB061
#define PB0_62_DEBUG2                                     0xB062
#define PB0_63_DUMMY2                                     0xB063
#define PB0_64_DUMMY3                                     0xB064


//--------------------------------------------------
// GDI PHY (Page B0)
//--------------------------------------------------
#define PB0_A0_CMU_00                                     0xB0A0
#define PB0_A1_CMU_01                                     0xB0A1
#define PB0_A2_CMU_02                                     0xB0A2
#define PB0_A3_CMU_03                                     0xB0A3
#define PB0_A4_CMU_04                                     0xB0A4
#define PB0_A5_CMU_05                                     0xB0A5
#define PB0_A6_CMU_06                                     0xB0A6
#define PB0_A7_CMU_07                                     0xB0A7
#define PB0_A8_CMU_08                                     0xB0A8
#define PB0_A9_CMU_09                                     0xB0A9
#define PB0_AA_CDR_01                                     0xB0AA
#define PB0_AB_CDR_02                                     0xB0AB
#define PB0_AC_CDR_03                                     0xB0AC
#define PB0_AD_CDR_04                                     0xB0AD
#define PB0_AE_CDR_05                                     0xB0AE
#define PB0_AF_CDR_06                                     0xB0AF
#define PB0_B0_CDR_07                                     0xB0B0
#define PB0_B1_CDR_08                                     0xB0B1
#define PB0_B2_EQ_00                                      0xB0B2
#define PB0_B8_CMU_LDO_00                                 0xB0B8
#define PB0_B9_LANE0_A_CDR_00                             0xB0B9
#define PB0_BA_DP_SIG_DET_00                              0xB0BA
#define PB0_BB_COMMON_Z0_00                               0xB0BB
#define PB0_BC_ACCUMULATE_VALUE_00                        0xB0BC
#define PB0_BD_ACCUMULATE_VALUE_01                        0xB0BD
#define PB0_BE_LANE0_A_CDR_01                             0xB0BE
#define PB0_BF_LANE0_A_CDR_02                             0xB0BF
#define PB0_C0_TMDS_CONT_0                                0xB0C0
#define PB0_C1_TMDS_CONT_1                                0xB0C1
#define PB0_C2_TMDS_CONT_2                                0xB0C2
#define PB0_C3_TMDS_CONT_3                                0xB0C3
#define PB0_C4_TMDS_CONT_4                                0xB0C4
#define PB0_C5_TMDS_CONT_5                                0xB0C5
#define PB0_C6_TMDS_CONT_6                                0xB0C6
#define PB0_C7_LANE_CDR_0                                 0xB0C7
#define PB0_C8_LANE_CDR_1                                 0xB0C8
#define PB0_C9_LANE_CDR_2                                 0xB0C9
#define PB0_CA_LANE_CDR_3                                 0xB0CA
#define PB0_CB_LANE_CDR_4                                 0xB0CB
#define PB0_CC_ERROR_COUNT_0                              0xB0CC
#define PB0_CD_ERROR_COUNT_1                              0xB0CD
#define PB0_CE_ERROR_COUNT_2                              0xB0CE
#define PB0_CF_ERROR_COUNT_3                              0xB0CF
#define PB0_D0_ERROR_COUNT_4                              0xB0D0
#define PB0_D1_ERROR_COUNT_5                              0xB0D1
#define PB0_D2_DEBUG_00                                   0xB0D2
#define PB0_D3_DEBUG_01                                   0xB0D3
#define PB0_D4_KI_0                                       0xB0D4
#define PB0_D5_KI_1                                       0xB0D5
#define PB0_D6_KP_0                                       0xB0D6
#define PB0_D7_KP_1                                       0xB0D7
#define PB0_D8_KP_2                                       0xB0D8
#define PB0_D9_KP_3                                       0xB0D9
#define PB0_DA_PI_0                                       0xB0DA
#define PB0_DB_ST_0                                       0xB0DB
#define PB0_DC_ST_1                                       0xB0DC
#define PB0_DD_ST_2                                       0xB0DD
#define PB0_DE_ST_3                                       0xB0DE
#define PB0_DF_ST_4                                       0xB0DF
#define PB0_E0_ST_5                                       0xB0E0
#define PB0_E1_TIMER_BER_0                                0xB0E1
#define PB0_E2_TIMER_BER_1                                0xB0E2
#define PB0_E4_DIG_00                                     0xB0E4
#define PB0_E5_DIG_01                                     0xB0E5
#define PB0_E6_DIG_02                                     0xB0E6
#define PB0_E7_DIG_03                                     0xB0E7
#define PB0_E8_DIG_04                                     0xB0E8
#define PB0_E9_DIG_05                                     0xB0E9
#define PB0_EA_DIG_06                                     0xB0EA
#define PB0_EB_DIG_07                                     0xB0EB
#define PB0_EC_DIG_08                                     0xB0EC
#define PB0_ED_DIG_09                                     0xB0ED
#define PB0_EE_DIG_10                                     0xB0EE
#define PB0_EF_DIG_11                                     0xB0EF
#define PB0_F0_DIG_12                                     0xB0F0
#define PB0_F1_SDM_00                                     0xB0F1
#define PB0_F2_SDM_01                                     0xB0F2
#define PB0_F3_SDM_02                                     0xB0F3
#define PB0_F4_WD_00                                      0xB0F4
#define PB0_F5_WD_01                                      0xB0F5
#define PB0_F6_EQEN_TIMER                                 0xB0F6
#define PB0_F7_DATA_TIMER                                 0xB0F7
#define PB0_F9_LANE0_A_CDR_03                             0xB0F9
#define PB0_FA_LANE0_A_CDR_04                             0xB0FA
#define PB0_FB_LANE0_A_CDR_05                             0xB0FB
#define PB0_FC_LANE0_A_CDR_06                             0xB0FC
#define PB0_FD_LANE0_A_CDR_07                             0xB0FD
#define PB0_FE_LANE0_A_CDR_08                             0xB0FE
#define PB0_FF_LANE0_A_CDR_09                             0xB0FF


//--------------------------------------------------
// GDI PHY (Page B1)
//--------------------------------------------------
#define PB1_A0_CMU_00                                     0xB1A0
#define PB1_A1_CMU_01                                     0xB1A1
#define PB1_A2_CMU_02                                     0xB1A2
#define PB1_A3_CMU_03                                     0xB1A3
#define PB1_A4_CMU_04                                     0xB1A4
#define PB1_A5_CMU_05                                     0xB1A5
#define PB1_A6_CMU_06                                     0xB1A6
#define PB1_A7_CMU_07                                     0xB1A7
#define PB1_A8_CMU_08                                     0xB1A8
#define PB1_A9_CMU_09                                     0xB1A9
#define PB1_AA_CDR_01                                     0xB1AA
#define PB1_AB_CDR_02                                     0xB1AB
#define PB1_AC_CDR_03                                     0xB1AC
#define PB1_AD_CDR_04                                     0xB1AD
#define PB1_AE_CDR_05                                     0xB1AE
#define PB1_AF_CDR_06                                     0xB1AF
#define PB1_B0_CDR_07                                     0xB1B0
#define PB1_B1_CDR_08                                     0xB1B1
#define PB1_B2_EQ_00                                      0xB1B2
#define PB1_B8_CMU_LDO_00                                 0xB1B8
#define PB1_B9_LANE0_A_CDR_00                             0xB1B9
#define PB1_BB_COMMON_Z0_00                               0xB1BB
#define PB1_BC_ACCUMULATE_VALUE_00                        0xB1BC
#define PB1_BD_ACCUMULATE_VALUE_01                        0xB1BD
#define PB1_BE_LANE0_A_CDR_01                             0xB1BE
#define PB1_BF_LANE0_A_CDR_02                             0xB1BF
#define PB1_C0_TMDS_CONT_0                                0xB1C0
#define PB1_C1_TMDS_CONT_1                                0xB1C1
#define PB1_C2_TMDS_CONT_2                                0xB1C2
#define PB1_C3_TMDS_CONT_3                                0xB1C3
#define PB1_C4_TMDS_CONT_4                                0xB1C4
#define PB1_C5_TMDS_CONT_5                                0xB1C5
#define PB1_C7_LANE_CDR_0                                 0xB1C7
#define PB1_C8_LANE_CDR_1                                 0xB1C8
#define PB1_C9_LANE_CDR_2                                 0xB1C9
#define PB1_CA_LANE_CDR_3                                 0xB1CA
#define PB1_CB_LANE_CDR_4                                 0xB1CB
#define PB1_CC_ERROR_COUNT_0                              0xB1CC
#define PB1_CD_ERROR_COUNT_1                              0xB1CD
#define PB1_CE_ERROR_COUNT_2                              0xB1CE
#define PB1_CF_ERROR_COUNT_3                              0xB1CF
#define PB1_D0_ERROR_COUNT_4                              0xB1D0
#define PB1_D2_DEBUG_00                                   0xB1D2
#define PB1_D3_DEBUG_01                                   0xB1D3
#define PB1_D4_KI_0                                       0xB1D4
#define PB1_D5_KI_1                                       0xB1D5
#define PB1_D6_KP_0                                       0xB1D6
#define PB1_D7_KP_1                                       0xB1D7
#define PB1_D8_KP_2                                       0xB1D8
#define PB1_DA_PI_0                                       0xB1DA
#define PB1_DB_ST_0                                       0xB1DB
#define PB1_DC_ST_1                                       0xB1DC
#define PB1_DD_ST_2                                       0xB1DD
#define PB1_DE_ST_3                                       0xB1DE
#define PB1_DF_ST_4                                       0xB1DF
#define PB1_E0_ST_5                                       0xB1E0
#define PB1_E1_TIMER_BER_0                                0xB1E1
#define PB1_E2_TIMER_BER_1                                0xB1E2
#define PB1_E4_DIG_00                                     0xB1E4
#define PB1_E5_DIG_01                                     0xB1E5
#define PB1_E6_DIG_02                                     0xB1E6
#define PB1_E7_DIG_03                                     0xB1E7
#define PB1_E8_DIG_04                                     0xB1E8
#define PB1_E9_DIG_05                                     0xB1E9
#define PB1_EA_DIG_06                                     0xB1EA
#define PB1_EB_DIG_07                                     0xB1EB
#define PB1_EC_DIG_08                                     0xB1EC
#define PB1_ED_DIG_09                                     0xB1ED
#define PB1_EE_DIG_10                                     0xB1EE
#define PB1_EF_DIG_11                                     0xB1EF
#define PB1_F0_DIG_12                                     0xB1F0
#define PB1_F1_SDM_00                                     0xB1F1
#define PB1_F2_SDM_01                                     0xB1F2
#define PB1_F3_SDM_02                                     0xB1F3
#define PB1_F4_WD_00                                      0xB1F4
#define PB1_F5_WD_01                                      0xB1F5
#define PB1_F6_EQEN_TIMER                                 0xB1F6
#define PB1_F7_DATA_TIMER                                 0xB1F7
#define PB1_F9_LANE0_A_CDR_03                             0xB1F9
#define PB1_FA_LANE0_A_CDR_04                             0xB1FA
#define PB1_FB_LANE0_A_CDR_05                             0xB1FB
#define PB1_FC_LANE0_A_CDR_06                             0xB1FC
#define PB1_FD_LANE0_A_CDR_07                             0xB1FD
#define PB1_FE_LANE0_A_CDR_08                             0xB1FE
#define PB1_FF_LANE0_A_CDR_09                             0xB1FF


//--------------------------------------------------
// GDI PHY (Page B2)
//--------------------------------------------------
#define PB2_A0_CMU_00                                     0xB2A0
#define PB2_A1_CMU_01                                     0xB2A1
#define PB2_A2_CMU_02                                     0xB2A2
#define PB2_A3_CMU_03                                     0xB2A3
#define PB2_A4_CMU_04                                     0xB2A4
#define PB2_A5_CMU_05                                     0xB2A5
#define PB2_A6_CMU_06                                     0xB2A6
#define PB2_A7_CMU_07                                     0xB2A7
#define PB2_A8_CMU_08                                     0xB2A8
#define PB2_A9_CMU_09                                     0xB2A9
#define PB2_AA_CDR_01                                     0xB2AA
#define PB2_AB_CDR_02                                     0xB2AB
#define PB2_AC_CDR_03                                     0xB2AC
#define PB2_AD_CDR_04                                     0xB2AD
#define PB2_AE_CDR_05                                     0xB2AE
#define PB2_AF_CDR_06                                     0xB2AF
#define PB2_B0_CDR_07                                     0xB2B0
#define PB2_B1_CDR_08                                     0xB2B1
#define PB2_B2_EQ_00                                      0xB2B2
#define PB2_B8_CMU_LDO_00                                 0xB2B8
#define PB2_B9_LANE0_A_CDR_00                             0xB2B9
#define PB2_BB_COMMON_Z0_00                               0xB2BB
#define PB2_BC_ACCUMULATE_VALUE_00                        0xB2BC
#define PB2_BD_ACCUMULATE_VALUE_01                        0xB2BD
#define PB2_BE_LANE0_A_CDR_01                             0xB2BE
#define PB2_BF_LANE0_A_CDR_02                             0xB2BF
#define PB2_C0_TMDS_CONT_0                                0xB2C0
#define PB2_C1_TMDS_CONT_1                                0xB2C1
#define PB2_C2_TMDS_CONT_2                                0xB2C2
#define PB2_C3_TMDS_CONT_3                                0xB2C3
#define PB2_C4_TMDS_CONT_4                                0xB2C4
#define PB2_C5_TMDS_CONT_5                                0xB2C5
#define PB2_C7_LANE_CDR_0                                 0xB2C7
#define PB2_C8_LANE_CDR_1                                 0xB2C8
#define PB2_C9_LANE_CDR_2                                 0xB2C9
#define PB2_CA_LANE_CDR_3                                 0xB2CA
#define PB2_CB_LANE_CDR_4                                 0xB2CB
#define PB2_CC_ERROR_COUNT_0                              0xB2CC
#define PB2_CD_ERROR_COUNT_1                              0xB2CD
#define PB2_CE_ERROR_COUNT_2                              0xB2CE
#define PB2_CF_ERROR_COUNT_3                              0xB2CF
#define PB2_D0_ERROR_COUNT_4                              0xB2D0
#define PB2_D2_DEBUG_00                                   0xB2D2
#define PB2_D3_DEBUG_01                                   0xB2D3
#define PB2_D4_KI_0                                       0xB2D4
#define PB2_D5_KI_1                                       0xB2D5
#define PB2_D6_KP_0                                       0xB2D6
#define PB2_D7_KP_1                                       0xB2D7
#define PB2_D8_KP_2                                       0xB2D8
#define PB2_DA_PI_0                                       0xB2DA
#define PB2_DB_ST_0                                       0xB2DB
#define PB2_DC_ST_1                                       0xB2DC
#define PB2_DD_ST_2                                       0xB2DD
#define PB2_DE_ST_3                                       0xB2DE
#define PB2_DF_ST_4                                       0xB2DF
#define PB2_E0_ST_5                                       0xB2E0
#define PB2_E1_TIMER_BER_0                                0xB2E1
#define PB2_E2_TIMER_BER_1                                0xB2E2
#define PB2_E4_DIG_00                                     0xB2E4
#define PB2_E5_DIG_01                                     0xB2E5
#define PB2_E6_DIG_02                                     0xB2E6
#define PB2_E7_DIG_03                                     0xB2E7
#define PB2_E8_DIG_04                                     0xB2E8
#define PB2_E9_DIG_05                                     0xB2E9
#define PB2_EA_DIG_06                                     0xB2EA
#define PB2_EB_DIG_07                                     0xB2EB
#define PB2_EC_DIG_08                                     0xB2EC
#define PB2_ED_DIG_09                                     0xB2ED
#define PB2_EE_DIG_10                                     0xB2EE
#define PB2_EF_DIG_11                                     0xB2EF
#define PB2_F0_DIG_12                                     0xB2F0
#define PB2_F1_SDM_00                                     0xB2F1
#define PB2_F2_SDM_01                                     0xB2F2
#define PB2_F3_SDM_02                                     0xB2F3
#define PB2_F4_WD_00                                      0xB2F4
#define PB2_F5_WD_01                                      0xB2F5
#define PB2_F6_EQEN_TIMER                                 0xB2F6
#define PB2_F7_DATA_TIMER                                 0xB2F7
#define PB2_F9_LANE0_A_CDR_03                             0xB2F9
#define PB2_FA_LANE0_A_CDR_04                             0xB2FA
#define PB2_FB_LANE0_A_CDR_05                             0xB2FB
#define PB2_FC_LANE0_A_CDR_06                             0xB2FC
#define PB2_FD_LANE0_A_CDR_07                             0xB2FD
#define PB2_FE_LANE0_A_CDR_08                             0xB2FE
#define PB2_FF_LANE0_A_CDR_09                             0xB2FF


//--------------------------------------------------
// GDI PHY (Page B3)
//--------------------------------------------------
#define PB3_A0_CMU_00                                     0xB3A0
#define PB3_A1_CMU_01                                     0xB3A1
#define PB3_A2_CMU_02                                     0xB3A2
#define PB3_A3_CMU_03                                     0xB3A3
#define PB3_A4_CMU_04                                     0xB3A4
#define PB3_A5_CMU_05                                     0xB3A5
#define PB3_A6_CMU_06                                     0xB3A6
#define PB3_A7_CMU_07                                     0xB3A7
#define PB3_A8_CMU_08                                     0xB3A8
#define PB3_A9_CMU_09                                     0xB3A9
#define PB3_AA_CDR_01                                     0xB3AA
#define PB3_AB_CDR_02                                     0xB3AB
#define PB3_AC_CDR_03                                     0xB3AC
#define PB3_AD_CDR_04                                     0xB3AD
#define PB3_AE_CDR_05                                     0xB3AE
#define PB3_AF_CDR_06                                     0xB3AF
#define PB3_B0_CDR_07                                     0xB3B0
#define PB3_B1_CDR_08                                     0xB3B1
#define PB3_B2_EQ_00                                      0xB3B2
#define PB3_B8_CMU_LDO_00                                 0xB3B8
#define PB3_B9_LANE0_A_CDR_00                             0xB3B9
#define PB3_BB_COMMON_Z0_00                               0xB3BB
#define PB3_BC_ACCUMULATE_VALUE_00                        0xB3BC
#define PB3_BD_ACCUMULATE_VALUE_01                        0xB3BD
#define PB3_BE_LANE0_A_CDR_01                             0xB3BE
#define PB3_BF_LANE0_A_CDR_02                             0xB3BF
#define PB3_C0_TMDS_CONT_0                                0xB3C0
#define PB3_C1_TMDS_CONT_1                                0xB3C1
#define PB3_C2_TMDS_CONT_2                                0xB3C2
#define PB3_C3_TMDS_CONT_3                                0xB3C3
#define PB3_C4_TMDS_CONT_4                                0xB3C4
#define PB3_C5_TMDS_CONT_5                                0xB3C5
#define PB3_C7_LANE_CDR_0                                 0xB3C7
#define PB3_C8_LANE_CDR_1                                 0xB3C8
#define PB3_C9_LANE_CDR_2                                 0xB3C9
#define PB3_CA_LANE_CDR_3                                 0xB3CA
#define PB3_CB_LANE_CDR_4                                 0xB3CB
#define PB3_CC_ERROR_COUNT_0                              0xB3CC
#define PB3_CD_ERROR_COUNT_1                              0xB3CD
#define PB3_CE_ERROR_COUNT_2                              0xB3CE
#define PB3_CF_ERROR_COUNT_3                              0xB3CF
#define PB3_D0_ERROR_COUNT_4                              0xB3D0
#define PB3_D2_DEBUG_00                                   0xB3D2
#define PB3_D3_DEBUG_01                                   0xB3D3
#define PB3_D4_KI_0                                       0xB3D4
#define PB3_D5_KI_1                                       0xB3D5
#define PB3_D6_KP_0                                       0xB3D6
#define PB3_D7_KP_1                                       0xB3D7
#define PB3_D8_KP_2                                       0xB3D8
#define PB3_DA_PI_0                                       0xB3DA
#define PB3_DB_ST_0                                       0xB3DB
#define PB3_DC_ST_1                                       0xB3DC
#define PB3_DD_ST_2                                       0xB3DD
#define PB3_DE_ST_3                                       0xB3DE
#define PB3_DF_ST_4                                       0xB3DF
#define PB3_E0_ST_5                                       0xB3E0
#define PB3_E1_TIMER_BER_0                                0xB3E1
#define PB3_E2_TIMER_BER_1                                0xB3E2
#define PB3_E4_DIG_00                                     0xB3E4
#define PB3_E5_DIG_01                                     0xB3E5
#define PB3_E6_DIG_02                                     0xB3E6
#define PB3_E7_DIG_03                                     0xB3E7
#define PB3_E8_DIG_04                                     0xB3E8
#define PB3_E9_DIG_05                                     0xB3E9
#define PB3_EA_DIG_06                                     0xB3EA
#define PB3_EB_DIG_07                                     0xB3EB
#define PB3_EC_DIG_08                                     0xB3EC
#define PB3_ED_DIG_09                                     0xB3ED
#define PB3_EE_DIG_10                                     0xB3EE
#define PB3_EF_DIG_11                                     0xB3EF
#define PB3_F0_DIG_12                                     0xB3F0
#define PB3_F1_SDM_00                                     0xB3F1
#define PB3_F2_SDM_01                                     0xB3F2
#define PB3_F3_SDM_02                                     0xB3F3
#define PB3_F4_WD_00                                      0xB3F4
#define PB3_F5_WD_01                                      0xB3F5
#define PB3_F6_EQEN_TIMER                                 0xB3F6
#define PB3_F7_DATA_TIMER                                 0xB3F7
#define PB3_F9_LANE0_A_CDR_03                             0xB3F9
#define PB3_FA_LANE0_A_CDR_04                             0xB3FA
#define PB3_FB_LANE0_A_CDR_05                             0xB3FB
#define PB3_FC_LANE0_A_CDR_06                             0xB3FC
#define PB3_FD_LANE0_A_CDR_07                             0xB3FD
#define PB3_FE_LANE0_A_CDR_08                             0xB3FE
#define PB3_FF_LANE0_A_CDR_09                             0xB3FF


//--------------------------------------------------
// GDI PHY (Page B4)
//--------------------------------------------------
#define PB4_A0_CMU_00                                     0xB4A0
#define PB4_A1_CMU_01                                     0xB4A1
#define PB4_A2_CMU_02                                     0xB4A2
#define PB4_A3_CMU_03                                     0xB4A3
#define PB4_A4_CMU_04                                     0xB4A4
#define PB4_A5_CMU_05                                     0xB4A5
#define PB4_A6_CMU_06                                     0xB4A6
#define PB4_A7_CMU_07                                     0xB4A7
#define PB4_A8_CMU_08                                     0xB4A8
#define PB4_A9_CMU_09                                     0xB4A9
#define PB4_AA_CDR_01                                     0xB4AA
#define PB4_AB_CDR_02                                     0xB4AB
#define PB4_AC_CDR_03                                     0xB4AC
#define PB4_AD_CDR_04                                     0xB4AD
#define PB4_AE_CDR_05                                     0xB4AE
#define PB4_AF_CDR_06                                     0xB4AF
#define PB4_B0_CDR_07                                     0xB4B0
#define PB4_B1_CDR_08                                     0xB4B1
#define PB4_B2_EQ_00                                      0xB4B2
#define PB4_B8_CMU_LDO_00                                 0xB4B8
#define PB4_B9_LANE0_A_CDR_00                             0xB4B9
#define PB4_BB_COMMON_Z0_00                               0xB4BB
#define PB4_BC_ACCUMULATE_VALUE_00                        0xB4BC
#define PB4_BD_ACCUMULATE_VALUE_01                        0xB4BD
#define PB4_BE_LANE0_A_CDR_01                             0xB4BE
#define PB4_BF_LANE0_A_CDR_02                             0xB4BF
#define PB4_C0_TMDS_CONT_0                                0xB4C0
#define PB4_C1_TMDS_CONT_1                                0xB4C1
#define PB4_C2_TMDS_CONT_2                                0xB4C2
#define PB4_C3_TMDS_CONT_3                                0xB4C3
#define PB4_C4_TMDS_CONT_4                                0xB4C4
#define PB4_C5_TMDS_CONT_5                                0xB4C5
#define PB4_C7_LANE_CDR_0                                 0xB4C7
#define PB4_C8_LANE_CDR_1                                 0xB4C8
#define PB4_C9_LANE_CDR_2                                 0xB4C9
#define PB4_CA_LANE_CDR_3                                 0xB4CA
#define PB4_CB_LANE_CDR_4                                 0xB4CB
#define PB4_CC_ERROR_COUNT_0                              0xB4CC
#define PB4_CD_ERROR_COUNT_1                              0xB4CD
#define PB4_CE_ERROR_COUNT_2                              0xB4CE
#define PB4_CF_ERROR_COUNT_3                              0xB4CF
#define PB4_D0_ERROR_COUNT_4                              0xB4D0
#define PB4_D2_DEBUG_00                                   0xB4D2
#define PB4_D3_DEBUG_01                                   0xB4D3
#define PB4_D4_KI_0                                       0xB4D4
#define PB4_D5_KI_1                                       0xB4D5
#define PB4_D6_KP_0                                       0xB4D6
#define PB4_D7_KP_1                                       0xB4D7
#define PB4_D8_KP_2                                       0xB4D8
#define PB4_DA_PI_0                                       0xB4DA
#define PB4_DB_ST_0                                       0xB4DB
#define PB4_DC_ST_1                                       0xB4DC
#define PB4_DD_ST_2                                       0xB4DD
#define PB4_DE_ST_3                                       0xB4DE
#define PB4_DF_ST_4                                       0xB4DF
#define PB4_E0_ST_5                                       0xB4E0
#define PB4_E1_TIMER_BER_0                                0xB4E1
#define PB4_E2_TIMER_BER_1                                0xB4E2
#define PB4_E4_DIG_00                                     0xB4E4
#define PB4_E5_DIG_01                                     0xB4E5
#define PB4_E6_DIG_02                                     0xB4E6
#define PB4_E7_DIG_03                                     0xB4E7
#define PB4_E8_DIG_04                                     0xB4E8
#define PB4_E9_DIG_05                                     0xB4E9
#define PB4_EA_DIG_06                                     0xB4EA
#define PB4_EB_DIG_07                                     0xB4EB
#define PB4_EC_DIG_08                                     0xB4EC
#define PB4_ED_DIG_09                                     0xB4ED
#define PB4_EE_DIG_10                                     0xB4EE
#define PB4_EF_DIG_11                                     0xB4EF
#define PB4_F0_DIG_12                                     0xB4F0
#define PB4_F1_SDM_00                                     0xB4F1
#define PB4_F2_SDM_01                                     0xB4F2
#define PB4_F3_SDM_02                                     0xB4F3
#define PB4_F4_WD_00                                      0xB4F4
#define PB4_F5_WD_01                                      0xB4F5
#define PB4_F6_EQEN_TIMER                                 0xB4F6
#define PB4_F7_DATA_TIMER                                 0xB4F7
#define PB4_F9_LANE0_A_CDR_03                             0xB4F9
#define PB4_FA_LANE0_A_CDR_04                             0xB4FA
#define PB4_FB_LANE0_A_CDR_05                             0xB4FB
#define PB4_FC_LANE0_A_CDR_06                             0xB4FC
#define PB4_FD_LANE0_A_CDR_07                             0xB4FD
#define PB4_FE_LANE0_A_CDR_08                             0xB4FE
#define PB4_FF_LANE0_A_CDR_09                             0xB4FF


//--------------------------------------------------
// D0 Port DisplayPort 1.2 Digital MAC(Page B5)
//--------------------------------------------------
#define PB5_00_MAC_DIG_RESET_CTRL                         0xB500
#define PB5_01_STHD_CTRL_0                                0xB501
#define PB5_02_STHD_CTRL_1                                0xB502
#define PB5_03_STHD_CTRL_2                                0xB503
#define PB5_04_STHD_CTRL_3                                0xB504
#define PB5_05_STHD_CTRL_4                                0xB505
#define PB5_06_STHD_CTRL_5                                0xB506
#define PB5_07_STHD_CTRL_6                                0xB507
#define PB5_08_STHD_CTRL_7                                0xB508
#define PB5_09_STHD_CTRL_8                                0xB509
#define PB5_0A_STHD_CTRL_9                                0xB50A
#define PB5_0B_STHD_CTRL_10                               0xB50B
#define PB5_0C_STHD_CTRL_11                               0xB50C
#define PB5_0D_SOURCE_SEL_0                               0xB50D
#define PB5_0E_SOURCE_SEL_1                               0xB50E
#define PB5_0F_SOURCE_SEL_2                               0xB50F
#define PB5_10_DAISY_CTRL_0                               0xB510
#define PB5_11_DAISY_CTRL_1                               0xB511
#define PB5_12_DAISY_CTRL_2                               0xB512
#define PB5_13_DAISY_CTRL_3                               0xB513
#define PB5_14_DAISY_CTRL_4                               0xB514
#define PB5_15_DAISY_CTRL_5                               0xB515
#define PB5_16_DAISY_CTRL_6                               0xB516
#define PB5_17_MIDFIFO_FLAG_0                             0xB517
#define PB5_18_PREFIFO_FLAG_0                             0xB518
#define PB5_19_PREFIFO_FLAG_1                             0xB519
#define PB5_20_PG_CTRL_0                                  0xB520
#define PB5_21_PG_CTRL_1                                  0xB521
#define PB5_22_PG_CTRL_2                                  0xB522
#define PB5_23_PG_CTRL_3                                  0xB523
#define PB5_24_RB422_YONLY                                0xB524
#define PB5_25_SRAM_BIST_0                                0xB525
#define PB5_26_SRAM_BIST_1                                0xB526
#define PB5_30_DPF_CTRL_0                                 0xB530
#define PB5_31_DP_OUTPUT_CTRL                             0xB531
#define PB5_32_EVBLK2VS_H                                 0xB532
#define PB5_33_EVBLK2VS_M                                 0xB533
#define PB5_34_EVBLK2VS_L                                 0xB534
#define PB5_35_OVBLK2VS_H                                 0xB535
#define PB5_36_OVBLK2VS_M                                 0xB536
#define PB5_37_OVBLK2VS_L                                 0xB537
#define PB5_38_BS2HS_0                                    0xB538
#define PB5_39_BS2HS_1                                    0xB539
#define PB5_40_VS_FRONT_PORCH                             0xB540
#define PB5_41_MN_DPF_HTT_M                               0xB541
#define PB5_42_MN_DPF_HTT_L                               0xB542
#define PB5_43_MN_DPF_HST_M                               0xB543
#define PB5_44_MN_DPF_HST_L                               0xB544
#define PB5_45_MN_DPF_HWD_M                               0xB545
#define PB5_46_MN_DPF_HWD_L                               0xB546
#define PB5_47_MN_DPF_HSW_M                               0xB547
#define PB5_48_MN_DPF_HSW_L                               0xB548
#define PB5_49_MN_DPF_VTT_M                               0xB549
#define PB5_4A_MN_DPF_VTT_L                               0xB54A
#define PB5_4B_MN_DPF_VST_M                               0xB54B
#define PB5_4C_MN_DPF_VST_L                               0xB54C
#define PB5_4D_MN_DPF_VHT_M                               0xB54D
#define PB5_4E_MN_DPF_VHT_L                               0xB54E
#define PB5_4F_MN_DPF_VSW_M                               0xB54F
#define PB5_50_MN_DPF_VSW_L                               0xB550
#define PB5_51_MN_DPF_BG_RED_M                            0xB551
#define PB5_52_MN_DPF_BG_RED_L                            0xB552
#define PB5_53_MN_DPF_BG_GRN_M                            0xB553
#define PB5_54_MN_DPF_BG_GRN_L                            0xB554
#define PB5_55_MN_DPF_BG_BLU_M                            0xB555
#define PB5_56_MN_DPF_BG_BLU_L                            0xB556
#define PB5_57_INTERLACE_MODE_CONFIG                      0xB557
#define PB5_58_MN_MEAS_CTRL                               0xB558
#define PB5_59_MN_MEAS_VLN_M                              0xB559
#define PB5_5A_MN_MEAS_VLN_L                              0xB55A
#define PB5_5B_MN_MEAS_HLN_M                              0xB55B
#define PB5_5C_MN_MEAS_HLN_L                              0xB55C
#define PB5_5D_VHEIGHT_MSB                                0xB55D
#define PB5_5E_VHEIGHT_LSB                                0xB55E
#define PB5_5F_VBLANK_MSB                                 0xB55F
#define PB5_60_VBLANK_LSB                                 0xB560
#define PB5_61_HBLANK_MSB                                 0xB561
#define PB5_62_HBLANK_LSB                                 0xB562
#define PB5_70_DP_CRC_CTRL                                0xB570
#define PB5_71_DP_CRC_R_M                                 0xB571
#define PB5_72_DP_CRC_R_L                                 0xB572
#define PB5_73_DP_CRC_G_M                                 0xB573
#define PB5_74_DP_CRC_G_L                                 0xB574
#define PB5_75_DP_CRC_B_M                                 0xB575
#define PB5_76_DP_CRC_B_L                                 0xB576
#define PB5_77_DP_CRC_CB_M                                0xB577
#define PB5_78_DP_CRC_CB_L                                0xB578
#define PB5_E0_TEST0                                      0xB5E0
#define PB5_E1_TEST1                                      0xB5E1
#define PB5_E2_CPMODE                                     0xB5E2
#define PB5_F0_DP_RSV0                                    0xB5F0
#define PB5_F1_DP_RSV1                                    0xB5F1
#define PB5_F2_DP_RSV2                                    0xB5F2
#define PB5_F3_DP_RSV3                                    0xB5F3
#define PB5_F4_DP_RSV4                                    0xB5F4
#define PB5_F5_DP_RSV5                                    0xB5F5
#define PB5_F6_DP_RSV6                                    0xB5F6
#define PB5_F7_DP_RSV7                                    0xB5F7
#define PB5_F8_DP_RSV8                                    0xB5F8
#define PB5_F9_DP_RSV9                                    0xB5F9
#define PB5_FA_DP_RSVA                                    0xB5FA


//--------------------------------------------------
// D0 Port DisplayPort 1.2 Digital MAC (Page B5)
//--------------------------------------------------
#define PB5_A0_MN_SCLKG_CTRL                              0xB5A0
#define PB5_A1_MN_SCLKG_DIVM                              0xB5A1
#define PB5_A2_MN_SCLKG_DIVN                              0xB5A2
#define PB5_A3_MN_SCLKG_DIVS                              0xB5A3
#define PB5_A4_MN_SCLKG_OFFS_H                            0xB5A4
#define PB5_A5_MN_SCLKG_OFFS_M                            0xB5A5
#define PB5_A6_MN_SCLKG_OFFS_L                            0xB5A6
#define PB5_A7_MN_SCLKG_TRK_CTRL                          0xB5A7
#define PB5_A8_MN_SCLKG_TRK_MN_I_H                        0xB5A8
#define PB5_A9_MN_SCLKG_TRK_MN_I_M                        0xB5A9
#define PB5_AA_MN_SCLKG_TRK_MN_I_L                        0xB5AA
#define PB5_AB_MN_SCLKG_TRK_MN_P_H                        0xB5AB
#define PB5_AC_MN_SCLKG_TRK_MN_P_M                        0xB5AC
#define PB5_AD_MN_SCLKG_TRK_MN_P_L                        0xB5AD
#define PB5_AE_MN_SCLKG_TRK_MN_PE                         0xB5AE
#define PB5_AF_MN_SCLKG_TRK_MN_NLOCK                      0xB5AF
#define PB5_B0_MN_SCLKG_TRK_VS_I_H                        0xB5B0
#define PB5_B1_MN_SCLKG_TRK_VS_I_M                        0xB5B1
#define PB5_B2_MN_SCLKG_TRK_VS_I_L                        0xB5B2
#define PB5_B3_MN_SCLKG_TRK_VS_P_H                        0xB5B3
#define PB5_B4_MN_SCLKG_TRK_VS_P_M                        0xB5B4
#define PB5_B5_MN_SCLKG_TRK_VS_P_L                        0xB5B5
#define PB5_B6_MN_SCLKG_TRK_VS_PE                         0xB5B6
#define PB5_B7_MN_SCLKG_TRK_VS_NLOCK                      0xB5B7
#define PB5_B8_MN_SCLKG_SDM_CTRL                          0xB5B8
#define PB5_B9_MN_SCLKG_SDM_TEST                          0xB5B9
#define PB5_BA_MN_SCLKG_SDM_SUMC_H                        0xB5BA
#define PB5_BB_MN_SCLKG_SDM_SUMC_M                        0xB5BB
#define PB5_BC_MN_SCLKG_SDM_SUMC_L                        0xB5BC
#define PB5_BD_MN_SCLKG_PLL_PWR                           0xB5BD
#define PB5_BE_MN_SCLKG_PLL_CHP                           0xB5BE
#define PB5_BF_MN_SCLKG_PLL_WD                            0xB5BF
#define PB5_C0_MN_SCLKG_PLL_INSEL                         0xB5C0
#define PB5_C1_MN_SCLKG_PLL_RESERVE                       0xB5C1
#define PB5_C2_HS_TRACKING_NEW_MODE1                      0xB5C2
#define PB5_C3_HS_TRACKING_NEW_MODE2                      0xB5C3
#define PB5_C4_DUMMY_0                                    0xB5C4
#define PB5_C5_DUMMY_1                                    0xB5C5
#define PB5_C6_DUMMY_2                                    0xB5C6
#define PB5_C7_DUMMY_3                                    0xB5C7


//--------------------------------------------------
// D0 DisplayPort SEC DATA (Page B6)
//--------------------------------------------------
#define PB6_00_MN_STRM_ATTR_CTRL                          0xB600
#define PB6_01_DP_VBID                                    0xB601
#define PB6_02_MN_STRM_ATTR_MISC                          0xB602
#define PB6_03_MN_STRM_ATTR_MISC1                         0xB603
#define PB6_08_MSA_HTT_0                                  0xB608
#define PB6_09_MSA_HTT_1                                  0xB609
#define PB6_0A_MSA_HST_0                                  0xB60A
#define PB6_0B_MSA_HST_1                                  0xB60B
#define PB6_0C_MSA_HWD_0                                  0xB60C
#define PB6_0D_MSA_HWD_1                                  0xB60D
#define PB6_0E_MSA_HSW_0                                  0xB60E
#define PB6_0F_MSA_HSW_1                                  0xB60F
#define PB6_10_MSA_VTTE_0                                 0xB610
#define PB6_11_MSA_VTTE_1                                 0xB611
#define PB6_12_MSA_VTTO_0                                 0xB612
#define PB6_13_MSA_VTTO_1                                 0xB613
#define PB6_14_MSA_VST_0                                  0xB614
#define PB6_15_MSA_VST_1                                  0xB615
#define PB6_16_MSA_VHT_0                                  0xB616
#define PB6_17_MSA_VHT_1                                  0xB617
#define PB6_18_MSA_VSW_0                                  0xB618
#define PB6_19_MSA_VSW_1                                  0xB619
#define PB6_1A_MSA_MVID_0                                 0xB61A
#define PB6_1B_MSA_MVID_1                                 0xB61B
#define PB6_1C_MSA_MVID_2                                 0xB61C
#define PB6_1D_MSA_NVID_0                                 0xB61D
#define PB6_1E_MSA_NVID_1                                 0xB61E
#define PB6_1F_MSA_NVID_2                                 0xB61F
#define PB6_20_MSA_MAUD_0                                 0xB620
#define PB6_21_MSA_MAUD_1                                 0xB621
#define PB6_22_MSA_MAUD_2                                 0xB622
#define PB6_23_MSA_NAUD_0                                 0xB623
#define PB6_24_MSA_NAUD_1                                 0xB624
#define PB6_25_MSA_NAUD_2                                 0xB625
#define PB6_26_DP_AUD_CH_STATUS0                          0xB626
#define PB6_27_DP_AUD_CH_STATUS1                          0xB627
#define PB6_28_DP_AUD_CH_STATUS2                          0xB628
#define PB6_29_DP_AUD_CH_STATUS3                          0xB629
#define PB6_2A_DP_AUD_CH_STATUS4                          0xB62A
#define PB6_2B_MN_RS_DEC_CTRL                             0xB62B
#define PB6_2C_DP_INFO_FM_RSV0                            0xB62C
#define PB6_2D_DP_INFO_FM_RSV1                            0xB62D
#define PB6_30_DP_INFO_FM_ADR                             0xB630
#define PB6_31_DP_INFO_FM_DAT                             0xB631
#define PB6_32_DP_INFO_VAR_EN_M                           0xB632
#define PB6_33_DP_INFO_VAR_EN_L                           0xB633
#define PB6_34_DP_INFO_VAR_ST_M                           0xB634
#define PB6_35_DP_INFO_VAR_ST_L                           0xB635
#define PB6_36_DP_GLB_STATUS                              0xB636
#define PB6_37_DP_AVWD_CTRL                               0xB637
#define PB6_38_DP_VWD_CTRL                                0xB638
#define PB6_39_DP_AWD_CTRL                                0xB639
#define PB6_3A_DP_IRQ_CTRL0                               0xB63A
#define PB6_3B_DP_IRQ_CTRL1                               0xB63B
#define PB6_40_VSC0                                       0xB640
#define PB6_41_VSC1                                       0xB641
#define PB6_42_VSC2                                       0xB642
#define PB6_43_VSC3                                       0xB643
#define PB6_44_VSC4                                       0xB644
#define PB6_45_VSC5                                       0xB645
#define PB6_46_VSC6                                       0xB646
#define PB6_47_VSC7                                       0xB647
#define PB6_48_VSC8                                       0xB648
#define PB6_49_VSC9                                       0xB649
#define PB6_4A_VSCA                                       0xB64A
#define PB6_4B_VSCB                                       0xB64B
#define PB6_4C_VSCC                                       0xB64C
#define PB6_4D_DP_LR_SEL                                  0xB64D
#define PB6_4E_SRAM_BIST_0                                0xB64E
#define PB6_4F_SRAM_BIST_1                                0xB64F
#define PB6_50_AUD_FREQUENY_DET_0                         0xB650
#define PB6_51_AUD_FREQUENY_DET_1                         0xB651
#define PB6_52_AUD_FREQUENY_TH_0                          0xB652
#define PB6_53_AUD_FREQUENY_TH_1                          0xB653
#define PB6_54_AUD_FREQUENY_TH_2                          0xB654
#define PB6_55_AUD_FREQUENY_TH_3                          0xB655
#define PB6_56_AUD_FREQUENY_TH_4                          0xB656
#define PB6_57_AUD_FREQUENY_TH_5                          0xB657
#define PB6_58_SCODE_0                                    0xB658
#define PB6_59_SCODE_1                                    0xB659
#define PB6_5A_SCODE_2                                    0xB65A
#define PB6_5B_DCODE_0                                    0xB65B
#define PB6_5C_DCODE_1                                    0xB65C
#define PB6_5D_DCODE_2                                    0xB65D
#define PB6_5E_DCODE_3                                    0xB65E
#define PB6_5F_DCODE_4                                    0xB65F
#define PB6_60_DCODE_5                                    0xB660
#define PB6_61_AUD_SAMPLE_CNT_0                           0xB661
#define PB6_62_AUD_SAMPLE_CNT_1                           0xB662
#define PB6_63_AUD_DEPTH_TRACKING_NUM_0                   0xB663
#define PB6_64_AUD_DEPTH_TRACKING_NUM_1                   0xB664
#define PB6_65_AUD_DEPTH_TRACKING_NUM_2                   0xB665
#define PB6_66_AUD_DEPTH_TRACKING_NUM_3                   0xB666
#define PB6_67_AUD_DEPTH_TRACKING_NUM_4                   0xB667
#define PB6_68_AUD_DEPTH_ICODE_0                          0xB668
#define PB6_69_AUD_DEPTH_ICODE_1                          0xB669
#define PB6_6A_AUD_DEPTH_ICODE_2                          0xB66A
#define PB6_6B_AUD_DEPTH_ICODE_3                          0xB66B
#define PB6_6C_AUD_DEPTH_ICODE_4                          0xB66C
#define PB6_6D_AUD_DEPTH_IGAIN_0                          0xB66D
#define PB6_6E_AUD_DEPTH_IGAIN_1                          0xB66E
#define PB6_70_AUD_BUFFER_CTRL_0                          0xB670
#define PB6_71_AUD_BUFFER_CTRL_1                          0xB671
#define PB6_72_AUD_BUFFER_CTRL_2                          0xB672
#define PB6_73_AUD_BUFFER_CTRL_3                          0xB673
#define PB6_74_AUD_FSM_CTRL_0                             0xB674
#define PB6_75_AUD_MAN_FSM_CTRL_1                         0xB675
#define PB6_76_DVC_CTRL                                   0xB676
#define PB6_77_DVC_VA                                     0xB677
#define PB6_78_DVC_WINDOW_CONTROL_0                       0xB678
#define PB6_79_DVC_WINDOW_CONTROL_1                       0xB679
#define PB6_7A_DVC_GAIN_READ_MSB                          0xB67A
#define PB6_7B_DVC_GAIN_READ_LSB                          0xB67B
#define PB6_7C_AUD_FSM_CTRL_1                             0xB67C
#define PB6_7D_AUD_FSM_CTRL_2                             0xB67D
#define PB6_7E_DVC_WINDOW_CONTROL_FAN_OUT                 0xB67E
#define PB6_80_AUD_PS_CTRL_0                              0xB680
#define PB6_81_AUD_BDRY_0                                 0xB681
#define PB6_82_AUD_BDRY_1                                 0xB682
#define PB6_83_AUD_BDRY_2                                 0xB683
#define PB6_84_AUD_BDRY_3                                 0xB684
#define PB6_85_AUD_BDRY_4                                 0xB685
#define PB6_86_AUD_BDRY_5                                 0xB686
#define PB6_87_AUD_DEPTH_0                                0xB687
#define PB6_89_AUD_DEPTH_2                                0xB689
#define PB6_8A_AUD_DEPTH_5                                0xB68A
#define PB6_8B_AUD_DEPTH_6                                0xB68B
#define PB6_8C_AUD_MN_DEPTH                               0xB68C
#define PB6_8D_AUD_MN_0                                   0xB68D
#define PB6_8E_AUD_MN_1                                   0xB68E
#define PB6_8F_AUD_MN_2                                   0xB68F
#define PB6_90_AUD_MN_3                                   0xB690
#define PB6_91_AUD_MN_4                                   0xB691
#define PB6_92_AUD_TRND_0                                 0xB692
#define PB6_93_AUD_TRND_1                                 0xB693
#define PB6_94_AUD_TRND_2                                 0xB694
#define PB6_95_AUD_TRND_3                                 0xB695
#define PB6_96_AUD_TRND_4                                 0xB696
#define PB6_97_AUD_TRND_5                                 0xB697
#define PB6_98_AUD_TRND_6                                 0xB698
#define PB6_99_AUD_TRND_7                                 0xB699
#define PB6_9A_AUD_TRND_8                                 0xB69A
#define PB6_9B_AUD_TRND_9                                 0xB69B
#define PB6_9C_AUD_TRND_10                                0xB69C
#define PB6_9D_AUD_D_CODE_0                               0xB69D
#define PB6_A0_AUD_D_CODE_1                               0xB6A0
#define PB6_A1_AUD_SUMC_MSB                               0xB6A1
#define PB6_A2_AUD_SUMC_LSB                               0xB6A2
#define PB6_A9_SPDIF_TX_0                                 0xB6A9
#define PB6_AA_SPDIF_CS_0                                 0xB6AA
#define PB6_AB_SPDIF_CS_1                                 0xB6AB
#define PB6_AC_SPDIF_CS_2                                 0xB6AC
#define PB6_AD_SPDIF_CS_3                                 0xB6AD
#define PB6_AE_SPDIF_CS_4                                 0xB6AE
#define PB6_B0_DP_AUD_CTRL                                0xB6B0
#define PB6_B1_DP_AUD_ID                                  0xB6B1
#define PB6_B2_DP_AUD_ID_DETECT                           0xB6B2
#define PB6_B3_DP_CHANNEL_EN                              0xB6B3
#define PB6_B4_DP_SEC_MISC                                0xB6B4
#define PB6_B5_DP_AUD_CRC                                 0xB6B5
#define PB6_B6_DP_AUD_CRC_1                               0xB6B6
#define PB6_B7_TEST_PIN                                   0xB6B7
#define PB6_B8_DP_I2S_CTRL                                0xB6B8
#define PB6_B9_AUD_I2S_CRC_HB                             0xB6B9
#define PB6_BA_AUD_I2S_CRC_LB                             0xB6BA
#define PB6_BB_TO_DAC_CH_SEL                              0xB6BB
#define PB6_FC_DUMMY_0                                    0xB6FC
#define PB6_FD_DUMMY_1                                    0xB6FD
#define PB6_FE_DUMMY_2                                    0xB6FE
#define PB6_FF_DUMMY_3                                    0xB6FF


//--------------------------------------------------
// D0 Port DisplayPort 1.2 AUX (Page B7)
//--------------------------------------------------
#define PB7_00_AUX_RX_MSG_RX_CTRL                         0xB700
#define PB7_01_MSG_RX_FINISH_IRQ_EN                       0xB701
#define PB7_02_MSG_RX_FINISH                              0xB702
#define PB7_03_MSG_RX_FLAG                                0xB703
#define PB7_04_MSG_RX_BUF_CLR                             0xB704
#define PB7_05_MSG_RX_DATA0                               0xB705
#define PB7_06_MSG_RX_DATA1                               0xB706
#define PB7_07_MSG_RX_DATA2                               0xB707
#define PB7_08_MSG_RX_DATA3                               0xB708
#define PB7_09_MSG_RX_DATA4                               0xB709
#define PB7_0A_MSG_RX_DATA5                               0xB70A
#define PB7_0B_MSG_RX_DATA6                               0xB70B
#define PB7_0C_MSG_RX_DATA7                               0xB70C
#define PB7_0D_MSG_RX_DATA8                               0xB70D
#define PB7_0E_MSG_RX_DATA9                               0xB70E
#define PB7_0F_MSG_RX_DATAA                               0xB70F
#define PB7_10_MSG_RX_BUF0_LEN                            0xB710
#define PB7_11_MSG_RX_BUF0_WRPTR                          0xB711
#define PB7_12_MSG_RX_BUF0_RDPTR                          0xB712
#define PB7_13_MSG_RX_BUF0_RD_DATA                        0xB713
#define PB7_14_MSG_RX_BUF1_LEN                            0xB714
#define PB7_15_MSG_RX_BUF1_WRPTR                          0xB715
#define PB7_16_MSG_RX_BUF1_RDPTR                          0xB716
#define PB7_17_MSG_RX_BUF1_RD_DATA                        0xB717
#define PB7_18_MSG_BUF_DEFER_WL                           0xB718
#define PB7_19_MSG_SRAM_BIST_CTRL0                        0xB719
#define PB7_1A_MSG_SRAM_DRF_BIST_CTRL0                    0xB71A
#define PB7_1B_MSG_EXCEPT_CTRL0                           0xB71B
#define PB7_20_AUX_RX_MSG_RX_CTRL                         0xB720
#define PB7_21_MSG_RX_FINISH_IRQ_EN                       0xB721
#define PB7_22_MSG_RX_FINISH                              0xB722
#define PB7_23_MSG_RX_FLAG                                0xB723
#define PB7_24_MSG_RX_BUF_CLR                             0xB724
#define PB7_25_MSG_RX_DATA0                               0xB725
#define PB7_26_MSG_RX_DATA1                               0xB726
#define PB7_27_MSG_RX_DATA2                               0xB727
#define PB7_28_MSG_RX_DATA3                               0xB728
#define PB7_29_MSG_RX_DATA4                               0xB729
#define PB7_2A_MSG_RX_DATA5                               0xB72A
#define PB7_2B_MSG_RX_DATA6                               0xB72B
#define PB7_2C_MSG_RX_DATA7                               0xB72C
#define PB7_2D_MSG_RX_DATA8                               0xB72D
#define PB7_2E_MSG_RX_DATA9                               0xB72E
#define PB7_2F_MSG_RX_DATAA                               0xB72F
#define PB7_30_MSG_RX_BUF0_LEN                            0xB730
#define PB7_31_MSG_RX_BUF0_WRPTR                          0xB731
#define PB7_32_MSG_RX_BUF0_RDPTR                          0xB732
#define PB7_33_MSG_RX_BUF0_RD_DATA                        0xB733
#define PB7_34_MSG_RX_BUF1_LEN                            0xB734
#define PB7_35_MSG_RX_BUF1_WRPTR                          0xB735
#define PB7_36_MSG_RX_BUF1_RDPTR                          0xB736
#define PB7_37_MSG_RX_BUF1_RD_DATA                        0xB737
#define PB7_38_MSG_BUF_DEFER_WL                           0xB738
#define PB7_3B_MSG_EXCEPT_CTRL0                           0xB73B
#define PB7_40_AUX_RX_MSG_TX_CTRL                         0xB740
#define PB7_41_MSG_TX_FINISH                              0xB741
#define PB7_42_MSG_TX_LENGTH                              0xB742
#define PB7_43_MSG_TX_SET0                                0xB743
#define PB7_44_MSG_TX_SET1                                0xB744
#define PB7_45_MSG_TX_SET2                                0xB745
#define PB7_46_MSG_TX_SET3                                0xB746
#define PB7_47_MSG_TX_SET4                                0xB747
#define PB7_48_MSG_TX_SET5                                0xB748
#define PB7_49_MSG_TX_SET6                                0xB749
#define PB7_4A_MSG_TX_SET7                                0xB74A
#define PB7_4B_MSG_TX_SET8                                0xB74B
#define PB7_4C_MSG_TX_SET9                                0xB74C
#define PB7_4D_MSG_TX_ADR_SEL                             0xB74D
#define PB7_4E_BUF_RDPTR                                  0xB74E
#define PB7_4F_BUF_CLR                                    0xB74F
#define PB7_50_BUF_FW_WRPTR                               0xB750
#define PB7_51_BUF_FW_WR_DATA                             0xB751
#define PB7_52_BUF_END_FLAG                               0xB752
#define PB7_60_DIG_TX_04                                  0xB760
#define PB7_61_AUX_1                                      0xB761
#define PB7_62_AUX_2                                      0xB762
#define PB7_63_AUX_3                                      0xB763
#define PB7_64_AUX_4                                      0xB764
#define PB7_65_AUX_5                                      0xB765
#define PB7_66_AUX_6                                      0xB766
#define PB7_67_DIG_TX_03                                  0xB767
#define PB7_70_AUX_DIG_PHY0                               0xB770
#define PB7_71_AUX_DIG_PHY1                               0xB771
#define PB7_72_AUX_DIG_PHY2                               0xB772
#define PB7_73_AUX_DIG_PHY3                               0xB773
#define PB7_74_AUX_DIG_PHY4                               0xB774
#define PB7_75_AUX_DIG_PHY5                               0xB775
#define PB7_76_AUX_DIG_PHY6                               0xB776
#define PB7_77_AUX_DIG_PHY7                               0xB777
#define PB7_78_AUX_DIG_PHY8                               0xB778
#define PB7_79_AUX_DIG_PHY9                               0xB779
#define PB7_7A_AUX_DIG_PHYA                               0xB77A
#define PB7_7B_GDI_POWER_TIMER                            0xB77B
#define PB7_7C_GDI_POWER_FLAG                             0xB77C
#define PB7_7D_AUX_DELAY_TIMER                            0xB77D
#define PB7_7E_AUX_DELAY_FIFO                             0xB77E
#define PB7_7F_AUX_DEBUG                                  0xB77F
#define PB7_A0_AUX_RESERVE0                               0xB7A0
#define PB7_A1_AUX_RESERVE1                               0xB7A1
#define PB7_A2_AUX_RESERVE2                               0xB7A2
#define PB7_A3_AUX_RESERVE3                               0xB7A3
#define PB7_A4_AUX_RESERVE4                               0xB7A4
#define PB7_A5_AUX_RESERVE5                               0xB7A5
#define PB7_B0_AUX_PAYLOAD_CLEAR                          0xB7B0
#define PB7_B1_MST_ACT_IRQ                                0xB7B1
#define PB7_B2_AUX_SPECIAL_IRQ_EN                         0xB7B2
#define PB7_B3_AUX_SPECIAL_IRQ_FLAG                       0xB7B3
#define PB7_C0_DPCD_CTRL                                  0xB7C0
#define PB7_C1_DPCD_ADDR_PORT_H                           0xB7C1
#define PB7_C2_DPCD_ADDR_PORT_M                           0xB7C2
#define PB7_C3_DPCD_ADDR_PORT_L                           0xB7C3
#define PB7_C4_DPCD_DATA_PORT                             0xB7C4
#define PB7_C6_AUX_PHY_DIG2                               0xB7C6
#define PB7_C7_TP1_OCCR                                   0xB7C7
#define PB7_D0_AUX_MODE_SET                               0xB7D0
#define PB7_D1_DP_IIC_SET                                 0xB7D1
#define PB7_D2_AUX_RX_CMD                                 0xB7D2
#define PB7_D3_AUX_RX_ADDR_M                              0xB7D3
#define PB7_D4_AUX_RX_ADDR_L                              0xB7D4
#define PB7_D5_AUX_RXLEN                                  0xB7D5
#define PB7_D6_AUX_RX_DATA                                0xB7D6
#define PB7_D7_AUX_TX_CMD                                 0xB7D7
#define PB7_D8_AUX_TX_LEN                                 0xB7D8
#define PB7_D9_AUX_TX_DATA                                0xB7D9
#define PB7_DA_AUX_FIFO_RST                               0xB7DA
#define PB7_DB_AUX_STATUS                                 0xB7DB
#define PB7_DC_AUX_IRQ_STATUS                             0xB7DC
#define PB7_DD_AUX_DPCD_IRQ                               0xB7DD
#define PB7_DE_AUX_DPCD_IRQ_EN                            0xB7DE
#define PB7_DF_AUX_IIC_MASTER_CTRL                        0xB7DF
#define PB7_F0_AUX_TX_TIMER                               0xB7F0
#define PB7_F1_AUX_TX_TIMER_2                             0xB7F1
#define PB7_F2_IIC_DEBOUNCE                               0xB7F2
#define PB7_F3_IIC_SLAVE_ADD                              0xB7F3
#define PB7_F4_MCUIIC                                     0xB7F4
#define PB7_F5_MCUNA_MSB_1                                0xB7F5
#define PB7_F6_MCUNA_MSB_2                                0xB7F6
#define PB7_FA_DUMMY_0                                    0xB7FA
#define PB7_FB_DUMMY_1                                    0xB7FB
#define PB7_FF_TEST_FUNCTION                              0xB7FF


//--------------------------------------------------
// D1 Port DisplayPort 1.2 Digital MAC(Page B8)
//--------------------------------------------------
#define PB8_00_MAC_DIG_RESET_CTRL                         0xB800
#define PB8_01_STHD_CTRL_0                                0xB801
#define PB8_02_STHD_CTRL_1                                0xB802
#define PB8_03_STHD_CTRL_2                                0xB803
#define PB8_04_STHD_CTRL_3                                0xB804
#define PB8_05_STHD_CTRL_4                                0xB805
#define PB8_06_STHD_CTRL_5                                0xB806
#define PB8_07_STHD_CTRL_6                                0xB807
#define PB8_08_STHD_CTRL_7                                0xB808
#define PB8_09_STHD_CTRL_8                                0xB809
#define PB8_0A_STHD_CTRL_9                                0xB80A
#define PB8_0B_STHD_CTRL_10                               0xB80B
#define PB8_0C_STHD_CTRL_11                               0xB80C
#define PB8_0D_SOURCE_SEL_0                               0xB80D
#define PB8_0E_SOURCE_SEL_1                               0xB80E
#define PB8_0F_SOURCE_SEL_2                               0xB80F
#define PB8_10_DAISY_CTRL_0                               0xB810
#define PB8_11_DAISY_CTRL_1                               0xB811
#define PB8_12_DAISY_CTRL_2                               0xB812
#define PB8_13_DAISY_CTRL_3                               0xB813
#define PB8_14_DAISY_CTRL_4                               0xB814
#define PB8_15_DAISY_CTRL_5                               0xB815
#define PB8_16_DAISY_CTRL_6                               0xB816
#define PB8_17_MIDFIFO_FLAG_0                             0xB817
#define PB8_18_PREFIFO_FLAG_0                             0xB818
#define PB8_19_PREFIFO_FLAG_1                             0xB819
#define PB8_20_PG_CTRL_0                                  0xB820
#define PB8_21_PG_CTRL_1                                  0xB821
#define PB8_22_PG_CTRL_2                                  0xB822
#define PB8_23_PG_CTRL_3                                  0xB823
#define PB8_24_RB422_YONLY                                0xB824
#define PB8_25_SRAM_BIST_0                                0xB825
#define PB8_26_SRAM_BIST_1                                0xB826
#define PB8_30_DPF_CTRL_0                                 0xB830
#define PB8_31_DP_OUTPUT_CTRL                             0xB831
#define PB8_32_EVBLK2VS_H                                 0xB832
#define PB8_33_EVBLK2VS_M                                 0xB833
#define PB8_34_EVBLK2VS_L                                 0xB834
#define PB8_35_OVBLK2VS_H                                 0xB835
#define PB8_36_OVBLK2VS_M                                 0xB836
#define PB8_37_OVBLK2VS_L                                 0xB837
#define PB8_38_BS2HS_0                                    0xB838
#define PB8_39_BS2HS_1                                    0xB839
#define PB8_40_VS_FRONT_PORCH                             0xB840
#define PB8_41_MN_DPF_HTT_M                               0xB841
#define PB8_42_MN_DPF_HTT_L                               0xB842
#define PB8_43_MN_DPF_HST_M                               0xB843
#define PB8_44_MN_DPF_HST_L                               0xB844
#define PB8_45_MN_DPF_HWD_M                               0xB845
#define PB8_46_MN_DPF_HWD_L                               0xB846
#define PB8_47_MN_DPF_HSW_M                               0xB847
#define PB8_48_MN_DPF_HSW_L                               0xB848
#define PB8_49_MN_DPF_VTT_M                               0xB849
#define PB8_4A_MN_DPF_VTT_L                               0xB84A
#define PB8_4B_MN_DPF_VST_M                               0xB84B
#define PB8_4C_MN_DPF_VST_L                               0xB84C
#define PB8_4D_MN_DPF_VHT_M                               0xB84D
#define PB8_4E_MN_DPF_VHT_L                               0xB84E
#define PB8_4F_MN_DPF_VSW_M                               0xB84F
#define PB8_50_MN_DPF_VSW_L                               0xB850
#define PB8_51_MN_DPF_BG_RED_M                            0xB851
#define PB8_52_MN_DPF_BG_RED_L                            0xB852
#define PB8_53_MN_DPF_BG_GRN_M                            0xB853
#define PB8_54_MN_DPF_BG_GRN_L                            0xB854
#define PB8_55_MN_DPF_BG_BLU_M                            0xB855
#define PB8_56_MN_DPF_BG_BLU_L                            0xB856
#define PB8_57_INTERLACE_MODE_CONFIG                      0xB857
#define PB8_58_MN_MEAS_CTRL                               0xB858
#define PB8_59_MN_MEAS_VLN_M                              0xB859
#define PB8_5A_MN_MEAS_VLN_L                              0xB85A
#define PB8_5B_MN_MEAS_HLN_M                              0xB85B
#define PB8_5C_MN_MEAS_HLN_L                              0xB85C
#define PB8_5D_VHEIGHT_MSB                                0xB85D
#define PB8_5E_VHEIGHT_LSB                                0xB85E
#define PB8_5F_VBLANK_MSB                                 0xB85F
#define PB8_60_VBLANK_LSB                                 0xB860
#define PB8_61_HBLANK_MSB                                 0xB861
#define PB8_62_HBLANK_LSB                                 0xB862
#define PB8_70_DP_CRC_CTRL                                0xB870
#define PB8_71_DP_CRC_R_M                                 0xB871
#define PB8_72_DP_CRC_R_L                                 0xB872
#define PB8_73_DP_CRC_G_M                                 0xB873
#define PB8_74_DP_CRC_G_L                                 0xB874
#define PB8_75_DP_CRC_B_M                                 0xB875
#define PB8_76_DP_CRC_B_L                                 0xB876
#define PB8_77_DP_CRC_CB_M                                0xB877
#define PB8_78_DP_CRC_CB_L                                0xB878
#define PB8_E0_TEST0                                      0xB8E0
#define PB8_E1_TEST1                                      0xB8E1
#define PB8_E2_CPMODE                                     0xB8E2
#define PB8_F0_DP_RSV0                                    0xB8F0
#define PB8_F1_DP_RSV1                                    0xB8F1
#define PB8_F2_DP_RSV2                                    0xB8F2
#define PB8_F3_DP_RSV3                                    0xB8F3
#define PB8_F4_DP_RSV4                                    0xB8F4
#define PB8_F5_DP_RSV5                                    0xB8F5
#define PB8_F6_DP_RSV6                                    0xB8F6
#define PB8_F7_DP_RSV7                                    0xB8F7
#define PB8_F8_DP_RSV8                                    0xB8F8
#define PB8_F9_DP_RSV9                                    0xB8F9
#define PB8_FA_DP_RSVA                                    0xB8FA


//--------------------------------------------------
// D1 Port DisplayPort 1.2 Digital MAC (Page B8)
//--------------------------------------------------
#define PB8_A0_MN_SCLKG_CTRL                              0xB8A0
#define PB8_A1_MN_SCLKG_DIVM                              0xB8A1
#define PB8_A2_MN_SCLKG_DIVN                              0xB8A2
#define PB8_A3_MN_SCLKG_DIVS                              0xB8A3
#define PB8_A4_MN_SCLKG_OFFS_H                            0xB8A4
#define PB8_A5_MN_SCLKG_OFFS_M                            0xB8A5
#define PB8_A6_MN_SCLKG_OFFS_L                            0xB8A6
#define PB8_A7_MN_SCLKG_TRK_CTRL                          0xB8A7
#define PB8_A8_MN_SCLKG_TRK_MN_I_H                        0xB8A8
#define PB8_A9_MN_SCLKG_TRK_MN_I_M                        0xB8A9
#define PB8_AA_MN_SCLKG_TRK_MN_I_L                        0xB8AA
#define PB8_AB_MN_SCLKG_TRK_MN_P_H                        0xB8AB
#define PB8_AC_MN_SCLKG_TRK_MN_P_M                        0xB8AC
#define PB8_AD_MN_SCLKG_TRK_MN_P_L                        0xB8AD
#define PB8_AE_MN_SCLKG_TRK_MN_PE                         0xB8AE
#define PB8_AF_MN_SCLKG_TRK_MN_NLOCK                      0xB8AF
#define PB8_B0_MN_SCLKG_TRK_VS_I_H                        0xB8B0
#define PB8_B1_MN_SCLKG_TRK_VS_I_M                        0xB8B1
#define PB8_B2_MN_SCLKG_TRK_VS_I_L                        0xB8B2
#define PB8_B3_MN_SCLKG_TRK_VS_P_H                        0xB8B3
#define PB8_B4_MN_SCLKG_TRK_VS_P_M                        0xB8B4
#define PB8_B5_MN_SCLKG_TRK_VS_P_L                        0xB8B5
#define PB8_B6_MN_SCLKG_TRK_VS_PE                         0xB8B6
#define PB8_B7_MN_SCLKG_TRK_VS_NLOCK                      0xB8B7
#define PB8_B8_MN_SCLKG_SDM_CTRL                          0xB8B8
#define PB8_B9_MN_SCLKG_SDM_TEST                          0xB8B9
#define PB8_BA_MN_SCLKG_SDM_SUMC_H                        0xB8BA
#define PB8_BB_MN_SCLKG_SDM_SUMC_M                        0xB8BB
#define PB8_BC_MN_SCLKG_SDM_SUMC_L                        0xB8BC
#define PB8_BD_MN_SCLKG_PLL_PWR                           0xB8BD
#define PB8_BE_MN_SCLKG_PLL_CHP                           0xB8BE
#define PB8_BF_MN_SCLKG_PLL_WD                            0xB8BF
#define PB8_C0_MN_SCLKG_PLL_INSEL                         0xB8C0
#define PB8_C1_MN_SCLKG_PLL_RESERVE                       0xB8C1
#define PB8_C2_HS_TRACKING_NEW_MODE1                      0xB8C2
#define PB8_C3_HS_TRACKING_NEW_MODE2                      0xB8C3
#define PB8_C4_DUMMY_0                                    0xB8C4
#define PB8_C5_DUMMY_1                                    0xB8C5
#define PB8_C6_DUMMY_2                                    0xB8C6
#define PB8_C7_DUMMY_3                                    0xB8C7


//--------------------------------------------------
// D1 DisplayPort SEC DATA (Page B9)
//--------------------------------------------------
#define PB9_00_MN_STRM_ATTR_CTRL                          0xB900
#define PB9_01_DP_VBID                                    0xB901
#define PB9_02_MN_STRM_ATTR_MISC                          0xB902
#define PB9_03_MN_STRM_ATTR_MISC1                         0xB903
#define PB9_08_MSA_HTT_0                                  0xB908
#define PB9_09_MSA_HTT_1                                  0xB909
#define PB9_0A_MSA_HST_0                                  0xB90A
#define PB9_0B_MSA_HST_1                                  0xB90B
#define PB9_0C_MSA_HWD_0                                  0xB90C
#define PB9_0D_MSA_HWD_1                                  0xB90D
#define PB9_0E_MSA_HSW_0                                  0xB90E
#define PB9_0F_MSA_HSW_1                                  0xB90F
#define PB9_10_MSA_VTTE_0                                 0xB910
#define PB9_11_MSA_VTTE_1                                 0xB911
#define PB9_12_MSA_VTTO_0                                 0xB912
#define PB9_13_MSA_VTTO_1                                 0xB913
#define PB9_14_MSA_VST_0                                  0xB914
#define PB9_15_MSA_VST_1                                  0xB915
#define PB9_16_MSA_VHT_0                                  0xB916
#define PB9_17_MSA_VHT_1                                  0xB917
#define PB9_18_MSA_VSW_0                                  0xB918
#define PB9_19_MSA_VSW_1                                  0xB919
#define PB9_1A_MSA_MVID_0                                 0xB91A
#define PB9_1B_MSA_MVID_1                                 0xB91B
#define PB9_1C_MSA_MVID_2                                 0xB91C
#define PB9_1D_MSA_NVID_0                                 0xB91D
#define PB9_1E_MSA_NVID_1                                 0xB91E
#define PB9_1F_MSA_NVID_2                                 0xB91F
#define PB9_20_MSA_MAUD_0                                 0xB920
#define PB9_21_MSA_MAUD_1                                 0xB921
#define PB9_22_MSA_MAUD_2                                 0xB922
#define PB9_23_MSA_NAUD_0                                 0xB923
#define PB9_24_MSA_NAUD_1                                 0xB924
#define PB9_25_MSA_NAUD_2                                 0xB925
#define PB9_26_DP_AUD_CH_STATUS0                          0xB926
#define PB9_27_DP_AUD_CH_STATUS1                          0xB927
#define PB9_28_DP_AUD_CH_STATUS2                          0xB928
#define PB9_29_DP_AUD_CH_STATUS3                          0xB929
#define PB9_2A_DP_AUD_CH_STATUS4                          0xB92A
#define PB9_2B_MN_RS_DEC_CTRL                             0xB92B
#define PB9_2C_DP_INFO_FM_RSV0                            0xB92C
#define PB9_2D_DP_INFO_FM_RSV1                            0xB92D
#define PB9_30_DP_INFO_FM_ADR                             0xB930
#define PB9_31_DP_INFO_FM_DAT                             0xB931
#define PB9_32_DP_INFO_VAR_EN_M                           0xB932
#define PB9_33_DP_INFO_VAR_EN_L                           0xB933
#define PB9_34_DP_INFO_VAR_ST_M                           0xB934
#define PB9_35_DP_INFO_VAR_ST_L                           0xB935
#define PB9_36_DP_GLB_STATUS                              0xB936
#define PB9_37_DP_AVWD_CTRL                               0xB937
#define PB9_38_DP_VWD_CTRL                                0xB938
#define PB9_39_DP_AWD_CTRL                                0xB939
#define PB9_3A_DP_IRQ_CTRL0                               0xB93A
#define PB9_3B_DP_IRQ_CTRL1                               0xB93B
#define PB9_40_VSC0                                       0xB940
#define PB9_41_VSC1                                       0xB941
#define PB9_42_VSC2                                       0xB942
#define PB9_43_VSC3                                       0xB943
#define PB9_44_VSC4                                       0xB944
#define PB9_45_VSC5                                       0xB945
#define PB9_46_VSC6                                       0xB946
#define PB9_47_VSC7                                       0xB947
#define PB9_48_VSC8                                       0xB948
#define PB9_49_VSC9                                       0xB949
#define PB9_4A_VSCA                                       0xB94A
#define PB9_4B_VSCB                                       0xB94B
#define PB9_4C_VSCC                                       0xB94C
#define PB9_4D_DP_LR_SEL                                  0xB94D
#define PB9_4E_SRAM_BIST_0                                0xB94E
#define PB9_4F_SRAM_BIST_1                                0xB94F
#define PB9_50_AUD_FREQUENY_DET_0                         0xB950
#define PB9_51_AUD_FREQUENY_DET_1                         0xB951
#define PB9_52_AUD_FREQUENY_TH_0                          0xB952
#define PB9_53_AUD_FREQUENY_TH_1                          0xB953
#define PB9_54_AUD_FREQUENY_TH_2                          0xB954
#define PB9_55_AUD_FREQUENY_TH_3                          0xB955
#define PB9_56_AUD_FREQUENY_TH_4                          0xB956
#define PB9_57_AUD_FREQUENY_TH_5                          0xB957
#define PB9_58_SCODE_0                                    0xB958
#define PB9_59_SCODE_1                                    0xB959
#define PB9_5A_SCODE_2                                    0xB95A
#define PB9_5B_DCODE_0                                    0xB95B
#define PB9_5C_DCODE_1                                    0xB95C
#define PB9_5D_DCODE_2                                    0xB95D
#define PB9_5E_DCODE_3                                    0xB95E
#define PB9_5F_DCODE_4                                    0xB95F
#define PB9_60_DCODE_5                                    0xB960
#define PB9_61_AUD_SAMPLE_CNT_0                           0xB961
#define PB9_62_AUD_SAMPLE_CNT_1                           0xB962
#define PB9_63_AUD_DEPTH_TRACKING_NUM_0                   0xB963
#define PB9_64_AUD_DEPTH_TRACKING_NUM_1                   0xB964
#define PB9_65_AUD_DEPTH_TRACKING_NUM_2                   0xB965
#define PB9_66_AUD_DEPTH_TRACKING_NUM_3                   0xB966
#define PB9_67_AUD_DEPTH_TRACKING_NUM_4                   0xB967
#define PB9_68_AUD_DEPTH_ICODE_0                          0xB968
#define PB9_69_AUD_DEPTH_ICODE_1                          0xB969
#define PB9_6A_AUD_DEPTH_ICODE_2                          0xB96A
#define PB9_6B_AUD_DEPTH_ICODE_3                          0xB96B
#define PB9_6C_AUD_DEPTH_ICODE_4                          0xB96C
#define PB9_6D_AUD_DEPTH_IGAIN_0                          0xB96D
#define PB9_6E_AUD_DEPTH_IGAIN_1                          0xB96E
#define PB9_70_AUD_BUFFER_CTRL_0                          0xB970
#define PB9_71_AUD_BUFFER_CTRL_1                          0xB971
#define PB9_72_AUD_BUFFER_CTRL_2                          0xB972
#define PB9_73_AUD_BUFFER_CTRL_3                          0xB973
#define PB9_74_AUD_FSM_CTRL_0                             0xB974
#define PB9_75_AUD_MAN_FSM_CTRL_1                         0xB975
#define PB9_76_DVC_CTRL                                   0xB976
#define PB9_77_DVC_VA                                     0xB977
#define PB9_78_DVC_WINDOW_CONTROL_0                       0xB978
#define PB9_79_DVC_WINDOW_CONTROL_1                       0xB979
#define PB9_7A_DVC_GAIN_READ_MSB                          0xB97A
#define PB9_7B_DVC_GAIN_READ_LSB                          0xB97B
#define PB9_7C_AUD_FSM_CTRL_1                             0xB97C
#define PB9_7D_AUD_FSM_CTRL_2                             0xB97D
#define PB9_7E_DVC_WINDOW_CONTROL_FAN_OUT                 0xB97E
#define PB9_80_AUD_PS_CTRL_0                              0xB980
#define PB9_81_AUD_BDRY_0                                 0xB981
#define PB9_82_AUD_BDRY_1                                 0xB982
#define PB9_83_AUD_BDRY_2                                 0xB983
#define PB9_84_AUD_BDRY_3                                 0xB984
#define PB9_85_AUD_BDRY_4                                 0xB985
#define PB9_86_AUD_BDRY_5                                 0xB986
#define PB9_87_AUD_DEPTH_0                                0xB987
#define PB9_89_AUD_DEPTH_2                                0xB989
#define PB9_8A_AUD_DEPTH_5                                0xB98A
#define PB9_8B_AUD_DEPTH_6                                0xB98B
#define PB9_8C_AUD_MN_DEPTH                               0xB98C
#define PB9_8D_AUD_MN_0                                   0xB98D
#define PB9_8E_AUD_MN_1                                   0xB98E
#define PB9_8F_AUD_MN_2                                   0xB98F
#define PB9_90_AUD_MN_3                                   0xB990
#define PB9_91_AUD_MN_4                                   0xB991
#define PB9_92_AUD_TRND_0                                 0xB992
#define PB9_93_AUD_TRND_1                                 0xB993
#define PB9_94_AUD_TRND_2                                 0xB994
#define PB9_95_AUD_TRND_3                                 0xB995
#define PB9_96_AUD_TRND_4                                 0xB996
#define PB9_97_AUD_TRND_5                                 0xB997
#define PB9_98_AUD_TRND_6                                 0xB998
#define PB9_99_AUD_TRND_7                                 0xB999
#define PB9_9A_AUD_TRND_8                                 0xB99A
#define PB9_9B_AUD_TRND_9                                 0xB99B
#define PB9_9C_AUD_TRND_10                                0xB99C
#define PB9_9D_AUD_D_CODE_0                               0xB99D
#define PB9_A0_AUD_D_CODE_1                               0xB9A0
#define PB9_A1_AUD_SUMC_MSB                               0xB9A1
#define PB9_A2_AUD_SUMC_LSB                               0xB9A2
#define PB9_A9_SPDIF_TX_0                                 0xB9A9
#define PB9_AA_SPDIF_CS_0                                 0xB9AA
#define PB9_AB_SPDIF_CS_1                                 0xB9AB
#define PB9_AC_SPDIF_CS_2                                 0xB9AC
#define PB9_AD_SPDIF_CS_3                                 0xB9AD
#define PB9_AE_SPDIF_CS_4                                 0xB9AE
#define PB9_B0_DP_AUD_CTRL                                0xB9B0
#define PB9_B1_DP_AUD_ID                                  0xB9B1
#define PB9_B2_DP_AUD_ID_DETECT                           0xB9B2
#define PB9_B3_DP_CHANNEL_EN                              0xB9B3
#define PB9_B4_DP_SEC_MISC                                0xB9B4
#define PB9_B5_DP_AUD_CRC                                 0xB9B5
#define PB9_B6_DP_AUD_CRC_1                               0xB9B6
#define PB9_B7_TEST_PIN                                   0xB9B7
#define PB9_B8_DP_I2S_CTRL                                0xB9B8
#define PB9_B9_AUD_I2S_CRC_HB                             0xB9B9
#define PB9_BA_AUD_I2S_CRC_LB                             0xB9BA
#define PB9_BB_TO_DAC_CH_SEL                              0xB9BB
#define PB9_FC_DUMMY_0                                    0xB9FC
#define PB9_FD_DUMMY_1                                    0xB9FD
#define PB9_FE_DUMMY_2                                    0xB9FE
#define PB9_FF_DUMMY_3                                    0xB9FF


//--------------------------------------------------
// D1 Port DisplayPort 1.2 AUX (Page BA)
//--------------------------------------------------
#define PBA_00_AUX_RX_MSG_RX_CTRL                         0xBA00
#define PBA_01_MSG_RX_FINISH_IRQ_EN                       0xBA01
#define PBA_02_MSG_RX_FINISH                              0xBA02
#define PBA_03_MSG_RX_FLAG                                0xBA03
#define PBA_04_MSG_RX_BUF_CLR                             0xBA04
#define PBA_05_MSG_RX_DATA0                               0xBA05
#define PBA_06_MSG_RX_DATA1                               0xBA06
#define PBA_07_MSG_RX_DATA2                               0xBA07
#define PBA_08_MSG_RX_DATA3                               0xBA08
#define PBA_09_MSG_RX_DATA4                               0xBA09
#define PBA_0A_MSG_RX_DATA5                               0xBA0A
#define PBA_0B_MSG_RX_DATA6                               0xBA0B
#define PBA_0C_MSG_RX_DATA7                               0xBA0C
#define PBA_0D_MSG_RX_DATA8                               0xBA0D
#define PBA_0E_MSG_RX_DATA9                               0xBA0E
#define PBA_0F_MSG_RX_DATAA                               0xBA0F
#define PBA_10_MSG_RX_BUF0_LEN                            0xBA10
#define PBA_11_MSG_RX_BUF0_WRPTR                          0xBA11
#define PBA_12_MSG_RX_BUF0_RDPTR                          0xBA12
#define PBA_13_MSG_RX_BUF0_RD_DATA                        0xBA13
#define PBA_14_MSG_RX_BUF1_LEN                            0xBA14
#define PBA_15_MSG_RX_BUF1_WRPTR                          0xBA15
#define PBA_16_MSG_RX_BUF1_RDPTR                          0xBA16
#define PBA_17_MSG_RX_BUF1_RD_DATA                        0xBA17
#define PBA_18_MSG_BUF_DEFER_WL                           0xBA18
#define PBA_19_MSG_SRAM_BIST_CTRL0                        0xBA19
#define PBA_1A_MSG_SRAM_DRF_BIST_CTRL0                    0xBA1A
#define PBA_1B_MSG_EXCEPT_CTRL0                           0xBA1B
#define PBA_20_AUX_RX_MSG_RX_CTRL                         0xBA20
#define PBA_21_MSG_RX_FINISH_IRQ_EN                       0xBA21
#define PBA_22_MSG_RX_FINISH                              0xBA22
#define PBA_23_MSG_RX_FLAG                                0xBA23
#define PBA_24_MSG_RX_BUF_CLR                             0xBA24
#define PBA_25_MSG_RX_DATA0                               0xBA25
#define PBA_26_MSG_RX_DATA1                               0xBA26
#define PBA_27_MSG_RX_DATA2                               0xBA27
#define PBA_28_MSG_RX_DATA3                               0xBA28
#define PBA_29_MSG_RX_DATA4                               0xBA29
#define PBA_2A_MSG_RX_DATA5                               0xBA2A
#define PBA_2B_MSG_RX_DATA6                               0xBA2B
#define PBA_2C_MSG_RX_DATA7                               0xBA2C
#define PBA_2D_MSG_RX_DATA8                               0xBA2D
#define PBA_2E_MSG_RX_DATA9                               0xBA2E
#define PBA_2F_MSG_RX_DATAA                               0xBA2F
#define PBA_30_MSG_RX_BUF0_LEN                            0xBA30
#define PBA_31_MSG_RX_BUF0_WRPTR                          0xBA31
#define PBA_32_MSG_RX_BUF0_RDPTR                          0xBA32
#define PBA_33_MSG_RX_BUF0_RD_DATA                        0xBA33
#define PBA_34_MSG_RX_BUF1_LEN                            0xBA34
#define PBA_35_MSG_RX_BUF1_WRPTR                          0xBA35
#define PBA_36_MSG_RX_BUF1_RDPTR                          0xBA36
#define PBA_37_MSG_RX_BUF1_RD_DATA                        0xBA37
#define PBA_38_MSG_BUF_DEFER_WL                           0xBA38
#define PBA_3B_MSG_EXCEPT_CTRL0                           0xBA3B

//--------------------------------------------------
// D1Port DisplayPort 1.2 AUX (Page BA)
//--------------------------------------------------
#define PBA_40_AUX_RX_MSG_TX_CTRL                         0xBA40
#define PBA_41_MSG_TX_FINISH                              0xBA41
#define PBA_42_MSG_TX_LENGTH                              0xBA42
#define PBA_43_MSG_TX_SET0                                0xBA43
#define PBA_44_MSG_TX_SET1                                0xBA44
#define PBA_45_MSG_TX_SET2                                0xBA45
#define PBA_46_MSG_TX_SET3                                0xBA46
#define PBA_47_MSG_TX_SET4                                0xBA47
#define PBA_48_MSG_TX_SET5                                0xBA48
#define PBA_49_MSG_TX_SET6                                0xBA49
#define PBA_4A_MSG_TX_SET7                                0xBA4A
#define PBA_4B_MSG_TX_SET8                                0xBA4B
#define PBA_4C_MSG_TX_SET9                                0xBA4C
#define PBA_4D_MSG_TX_ADR_SEL                             0xBA4D
#define PBA_4E_BUF_RDPTR                                  0xBA4E
#define PBA_4F_BUF_CLR                                    0xBA4F
#define PBA_50_BUF_FW_WRPTR                               0xBA50
#define PBA_51_BUF_FW_WR_DATA                             0xBA51
#define PBA_52_BUF_END_FLAG                               0xBA52


//--------------------------------------------------
// D1 Port DisplayPort 1.2 AUX (Page BA)
//--------------------------------------------------
#define PBA_60_DIG_TX_04                                  0xBA60
#define PBA_61_AUX_1                                      0xBA61
#define PBA_62_AUX_2                                      0xBA62
#define PBA_63_AUX_3                                      0xBA63
#define PBA_64_AUX_4                                      0xBA64
#define PBA_65_AUX_5                                      0xBA65
#define PBA_66_AUX_6                                      0xBA66
#define PBA_67_DIG_TX_03                                  0xBA67
#define PBA_70_AUX_DIG_PHY0                               0xBA70
#define PBA_71_AUX_DIG_PHY1                               0xBA71
#define PBA_72_AUX_DIG_PHY2                               0xBA72
#define PBA_73_AUX_DIG_PHY3                               0xBA73
#define PBA_74_AUX_DIG_PHY4                               0xBA74
#define PBA_75_AUX_DIG_PHY5                               0xBA75
#define PBA_76_AUX_DIG_PHY6                               0xBA76
#define PBA_77_AUX_DIG_PHY7                               0xBA77
#define PBA_78_AUX_DIG_PHY8                               0xBA78
#define PBA_79_AUX_DIG_PHY9                               0xBA79
#define PBA_7A_AUX_DIG_PHYA                               0xBA7A
#define PBA_7B_GDI_POWER_TIMER                            0xBA7B
#define PBA_7C_GDI_POWER_FLAG                             0xBA7C
#define PBA_7D_AUX_DELAY_TIMER                            0xBA7D
#define PBA_7E_AUX_DELAY_FIFO                             0xBA7E
#define PBA_7F_AUX_DEBUG                                  0xBA7F
#define PBA_A0_AUX_RESERVE0                               0xBAA0
#define PBA_A1_AUX_RESERVE1                               0xBAA1
#define PBA_A2_AUX_RESERVE2                               0xBAA2
#define PBA_A3_AUX_RESERVE3                               0xBAA3
#define PBA_A4_AUX_RESERVE4                               0xBAA4
#define PBA_A5_AUX_RESERVE5                               0xBAA5
#define PBA_B0_AUX_PAYLOAD_CLEAR                          0xBAB0
#define PBA_B1_MST_ACT_IRQ                                0xBAB1
#define PBA_B2_AUX_SPECIAL_IRQ_EN                         0xBAB2
#define PBA_B3_AUX_SPECIAL_IRQ_FLAG                       0xBAB3
#define PBA_C0_DPCD_CTRL                                  0xBAC0
#define PBA_C1_DPCD_ADDR_PORT_H                           0xBAC1
#define PBA_C2_DPCD_ADDR_PORT_M                           0xBAC2
#define PBA_C3_DPCD_ADDR_PORT_L                           0xBAC3
#define PBA_C4_DPCD_DATA_PORT                             0xBAC4
#define PBA_C6_AUX_PHY_DIG2                               0xBAC6
#define PBA_C7_TP1_OCCR                                   0xBAC7
#define PBA_D0_AUX_MODE_SET                               0xBAD0
#define PBA_D1_DP_IIC_SET                                 0xBAD1
#define PBA_D2_AUX_RX_CMD                                 0xBAD2
#define PBA_D3_AUX_RX_ADDR_M                              0xBAD3
#define PBA_D4_AUX_RX_ADDR_L                              0xBAD4
#define PBA_D5_AUX_RXLEN                                  0xBAD5
#define PBA_D6_AUX_RX_DATA                                0xBAD6
#define PBA_D7_AUX_TX_CMD                                 0xBAD7
#define PBA_D8_AUX_TX_LEN                                 0xBAD8
#define PBA_D9_AUX_TX_DATA                                0xBAD9
#define PBA_DA_AUX_FIFO_RST                               0xBADA
#define PBA_DB_AUX_STATUS                                 0xBADB
#define PBA_DC_AUX_IRQ_STATUS                             0xBADC
#define PBA_DD_AUX_DPCD_IRQ                               0xBADD
#define PBA_DE_AUX_DPCD_IRQ_EN                            0xBADE
#define PBA_DF_AUX_IIC_MASTER_CTRL                        0xBADF
#define PBA_F0_AUX_TX_TIMER                               0xBAF0
#define PBA_F1_AUX_TX_TIMER_2                             0xBAF1
#define PBA_F2_IIC_DEBOUNCE                               0xBAF2
#define PBA_F3_IIC_SLAVE_ADD                              0xBAF3
#define PBA_F4_MCUIIC                                     0xBAF4
#define PBA_F5_MCUNA_MSB_1                                0xBAF5
#define PBA_F6_MCUNA_MSB_2                                0xBAF6
#define PBA_FA_DUMMY_0                                    0xBAFA
#define PBA_FB_DUMMY_1                                    0xBAFB
#define PBA_FF_TEST_FUNCTION                              0xBAFF


//--------------------------------------------------
// DisplayPort Tx Digital PHY CTRL (Page BB)
//--------------------------------------------------
#define PBB_00_DP_PHY_CTRL                                0xBB00
#define PBB_01_DPTX_ML_PAT_SEL                            0xBB01
#define PBB_02_CUSTOM_PATTERN_0                           0xBB02
#define PBB_03_CUSTOM_PATTERN_1                           0xBB03
#define PBB_04_CUSTOM_PATTERN_2                           0xBB04
#define PBB_05_CUSTOM_PATTERN_3                           0xBB05
#define PBB_06_CUSTOM_PATTERN_4                           0xBB06
#define PBB_07_CUSTOM_PATTERN_5                           0xBB07
#define PBB_08_CUSTOM_PATTERN_6                           0xBB08
#define PBB_09_CUSTOM_PATTERN_7                           0xBB09
#define PBB_0A_CUSTOM_PATTERN_8                           0xBB0A
#define PBB_0B_CUSTOM_PATTERN_9                           0xBB0B
#define PBB_0C_COMPLIANCE_EYE_PATTERN                     0xBB0C
#define PBB_0D_DPTX_PHY_CTRL                              0xBB0D
#define PBB_0E_DPTX_LANE_SWAP                             0xBB0E
#define PBB_0F_DPTX_8B10B_TST                             0xBB0F
#define PBB_30_DPTX_HDCP_CTRL1                            0xBB30
#define PBB_31_DPTX_HDCP_CTRL2                            0xBB31
#define PBB_32_DP_HDCP_KEY_DL_PORT                        0xBB32
#define PBB_33_DP_HDCP_KEY_OUTPUT                         0xBB33
#define PBB_34_AN_BYTE_7                                  0xBB34
#define PBB_35_AN_BYTE_6                                  0xBB35
#define PBB_36_AN_BYTE_5                                  0xBB36
#define PBB_37_AN_BYTE_4                                  0xBB37
#define PBB_38_AN_BYTE_3                                  0xBB38
#define PBB_39_AN_BYTE_2                                  0xBB39
#define PBB_3A_AN_BYTE_1                                  0xBB3A
#define PBB_3B_AN_BYTE_0                                  0xBB3B
#define PBB_3C_M0_BYTE_7                                  0xBB3C
#define PBB_3D_M0_BYTE_6                                  0xBB3D
#define PBB_3E_M0_BYTE_5                                  0xBB3E
#define PBB_3F_M0_BYTE_4                                  0xBB3F
#define PBB_40_M0_BYTE_3                                  0xBB40
#define PBB_41_M0_BYTE_2                                  0xBB41
#define PBB_42_M0_BYTE_1                                  0xBB42
#define PBB_43_M0_BYTE_0                                  0xBB43
#define PBB_44_KM_BYTE_6                                  0xBB44
#define PBB_45_KM_BYTE_5                                  0xBB45
#define PBB_46_KM_BYTE_4                                  0xBB46
#define PBB_47_KM_BYTE_3                                  0xBB47
#define PBB_48_KM_BYTE_2                                  0xBB48
#define PBB_49_KM_BYTE_1                                  0xBB49
#define PBB_4A_KM_BYTE_0                                  0xBB4A
#define PBB_4B_R0_BYTE_MSB                                0xBB4B
#define PBB_4C_R0_BYTE_LSB                                0xBB4C
#define PBB_4D_RI_BYTE_MSB                                0xBB4D
#define PBB_4E_RI_BYTE_LSB                                0xBB4E
#define PBB_4F_BKSV_0                                     0xBB4F
#define PBB_50_BKSV_1                                     0xBB50
#define PBB_51_BKSV_2                                     0xBB51
#define PBB_52_BKSV_3                                     0xBB52
#define PBB_53_BKSV_4                                     0xBB53
#define PBB_54_HDCP_TX_LIP_H                              0xBB54
#define PBB_55_HDCP_TX_LIP_L                              0xBB55
#define PBB_56_DP_HDCP_TX                                 0xBB56
#define PBB_57_DP_HDCP_BIST                               0xBB57
#define PBB_58_DP_HDCP_AN_SEED                            0xBB58
#define PBB_59_HDCP_IRQ_EVENT                             0xBB59
#define PBB_5A_DPTX_HDCP_TST                              0xBB5A
#define PBB_5B_DP_HDCP_TX_SHA_CTRL                        0xBB5B
#define PBB_5C_DP_HDCP_TX_SHA_DATA_3                      0xBB5C
#define PBB_5D_DP_HDCP_TX_SHA_DATA_2                      0xBB5D
#define PBB_5E_DP_HDCP_TX_SHA_DATA_1                      0xBB5E
#define PBB_5F_DP_HDCP_TX_SHA_DATA_0                      0xBB5F
#define PBB_60_DP_HDCP_TX_SHA_OUT_3                       0xBB60
#define PBB_61_DP_HDCP_TX_SHA_OUT_2                       0xBB61
#define PBB_62_DP_HDCP_TX_SHA_OUT_1                       0xBB62
#define PBB_63_DP_HDCP_TX_SHA_OUT_0                       0xBB63
#define PBB_64_HDCP_ECF_BYTE0                             0xBB64
#define PBB_65_HDCP_ECF_BYTE1                             0xBB65
#define PBB_66_HDCP_ECF_BYTE2                             0xBB66
#define PBB_67_HDCP_ECF_BYTE3                             0xBB67
#define PBB_68_HDCP_ECF_BYTE4                             0xBB68
#define PBB_69_HDCP_ECF_BYTE5                             0xBB69
#define PBB_6A_HDCP_ECF_BYTE6                             0xBB6A
#define PBB_6B_HDCP_ECF_BYTE7                             0xBB6B
#define PBB_6C_DP_STREAM_1_PBN                            0xBB6C
#define PBB_6D_DP_STREAM_2_PBN                            0xBB6D
#define PBB_6E_DP_STREAM_3_PBN                            0xBB6E
#define PBB_6F_DP_STREAM_4_PBN                            0xBB6F


//--------------------------------------------------
// DisplayPort Tx HPD Detection (PAGE BB)
//--------------------------------------------------
#define PBB_70_HPD_CTRL                                   0xBB70
#define PBB_71_HPD_IRQ                                    0xBB71
#define PBB_72_HPD_IRQ_EN                                 0xBB72
#define PBB_73_HPD_TIMER1                                 0xBB73
#define PBB_74_HPD_TIMER2                                 0xBB74
#define PBB_75_HPD_TIMER3                                 0xBB75
#define PBB_76_HPD_TIMER4                                 0xBB76
#define PBB_77_HPD_TIMER5                                 0xBB77
#define PBB_78_HPD_TIMER6                                 0xBB78
#define PBB_79_HPD_TIMER7                                 0xBB79
#define PBB_7A_HPD_LONG0                                  0xBB7A
#define PBB_7B_HPD_LONG1                                  0xBB7B
#define PBB_7C_HPD_STATE                                  0xBB7C
#define PBB_7D_RESERVED_0                                 0xBB7D
#define PBB_7E_RESERVED_1                                 0xBB7E


//--------------------------------------------------
// DisplayPort Tx MAC CTRL0 (Page BB)
//--------------------------------------------------
#define PBB_A0_DP_MAC_CTRL                                0xBBA0
#define PBB_A1_DP_RESET_CTRL                              0xBBA1
#define PBB_A2_DP_DEBUG_CTRL                              0xBBA2
#define PBB_A3_DPTX_IRQ_CTRL                              0xBBA3
#define PBB_A4_PG_FIFO_CTRL                               0xBBA4
#define PBB_A5_MAX_WL                                     0xBBA5
#define PBB_A6_LFIFO_WL                                   0xBBA6
#define PBB_A7_PG_INTERRUPT_CTRL                          0xBBA7
#define PBB_A8_MN_VID_AUTO_EN_1                           0xBBA8
#define PBB_A9_MN_M_VID_H                                 0xBBA9
#define PBB_AA_MN_M_VID_M                                 0xBBAA
#define PBB_AB_MN_M_VID_L                                 0xBBAB
#define PBB_AC_MN_N_VID_H                                 0xBBAC
#define PBB_AD_MN_N_VID_M                                 0xBBAD
#define PBB_AE_MN_N_VID_L                                 0xBBAE
#define PBB_AF_MVID_AUTO_H                                0xBBAF
#define PBB_B0_MVID_AUTO_M                                0xBBB0
#define PBB_B1_MVID_AUTO_L                                0xBBB1
#define PBB_B2_NVID_ASYNC_M                               0xBBB2
#define PBB_B3_NVID_ASYNC_L                               0xBBB3
#define PBB_B4_MSA_CTRL                                   0xBBB4
#define PBB_B5_MSA_MISC0                                  0xBBB5
#define PBB_B6_MN_STRM_ATTR_MISC1                         0xBBB6
#define PBB_B7_MN_STRM_ATTR_HTT_M                         0xBBB7
#define PBB_B8_MN_STRM_ATTR_HTT_L                         0xBBB8
#define PBB_B9_MN_STRM_ATTR_HST_M                         0xBBB9
#define PBB_BA_MN_STRM_ATTR_HST_L                         0xBBBA
#define PBB_BB_MN_STRM_ATTR_HWD_M                         0xBBBB
#define PBB_BC_MN_STRM_ATTR_HWD_L                         0xBBBC
#define PBB_BD_MN_STRM_ATTR_HSW_M                         0xBBBD
#define PBB_BE_MN_STRM_ATTR_HSW_L                         0xBBBE
#define PBB_BF_MN_STRM_ATTR_VTTE_M                        0xBBBF
#define PBB_C0_MN_STRM_ATTR_VTTE_L                        0xBBC0
#define PBB_C1_MN_STRM_ATTR_VST_M                         0xBBC1
#define PBB_C2_MN_STRM_ATTR_VST_L                         0xBBC2
#define PBB_C3_MN_STRM_ATTR_VHT_M                         0xBBC3
#define PBB_C4_MN_STRM_ATTR_VHT_L                         0xBBC4
#define PBB_C5_MN_STRM_ATTR_VSW_M                         0xBBC5
#define PBB_C6_MN_STRM_ATTR_VSW_L                         0xBBC6
#define PBB_C7_VBID                                       0xBBC7
#define PBB_C8_VBID_FW_CTL                                0xBBC8
#define PBB_C9_ARBITER_CTRL                               0xBBC9
#define PBB_CA_V_DATA_PER_LINE0                           0xBBCA
#define PBB_CB_V_DATA_PER_LINE1                           0xBBCB
#define PBB_CC_TU_SIZE                                    0xBBCC
#define PBB_CD_TU_DATA_SIZE0                              0xBBCD
#define PBB_CE_TU_DATA_SIZE1                              0xBBCE
#define PBB_CF_HDEALY0                                    0xBBCF
#define PBB_D0_HDEALY1                                    0xBBD0
#define PBB_D1_AUTO_HDEALY0                               0xBBD1
#define PBB_D2_AUTO_HDEALY1                               0xBBD2
#define PBB_D3_LFIFO_WL_SET                               0xBBD3
#define PBB_D4_ARBITER_SEC_END_CNT_HB                     0xBBD4
#define PBB_D5_ARBITER_SEC_END_CNT_LB                     0xBBD5
#define PBB_D6_ARBITER_DEBUG                              0xBBD6
#define PBB_D7_DPTX_CTSFIFO_CTRL                          0xBBD7
#define PBB_D8_DPTX_CTSFIFO_RSV1                          0xBBD8
#define PBB_D9_DPTX_TOP_CTL                               0xBBD9
#define PBB_DA_DPTX_TOP_RSV1                              0xBBDA
#define PBB_DB_DPTX_TOP_RSV2                              0xBBDB
#define PBB_DC_ARBITER_MIN_H_BLANK_WIDTH_HB               0xBBDC
#define PBB_DD_ARBITER_MIN_H_BLANK_WIDTH_LB               0xBBDD
#define PBB_DE_ARBITER_INTERRUPT_CTRL                     0xBBDE
#define PBB_DF_VESA_FMT_REGEN                             0xBBDF
#define PBB_E0_DPTX_CLK_GEN                               0xBBE0
#define PBB_E1_PG_MBIST_CTRL                              0xBBE1
#define PBB_E2_PG_DRF_MBIST_CTRL                          0xBBE2
#define PBB_F0_ARBITER_SEC_IDLE_END_CNT                   0xBBF0
#define PBB_F8_DPTX_TOP_RSV3                              0xBBF8
#define PBB_F9_DPTX_TOP_RSV4                              0xBBF9
#define PBB_FA_DPTX_TOP_RSV5                              0xBBFA
#define PBB_FB_DPTX_TOP_RSV6                              0xBBFB
#define PBB_FC_DPTX_TOP_RSV7                              0xBBFC
#define PBB_FD_DPTX_TOP_RSV8                              0xBBFD
#define PBB_FE_DPTX_TOP_RSV9                              0xBBFE
#define PBB_FF_DPTX_TOP_RSV10                             0xBBFF


//--------------------------------------------------
// DisplayPort Tx MAC CTRL1 (Page BC)
//--------------------------------------------------
#define PBC_00_SEC_FUNCTION_CTRL                          0xBC00
#define PBC_01_SEC_RESERVED_0                             0xBC01
#define PBC_02_SEC_DBUF_CTRL                              0xBC02
#define PBC_03_SEC_DEBUG                                  0xBC03
#define PBC_04_SEC_PSR_DB0                                0xBC04
#define PBC_05_SEC_PSR_DB1                                0xBC05
#define PBC_06_SEC_PSR_DB2                                0xBC06
#define PBC_07_SEC_PSR_DB3                                0xBC07
#define PBC_08_SEC_PSR_DB4                                0xBC08
#define PBC_09_SEC_PSR_DB5                                0xBC09
#define PBC_0A_SEC_PSR_DB6                                0xBC0A
#define PBC_0B_SEC_PSR_DB7                                0xBC0B
#define PBC_0C_SEC_PSR_DB8                                0xBC0C
#define PBC_0D_SEC_PSR_DB9                                0xBC0D
#define PBC_0E_SEC_PSR_DB10                               0xBC0E
#define PBC_0F_SEC_PSR_DB11                               0xBC0F
#define PBC_10_SEC_PSR_DB12                               0xBC10
#define PBC_11_SEC_PSR_DB13                               0xBC11
#define PBC_12_SEC_PSR_DB14                               0xBC12
#define PBC_13_SEC_PSR_DB15                               0xBC13
#define PBC_14_SEC_RESERVED_1                             0xBC14
#define PBC_15_SEC_RESERVED_2                             0xBC15
#define PBC_16_SEC_RESERVED_3                             0xBC16
#define PBC_17_SEC_RESERVED_4                             0xBC17
#define PBC_18_AUD_FUNCTION_CTRL1                         0xBC18
#define PBC_19_AUD_PAYLOAD_B3                             0xBC19
#define PBC_1A_SEC_RESERVED_5                             0xBC1A
#define PBC_1B_SEC_RESERVED_6                             0xBC1B
#define PBC_1C_AUD_FIFO_CTRL                              0xBC1C
#define PBC_1D_AUD_LFIFO_MAX_WL                           0xBC1D
#define PBC_1E_AUD_LFIFO_WL                               0xBC1E
#define PBC_1F_AUD_INTERRUPT_CTRL                         0xBC1F
#define PBC_20_AUD_TS_MAUD_H                              0xBC20
#define PBC_21_AUD_TS_MAUD_M                              0xBC21
#define PBC_22_AUD_TS_MAUD_L                              0xBC22
#define PBC_23_AUD_TS_NAUD_H                              0xBC23
#define PBC_24_AUD_TS_NAUD_M                              0xBC24
#define PBC_25_AUD_TS_NAUD_L                              0xBC25
#define PBC_26_SEC_INFO_AUD_DB0                           0xBC26
#define PBC_27_SEC_INFO_AUD_DB1                           0xBC27
#define PBC_28_SEC_INFO_AUD_DB2                           0xBC28
#define PBC_29_SEC_INFO_AUD_DB3                           0xBC29
#define PBC_2A_SEC_INFO_AUD_DB4                           0xBC2A
#define PBC_2B_SEC_INFO_AUD_DB5                           0xBC2B
#define PBC_2C_SEC_INFO_AUD_DB6                           0xBC2C
#define PBC_2D_SEC_INFO_AUD_DB7                           0xBC2D
#define PBC_2E_SEC_INFO_AUD_DB8                           0xBC2E
#define PBC_2F_SEC_INFO_AUD_DB9                           0xBC2F
#define PBC_30_SEC_INFO_AVI_DB0                           0xBC30
#define PBC_31_SEC_INFO_AVI_DB1                           0xBC31
#define PBC_32_SEC_INFO_AVI_DB2                           0xBC32
#define PBC_33_SEC_INFO_AVI_DB3                           0xBC33
#define PBC_34_SEC_INFO_AVI_DB4                           0xBC34
#define PBC_35_SEC_INFO_AVI_DB5                           0xBC35
#define PBC_36_SEC_INFO_AVI_DB6                           0xBC36
#define PBC_37_SEC_INFO_AVI_DB7                           0xBC37
#define PBC_38_SEC_INFO_AVI_DB8                           0xBC38
#define PBC_39_SEC_INFO_AVI_DB9                           0xBC39
#define PBC_3A_SEC_INFO_AVI_DB10                          0xBC3A
#define PBC_3B_SEC_INFO_AVI_DB11                          0xBC3B
#define PBC_3C_SEC_INFO_AVI_DB12                          0xBC3C
#define PBC_3D_SEC_INFO_MPEG_DB0                          0xBC3D
#define PBC_3E_SEC_INFO_MPEG_DB1                          0xBC3E
#define PBC_3F_SEC_INFO_MPEG_DB2                          0xBC3F
#define PBC_40_SEC_INFO_MPEG_DB3                          0xBC40
#define PBC_41_SEC_INFO_MPEG_DB4                          0xBC41
#define PBC_42_SEC_INFO_MPEG_DB5                          0xBC42
#define PBC_43_SEC_INFO_MPEG_DB6                          0xBC43
#define PBC_44_SEC_INFO_MPEG_DB7                          0xBC44
#define PBC_45_SEC_INFO_MPEG_DB8                          0xBC45
#define PBC_46_SEC_INFO_MPEG_DB9                          0xBC46
#define PBC_47_AUD_FUNCTION_CTRL2                         0xBC47
#define PBC_48_AUD_FUNCTION_CTRL3                         0xBC48
#define PBC_49_MST_SEC_PKT_ID                             0xBC49
#define PBC_4A_MST_SEC_PKT_HB3                            0xBC4A
#define PBC_4B_SEC_RS_DECODE_CTRL                         0xBC4B
#define PBC_4C_SEC_AUD_FREQDET_CTRL                       0xBC4C
#define PBC_4D_SEC_AUD_XCLK_DIV                           0xBC4D
#define PBC_4E_SEC_AUD_FREQ_TIME                          0xBC4E
#define PBC_4F_SEC_AUD_SAMPLE_CNT_HB                      0xBC4F
#define PBC_50_SEC_AUD_SAMPLE_CNT_LB                      0xBC50
#define PBC_51_AUD_MBIST_CTRL                             0xBC51
#define PBC_52_AUD_DRF_MBIST_CTRL                         0xBC52
#define PBC_60_AUD_FREQ_TH_0                              0xBC60
#define PBC_61_AUD_FREQ_TH_1                              0xBC61
#define PBC_62_AUD_FREQ_TH_2                              0xBC62
#define PBC_63_AUD_FREQ_TH_3                              0xBC63
#define PBC_64_AUD_FREQ_TH_4                              0xBC64
#define PBC_65_AUD_FREQ_TH_5                              0xBC65
#define PBC_66_AUD_FREQ_TH_6                              0xBC66
#define PBC_70_SEC_AWD_CTRL                               0xBC70
#define PBC_71_SEC_AWD_STATUS_0                           0xBC71
#define PBC_72_SEC_IRQ_CTRL                               0xBC72
#define PBC_73_SEC_PH_HB0                                 0xBC73
#define PBC_74_SEC_PH_HB1                                 0xBC74
#define PBC_75_SEC_PH_HB2                                 0xBC75
#define PBC_76_SEC_PH_HB3                                 0xBC76
#define PBC_77_SEC_PH_PB0                                 0xBC77
#define PBC_78_SEC_PH_PB1                                 0xBC78
#define PBC_79_SEC_PH_PB2                                 0xBC79
#define PBC_7A_SEC_PH_PB3                                 0xBC7A
#define PBC_7B_SEC_PH_PACKET_TYPE                         0xBC7B
#define PBC_80_SEC_AWD_STATUS_1                           0xBC80
#define PBC_95_DUMMY_0                                    0xBC95
#define PBC_96_DUMMY_1                                    0xBC96
#define PBC_97_DUMMY_2                                    0xBC97
#define PBC_98_DUMMY_3                                    0xBC98
#define PBC_99_DUMMY_4                                    0xBC99
#define PBC_9A_DUMMY_5                                    0xBC9A
#define PBC_9B_DUMMY_6                                    0xBC9B
#define PBC_9C_DUMMY_7                                    0xBC9C


//--------------------------------------------------
// DisplayPort Tx Analog PHY CTRL (Page BC)
//--------------------------------------------------
#define PBC_A0_DPTX_PHY_CTRL0                             0xBCA0
#define PBC_A1_DPTX_PHY_CTRL1                             0xBCA1
#define PBC_A2_DPTX_RCV_DET0                              0xBCA2
#define PBC_A3_DPTX_RCV_DET1                              0xBCA3
#define PBC_A4_DPTX_PN_SWAP                               0xBCA4
#define PBC_A7_DPTX_SFIFO_CTRL0                           0xBCA7
#define PBC_A8_DPTX_SFIFO_CTRL1                           0xBCA8
#define PBC_A9_DPTX_SFIFO_LANE_SWAP0                      0xBCA9
#define PBC_AA_DPTX_SFIFO_LANE_SWAP1                      0xBCAA
#define PBC_AB_DPTX_SFIFO_INT_EN                          0xBCAB
#define PBC_B0_DPTX_DEEMP_EN_LANE3_0H                     0xBCB0
#define PBC_B1_DPTX_DEEMP_EN_LANE3L                       0xBCB1
#define PBC_B2_DPTX_DEEMP_EN_LANE2L                       0xBCB2
#define PBC_B3_DPTX_DEEMP_EN_LANE1L                       0xBCB3
#define PBC_B4_DPTX_DEEMP_EN_LANE0L                       0xBCB4
#define PBC_B5_DPTX_DLY_LANE3_0                           0xBCB5
#define PBC_B6_DPTX_DRV_DAC_DAT_LANE3_2                   0xBCB6
#define PBC_B7_DPTX_DRV_DAC_DAT_LANE1_0                   0xBCB7
#define PBC_B8_DPTX_DRV_DAC_POST0_LANE3_2                 0xBCB8
#define PBC_B9_DPTX_DRV_DAC_POST0_LANE1_0                 0xBCB9
#define PBC_BA_DPTX_DRV_DAC_POST1_LANE3_2                 0xBCBA
#define PBC_BB_DPTX_DRV_DAC_POST1_LANE1_0                 0xBCBB
#define PBC_BC_DPTX_RCVDET_BIAS_PULLDN                    0xBCBC
#define PBC_BD_DPTX_CKRDDUTY_SPD_SEL                      0xBCBD
#define PBC_BE_DPTX_VCM_CTRL_LANE3_2                      0xBCBE
#define PBC_BF_DPTX_VCM_CTRL_LANE1_0                      0xBCBF
#define PBC_C0_DPTX_VREF_CTRL_LANE3_2                     0xBCC0
#define PBC_C1_DPTX_VREF_CTRL_LANE1_0                     0xBCC1
#define PBC_C2_DPTX_Z0_LANE3_2                            0xBCC2
#define PBC_C3_DPTX_Z0_LANE1_0                            0xBCC3
#define PBC_D0_DPTX_CMU0                                  0xBCD0
#define PBC_D1_DPTX_CMU1                                  0xBCD1
#define PBC_D2_DPTX_CMU2                                  0xBCD2
#define PBC_D3_DPTX_CMU3                                  0xBCD3
#define PBC_D4_DPTX_CMU4                                  0xBCD4
#define PBC_D5_DPTX_CMU5                                  0xBCD5
#define PBC_D6_DPTX_CMU6                                  0xBCD6
#define PBC_D7_DPTX_CMU7                                  0xBCD7
#define PBC_D8_DPTX_CMU8                                  0xBCD8
#define PBC_D9_DPTX_CMU9                                  0xBCD9
#define PBC_DA_DPTX_CMU10                                 0xBCDA
#define PBC_DB_DPTX_CMU11                                 0xBCDB
#define PBC_DD_DPTX_CMU12                                 0xBCDD
#define PBC_DE_DPTX_CMU13                                 0xBCDE
#define PBC_DF_DPTX_CMU14                                 0xBCDF
#define PBC_E0_DPTX_CMU15                                 0xBCE0
#define PBC_E1_DPTX_CMU16                                 0xBCE1
#define PBC_E2_DPTX_CMU17                                 0xBCE2
#define PBC_E3_DPTX_CMU18                                 0xBCE3
#define PBC_E4_DPTX_CMU19                                 0xBCE4
#define PBC_E5_DPTX_CMU20                                 0xBCE5
#define PBC_E6_DPTX_CMU21                                 0xBCE6
#define PBC_E7_DPTX_CMU22                                 0xBCE7


//--------------------------------------------------
// DisplayPort Tx AUX MAC CTRL (Page BD)
//--------------------------------------------------
#define PBD_60_DIG_TX_04                                  0xBD60
#define PBD_61_AUX_1                                      0xBD61
#define PBD_62_AUX_2                                      0xBD62
#define PBD_63_AUX_3                                      0xBD63
#define PBD_64_AUX_4                                      0xBD64
#define PBD_65_AUX_5                                      0xBD65
#define PBD_66_AUX_6                                      0xBD66
#define PBD_67_DIG_TX_03                                  0xBD67
#define PBD_A0_AUX_TX_CTRL                                0xBDA0
#define PBD_A1_AUX_TIMEOUT                                0xBDA1
#define PBD_A2_AUX_FSM_STATUS                             0xBDA2
#define PBD_A3_AUXTX_TRAN_CTRL                            0xBDA3
#define PBD_A4_AUXTX_REQ_CMD                              0xBDA4
#define PBD_A5_AUXTX_REQ_ADDR_M                           0xBDA5
#define PBD_A6_AUXTX_REQ_ADDR_L                           0xBDA6
#define PBD_A7_AUXTX_REQ_LEN                              0xBDA7
#define PBD_A8_AUXTX_REQ_DATA                             0xBDA8
#define PBD_A9_AUX_REPLY_CMD                              0xBDA9
#define PBD_AA_AUX_REPLY_DATA                             0xBDAA
#define PBD_AB_AUX_FIFO_CTRL                              0xBDAB
#define PBD_AC_AUX_TX_FIFO_STATUS                         0xBDAC
#define PBD_AD_AUX_FIFO_RD_PTR                            0xBDAD
#define PBD_AE_AUX_FIFO_WR_PTR                            0xBDAE
#define PBD_AF_AUX_RETRY_1                                0xBDAF
#define PBD_B0_AUX_RETRY_2                                0xBDB0
#define PBD_B1_AUX_IRQ_EVENT                              0xBDB1
#define PBD_B2_AUX_IRQ_EN                                 0xBDB2
#define PBD_F0_AUX_DIG_PHY2                               0xBDF0
#define PBD_F1_AUX_DIG_PHY3                               0xBDF1
#define PBD_F2_AUX_DIG_PHY4                               0xBDF2
#define PBD_F3_AUX_DIG_PHY5                               0xBDF3
#define PBD_F4_AUX_DIG_PHY6                               0xBDF4
#define PBD_F5_AUX_DIG_PHY7                               0xBDF5
#define PBD_F6_AUX_DIG_PHY8                               0xBDF6
#define PBD_F7_AUX_DIG_PHY9                               0xBDF7
#define PBD_F8_AUX_DEBUG                                  0xBDF8
#define PBD_B5_MSG_WR_CTRL                                0xBDB5
#define PBD_B6_MSG_WR_FINISH                              0xBDB6
#define PBD_B7_MSG_WR_LENGTH                              0xBDB7
#define PBD_B8_MSG_WR_BUR_LENGTH                          0xBDB8
#define PBD_B9_MSG_WR_SET0                                0xBDB9
#define PBD_BA_MSG_WR_SET1                                0xBDBA
#define PBD_BB_MSG_WR_SET2                                0xBDBB
#define PBD_BC_MSG_WR_SET3                                0xBDBC
#define PBD_BD_MSG_WR_SET4                                0xBDBD
#define PBD_BE_MSG_WR_SET5                                0xBDBE
#define PBD_BF_MSG_WR_SET6                                0xBDBF
#define PBD_C0_MSG_WR_SET7                                0xBDC0
#define PBD_C1_MSG_WR_SET8                                0xBDC1
#define PBD_C2_MSG_WR_SET9                                0xBDC2
#define PBD_C3_MSG_WR_ADR_SEL                             0xBDC3
#define PBD_C4_BUF_RDPTR                                  0xBDC4
#define PBD_C5_BUF_CLR                                    0xBDC5
#define PBD_C6_BUF_FW_WRPTR                               0xBDC6
#define PBD_C7_BUF_FW_WR_DATA                             0xBDC7
#define PBD_CA_AUX_TX_MSG_RD_CTRL                         0xBDCA
#define PBD_CB_MSG_RD_FINISH_IRQ                          0xBDCB
#define PBD_CC_MSG_RD_FINISH                              0xBDCC
#define PBD_CD_MSG_RD_LENGTH                              0xBDCD
#define PBD_CE_MSG_RD_BUR_LENGTH                          0xBDCE
#define PBD_CF_MSG_RD_DATA0                               0xBDCF
#define PBD_D0_MSG_RD_DATA1                               0xBDD0
#define PBD_D1_MSG_RD_DATA2                               0xBDD1
#define PBD_D2_MSG_RD_DATA3                               0xBDD2
#define PBD_D3_MSG_RD_DATA4                               0xBDD3
#define PBD_D4_MSG_RD_DATA5                               0xBDD4
#define PBD_D5_MSG_RD_DATA6                               0xBDD5
#define PBD_D6_MSG_RD_DATA7                               0xBDD6
#define PBD_D7_MSG_RD_DATA8                               0xBDD7
#define PBD_D8_MSG_RD_DATA9                               0xBDD8
#define PBD_D9_MSG_RD_DATAA                               0xBDD9
#define PBD_DA_MSG_RD_ADR_SEL                             0xBDDA
#define PBD_DB_MSG_RD_FLAG                                0xBDDB
#define PBD_DC_MSG_BUF_RDPTR                              0xBDDC
#define PBD_DD_MSG_BUF_RD_DATA                            0xBDDD
#define PBD_DE_MSG_BUF_CLR                                0xBDDE
#define PBD_DF_BUF_FW_WRPTR                               0xBDDF
#define PBD_E0_MSG_SRAM_BIST_CTRL                         0xBDE0
#define PBD_E1_MSG_SRAM_DRF_BIST_CTRL                     0xBDE1


//--------------------------------------------------
// DisplayPort 1.1 Tx PLL (Page BE)
//--------------------------------------------------
#define PBE_00_DPLL_M                                     0xBE00
#define PBE_01_DPLL_N                                     0xBE01
#define PBE_02_DPLL_CRNT                                  0xBE02


//--------------------------------------------------
// DCLK Spread Spectrum (Page BE)
//--------------------------------------------------
#define PBE_03_DPLL_WD                                    0xBE03
#define PBE_04_DPLL_CAL                                   0xBE04
#define PBE_05_DCLK_FINE_TUNE_OFFSET_MSB                  0xBE05
#define PBE_06_DCLK_FINE_TUNE_OFFSET_LSB                  0xBE06
#define PBE_07_DCLK_SPREAD_SPECTRUM                       0xBE07
#define PBE_08_FIXED_LAST_LINE_CTRL                       0xBE08
#define PBE_09_TARGET_DCLK_FINE_TUNE_OFFSET_MSB           0xBE09
#define PBE_0A_TARGET_DCLK_FINE_TUNE_OFFSET_LSB           0xBE0A
#define PBE_0B_DPLL_RESULT                                0xBE0B
#define PBE_0C_SSC_REF_SEL                                0xBE0C
#define PBE_0D_DCLK_SSC_COUNT                             0xBE0D
#define PBE_0E_DPLL_LDO                                   0xBE0E
#define PBE_0F_DPLL_RELOAD_CTRL                           0xBE0F
#define PBE_10_DPLL_M_N_MSB                               0xBE10


//--------------------------------------------------
// AUDIO ADC PLL (Page BF)
//--------------------------------------------------
#define PBF_A0_MN_SCLKG_CTRL                              0xBFA0
#define PBF_A1_MN_SCLKG_DIVM                              0xBFA1
#define PBF_A2_MN_SCLKG_DIVN                              0xBFA2
#define PBF_A3_MN_SCLKG_DIVS                              0xBFA3
#define PBF_A4_MN_SCLKG_OFFS_H                            0xBFA4
#define PBF_A5_MN_SCLKG_OFFS_M                            0xBFA5
#define PBF_A6_MN_SCLKG_OFFS_L                            0xBFA6
#define PBF_A7_MN_SCLKG_TRK_CTRL                          0xBFA7
#define PBF_B8_MN_SCLKG_SDM_CTRL                          0xBFB8
#define PBF_B9_MN_SCLKG_SDM_TEST                          0xBFB9
#define PBF_BA_MN_SCLKG_SDM_SUMC_H                        0xBFBA
#define PBF_BB_MN_SCLKG_SDM_SUMC_M                        0xBFBB
#define PBF_BC_MN_SCLKG_SDM_SUMC_L                        0xBFBC
#define PBF_BD_MN_SCLKG_PLL_PWR                           0xBFBD
#define PBF_BE_MN_SCLKG_PLL_CHP                           0xBFBE
#define PBF_BF_MN_SCLKG_PLL_WD                            0xBFBF
#define PBF_C0_MN_SCLKG_PLL_INSEL                         0xBFC0
#define PBF_C1_MN_SCLKG_PLL_RESERVE                       0xBFC1
#define PBF_C2_DUMMY_0                                    0xBFC2
#define PBF_C3_DUMMY_1                                    0xBFC3
#define PBF_C4_DUMMY_2                                    0xBFC4
#define PBF_C5_DUMMY_3                                    0xBFC5


//--------------------------------------------------
// S2 IRQ Status (Page C0)
//--------------------------------------------------
#define PC0_02_S2_STATUS0                                 0xC002
#define PC0_03_S2_STATUS1                                 0xC003
#define PC0_04_S2_IRQ_CTRL0                               0xC004
#define PC0_05_S2_IRQ_CTRL1                               0xC005
#define PC0_08_S2_IRQ_CTRL2                               0xC008


//--------------------------------------------------
// GroupB Power Control (Page C0)
//--------------------------------------------------
#define PC0_0A_GB_POWER_CTRL                              0xC00A


//--------------------------------------------------
// S2 Watch Dog (Page C0)
//--------------------------------------------------
#define PC0_0C_S2_WATCH_DOG_CTRL0                         0xC00C


//--------------------------------------------------
// M1 Scan FIFO Frequency (Page C0)
//--------------------------------------------------
#define PC0_0D_M1_SCAN_FIFO_CLOCK_SELECT                  0xC00D


//--------------------------------------------------
// S2 Input Video Capture (Page C0)
//--------------------------------------------------
#define PC0_10_S2_VGIP_CTRL                               0xC010
#define PC0_11_S2_VGIP_SIGINV                             0xC011
#define PC0_12_S2_VGIP_DELAY_CTRL                         0xC012
#define PC0_13_S2_VGIP_ODD_CTRL                           0xC013


//--------------------------------------------------
// S2 Input Frame Window (Page C0)
//--------------------------------------------------
#define PC0_14_S2_IPH_ACT_STA_H                           0xC014
#define PC0_15_S2_IPH_ACT_STA_L                           0xC015
#define PC0_16_S2_IPH_ACT_WID_H                           0xC016
#define PC0_17_S2_IPH_ACT_WID_L                           0xC017
#define PC0_18_S2_IPV_ACT_STA_H                           0xC018
#define PC0_19_S2_IPV_ACT_STA_L                           0xC019
#define PC0_1A_S2_IPV_ACT_LEN_H                           0xC01A
#define PC0_1B_S2_IPV_ACT_LEN_L                           0xC01B
#define PC0_1C_S2_IVS_DELAY                               0xC01C
#define PC0_1D_S2_IHS_DELAY                               0xC01D
#define PC0_1E_S2_VGIP_HV_DELAY                           0xC01E
#define PC0_1F_S2_ICLK_GATED_CTRL1                        0xC01F
#define PC0_20_S2_DUMMY2                                  0xC020


//--------------------------------------------------
// S2 FIFO Frequency (Page C0)
//--------------------------------------------------
#define PC0_22_S2_FIFO_CLOCK_SELECT                       0xC022


//--------------------------------------------------
// S2 Scaling Down Control (Page C0)
//--------------------------------------------------
#define PC0_23_SCALE_DOWN_CTRL_S2                         0xC023
#define PC0_24_SD_ADDRESS_PORT_S2                         0xC024
#define PC0_25_SD_DATA_PORT_S2                            0xC025
#define PC0_26_SD_FILTER_CONTROL_REG_S2                   0xC026
#define PC0_27_SD_USER_FILTER_ACCESS_PORT_S2              0xC027


//--------------------------------------------------
// S2 Display Format (Page C0)
//--------------------------------------------------
#define PC0_28_VIDEO_DISPLAY_CONTROL_REG_S2               0xC028


//--------------------------------------------------
// S2 Scaling Up Function (Page C0)
//--------------------------------------------------
#define PC0_32_SCALE_CONTROL_REG_S2                       0xC032
#define PC0_33_SF_ADDR_PORT_S2                            0xC033
#define PC0_34_SF_DATA_PORT_S2                            0xC034
#define PC0_35_FILTER_CONTROL_REG_S2                      0xC035
#define PC0_37_SCALE_UP_FOR_LINE_INTERLEAVE_S2            0xC037


//--------------------------------------------------
// S2 Back ground color (Page C0)
//--------------------------------------------------
#define PC0_6C_BG_COLOR_ACCESS_EN_S2                      0xC06C
#define PC0_6D_BG_COLOR_DATA_PORT_S2                      0xC06D


//--------------------------------------------------
// S2 Image Auto Function (Page C0)
//--------------------------------------------------
#define PC0_70_S2_H_BOUNDARY_H                            0xC070
#define PC0_71_S2_H_BOUNDARY_STA_L                        0xC071
#define PC0_72_S2_H_BOUNDARY_END_L                        0xC072
#define PC0_73_S2_V_BOUNDARY_H                            0xC073
#define PC0_74_V_BOUNDARY_STA_L                           0xC074
#define PC0_75_S2_V_BOUNDARY_END_L                        0xC075
#define PC0_76_S2_RED_NOISE_MARGIN                        0xC076
#define PC0_77_S2_GRN_NOISE_MARGIN                        0xC077
#define PC0_78_S2_BLU_NOISE_MARGIN                        0xC078
#define PC0_79_S2_DIFF_THRESHOLD                          0xC079
#define PC0_7A_S2_AUTO_ADJ_CTRL0                          0xC07A
#define PC0_7B_S2_HW_AUTO_PHASE_CTRL0                     0xC07B
#define PC0_7C_S2_AUTO_DUMMY                              0xC07C
#define PC0_7D_S2_AUTO_ADJ_CTRL1                          0xC07D
#define PC0_7E_S2_VER_START_END_H                         0xC07E
#define PC0_7F_S2_VER_START_L                             0xC07F
#define PC0_80_S2_VER_END_L                               0xC080
#define PC0_81_S2_H_START_END_H                           0xC081
#define PC0_82_S2_H_START_L                               0xC082
#define PC0_83_S2_H_END_L                                 0xC083
#define PC0_84_S2_AUTO_PHASE_3                            0xC084
#define PC0_85_S2_AUTO_PHASE_2                            0xC085
#define PC0_86_S2_AUTO_PHASE_1                            0xC086
#define PC0_87_S2_AUTO_PHASE_0                            0xC087


//--------------------------------------------------
// S2 Dithering Control (For Input Domain) (Page C0)
//--------------------------------------------------
#define PC0_89_I_DITHER_COMMON_CTRL1_S2                   0xC089
#define PC0_8A_I_DITHER_COMMON_CTRL2_S2                   0xC08A


//--------------------------------------------------
// Color Conversion - RGBtoYCC before IDLTI 12bit In / 12bit Out (Page C0)
//--------------------------------------------------
#define PC0_9C_RGB2YCC_CTRL_S2                            0xC09C
#define PC0_9D_RGB2YCC_COEF_DATA_S2                       0xC09D


//--------------------------------------------------
// FRC Cap_S2 (Page C5)
//--------------------------------------------------
#define PC5_00_CAP_S2_MEM_ADDR_MSB                        0xC500
#define PC5_01_CAP_S2_MEM_ADDR_H                          0xC501
#define PC5_02_CAP_S2_MEM_ADDR_M                          0xC502
#define PC5_03_CAP_S2_MEM_ADDR_L                          0xC503
#define PC5_04_CAP_S2_BL2_ADDR_MSB                        0xC504
#define PC5_05_CAP_S2_BL2_ADDR_H                          0xC505
#define PC5_06_CAP_S2_BL2_ADDR_M                          0xC506
#define PC5_07_CAP_S2_BL2_ADDR_L                          0xC507
#define PC5_08_CAP_S2_BL3_ADDR_MSB                        0xC508
#define PC5_09_CAP_S2_BL3_ADDR_H                          0xC509
#define PC5_0A_CAP_S2_BL3_ADDR_M                          0xC50A
#define PC5_0B_CAP_S2_BL3_ADDR_L                          0xC50B
#define PC5_0C_CAP_S2_BOUNDARY_ADDR1_MSB                  0xC50C
#define PC5_0D_CAP_S2_BOUNDARY_ADDR1_H                    0xC50D
#define PC5_0E_CAP_S2_BOUNDARY_ADDR1_M                    0xC50E
#define PC5_0F_CAP_S2_BOUNDARY_ADDR1_L                    0xC50F
#define PC5_10_CAP_S2_BOUNDARY_ADDR2_MSB                  0xC510
#define PC5_11_CAP_S2_BOUNDARY_ADDR2_H                    0xC511
#define PC5_12_CAP_S2_BOUNDARY_ADDR2_M                    0xC512
#define PC5_13_CAP_S2_BOUNDARY_ADDR2_L                    0xC513
#define PC5_14_CAP_S2_BOUNDARY_STATUS                     0xC514
#define PC5_15_CAP_S2_BLOCK_STEP_MSB                      0xC515
#define PC5_16_CAP_S2_BLOCK_STEP_H                        0xC516
#define PC5_17_CAP_S2_BLOCK_STEP_M                        0xC517
#define PC5_18_CAP_S2_BLOCK_STEP_L                        0xC518
#define PC5_19_CAP_S2_LINE_STEP_MSB                       0xC519
#define PC5_1A_CAP_S2_LINE_STEP_H                         0xC51A
#define PC5_1B_CAP_S2_LINE_STEP_M                         0xC51B
#define PC5_1C_CAP_S2_LINE_STEP_L                         0xC51C
#define PC5_1D_CAP_S2_WATER_LEVEL_H                       0xC51D
#define PC5_1E_CAP_S2_WATER_LEVEL_L                       0xC51E
#define PC5_1F_CAP_S2_PIXEL_NUM_H                         0xC51F
#define PC5_20_CAP_S2_PIXEL_NUM_L                         0xC520
#define PC5_21_CAP_S2_LINE_NUM_H                          0xC521
#define PC5_22_CAP_S2_LINE_NUM_L                          0xC522
#define PC5_23_CAP_S2_WR_NUM_H                            0xC523
#define PC5_24_CAP_S2_WR_NUM_L                            0xC524
#define PC5_25_CAP_S2_WR_LEN                              0xC525
#define PC5_26_CAP_S2_WR_REMAIN                           0xC526
#define PC5_27_CAP_S2_DDR_CTRL1                           0xC527
#define PC5_28_CAP_S2_DDR_CTRL2                           0xC528
#define PC5_29_CAP_S2_DDR_CTRL3                           0xC529
#define PC5_2A_CAP_S2_STATUS                              0xC52A
#define PC5_2B_CAP_S2_FIFO_STATUS                         0xC52B
#define PC5_2C_CAP_S2_ONEF_STATUS                         0xC52C
#define PC5_30_CAP_S2_BIST_CTRL                           0xC530
#define PC5_31_CAP_S2_DRF_BIST_CTRL                       0xC531


//--------------------------------------------------
// FRC Disp_S2 (Page C5)
//--------------------------------------------------
#define PC5_80_DISP_S2_READ_ADDR_MSB                      0xC580
#define PC5_81_DISP_S2_READ_ADDR_H                        0xC581
#define PC5_82_DISP_S2_READ_ADDR_M                        0xC582
#define PC5_83_DISP_S2_READ_ADDR_L                        0xC583
#define PC5_84_DISP_S2_BL2_ADDR_MSB                       0xC584
#define PC5_85_DISP_S2_BL2_ADDR_H                         0xC585
#define PC5_86_DISP_S2_BL2_ADDR_M                         0xC586
#define PC5_87_DISP_S2_BL2_ADDR_L                         0xC587
#define PC5_88_DISP_S2_BL3_ADDR_MSB                       0xC588
#define PC5_89_DISP_S2_BL3_ADDR_H                         0xC589
#define PC5_8A_DISP_S2_BL3_ADDR_M                         0xC58A
#define PC5_8B_DISP_S2_BL3_ADDR_L                         0xC58B
#define PC5_8C_DISP_S2_BOUNDARY_ADDR1_MSB                 0xC58C
#define PC5_8D_DISP_S2_BOUNDARY_ADDR1_H                   0xC58D
#define PC5_8E_DISP_S2_BOUNDARY_ADDR1_M                   0xC58E
#define PC5_8F_DISP_S2_BOUNDARY_ADDR1_L                   0xC58F
#define PC5_90_DISP_S2_BOUNDARY_ADDR2_MSB                 0xC590
#define PC5_91_DISP_S2_BOUNDARY_ADDR2_H                   0xC591
#define PC5_92_DISP_S2_BOUNDARY_ADDR2_M                   0xC592
#define PC5_93_DISP_S2_BOUNDARY_ADDR2_L                   0xC593
#define PC5_94_DISP_S2_BOUNDARY_STATUS                    0xC594
#define PC5_95_DISP_S2_BLOCK_STEP_MSB                     0xC595
#define PC5_96_DISP_S2_BLOCK_STEP_H                       0xC596
#define PC5_97_DISP_S2_BLOCK_STEP_M                       0xC597
#define PC5_98_DISP_S2_BLOCK_STEP_L                       0xC598
#define PC5_99_DISP_S2_LINE_STEP_MSB                      0xC599
#define PC5_9A_DISP_S2_LINE_STEP_H                        0xC59A
#define PC5_9B_DISP_S2_LINE_STEP_M                        0xC59B
#define PC5_9C_DISP_S2_LINE_STEP_L                        0xC59C
#define PC5_A0_DISP_S2_WTLVL_H                            0xC5A0
#define PC5_A1_DISP_S2_WTLVL_L                            0xC5A1
#define PC5_A2_DISP_S2_PXL_NUM_H                          0xC5A2
#define PC5_A3_DISP_S2_PXL_NUM_L                          0xC5A3
#define PC5_A4_DISP_S2_LINE_NUM_H                         0xC5A4
#define PC5_A5_DISP_S2_LINE_NUM_L                         0xC5A5
#define PC5_A6_DISP_S2_PRRD_VST_H                         0xC5A6
#define PC5_A7_DISP_S2_PRRD_VST_L                         0xC5A7
#define PC5_A8_DISP_S2_READ_NUM_H                         0xC5A8
#define PC5_A9_DISP_S2_READ_NUM_L                         0xC5A9
#define PC5_AA_DISP_S2_READ_LEN                           0xC5AA
#define PC5_AB_DISP_S2_READ_REMAIN                        0xC5AB
#define PC5_AC_DISP_S2_DISP_CTRL1                         0xC5AC
#define PC5_AD_DISP_STATUS                                0xC5AD
#define PC5_AE_DISP_S2_DISP_CTRL2                         0xC5AE
#define PC5_AF_DISP_S2_DISP_CTRL3                         0xC5AF
#define PC5_B0_DISP_S2_FIFO_STATUS                        0xC5B0
#define PC5_B1_DISP_S2_ONEF_DHF_H                         0xC5B1
#define PC5_B2_DISP_S2_ONEF_DHF_M                         0xC5B2
#define PC5_B3_DISP_S2_ONEF_DHF_L                         0xC5B3
#define PC5_B4_DISP_S2_ONEF_IHF                           0xC5B4
#define PC5_B5_DISP_S2_LINE_MAGN_L                        0xC5B5
#define PC5_B6_DISP_S2_ONEF_MAGN_H                        0xC5B6
#define PC5_B7_DISP_S2_ONEF_MAGN_L                        0xC5B7
#define PC5_C0_DISP_S2_BIST_CTRL                          0xC5C0
#define PC5_C1_DISP_S2_DRF_BIST_CTRL                      0xC5C1
#define PC5_C2_ADC_TEST                                   0xC5C2
#define PC5_C3_DISP_S2_NEW_FIFO_CRC_CTRL                  0xC5C3
#define PC5_C4_DISP_S2_NEW_FIFO_CRC1                      0xC5C4
#define PC5_C5_DISP_S2_NEW_FIFO_CRC2                      0xC5C5
#define PC5_C6_DISP_S2_NEW_FIFO_CRC3                      0xC5C6
#define PC5_C7_DISP_S2_NEW_FIFO_CRC4                      0xC5C7
#define PC5_C8_DISP_S2_NEW_FIFO_CRC5                      0xC5C8
#define PC5_C9_DISP_S2_NEW_FIFO_CRC6                      0xC5C9


//--------------------------------------------------
// S2 I Domain DLTI (Page D1)
//--------------------------------------------------
#define PD1_A1_I_DLTI_CTRL_S2                             0xD1A1
#define PD1_A2_I_DLTI_SEARCH_RANGE_S2                     0xD1A2
#define PD1_A3_I_DLTI_ADJUST_S2                           0xD1A3
#define PD1_A4_I_DLTI_UPPER_THD_HSB_S2                    0xD1A4
#define PD1_A5_I_DLTI_UPPER_THD_LSB_S2                    0xD1A5
#define PD1_A6_I_DLTI_LOWER_THD_HSB_S2                    0xD1A6
#define PD1_A7_I_DLTI_LOWER_THD_LSB_S2                    0xD1A7
#define PD1_A8_I_DLTI_FILTER_C0_HSB_S2                    0xD1A8
#define PD1_A9_I_DLTI_FILTER_C0_LSB_S2                    0xD1A9
#define PD1_AA_I_DLTI_FILTER_C1_HSB_S2                    0xD1AA
#define PD1_AB_I_DLTI_FILTER_C1_LSB_S2                    0xD1AB
#define PD1_AC_I_DLTI_FILTER_C2_HSB_S2                    0xD1AC
#define PD1_AD_I_DLTI_FILTER_C2_LSB_S2                    0xD1AD
#define PD1_AE_I_DLTI_FILTER_C3_HSB_S2                    0xD1AE
#define PD1_AF_I_DLTI_FILTER_C3_LSB_S2                    0xD1AF
#define PD1_B0_I_DLTI_FILTER_C4_HSB_S2                    0xD1B0
#define PD1_B1_I_DLTI_FILTER_C4_LSB_S2                    0xD1B1
#define PD1_B2_I_DLTI_UPPER_LOWER_THD_S2                  0xD1B2
#define PD1_D4_I_DLTI_HLW_HOR_START_HSB_S2                0xD1D4
#define PD1_D5_I_DLTI_HLW_HOR_START_LSB_S2                0xD1D5
#define PD1_D6_I_DLTI_HLW_HOR_END_HSB_S2                  0xD1D6
#define PD1_D7_I_DLTI_HLW_HOR_END_LSB_S2                  0xD1D7
#define PD1_D8_I_DLTI_HLW_VER_START_HSB_S2                0xD1D8
#define PD1_D9_I_DLTI_HLW_VER_START_LSB_S2                0xD1D9
#define PD1_DA_I_DLTI_HLW_VER_END_HSB_S2                  0xD1DA
#define PD1_DB_I_DLTI_HLW_VER_END_LSB_S2                  0xD1DB
#define PD1_DC_I_DLTI_HLW_CTRL_S2                         0xD1DC
#define PD1_DD_I_DLTI_DUMMY_S2                            0xD1DD


//--------------------------------------------------
// S2 Light Super Resolution (LSR) (Page D1)
//--------------------------------------------------
#define PD1_B9_SCALER_LSR_HLW_S2                          0xD1B9
#define PD1_CC_LSR_HLW_H_START_HIGH_S2                    0xD1CC
#define PD1_CD_LSR_HLW_H_START_LOW_S2                     0xD1CD
#define PD1_CE_LSR_HLW_H_END_HIGH_S2                      0xD1CE
#define PD1_CF_LSR_HLW_H_END_LOW_S2                       0xD1CF
#define PD1_D0_LSR_HLW_V_START_HIGH_S2                    0xD1D0
#define PD1_D1_LSR_HLW_V_START_LOW_S2                     0xD1D1
#define PD1_D2_LSR_HLW_V_END_HIGH_S2                      0xD1D2
#define PD1_D3_LSR_HLW_V_END_LOW_S2                       0xD1D3


//--------------------------------------------------
// S2 SHP (Page D2)
//--------------------------------------------------
#define PD2_A0_SR_SHP_CTRL_0_S2                           0xD2A0
#define PD2_A1_SR_SHP_CTRL_1_S2                           0xD2A1
#define PD2_A3_SR_DEBUGMODE_0_S2                          0xD2A3
#define PD2_A4_SR_DEBUGMODE_1_S2                          0xD2A4
#define PD2_A5_SR_EDGE_SOBEL_S2                           0xD2A5
#define PD2_A6_SR_EDGE_SOBEL_UB_S2                        0xD2A6
#define PD2_A7_SR_EDGE_HPF_C0_HSB_S2                      0xD2A7
#define PD2_A8_SR_EDGE_HPF_C0_LSB_S2                      0xD2A8
#define PD2_A9_SR_EDGE_HPF_C1_HSB_S2                      0xD2A9
#define PD2_AA_SR_EDGE_HPF_C1_LSB_S2                      0xD2AA
#define PD2_AB_SR_EDGE_HPF_C2_S2                          0xD2AB
#define PD2_AC_SR_EDGE_HPF_C3_S2                          0xD2AC
#define PD2_AD_SR_EDGE_HPF_C4_S2                          0xD2AD
#define PD2_AE_SR_EDGE_HPF_C5_S2                          0xD2AE
#define PD2_AF_SR_EDGE_HPF_SHIFT_S2                       0xD2AF
#define PD2_B0_SR_EDGE_PEAKING_GAIN_BLR_S2                0xD2B0
#define PD2_B1_SR_EDGE_PEAKING_GAIN_POS_S2                0xD2B1
#define PD2_B2_SR_EDGE_PEAKING_GAIN_NEG_S2                0xD2B2
#define PD2_B3_SR_EDGE_PEAKING_HV_POS_HSB_S2              0xD2B3
#define PD2_B4_SR_EDGE_PEAKING_HV_POS_LSB_S2              0xD2B4
#define PD2_B5_SR_EDGE_PEAKING_HV_NEG_HSB_S2              0xD2B5
#define PD2_B6_SR_EDGE_PEAKING_HV_NEG_LSB_S2              0xD2B6
#define PD2_B7_SR_EDGE_PEAKING_LV_S2                      0xD2B7
#define PD2_B8_SR_HOR_EMF_GAIN_1_S2                       0xD2B8
#define PD2_B9_SR_HOR_EMF_GAIN_2_S2                       0xD2B9
#define PD2_BA_SR_HOR_EMF_OFFSET_0_HSB_S2                 0xD2BA
#define PD2_BB_SR_HOR_EMF_OFFSET_0_LSB_S2                 0xD2BB
#define PD2_BC_SR_HOR_EMF_OFFSET_1_HSB_S2                 0xD2BC
#define PD2_BD_SR_HOR_EMF_OFFSET_1_LSB_S2                 0xD2BD
#define PD2_BE_SR_HOR_EMF_OFFSET_2_HSB_S2                 0xD2BE
#define PD2_BF_SR_HOR_EMF_OFFSET_2_LSB_S2                 0xD2BF
#define PD2_C0_SR_HOR_EMF_RANGE_S2                        0xD2C0
#define PD2_C1_SR_HOR_EMF_EXT_S2                          0xD2C1
#define PD2_C2_SR_HOR_EMFMK2_CTRL_0_S2                    0xD2C2
#define PD2_C3_SR_HOR_EMFMK2_CTRL_1_S2                    0xD2C3
#define PD2_C4_SR_HOR_EMFMK2_CTRL_2_S2                    0xD2C4
#define PD2_C5_SR_TEX_DET_S2                              0xD2C5
#define PD2_C6_SR_TEX_DET_UB_S2                           0xD2C6
#define PD2_C7_SR_TEX_HPF_C0_HSB_S2                       0xD2C7
#define PD2_C8_SR_TEX_HPF_C0_LSB_S2                       0xD2C8
#define PD2_C9_SR_TEX_HPF_C1_HSB_S2                       0xD2C9
#define PD2_CA_SR_TEX_HPF_C1_LSB_S2                       0xD2CA
#define PD2_CB_SR_TEX_HPF_C2_S2                           0xD2CB
#define PD2_CC_SR_TEX_HPF_C3_S2                           0xD2CC
#define PD2_CD_SR_TEX_HPF_C4_S2                           0xD2CD
#define PD2_CE_SR_TEX_HPF_C5_S2                           0xD2CE
#define PD2_CF_SR_TEX_HPF_SHIFT_S2                        0xD2CF
#define PD2_D0_SR_HOR_WTSUM_S2                            0xD2D0
#define PD2_D1_SR_TEX_PEAKING_GAIN_BLR_S2                 0xD2D1
#define PD2_D2_SR_TEX_PEAKING_GAIN_POS_S2                 0xD2D2
#define PD2_D3_SR_TEX_PEAKING_GAIN_NEG_S2                 0xD2D3
#define PD2_D4_SR_TEX_PEAKING_HV_POS_HSB_S2               0xD2D4
#define PD2_D5_SR_TEX_PEAKING_HV_POS_LSB_S2               0xD2D5
#define PD2_D6_SR_TEX_PEAKING_HV_NEG_HSB_S2               0xD2D6
#define PD2_D7_SR_TEX_PEAKING_HV_NEG_LSB_S2               0xD2D7
#define PD2_D8_SR_TEX_PEAKING_LV_S2                       0xD2D8
#define PD2_D9_SR_TEX_EDGE_BLEND_S2                       0xD2D9
#define PD2_DE_SR_VER_WTSUM_S2                            0xD2DE
#define PD2_DF_SR_VER_PEAKING_GAIN_POS_S2                 0xD2DF
#define PD2_E0_SR_VER_PEAKING_GAIN_NEG_S2                 0xD2E0
#define PD2_E1_SR_VER_PEAKING_HV_POS_S2                   0xD2E1
#define PD2_E2_SR_VER_PEAKING_HV_NEG_S2                   0xD2E2
#define PD2_E3_SR_VER_PEAKING_LV_S2                       0xD2E3
#define PD2_E4_SR_VER_EMF_S2                              0xD2E4
#define PD2_E5_SR_VER_EMF_MODE_S2                         0xD2E5
#define PD2_E6_SR_DUMMY1                                  0xD2E6
#define PD2_E7_SR_SHP_BIST_CTRL_1                         0xD2E7


//--------------------------------------------------
// S2 SHP (PageD3)
//--------------------------------------------------
#define PD3_A0_SR_CDS_CTRL_0_S2                           0xD3A0
#define PD3_A1_SR_CDS_CTRL_1_S2                           0xD3A1
#define PD3_A2_SR_CDS_CM1_U_UB0_HSB_S2                    0xD3A2
#define PD3_A3_SR_CDS_CM1_U_UB0_LSB_S2                    0xD3A3
#define PD3_A4_SR_CDS_CM1_U_LB0_HSB_S2                    0xD3A4
#define PD3_A5_SR_CDS_CM1_U_LB0_LSB_S2                    0xD3A5
#define PD3_A6_SR_CDS_CM1_V_UB0_HSB_S2                    0xD3A6
#define PD3_A7_SR_CDS_CM1_V_UB0_LSB_S2                    0xD3A7
#define PD3_A8_SR_CDS_CM1_V_LB0_HSB_S2                    0xD3A8
#define PD3_A9_SR_CDS_CM1_V_LB0_LSB_S2                    0xD3A9
#define PD3_AA_SR_CDS_CM5_U_UB0_HSB_S2                    0xD3AA
#define PD3_AB_SR_CDS_CM5_U_UB0_LSB_S2                    0xD3AB
#define PD3_AC_SR_CDS_CM5_U_LB0_HSB_S2                    0xD3AC
#define PD3_AD_SR_CDS_CM5_U_LB0_LSB_S2                    0xD3AD
#define PD3_AE_SR_CDS_CM5_V_UB0_HSB_S2                    0xD3AE
#define PD3_AF_SR_CDS_CM5_V_UB0_LSB_S2                    0xD3AF
#define PD3_B0_SR_CDS_CM5_V_LB0_HSB_S2                    0xD3B0
#define PD3_B1_SR_CDS_CM5_V_LB0_LSB_S2                    0xD3B1
#define PD3_B2_SR_CDS_PEAKING_GAIN_BLR_CM1_S2             0xD3B2
#define PD3_B3_SR_CDS_PEAKING_GAIN_POS_CM1_S2             0xD3B3
#define PD3_B4_SR_CDS_PEAKING_GAIN_NEG_CM1_S2             0xD3B4
#define PD3_B5_SR_CDS_PEAKING_HV_POS_CM1_HSB_S2           0xD3B5
#define PD3_B6_SR_CDS_PEAKING_HV_POS_CM1_LSB_S2           0xD3B6
#define PD3_B7_SR_CDS_PEAKING_HV_NEG_CM1_HSB_S2           0xD3B7
#define PD3_B8_SR_CDS_PEAKING_HV_NEG_CM1_LSB_S2           0xD3B8
#define PD3_B9_SR_CDS_PEAKING_LV_CM1_S2                   0xD3B9
#define PD3_BA_SR_CDS_PEAKING_GAIN_BLR_CM5_S2             0xD3BA
#define PD3_BB_SR_CDS_PEAKING_GAIN_POS_CM5_S2             0xD3BB
#define PD3_BC_SR_CDS_PEAKING_GAIN_NEG_CM5_S2             0xD3BC
#define PD3_BD_SR_CDS_PEAKING_HV_POS_CM5_HSB_S2           0xD3BD
#define PD3_BE_SR_CDS_PEAKING_HV_POS_CM5_LSB_S2           0xD3BE
#define PD3_BF_SR_CDS_PEAKING_HV_NEG_CM5_HSB_S2           0xD3BF
#define PD3_C0_SR_CDS_PEAKING_HV_NEG_CM5_LSB_S2           0xD3C0
#define PD3_C1_SR_CDS_PEAKING_LV_CM5_S2                   0xD3C1
#define PD3_C2_SR_CDS_CM1_U_UB1_HSB_S2                    0xD3C2
#define PD3_C3_SR_CDS_CM1_U_UB1_LSB_S2                    0xD3C3
#define PD3_C4_SR_CDS_CM1_U_LB1_HSB_S2                    0xD3C4
#define PD3_C5_SR_CDS_CM1_U_LB1_LSB_S2                    0xD3C5
#define PD3_C6_SR_CDS_CM1_V_UB1_HSB_S2                    0xD3C6
#define PD3_C7_SR_CDS_CM1_V_UB1_LSB_S2                    0xD3C7
#define PD3_C8_SR_CDS_CM1_V_LB1_HSB_S2                    0xD3C8
#define PD3_C9_SR_CDS_CM1_V_LB1_LSB_S2                    0xD3C9
#define PD3_CA_SR_CDS_CM5_U_UB1_HSB_S2                    0xD3CA
#define PD3_CB_SR_CDS_CM5_U_UB1_LSB_S2                    0xD3CB
#define PD3_CC_SR_CDS_CM5_U_LB1_HSB_S2                    0xD3CC
#define PD3_CD_SR_CDS_CM5_U_LB1_LSB_S2                    0xD3CD
#define PD3_CE_SR_CDS_CM5_V_UB1_HSB_S2                    0xD3CE
#define PD3_CF_SR_CDS_CM5_V_UB1_LSB_S2                    0xD3CF
#define PD3_D0_SR_CDS_CM5_V_LB1_HSB_S2                    0xD3D0
#define PD3_D1_SR_CDS_CM5_V_LB1_LSB_S2                    0xD3D1
#define PD3_D4_SR_SKIPIR_CTRL1_S2                         0xD3D4
#define PD3_D5_SR_SKIPIR_CTRL2_S2                         0xD3D5
#define PD3_D6_SR_SKIPIR_CTRL3_S2                         0xD3D6
#define PD3_D7_SR_SKIPIR_CTRL4_S2                         0xD3D7
#define PD3_D8_SR_SKIPIR_CTRL5_S2                         0xD3D8
#define PD3_D9_SR_SKIPIR_CTRL6_S2                         0xD3D9
#define PD3_DA_SR_SKIPIR_ISLETLV_UB_S2                    0xD3DA
#define PD3_DB_SR_SKIPIR_ISLETGAIN_UB_S2                  0xD3DB
#define PD3_DC_SR_SKIPIR_REVLV_UB_S2                      0xD3DC
#define PD3_DD_SR_SKIPIR_REVGAIN_UB_S2                    0xD3DD
#define PD3_DE_SR_SKIPIR_DEBUG_S2                         0xD3DE
#define PD3_DF_SR_DNOISE_CTRL1_S2                         0xD3DF
#define PD3_E0_SR_DNOISE_CTRL2_S2                         0xD3E0
#define PD3_E1_SR_DNOISE_GAIN_UB_S2                       0xD3E1
#define PD3_E2_SR_DNOISE_LV_UB_S2                         0xD3E2
#define PD3_E3_SR_DNOISE_NOISE_GAIN_TH_S2                 0xD3E3
#define PD3_E4_SR_DNOISE_NOISE_LV_TH_S2                   0xD3E4
#define PD3_E5_SR_ECS_CTRL_0_S2                           0xD3E5
#define PD3_E6_SR_ECS_CTRL_1_S2                           0xD3E6
#define PD3_E7_SR_ECS_NOISE_LEVEL_HSB_S2                  0xD3E7
#define PD3_E8_SR_ECS_NOISE_LEVEL_LSB_S2                  0xD3E8
#define PD3_E9_SR_ECS_CTR_TH_HSB_S2                       0xD3E9
#define PD3_EA_SR_ECS_CTR_TH_LSB_S2                       0xD3EA
#define PD3_EB_SR_ECS_SAWTOOTH_TH_HSB_S2                  0xD3EB
#define PD3_EC_SR_ECS_SAWTOOTH_TH_LSB_S2                  0xD3EC
#define PD3_ED_SR_MF_UB_S2                                0xD3ED
#define PD3_EE_SR_MF_LB_S2                                0xD3EE
#define PD3_EF_SR_MF_WT_S2                                0xD3EF
#define PD3_F0_SR_TL_THD_MSB_S2                           0xD3F0
#define PD3_F1_SR_TL_THD_LSB_S2                           0xD3F1
#define PD3_F2_SR_TL_OFFSET_S2                            0xD3F2
#define PD3_F3_SR_BG_THD_MSB_S2                           0xD3F3
#define PD3_F4_SR_BG_THD_LSB_S2                           0xD3F4
#define PD3_F5_SR_BG_OFFSET_S2                            0xD3F5
#define PD3_F6_SR_SUMDIFF_RSFT_S2                         0xD3F6
#define PD3_F7_SR_SUMDIFF_THD_S2                          0xD3F7
#define PD3_F8_SR_SUMDIFF_OFFSET_S2                       0xD3F8
#define PD3_F9_SR_TL_GAIN_S2                              0xD3F9
#define PD3_FA_SR_TL_LEN_S2                               0xD3FA
#define PD3_FB_SR_DUMMY2                                  0xD3FB


//--------------------------------------------------
// S2 Light Super Resolution (LSR) (Page D4)
//--------------------------------------------------
#define PD4_00_LSR_V_SOB_SLP_LSB_S2                       0xD400
#define PD4_01_LSR_V_SOB_TXT_COR_G_HP_UB_LSB_S2           0xD401
#define PD4_02_LSR_V_HP_UP_COR_THD_LSB_S2                 0xD402
#define PD4_03_LSR_V_COR_THD_HP_LB_LSB_S2                 0xD403
#define PD4_04_LSR_V_HP_LB_SOB_TXT_LB_G_LSB_S2            0xD404
#define PD4_05_LSR_V_SOB_TXT_COR_LB_G_LSB_S2              0xD405
#define PD4_10_LSR_TL_THD_MSB_S2                          0xD410
#define PD4_11_LSR_TL_THD_LSB_S2                          0xD411
#define PD4_12_LSR_TL_OFFSET_S2                           0xD412
#define PD4_13_LSR_BG_THD_MSB_S2                          0xD413
#define PD4_14_LSR_BG_THD_LSB_S2                          0xD414
#define PD4_15_LSR_BG_OFFSET_S2                           0xD415
#define PD4_16_LSR_SUMDIFF_RSFT_S2                        0xD416
#define PD4_17_LSR_SUMDIFF_THD_S2                         0xD417
#define PD4_18_LSR_SUMDIFF_OFFSET_S2                      0xD418
#define PD4_19_LSR_TL_GAIN_S2                             0xD419
#define PD4_C0_LSR_CTRL_S2                                0xD4C0
#define PD4_C1_LSR_H_HP_FILTER_C0_S2                      0xD4C1
#define PD4_C2_LSR_H_HP_FILTER_C1C2_S2                    0xD4C2
#define PD4_C3_LSR_H_SOB_5TAP_S2                          0xD4C3
#define PD4_C4_LSR_H_SOB_THD2_MSB_S2                      0xD4C4
#define PD4_C5_LSR_H_SOB_THD2_LSB_S2                      0xD4C5
#define PD4_C6_LSR_H_SOB_THD1_MSB_S2                      0xD4C6
#define PD4_C7_LSR_H_SOB_THD1_LSB_S2                      0xD4C7
#define PD4_C8_LSR_H_SOB_THD0_S2                          0xD4C8
#define PD4_C9_LSR_H_SOB_BASE_S2                          0xD4C9
#define PD4_CA_LSR_H_SOB_SLP_R_S2                         0xD4CA
#define PD4_CB_LSR_H_SOB_SLP_F_S2                         0xD4CB
#define PD4_CC_LSR_H_SOB_TXT_COR_G_P_MSB_S2               0xD4CC
#define PD4_CD_LSR_H_SOB_TXT_COR_G_P_LSB_S2               0xD4CD
#define PD4_CE_LSR_H_HP_UB_P_S2                           0xD4CE
#define PD4_CF_LSR_H_HP_UB_N_S2                           0xD4CF
#define PD4_D0_LSR_H_COR_THD_P_S2                         0xD4D0
#define PD4_D1_LSR_H_COR_THD_N_S2                         0xD4D1
#define PD4_D2_LSR_H_HP_LB_P_S2                           0xD4D2
#define PD4_D3_LSR_H_HP_LB_N_S2                           0xD4D3
#define PD4_D4_LSR_H_SOB_TXT_LB_G_P_MSB_S2                0xD4D4
#define PD4_D5_LSR_H_SOB_TXT_LB_G_P_LSB_S2                0xD4D5
#define PD4_D6_LSR_H_SOB_TXT_COR_G_N_MSB_S2               0xD4D6
#define PD4_D7_LSR_H_SOB_TXT_COR_G_N_LSB_S2               0xD4D7
#define PD4_D8_LSR_H_SOB_TXT_LB_G_N_MSB_S2                0xD4D8
#define PD4_D9_LSR_H_SOB_TXT_LB_G_N_LSB_S2                0xD4D9
#define PD4_E0_LSR_V_SOB_THD2_MSB_S2                      0xD4E0
#define PD4_E1_LSR_V_SOB_THD2_LSB_S2                      0xD4E1
#define PD4_E2_LSR_V_SOB_THD1_MSB_S2                      0xD4E2
#define PD4_E3_LSR_V_SOB_THD1_LSB_S2                      0xD4E3
#define PD4_E4_SR_V_SOB_THD0_S2                           0xD4E4
#define PD4_E5_LSR_V_SOB_BASE_S2                          0xD4E5
#define PD4_E6_LSR_V_SOB_SLP_R_S2                         0xD4E6
#define PD4_E7_LSR_V_SOB_SLP_F_S2                         0xD4E7
#define PD4_E8_LSR_V_SOB_TXT_COR_G_P_MSB_S2               0xD4E8
#define PD4_E9_LSR_V_SOB_TXT_COR_G_P_LSB_S2               0xD4E9
#define PD4_EA_LSR_V_HP_UB_P_S2                           0xD4EA
#define PD4_EB_LSR_V_HP_UB_N_S2                           0xD4EB
#define PD4_EC_LSR_V_COR_THD_P_S2                         0xD4EC
#define PD4_ED_LSR_V_COR_THD_N_S2                         0xD4ED
#define PD4_EE_LSR_V_HP_LB_P_S2                           0xD4EE
#define PD4_EF_LSR_V_HP_LB_N_S2                           0xD4EF
#define PD4_F0_LSR_V_SOB_TXT_LB_G_P_MSB_S2                0xD4F0
#define PD4_F1_LSR_V_SOB_TXT_LB_G_P_LSB_S2                0xD4F1
#define PD4_F2_LSR_V_SOB_TXT_COR_G_N_MSB_S2               0xD4F2
#define PD4_F3_LSR_V_SOB_TXT_COR_G_N_LSB_S2               0xD4F3
#define PD4_F4_LSR_V_SOB_TXT_LB_G_N_MSB_S2                0xD4F4
#define PD4_F5_LSR_V_SOB_TXT_LB_G_N_LSB_S2                0xD4F5
#define PD4_F6_LSR_H_SOB_THD12_LSB_S2                     0xD4F6
#define PD4_F7_LSR_H_SOB_THD0_BASE_LSB_S2                 0xD4F7
#define PD4_F8_LSR_H_SOB_SLP_LSB_S2                       0xD4F8
#define PD4_F9_LSR_H_SOB_TXT_COR_G_HP_UB_LSB_S2           0xD4F9
#define PD4_FA_LSR_H_HP_UB_COR_THD_LSB_S2                 0xD4FA
#define PD4_FB_LSR_H_COR_THD_HP_LB_LSB_S2                 0xD4FB
#define PD4_FC_LSR_H_HP_LB_SOB_TXT_LB_G_LSB_S2            0xD4FC
#define PD4_FD_LSR_H_SOB_TXT_COR_LB_G_LSB_S2              0xD4FD
#define PD4_FE_LSR_V_SOB_THD12_LSB_S2                     0xD4FE
#define PD4_FF_LSR_V_SOB_THD0_BASE_LSB_S2                 0xD4FF


//--------------------------------------------------
// Color Conversion - YCCtoRGB after SHP - 12bit In / 12bit Out (Page D4)
//--------------------------------------------------
#define PD4_A1_SR_YCC2RGB_CTRL_S2                         0xD4A1
#define PD4_A2_SR_YCC2RGB_COEF_K11_MSB_S2                 0xD4A2
#define PD4_A3_SR_YCC2RGB_COEF_K11_LSB_S2                 0xD4A3
#define PD4_A4_SR_YCC2RGB_COEF_K13_MSB_S2                 0xD4A4
#define PD4_A5_SR_YCC2RGB_COEF_K13_LSB_S2                 0xD4A5
#define PD4_A6_SR_YCC2RGB_COEF_K22_MSB_S2                 0xD4A6
#define PD4_A7_SR_YCC2RGB_COEF_K22_LSB_S2                 0xD4A7
#define PD4_A8_SR_YCC2RGB_COEF_K23_MSB_S2                 0xD4A8
#define PD4_A9_SR_YCC2RGB_COEF_K23_LSB_S2                 0xD4A9
#define PD4_AA_SR_YCC2RGB_COEF_K32_MSB_S2                 0xD4AA
#define PD4_AB_SR_YCC2RGB_COEF_K32_LSB_S2                 0xD4AB
#define PD4_AC_SR_YCC2RGB_R_OFFSET_MSB_S2                 0xD4AC
#define PD4_AD_SR_YCC2RGB_R_OFFSET_LSB_S2                 0xD4AD
#define PD4_AE_SR_YCC2RGB_G_OFFSET_MSB_S2                 0xD4AE
#define PD4_AF_SR_YCC2RGB_G_OFFSET_LSB_S2                 0xD4AF
#define PD4_B0_SR_YCC2RGB_B_OFFSET_MSB_S2                 0xD4B0
#define PD4_B1_SR_YCC2RGB_B_OFFSET_LSB_S2                 0xD4B1
#define PD4_B2_SR_YCC2RGB_R_GAIN_MSB_S2                   0xD4B2
#define PD4_B3_SR_YCC2RGB_R_GAIN_LSB_S2                   0xD4B3
#define PD4_B4_SR_YCC2RGB_G_GAIN_MSB_S2                   0xD4B4
#define PD4_B5_SR_YCC2RGB_G_GAIN_LSB_S2                   0xD4B5
#define PD4_B6_SR_YCC2RGB_B_GAIN_MSB_S2                   0xD4B6
#define PD4_B7_SR_YCC2RGB_B_GAIN_LSB_S2                   0xD4B7
#define PD4_B8_SR_YCC2RGB_DUMMY_S2                        0xD4B8


//--------------------------------------------------
// TXGH Port Control for Analog LVDS (Page D5)
//--------------------------------------------------
#define PD5_00_LVDS_COMMON_AB_CTRL0                       0xD500
#define PD5_01_LVDS_COMMON_AB_CTRL1                       0xD501
#define PD5_02_LVDS_COMMON_AB_CTRL2                       0xD502
#define PD5_03_LVDS_COMMON_AB_CTRL3                       0xD503
#define PD5_04_LVDS_COMMON_AB_CTRL4                       0xD504
#define PD5_05_LVDS_COMMON_AB_CTRL5                       0xD505
#define PD5_06_LVDS_COMMON_AB_CTRL6                       0xD506
#define PD5_07_LVDS_COMMON_AB_CTRL7                       0xD507
#define PD5_08_LVDS_COMMON_AB_CTRL8                       0xD508
#define PD5_09_LVDS_COMMON_AB_CTRL9                       0xD509
#define PD5_0A_LVDS_COMMON_AB_CTRL10                      0xD50A
#define PD5_0B_LVDS_COMMON_AB_CTRL11                      0xD50B
#define PD5_0C_LVDS_COMMON_AB_CTRL12                      0xD50C
#define PD5_0D_LVDS_COMMON_AB_CTRL13                      0xD50D
#define PD5_0E_LVDS_COMMON_AB_CTRL14                      0xD50E
#define PD5_0F_LVDS_COMMON_AB_CTRL15                      0xD50F
#define PD5_10_LVDS_COMMON_AB_CTRL16                      0xD510
#define PD5_11_LVDS_COMMON_AB_CTRL17                      0xD511
#define PD5_20_LVDS_PORTA_CTRL0                           0xD520
#define PD5_21_LVDS_PORTA_CTRL1                           0xD521
#define PD5_22_LVDS_PORTA_CTRL2                           0xD522
#define PD5_23_LVDS_PORTA_CTRL3                           0xD523
#define PD5_24_LVDS_PORTA_CTRL4                           0xD524
#define PD5_25_LVDS_PORTA_CTRL5                           0xD525
#define PD5_26_LVDS_PORTA_CTRL6                           0xD526
#define PD5_27_LVDS_PORTA_CTRL7                           0xD527
#define PD5_28_LVDS_PORTA_CTRL8                           0xD528
#define PD5_29_LVDS_PORTA_CTRL9                           0xD529
#define PD5_2A_LVDS_PORTA_CTRL10                          0xD52A
#define PD5_2B_LVDS_PORTA_CTRL11                          0xD52B
#define PD5_30_LVDS_PORTB_CTRL0                           0xD530
#define PD5_31_LVDS_PORTB_CTRL1                           0xD531
#define PD5_32_LVDS_PORTB_CTRL2                           0xD532
#define PD5_33_LVDS_PORTB_CTRL3                           0xD533
#define PD5_34_LVDS_PORTB_CTRL4                           0xD534
#define PD5_35_LVDS_PORTB_CTRL5                           0xD535
#define PD5_36_LVDS_PORTB_CTRL6                           0xD536
#define PD5_37_LVDS_PORTB_CTRL7                           0xD537
#define PD5_38_LVDS_PORTB_CTRL8                           0xD538
#define PD5_39_LVDS_PORTB_CTRL9                           0xD539
#define PD5_3A_LVDS_PORTB_CTRL10                          0xD53A
#define PD5_3B_LVDS_PORTB_CTRL11                          0xD53B


//--------------------------------------------------
// S2 On-line Measure Block Overview (Page D6)
//--------------------------------------------------
#define PD6_01_MEAS_CTL0                                  0xD601
#define PD6_02_MEAS_CTL1                                  0xD602
#define PD6_03_MEAS_ERROR_FLG0                            0xD603
#define PD6_04_MEAS_ERROR_FLG1                            0xD604
#define PD6_05_MEAS_HS_PERIOD_A_M                         0xD605
#define PD6_06_MEAS_HS_PERIOD_A_L                         0xD606
#define PD6_07_MEAS_HS_PERIOD_FRA_A                       0xD607
#define PD6_08_MEAS_VS_PERIOD_A_M                         0xD608
#define PD6_09_MEAS_VS_PERIOD_A_L                         0xD609
#define PD6_0A_MEAS_HS_PULSE_A_M                          0xD60A
#define PD6_0B_MEAS_HS_PULSE_A_L                          0xD60B
#define PD6_0C_MEAS_VS_PULSE_A_M                          0xD60C
#define PD6_0D_MEAS_VS_PULSE_A_L                          0xD60D
#define PD6_0E_MEAS_HS_PERIOD_D_M                         0xD60E
#define PD6_0F_MEAS_HS_PERIOD_D_L                         0xD60F
#define PD6_10_MEAS_HS_PERIOD_FRA_D                       0xD610
#define PD6_11_MEAS_VS_PERIOD_D_M                         0xD611
#define PD6_12_MEAS_VS_PERIOD_D_L                         0xD612
#define PD6_13_MEAS_HS_PULSE_D_M                          0xD613
#define PD6_14_MEAS_HS_PULSE_D_L                          0xD614
#define PD6_15_MEAS_HS_VS_DELTA_CTL                       0xD615
#define PD6_16_MEAS_HS_VS_DELTA_IRQ                       0xD616
#define PD6_17_MEAS_HS_VS_DELTA_WD                        0xD617
#define PD6_18_MEAS_HS_VS_ERROR_WD                        0xD618
#define PD6_19_MEAS_HS_VS_ERROR_IRQ                       0xD619
#define PD6_1A_MEAS2_HS_VS_DLY                            0xD61A
#define PD6_1C_S2_MEASURE_DUMMY0                          0xD61C
#define PD6_1D_S2_MEASURE_DUMMY1                          0xD61D

//--------------------------------------------------
// Macros of controlling the scaler registers
//--------------------------------------------------
#define ScalerSetBit(usAddr, ucAnd, ucOr)           (*((volatile BYTE xdata *)(usAddr)) = (*((volatile BYTE xdata *)(usAddr)) & (ucAnd)) | (ucOr))
#define ScalerGetBit(usAddr, ucAnd)                 (*((volatile BYTE xdata *)(usAddr)) & (ucAnd))
#define ScalerGetByte(usAddr)                       (*((volatile BYTE xdata *)(usAddr)))
#define ScalerSetByte(usAddr, ucValue)              (*((volatile BYTE xdata *)(usAddr)) = (ucValue))
#define ScalerGetWord(usAddr)                       (*((volatile WORD xdata *)(usAddr)))
#define ScalerSetWord(usAddr, usValue)              (*((volatile WORD xdata *)(usAddr)) = (usValue))
#define ScalerGetDWord(usAddr)                      (*((volatile DWORD xdata *)(usAddr)))
#define ScalerSetDWord(usAddr, ulValue)             (*((volatile DWORD xdata *)(usAddr)) = (ulValue))
#define ScalerMaskSetDWord(usAddr, ulMask, ulValue) (*((volatile DWORD xdata *)(usAddr)) = (((DWORD)ulMask) & ScalerGetDWord(usAddr)) | ((~((DWORD)ulMask)) & ulValue))

//--------------------------------------------------
// Macros of controlling the scaler registers for EXINT1
//--------------------------------------------------
#define ScalerSetBit_EXINT(usAddr, ucAnd, ucOr)     (*((volatile BYTE xdata *)(usAddr)) = (*((volatile BYTE xdata *)(usAddr)) & (ucAnd)) | (ucOr))
#define ScalerGetBit_EXINT(usAddr, ucAnd)           (*((volatile BYTE xdata *)(usAddr)) & (ucAnd))
#define ScalerGetByte_EXINT(usAddr)                 (*((volatile BYTE xdata *)(usAddr)))
#define ScalerSetByte_EXINT(usAddr, ucValue)        (*((volatile BYTE xdata *)(usAddr)) = (ucValue))
#define ScalerGetWord_EXINT(usAddr)                 (*((volatile WORD xdata *)(usAddr)))
#define ScalerSetWord_EXINT(usAddr, usValue)        (*((volatile WORD xdata *)(usAddr)) = (usValue))

//****************************************************************************
// STRUCT / TYPE / ENUM DEFINITTIONS
//****************************************************************************


//****************************************************************************
// VARIABLE EXTERN
//****************************************************************************


//****************************************************************************
// FUNCTION EXTERN
//****************************************************************************
