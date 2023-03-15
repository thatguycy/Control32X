// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.4
// PROJECT: Control32X

#ifndef _CONTROL32X_UI_H
#define _CONTROL32X_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

extern lv_obj_t * ui_LoadingScreen;
extern lv_obj_t * ui_OSName;
extern lv_obj_t * ui_VersionText;
extern lv_obj_t * ui_MainPanelOne;
extern lv_obj_t * ui_TopBar;
extern lv_obj_t * ui_TBT1;
extern lv_obj_t * ui_IPAddressText;
void ui_event_ArrowRight1(lv_event_t * e);
extern lv_obj_t * ui_ArrowRight1;
void ui_event_ArrowLeft1(lv_event_t * e);
extern lv_obj_t * ui_ArrowLeft1;
extern lv_obj_t * ui_ArrowLeftLabel1;
extern lv_obj_t * ui_ArrowRightLabel1;
extern lv_obj_t * ui_LightLabel1;
void ui_event_Switch2(lv_event_t * e);
extern lv_obj_t * ui_Switch2;
extern lv_obj_t * ui_PanelTwo;
extern lv_obj_t * ui_TopBar1;
extern lv_obj_t * ui_TBT2;
extern lv_obj_t * ui_PageNumber2;
void ui_event_ArrowRight2(lv_event_t * e);
extern lv_obj_t * ui_ArrowRight2;
void ui_event_ArrowLeft2(lv_event_t * e);
extern lv_obj_t * ui_ArrowLeft2;
extern lv_obj_t * ui_ArrowLeftLabel2;
extern lv_obj_t * ui_ArrowRightLabel2;
extern lv_obj_t * ui_PanelThree;
extern lv_obj_t * ui_TopBar2;
extern lv_obj_t * ui_TBT3;
extern lv_obj_t * ui_PageNumber3;
void ui_event_ArrowRight3(lv_event_t * e);
extern lv_obj_t * ui_ArrowRight3;
void ui_event_ArrowLeft3(lv_event_t * e);
extern lv_obj_t * ui_ArrowLeft3;
extern lv_obj_t * ui_ArrowLeftLabel3;
extern lv_obj_t * ui_ArrowRightLabel3;
extern lv_obj_t * ui_Settings;
extern lv_obj_t * ui_TopBar3;
extern lv_obj_t * ui_TBT4;
extern lv_obj_t * ui_PageNumberSettings;
void ui_event_ArrowRight4(lv_event_t * e);
extern lv_obj_t * ui_ArrowRight4;
void ui_event_ArrowLeft4(lv_event_t * e);
extern lv_obj_t * ui_ArrowLeft4;
extern lv_obj_t * ui_ArrowLeftLabel4;
extern lv_obj_t * ui_ArrowRightLabel4;
void ui_event_Restart(lv_event_t * e);
extern lv_obj_t * ui_Restart;
extern lv_obj_t * ui_RestartLabel;
extern lv_obj_t * ui_WirelessSSID;
extern lv_obj_t * ui_TopBar4;
extern lv_obj_t * ui_TBT5;
extern lv_obj_t * ui_WirelessSetup1;
void ui_event_ArrowRight5(lv_event_t * e);
extern lv_obj_t * ui_ArrowRight5;
void ui_event_ArrowLeft5(lv_event_t * e);
extern lv_obj_t * ui_ArrowLeft5;
extern lv_obj_t * ui_ArrowLeftLabel5;
extern lv_obj_t * ui_ArrowRightLabel5;
extern lv_obj_t * ui_NetworkSSID;
extern lv_obj_t * ui_Keyboard1;
extern lv_obj_t * ui_WirelessPSWD;
extern lv_obj_t * ui_TopBar5;
extern lv_obj_t * ui_TBT6;
extern lv_obj_t * ui_WirelessSetup2;
void ui_event_ArrowRight6(lv_event_t * e);
extern lv_obj_t * ui_ArrowRight6;
void ui_event_ArrowLeft6(lv_event_t * e);
extern lv_obj_t * ui_ArrowLeft6;
extern lv_obj_t * ui_ArrowLeftLabel6;
extern lv_obj_t * ui_ArrowRightLabel6;
extern lv_obj_t * ui_NetworkPSWD;
extern lv_obj_t * ui_Keyboard3;
void ui_event_WifiConnect(lv_event_t * e);
extern lv_obj_t * ui_WifiConnect;
extern lv_obj_t * ui_WifiConnectLabel;

void LightOnIO(lv_event_t * e);
void LightOffIO(lv_event_t * e);
void LocalRestart(lv_event_t * e);
void SaveSSID(lv_event_t * e);
void ConnectToWireless(lv_event_t * e);





void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
