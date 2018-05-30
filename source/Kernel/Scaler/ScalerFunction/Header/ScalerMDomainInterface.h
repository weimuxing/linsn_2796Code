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
// ID Code      : ScalerMDomainInterface.h No.0000
// Update Note  :
//----------------------------------------------------------------------------------------------------
//****************************************************************************
// INTERFACE DEFINITIONS / MACROS
//****************************************************************************
//--------------------------------------------------
// Macros of MDomain Input Info.
//--------------------------------------------------
#define GET_MDOMAIN_INPUT_H_POLARITY()                 (g_stMDomainInputData.b1HSP)
#define GET_MDOMAIN_INPUT_V_POLARITY()                 (g_stMDomainInputData.b1VSP)
#define GET_MDOMAIN_INPUT_INTERLACE_FLG()              (g_stMDomainInputData.b1Interlace)
#define GET_MDOMAIN_INPUT_HFREQ()                      (g_stMDomainInputData.usHFreq)
#define GET_MDOMAIN_INPUT_HTOTAL()                     (g_stMDomainInputData.usHTotal)
#define GET_MDOMAIN_INPUT_HWIDTH()                     (g_stMDomainInputData.usHWidth)
#define GET_MDOMAIN_INPUT_HSTART()                     (g_stMDomainInputData.usHStart)
#define GET_MDOMAIN_INPUT_HSYNCWIDTH()                 (g_stMDomainInputData.usHSWidth)
#define GET_MDOMAIN_INPUT_VFREQ()                      (g_stMDomainInputData.usVFreq)
#define GET_MDOMAIN_INPUT_VTOTAL()                     (g_stMDomainInputData.usVTotal)
#define GET_MDOMAIN_INPUT_VHEIGHT()                    (g_stMDomainInputData.usVHeight)
#define GET_MDOMAIN_INPUT_VSTART()                     (g_stMDomainInputData.usVStart)
#define GET_MDOMAIN_INPUT_VSYNCWIDTH()                 (g_stMDomainInputData.usVSWidth)

//--------------------------------------------------
// Macros of MDomain Input info. modification
//--------------------------------------------------
#define SET_MDOMAIN_INPUT_STRUCTURE(x)                 (g_stMDomainInputData = (x))

#define SET_MDOMAIN_INPUT_HSTART(x)                    (g_stMDomainInputData.usHStart = (x))
#define SET_MDOMAIN_INPUT_HWIDTH(x)                    (g_stMDomainInputData.usHWidth = (x))
#define SET_MDOMAIN_INPUT_HTOTAL(x)                    (g_stMDomainInputData.usHTotal = (x))

#define SET_MDOMAIN_INPUT_VSTART(x)                    (g_stMDomainInputData.usVStart = (x))
#define SET_MDOMAIN_INPUT_VHEIGHT(x)                   (g_stMDomainInputData.usVHeight = (x))
#define SET_MDOMAIN_INPUT_VTOTAL(x)                    (g_stMDomainInputData.usVTotal = (x))

//--------------------------------------------------
// Macros of MDomain Output Info.
//--------------------------------------------------
#define GET_MDOMAIN_OUTPUT_DATA_PATH()                 (g_stMDomainOutputData.enumDisplayDataPath)
#define SET_MDOMAIN_OUTPUT_DATA_PATH(x)                (g_stMDomainOutputData.enumDisplayDataPath = (x))

#define GET_MDOMAIN_OUTPUT_HSTART()                    (g_stMDomainOutputData.usHStart)
#define GET_MDOMAIN_OUTPUT_HBSTART()                   (g_stMDomainOutputData.usHBackStart)
#define GET_MDOMAIN_OUTPUT_HWIDTH()                    (g_stMDomainOutputData.usHWidth)
#define GET_MDOMAIN_OUTPUT_HBWIDTH()                   (g_stMDomainOutputData.usHBackWidth)
#define GET_MDOMAIN_OUTPUT_HTOTAL()                    (g_stMDomainOutputData.usHTotal)

#define GET_MDOMAIN_OUTPUT_VSTART()                    (g_stMDomainOutputData.usVStart)
#define GET_MDOMAIN_OUTPUT_VBSTART()                   (g_stMDomainOutputData.usVBackStart)
#define GET_MDOMAIN_OUTPUT_VHEIGHT()                   (g_stMDomainOutputData.usVHeight)
#define GET_MDOMAIN_OUTPUT_VBHEIGHT()                  (g_stMDomainOutputData.usVBackHeight)
#define GET_MDOMAIN_OUTPUT_VTOTAL()                    (g_stMDomainOutputData.usVTotal)


#if 1
//--------------------------------------------------
// Macros of MDoUser Output Info.
//--------------------------------------------------

#if 0
#define GET_MDOUSER_OUTPUT_HSTART()                     (MDouserHstart)
#define GET_MDOUSER_OUTPUT_HBSTART()                    ()
#define GET_MDOUSER_OUTPUT_HWIDTH()                     (MDouserHwidth)//(3840)
#define GET_MDOUSER_OUTPUT_HBWIDTH()                    ()
#define GET_MDOUSER_OUTPUT_HTOTAL()                     ()

#define GET_MDOUSER_OUTPUT_VSTART()                     (MDouserVstart)
#define GET_MDOUSER_OUTPUT_VBSTART()                    ()
#define GET_MDOUSER_OUTPUT_VHEIGHT()                    (MDouserVheight)//(2160)
#define GET_MDOUSER_OUTPUT_VBHEIGHT()                   ()
#define GET_MDOUSER_OUTPUT_VTOTAL()                     ()
#else


#define GET_MDOUSER_OUTPUT_HWIDTH()                     	(g_stFourPortSplitData.stActiveWidth)
#define GET_MDOUSER_OUTPUT_VHEIGHT()                     	(g_stFourPortSplitData.stActiveHeight)
#define GET_MDOUSER_FIRST_HWIDTH()                     		(g_stFourPortSplitData.stFirstDisplayWidth)
#define GET_MDOUSER_FIRST_VHEIGHT()                     	(g_stFourPortSplitData.stFirstDisplayHehght)
#define GET_MDOUSER_SECOND_HWIDTH()                     	(g_stFourPortSplitData.stSecondDisplayWidth)
#define GET_MDOUSER_SECOND_VHEIGHT()                     	(g_stFourPortSplitData.stSecondDisplayHehght)
#define GET_MDOUSER_THIRD_HWIDTH()                     		(g_stFourPortSplitData.stThirdDisplayWidth)
#define GET_MDOUSER_THIRD_VHEIGHT()                     	(g_stFourPortSplitData.stThirdDisplayHehght)
#define GET_MDOUSER_FOURTH_HWIDTH()                     	(g_stFourPortSplitData.stFourthDisplayWidth)
#define GET_MDOUSER_FOURTH_VHEIGHT()                     	(g_stFourPortSplitData.stFourthDisplayHehght)


#define GET_MDOUSER_FIRST_REGION_HSTART()                	(g_stFourPortSplitData.stFirstRegionWidthStart)
#define GET_MDOUSER_FIRST_REGION_VSTART()               	(g_stFourPortSplitData.stFirstRegionHeightStart)
#define GET_MDOUSER_SECOND_REGION_HSTART()               	(g_stFourPortSplitData.stSecondRegionWidthStart)
#define GET_MDOUSER_SECOND_REGION_VSTART()              	(g_stFourPortSplitData.stSecondRegionHeightStart)

#define GET_MDOUSER_THIRD_REGION_HSTART()                	(g_stFourPortSplitData.stThirdRegionWidthStart)
#define GET_MDOUSER_THIRD_REGION_VSTART()               	(g_stFourPortSplitData.stThirdRegionHeightStart)
#define GET_MDOUSER_FOURTH_REGION_HSTART()               	(g_stFourPortSplitData.stFourthRegionWidthStart)
#define GET_MDOUSER_FOURTH_REGION_VSTART()              	(g_stFourPortSplitData.stFourthRegionHeightStart)

#define GET_MDOUSER_PIP_MAIN_POS_X()						(g_stPipWinData.stPipMainWinPosX)
#define GET_MDOUSER_PIP_MAIN_POS_Y()						(g_stPipWinData.stPipMainWinPosY)
#define GET_MDOUSER_PIP_MAIN_SIZE_X()						(g_stPipWinData.stPipMainWinSizeX)
#define GET_MDOUSER_PIP_MAIN_SIZE_Y()						(g_stPipWinData.stPipMainWinSizeY)

#define GET_MDOUSER_PIP_SUB_POS_X()							(g_stPipWinData.stPipSubWinPosX)
#define GET_MDOUSER_PIP_SUB_POS_Y()							(g_stPipWinData.stPipSubWinPosY)
#define GET_MDOUSER_PIP_SUB_SIZE_X()						(g_stPipWinData.stPipSubWinSizeX)
#define GET_MDOUSER_PIP_SUB_SIZE_Y()						(g_stPipWinData.stPipSubWinSizeY)

#define SET_MDOUSER_PIP_MAIN_POS_X(x)						(g_stPipWinData.stPipMainWinPosX = x)
#define SET_MDOUSER_PIP_MAIN_POS_Y(x)						(g_stPipWinData.stPipMainWinPosY = x)
#define SET_MDOUSER_PIP_MAIN_SIZE_X(x)						(g_stPipWinData.stPipMainWinSizeX = x)
#define SET_MDOUSER_PIP_MAIN_SIZE_Y(x)						(g_stPipWinData.stPipMainWinSizeY = x)

#define SET_MDOUSER_PIP_SUB_POS_X(x)						(g_stPipWinData.stPipSubWinPosX = x)
#define SET_MDOUSER_PIP_SUB_POS_Y(x)						(g_stPipWinData.stPipSubWinPosY = x)
#define SET_MDOUSER_PIP_SUB_SIZE_X(x)						(g_stPipWinData.stPipSubWinSizeX = x)
#define SET_MDOUSER_PIP_SUB_SIZE_Y(x)						(g_stPipWinData.stPipSubWinSizeY = x)


#define GET_MDOUSER_PBP_LEFT_POS_X()						(g_stPipWinData.stPbpLeftWinPosX)
#define GET_MDOUSER_PBP_LEFT_POS_Y()						(g_stPipWinData.stPbpLeftWinPosY)
#define GET_MDOUSER_PBP_LEFT_SIZE_X()						(g_stPipWinData.stPbpLeftWinSizeX)
#define GET_MDOUSER_PBP_LEFT_SIZE_Y()						(g_stPipWinData.stPbpLeftWinSizeY)

#define GET_MDOUSER_PBP_RIGHT_POS_X()						(g_stPipWinData.stPbpRightWinPosX)
#define GET_MDOUSER_PBP_RIGHT_POS_Y()						(g_stPipWinData.stPbpRightWinPosY)
#define GET_MDOUSER_PBP_RIGHT_SIZE_X()						(g_stPipWinData.stPbpRightWinSizeX)
#define GET_MDOUSER_PBP_RIGHT_SIZE_Y()						(g_stPipWinData.stPbpRightWinSizeY)

#define GET_MDOUSER_PBP_TOP_POS_X()							(g_stPipWinData.stPbpTopWinPosX)
#define GET_MDOUSER_PBP_TOP_POS_Y()							(g_stPipWinData.stPbpTopWinPosY)
#define GET_MDOUSER_PBP_TOP_SIZE_X()						(g_stPipWinData.stPbpTopWinSizeX)
#define GET_MDOUSER_PBP_TOP_SIZE_Y()						(g_stPipWinData.stPbpTopWinSizeY)

#define GET_MDOUSER_PBP_BOTTOM_POS_X()						(g_stPipWinData.stPbpBomWinPosX)
#define GET_MDOUSER_PBP_BOTTOM_POS_Y()						(g_stPipWinData.stPbpBomWinPosY)
#define GET_MDOUSER_PBP_BOTTOM_SIZE_X()						(g_stPipWinData.stPbpBomWinSizeX)
#define GET_MDOUSER_PBP_BOTTOM_SIZE_Y()						(g_stPipWinData.stPbpBomWinSizeY)

#define SET_MDOUSER_PBP_LEFT_POS_X(x)						(g_stPipWinData.stPbpLeftWinPosX = x)
#define SET_MDOUSER_PBP_LEFT_POS_Y(x)						(g_stPipWinData.stPbpLeftWinPosY = x)
#define SET_MDOUSER_PBP_LEFT_SIZE_X(x)						(g_stPipWinData.stPbpLeftWinSizeX = x)
#define SET_MDOUSER_PBP_LEFT_SIZE_Y(x)						(g_stPipWinData.stPbpLeftWinSizeY = x)

#define SET_MDOUSER_PBP_RIGHT_POS_X(x)						(g_stPipWinData.stPbpRightWinPosX = x)
#define SET_MDOUSER_PBP_RIGHT_POS_Y(x)						(g_stPipWinData.stPbpRightWinPosY = x)
#define SET_MDOUSER_PBP_RIGHT_SIZE_X(x)						(g_stPipWinData.stPbpRightWinSizeX = x)
#define SET_MDOUSER_PBP_RIGHT_SIZE_Y(x)						(g_stPipWinData.stPbpRightWinSizeY = x)

#define SET_MDOUSER_PBP_TOP_POS_X(x)						(g_stPipWinData.stPbpTopWinPosX = x)
#define SET_MDOUSER_PBP_TOP_POS_Y(x)						(g_stPipWinData.stPbpTopWinPosY = x)
#define SET_MDOUSER_PBP_TOP_SIZE_X(x)						(g_stPipWinData.stPbpTopWinSizeX = x)
#define SET_MDOUSER_PBP_TOP_SIZE_Y(x)						(g_stPipWinData.stPbpTopWinSizeY = x)

#define SET_MDOUSER_PBP_BOTTOM_POS_X(x)						(g_stPipWinData.stPbpBomWinPosX = x)
#define SET_MDOUSER_PBP_BOTTOM_POS_Y(x)						(g_stPipWinData.stPbpBomWinPosY = x)
#define SET_MDOUSER_PBP_BOTTOM_SIZE_X(x)					(g_stPipWinData.stPbpBomWinSizeX = x)
#define SET_MDOUSER_PBP_BOTTOM_SIZE_Y(x)					(g_stPipWinData.stPbpBomWinSizeY = x)


#define SET_MDOUSER_OUTPUT_HWIDTH(x)                     	(g_stFourPortSplitData.stActiveWidth = x)
#define SET_MDOUSER_OUTPUT_VHEIGHT(x)                     	(g_stFourPortSplitData.stActiveHeight = x)
#define SET_MDOUSER_FIRST_HWIDTH(x)                     	(g_stFourPortSplitData.stFirstDisplayWidth = x)
#define SET_MDOUSER_FIRST_VHEIGHT(x)                     	(g_stFourPortSplitData.stFirstDisplayHehght = x)
#define SET_MDOUSER_SECOND_HWIDTH(x)                     	(g_stFourPortSplitData.stSecondDisplayWidth = x)
#define SET_MDOUSER_SECOND_VHEIGHT(x)                     	(g_stFourPortSplitData.stSecondDisplayHehght = x)
#define SET_MDOUSER_THIRD_HWIDTH(x)                     	(g_stFourPortSplitData.stThirdDisplayWidth = x)
#define SET_MDOUSER_THIRD_VHEIGHT(x)                     	(g_stFourPortSplitData.stThirdDisplayHehght = x)
#define SET_MDOUSER_FOURTH_HWIDTH(x)                     	(g_stFourPortSplitData.stFourthDisplayWidth = x)
#define SET_MDOUSER_FOURTH_VHEIGHT(x)                     	(g_stFourPortSplitData.stFourthDisplayHehght = x)


#define SET_MDOUSER_FIRST_REGION_HSTART(x)                	(g_stFourPortSplitData.stFirstRegionWidthStart = x)
#define SET_MDOUSER_FIRST_REGION_VSTART(x)               	(g_stFourPortSplitData.stFirstRegionHeightStart = x)
#define SET_MDOUSER_SECOND_REGION_HSTART(x)               	(g_stFourPortSplitData.stSecondRegionWidthStart = x)
#define SET_MDOUSER_SECOND_REGION_VSTART(x)              	(g_stFourPortSplitData.stSecondRegionHeightStart = x)
#define SET_MDOUSER_THIRD_REGION_HSTART(x)                	(g_stFourPortSplitData.stThirdRegionWidthStart = x)
#define SET_MDOUSER_THIRD_REGION_VSTART(x)               	(g_stFourPortSplitData.stThirdRegionHeightStart = x)
#define SET_MDOUSER_FOURTH_REGION_HSTART(x)               	(g_stFourPortSplitData.stFourthRegionWidthStart = x)
#define SET_MDOUSER_FOURTH_REGION_VSTART(x)              	(g_stFourPortSplitData.stFourthRegionHeightStart = x)

#define GET_PBP_H_START_ADJ()								(PBP_H_startAdj)
#define GET_PBP_V_START_ADJ()								(PBP_V_startAdj)
#define SET_PBP_H_START_ADJ(X)								(PBP_H_startAdj = X)
#define SET_PBP_V_START_ADJ(X)								(PBP_V_startAdj = X)

#endif

#endif
//--------------------------------------------------
// Macros of MDomain Input info. modification
//--------------------------------------------------

#define SET_MDOMAIN_OUTPUT_HSTART(x)                   (g_stMDomainOutputData.usHStart = (x))
#define SET_MDOMAIN_OUTPUT_HBSTART(x)                  (g_stMDomainOutputData.usHBackStart = (x))
#define SET_MDOMAIN_OUTPUT_HWIDTH(x)                   (g_stMDomainOutputData.usHWidth = (x))
#define SET_MDOMAIN_OUTPUT_HBWIDTH(x)                  (g_stMDomainOutputData.usHBackWidth = (x))
#define SET_MDOMAIN_OUTPUT_HTOTAL(x)                   (g_stMDomainOutputData.usHTotal = (x))

#define SET_MDOMAIN_OUTPUT_VSTART(x)                   (g_stMDomainOutputData.usVStart = (x))
#define SET_MDOMAIN_OUTPUT_VBSTART(x)                  (g_stMDomainOutputData.usVBackStart = (x))
#define SET_MDOMAIN_OUTPUT_VHEIGHT(x)                  (g_stMDomainOutputData.usVHeight = (x))
#define SET_MDOMAIN_OUTPUT_VBHEIGHT(x)                 (g_stMDomainOutputData.usVBackHeight = (x))
#define SET_MDOMAIN_OUTPUT_VTOTAL(x)                   (g_stMDomainOutputData.usVTotal = (x))

#define GET_MDOMAIN_DISPLAY_MODE()                     (g_stMDomainInfo.enumDisplayMode)
#define SET_MDOMAIN_DISPLAY_MODE(x)                    (g_stMDomainInfo.enumDisplayMode = (x))
#define CLR_MDOMAIN_DISPLAY_MODE()                     (g_stMDomainInfo.enumDisplayMode = 0)

//--------------------------------------------------
// Macros of D Clock Freq. Info.
//--------------------------------------------------
#define GET_D_CLK_FREQ()                               (g_ulDClkFreq)


#define GET_MEMORY_DVF_SELECT()                        (g_stMDomainInfo.b3DVFSelect)


//****************************************************************************
// INTERFACE VARIABLE DECLARATIONS
//****************************************************************************

extern StructMDomainInfo g_stMDomainInfo;
extern StructTimingInfo g_stMDomainInputData;
extern StructDisplayInfo g_stMDomainOutputData;
extern StructDisplayInfo g_stMDoUserOutputData;
extern StructFourPortSplit g_stFourPortSplitData;
extern PipWinSizeSt g_stPipWinData;

extern u16 PBP_H_startAdj;
extern u16 PBP_V_startAdj;

extern WORD MDouserHwidth;
extern WORD MDouserVheight;
extern WORD MDouserHstart;
extern WORD MDouserVstart;


extern DWORD g_ulDClkFreq;

//****************************************************************************
// INTERFACE FUNCTIONS
//****************************************************************************
extern bit ScalerMDomainControl(void);
extern void ScalerMDomainCheckDisplayFormat(EnumDisplayRegion enumDisplayRegion);
extern void ScalerMDomainSetDisplayTimingGenBackground(EnumDisplayMode enumDisplayMode);

#if((_PIP_DISPLAY_SUPPORT == _ON) || (_PBP_LR_DISPLAY_SUPPORT == _ON))
extern void ScalerMDomainSetSubBackground(void);
extern void ScalerMDomainGetSubBackground(StructTimingFormat *pstTimingFormat);
#endif

#if((_PIP_DISPLAY_SUPPORT == _ON) || (_PBP_LR_DISPLAY_SUPPORT == _ON) || (_4P_DISPLAY_SUPPORT == _ON))
extern void ScalerMDomainSetSubActiveRegion(void);
#endif

extern void ScalerMDomainSetMemoryDataBit(BYTE ucColorDepth);
extern WORD ScalerMDomainGetVerticalAdjustLimit(EnumSourceTypeDef enumSourceTypeDef);

#if(_I_DITHER_SUPPORT == _ON)
extern BYTE ScalerMDomainGetColorDepth(void);
#endif

#if(_ASPECT_ORIGINAL_MODE_SUPPORT == _ON)
extern void ScalerMDomainAspectOriginMode(bit bOn);
#endif

#if(_OD_SUPPORT == _ON)
#if(_FRC_SUPPORT == _ON)
extern void ScalerMDomainReleaseFRCMemoryBW(EnumInputDataPath enumInputPath);
#endif
#endif

