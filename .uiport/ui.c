// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.3.4
// PROJECT: Control32X

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_LoadingScreen;
lv_obj_t * ui_OSName;
lv_obj_t * ui_VersionText;
lv_obj_t * ui_MainPanelOne;
lv_obj_t * ui_TopBar;
lv_obj_t * ui_TBT1;
lv_obj_t * ui_IPAddressText;
void ui_event_ArrowRight1(lv_event_t * e);
lv_obj_t * ui_ArrowRight1;
void ui_event_ArrowLeft1(lv_event_t * e);
lv_obj_t * ui_ArrowLeft1;
lv_obj_t * ui_ArrowLeftLabel1;
lv_obj_t * ui_ArrowRightLabel1;
lv_obj_t * ui_LightLabel1;
void ui_event_Switch2(lv_event_t * e);
lv_obj_t * ui_Switch2;
lv_obj_t * ui_PanelTwo;
lv_obj_t * ui_TopBar1;
lv_obj_t * ui_TBT2;
lv_obj_t * ui_PageNumber2;
void ui_event_ArrowRight2(lv_event_t * e);
lv_obj_t * ui_ArrowRight2;
void ui_event_ArrowLeft2(lv_event_t * e);
lv_obj_t * ui_ArrowLeft2;
lv_obj_t * ui_ArrowLeftLabel2;
lv_obj_t * ui_ArrowRightLabel2;
lv_obj_t * ui_PanelThree;
lv_obj_t * ui_TopBar2;
lv_obj_t * ui_TBT3;
lv_obj_t * ui_PageNumber3;
void ui_event_ArrowRight3(lv_event_t * e);
lv_obj_t * ui_ArrowRight3;
void ui_event_ArrowLeft3(lv_event_t * e);
lv_obj_t * ui_ArrowLeft3;
lv_obj_t * ui_ArrowLeftLabel3;
lv_obj_t * ui_ArrowRightLabel3;
lv_obj_t * ui_Settings;
lv_obj_t * ui_TopBar3;
lv_obj_t * ui_TBT4;
lv_obj_t * ui_PageNumberSettings;
void ui_event_ArrowRight4(lv_event_t * e);
lv_obj_t * ui_ArrowRight4;
void ui_event_ArrowLeft4(lv_event_t * e);
lv_obj_t * ui_ArrowLeft4;
lv_obj_t * ui_ArrowLeftLabel4;
lv_obj_t * ui_ArrowRightLabel4;
void ui_event_Restart(lv_event_t * e);
lv_obj_t * ui_Restart;
lv_obj_t * ui_RestartLabel;
lv_obj_t * ui_WirelessSSID;
lv_obj_t * ui_TopBar4;
lv_obj_t * ui_TBT5;
lv_obj_t * ui_WirelessSetup1;
void ui_event_ArrowRight5(lv_event_t * e);
lv_obj_t * ui_ArrowRight5;
void ui_event_ArrowLeft5(lv_event_t * e);
lv_obj_t * ui_ArrowLeft5;
lv_obj_t * ui_ArrowLeftLabel5;
lv_obj_t * ui_ArrowRightLabel5;
lv_obj_t * ui_NetworkSSID;
lv_obj_t * ui_Keyboard1;
lv_obj_t * ui_WirelessPSWD;
lv_obj_t * ui_TopBar5;
lv_obj_t * ui_TBT6;
lv_obj_t * ui_WirelessSetup2;
void ui_event_ArrowRight6(lv_event_t * e);
lv_obj_t * ui_ArrowRight6;
void ui_event_ArrowLeft6(lv_event_t * e);
lv_obj_t * ui_ArrowLeft6;
lv_obj_t * ui_ArrowLeftLabel6;
lv_obj_t * ui_ArrowRightLabel6;
lv_obj_t * ui_NetworkPSWD;
lv_obj_t * ui_Keyboard3;
void ui_event_WifiConnect(lv_event_t * e);
lv_obj_t * ui_WifiConnect;
lv_obj_t * ui_WifiConnectLabel;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_ArrowRight1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PanelTwo, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_ArrowLeft1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Settings, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Switch2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        LightOnIO(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        LightOffIO(e);
    }
}
void ui_event_ArrowRight2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PanelThree, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_ArrowLeft2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MainPanelOne, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_ArrowRight3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Settings, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_ArrowLeft3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PanelTwo, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_ArrowRight4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_WirelessSSID, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_ArrowLeft4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_PanelThree, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Restart(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        LocalRestart(e);
    }
}
void ui_event_ArrowRight5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_WirelessPSWD, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
        SaveSSID(e);
    }
}
void ui_event_ArrowLeft5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Settings, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_ArrowRight6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MainPanelOne, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_ArrowLeft6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_WirelessSSID, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_WifiConnect(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ConnectToWireless(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_LoadingScreen_screen_init(void)
{
    ui_LoadingScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_LoadingScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_OSName = lv_label_create(ui_LoadingScreen);
    lv_obj_set_width(ui_OSName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_OSName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_OSName, 0);
    lv_obj_set_y(ui_OSName, -15);
    lv_obj_set_align(ui_OSName, LV_ALIGN_CENTER);
    lv_label_set_text(ui_OSName, "Control32X");
    lv_obj_set_style_text_font(ui_OSName, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_VersionText = lv_label_create(ui_LoadingScreen);
    lv_obj_set_width(ui_VersionText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_VersionText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_VersionText, 0);
    lv_obj_set_y(ui_VersionText, 15);
    lv_obj_set_align(ui_VersionText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_VersionText, "Loading for ESP32-S2");
    lv_obj_set_style_text_font(ui_VersionText, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_MainPanelOne_screen_init(void)
{
    ui_MainPanelOne = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MainPanelOne, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopBar = lv_obj_create(ui_MainPanelOne);
    lv_obj_set_width(ui_TopBar, 343);
    lv_obj_set_height(ui_TopBar, 50);
    lv_obj_set_x(ui_TopBar, 0);
    lv_obj_set_y(ui_TopBar, -155);
    lv_obj_set_align(ui_TopBar, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopBar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopBar, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopBar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TopBar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TopBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_TopBar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_TopBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TBT1 = lv_label_create(ui_MainPanelOne);
    lv_obj_set_width(ui_TBT1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TBT1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TBT1, 8);
    lv_obj_set_y(ui_TBT1, -145);
    lv_obj_set_align(ui_TBT1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TBT1, "Control32X");

    ui_IPAddressText = lv_label_create(ui_MainPanelOne);
    lv_obj_set_width(ui_IPAddressText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IPAddressText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IPAddressText, -9);
    lv_obj_set_y(ui_IPAddressText, -145);
    lv_obj_set_align(ui_IPAddressText, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_IPAddressText, "0.0.0.0");

    ui_ArrowRight1 = lv_btn_create(ui_MainPanelOne);
    lv_obj_set_width(ui_ArrowRight1, 146);
    lv_obj_set_height(ui_ArrowRight1, 31);
    lv_obj_set_x(ui_ArrowRight1, 80);
    lv_obj_set_y(ui_ArrowRight1, 137);
    lv_obj_set_align(ui_ArrowRight1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowRight1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowRight1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowRight1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowRight1, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowRight1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeft1 = lv_btn_create(ui_MainPanelOne);
    lv_obj_set_width(ui_ArrowLeft1, 146);
    lv_obj_set_height(ui_ArrowLeft1, 31);
    lv_obj_set_x(ui_ArrowLeft1, -80);
    lv_obj_set_y(ui_ArrowLeft1, 137);
    lv_obj_set_align(ui_ArrowLeft1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowLeft1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowLeft1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowLeft1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowLeft1, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowLeft1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeftLabel1 = lv_label_create(ui_MainPanelOne);
    lv_obj_set_width(ui_ArrowLeftLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowLeftLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowLeftLabel1, -80);
    lv_obj_set_y(ui_ArrowLeftLabel1, 137);
    lv_obj_set_align(ui_ArrowLeftLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowLeftLabel1, "<");
    lv_obj_set_style_text_font(ui_ArrowLeftLabel1, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowRightLabel1 = lv_label_create(ui_MainPanelOne);
    lv_obj_set_width(ui_ArrowRightLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowRightLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowRightLabel1, 80);
    lv_obj_set_y(ui_ArrowRightLabel1, 137);
    lv_obj_set_align(ui_ArrowRightLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowRightLabel1, ">");
    lv_obj_set_style_text_font(ui_ArrowRightLabel1, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LightLabel1 = lv_label_create(ui_MainPanelOne);
    lv_obj_set_width(ui_LightLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LightLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LightLabel1, 0);
    lv_obj_set_y(ui_LightLabel1, -95);
    lv_obj_set_align(ui_LightLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LightLabel1, "Main Light");
    lv_obj_set_style_text_font(ui_LightLabel1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Switch2 = lv_switch_create(ui_MainPanelOne);
    lv_obj_set_width(ui_Switch2, 164);
    lv_obj_set_height(ui_Switch2, 39);
    lv_obj_set_x(ui_Switch2, 0);
    lv_obj_set_y(ui_Switch2, -60);
    lv_obj_set_align(ui_Switch2, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_ArrowRight1, ui_event_ArrowRight1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArrowLeft1, ui_event_ArrowLeft1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch2, ui_event_Switch2, LV_EVENT_ALL, NULL);

}
void ui_PanelTwo_screen_init(void)
{
    ui_PanelTwo = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PanelTwo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopBar1 = lv_obj_create(ui_PanelTwo);
    lv_obj_set_width(ui_TopBar1, 343);
    lv_obj_set_height(ui_TopBar1, 50);
    lv_obj_set_x(ui_TopBar1, 0);
    lv_obj_set_y(ui_TopBar1, -155);
    lv_obj_set_align(ui_TopBar1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopBar1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopBar1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopBar1, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopBar1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TopBar1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TopBar1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_TopBar1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_TopBar1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TBT2 = lv_label_create(ui_PanelTwo);
    lv_obj_set_width(ui_TBT2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TBT2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TBT2, 8);
    lv_obj_set_y(ui_TBT2, -145);
    lv_obj_set_align(ui_TBT2, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TBT2, "Control32X");

    ui_PageNumber2 = lv_label_create(ui_PanelTwo);
    lv_obj_set_width(ui_PageNumber2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PageNumber2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PageNumber2, -9);
    lv_obj_set_y(ui_PageNumber2, -145);
    lv_obj_set_align(ui_PageNumber2, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_PageNumber2, "Page 2");

    ui_ArrowRight2 = lv_btn_create(ui_PanelTwo);
    lv_obj_set_width(ui_ArrowRight2, 146);
    lv_obj_set_height(ui_ArrowRight2, 31);
    lv_obj_set_x(ui_ArrowRight2, 80);
    lv_obj_set_y(ui_ArrowRight2, 137);
    lv_obj_set_align(ui_ArrowRight2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowRight2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowRight2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowRight2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowRight2, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowRight2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeft2 = lv_btn_create(ui_PanelTwo);
    lv_obj_set_width(ui_ArrowLeft2, 146);
    lv_obj_set_height(ui_ArrowLeft2, 31);
    lv_obj_set_x(ui_ArrowLeft2, -80);
    lv_obj_set_y(ui_ArrowLeft2, 137);
    lv_obj_set_align(ui_ArrowLeft2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowLeft2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowLeft2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowLeft2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowLeft2, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowLeft2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeftLabel2 = lv_label_create(ui_PanelTwo);
    lv_obj_set_width(ui_ArrowLeftLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowLeftLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowLeftLabel2, -80);
    lv_obj_set_y(ui_ArrowLeftLabel2, 137);
    lv_obj_set_align(ui_ArrowLeftLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowLeftLabel2, "<");
    lv_obj_set_style_text_font(ui_ArrowLeftLabel2, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowRightLabel2 = lv_label_create(ui_PanelTwo);
    lv_obj_set_width(ui_ArrowRightLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowRightLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowRightLabel2, 80);
    lv_obj_set_y(ui_ArrowRightLabel2, 137);
    lv_obj_set_align(ui_ArrowRightLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowRightLabel2, ">");
    lv_obj_set_style_text_font(ui_ArrowRightLabel2, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ArrowRight2, ui_event_ArrowRight2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArrowLeft2, ui_event_ArrowLeft2, LV_EVENT_ALL, NULL);

}
void ui_PanelThree_screen_init(void)
{
    ui_PanelThree = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_PanelThree, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopBar2 = lv_obj_create(ui_PanelThree);
    lv_obj_set_width(ui_TopBar2, 343);
    lv_obj_set_height(ui_TopBar2, 50);
    lv_obj_set_x(ui_TopBar2, 0);
    lv_obj_set_y(ui_TopBar2, -155);
    lv_obj_set_align(ui_TopBar2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopBar2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopBar2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopBar2, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopBar2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TopBar2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TopBar2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_TopBar2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_TopBar2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TBT3 = lv_label_create(ui_PanelThree);
    lv_obj_set_width(ui_TBT3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TBT3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TBT3, 8);
    lv_obj_set_y(ui_TBT3, -145);
    lv_obj_set_align(ui_TBT3, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TBT3, "Control32X");

    ui_PageNumber3 = lv_label_create(ui_PanelThree);
    lv_obj_set_width(ui_PageNumber3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PageNumber3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PageNumber3, -9);
    lv_obj_set_y(ui_PageNumber3, -145);
    lv_obj_set_align(ui_PageNumber3, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_PageNumber3, "Page 3");

    ui_ArrowRight3 = lv_btn_create(ui_PanelThree);
    lv_obj_set_width(ui_ArrowRight3, 146);
    lv_obj_set_height(ui_ArrowRight3, 31);
    lv_obj_set_x(ui_ArrowRight3, 80);
    lv_obj_set_y(ui_ArrowRight3, 137);
    lv_obj_set_align(ui_ArrowRight3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowRight3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowRight3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowRight3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowRight3, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowRight3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeft3 = lv_btn_create(ui_PanelThree);
    lv_obj_set_width(ui_ArrowLeft3, 146);
    lv_obj_set_height(ui_ArrowLeft3, 31);
    lv_obj_set_x(ui_ArrowLeft3, -80);
    lv_obj_set_y(ui_ArrowLeft3, 137);
    lv_obj_set_align(ui_ArrowLeft3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowLeft3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowLeft3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowLeft3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowLeft3, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowLeft3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeftLabel3 = lv_label_create(ui_PanelThree);
    lv_obj_set_width(ui_ArrowLeftLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowLeftLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowLeftLabel3, -80);
    lv_obj_set_y(ui_ArrowLeftLabel3, 137);
    lv_obj_set_align(ui_ArrowLeftLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowLeftLabel3, "<");
    lv_obj_set_style_text_font(ui_ArrowLeftLabel3, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowRightLabel3 = lv_label_create(ui_PanelThree);
    lv_obj_set_width(ui_ArrowRightLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowRightLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowRightLabel3, 80);
    lv_obj_set_y(ui_ArrowRightLabel3, 137);
    lv_obj_set_align(ui_ArrowRightLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowRightLabel3, ">");
    lv_obj_set_style_text_font(ui_ArrowRightLabel3, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ArrowRight3, ui_event_ArrowRight3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArrowLeft3, ui_event_ArrowLeft3, LV_EVENT_ALL, NULL);

}
void ui_Settings_screen_init(void)
{
    ui_Settings = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Settings, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopBar3 = lv_obj_create(ui_Settings);
    lv_obj_set_width(ui_TopBar3, 343);
    lv_obj_set_height(ui_TopBar3, 50);
    lv_obj_set_x(ui_TopBar3, 0);
    lv_obj_set_y(ui_TopBar3, -155);
    lv_obj_set_align(ui_TopBar3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopBar3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopBar3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopBar3, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopBar3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TopBar3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TopBar3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_TopBar3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_TopBar3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TBT4 = lv_label_create(ui_Settings);
    lv_obj_set_width(ui_TBT4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TBT4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TBT4, 8);
    lv_obj_set_y(ui_TBT4, -145);
    lv_obj_set_align(ui_TBT4, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TBT4, "Control32X");

    ui_PageNumberSettings = lv_label_create(ui_Settings);
    lv_obj_set_width(ui_PageNumberSettings, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PageNumberSettings, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PageNumberSettings, -9);
    lv_obj_set_y(ui_PageNumberSettings, -145);
    lv_obj_set_align(ui_PageNumberSettings, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_PageNumberSettings, "Settings");

    ui_ArrowRight4 = lv_btn_create(ui_Settings);
    lv_obj_set_width(ui_ArrowRight4, 146);
    lv_obj_set_height(ui_ArrowRight4, 31);
    lv_obj_set_x(ui_ArrowRight4, 80);
    lv_obj_set_y(ui_ArrowRight4, 137);
    lv_obj_set_align(ui_ArrowRight4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowRight4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowRight4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowRight4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowRight4, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowRight4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeft4 = lv_btn_create(ui_Settings);
    lv_obj_set_width(ui_ArrowLeft4, 146);
    lv_obj_set_height(ui_ArrowLeft4, 31);
    lv_obj_set_x(ui_ArrowLeft4, -80);
    lv_obj_set_y(ui_ArrowLeft4, 137);
    lv_obj_set_align(ui_ArrowLeft4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowLeft4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowLeft4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowLeft4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowLeft4, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowLeft4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeftLabel4 = lv_label_create(ui_Settings);
    lv_obj_set_width(ui_ArrowLeftLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowLeftLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowLeftLabel4, -80);
    lv_obj_set_y(ui_ArrowLeftLabel4, 137);
    lv_obj_set_align(ui_ArrowLeftLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowLeftLabel4, "<");
    lv_obj_set_style_text_font(ui_ArrowLeftLabel4, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowRightLabel4 = lv_label_create(ui_Settings);
    lv_obj_set_width(ui_ArrowRightLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowRightLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowRightLabel4, 80);
    lv_obj_set_y(ui_ArrowRightLabel4, 137);
    lv_obj_set_align(ui_ArrowRightLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowRightLabel4, ">");
    lv_obj_set_style_text_font(ui_ArrowRightLabel4, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Restart = lv_btn_create(ui_Settings);
    lv_obj_set_width(ui_Restart, 183);
    lv_obj_set_height(ui_Restart, 31);
    lv_obj_set_x(ui_Restart, 0);
    lv_obj_set_y(ui_Restart, 90);
    lv_obj_set_align(ui_Restart, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Restart, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Restart, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Restart, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Restart, lv_color_hex(0x7D0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Restart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RestartLabel = lv_label_create(ui_Settings);
    lv_obj_set_width(ui_RestartLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_RestartLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_RestartLabel, 0);
    lv_obj_set_y(ui_RestartLabel, 90);
    lv_obj_set_align(ui_RestartLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_RestartLabel, "!!!   Reboot C32X   !!!");
    lv_obj_set_style_text_font(ui_RestartLabel, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ArrowRight4, ui_event_ArrowRight4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArrowLeft4, ui_event_ArrowLeft4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Restart, ui_event_Restart, LV_EVENT_ALL, NULL);

}
void ui_WirelessSSID_screen_init(void)
{
    ui_WirelessSSID = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_WirelessSSID, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopBar4 = lv_obj_create(ui_WirelessSSID);
    lv_obj_set_width(ui_TopBar4, 343);
    lv_obj_set_height(ui_TopBar4, 50);
    lv_obj_set_x(ui_TopBar4, 0);
    lv_obj_set_y(ui_TopBar4, -155);
    lv_obj_set_align(ui_TopBar4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopBar4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopBar4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopBar4, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopBar4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TopBar4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TopBar4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_TopBar4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_TopBar4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TBT5 = lv_label_create(ui_WirelessSSID);
    lv_obj_set_width(ui_TBT5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TBT5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TBT5, 8);
    lv_obj_set_y(ui_TBT5, -145);
    lv_obj_set_align(ui_TBT5, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TBT5, "Control32X");

    ui_WirelessSetup1 = lv_label_create(ui_WirelessSSID);
    lv_obj_set_width(ui_WirelessSetup1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WirelessSetup1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WirelessSetup1, -9);
    lv_obj_set_y(ui_WirelessSetup1, -145);
    lv_obj_set_align(ui_WirelessSetup1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_WirelessSetup1, "Wireless Setup");

    ui_ArrowRight5 = lv_btn_create(ui_WirelessSSID);
    lv_obj_set_width(ui_ArrowRight5, 146);
    lv_obj_set_height(ui_ArrowRight5, 31);
    lv_obj_set_x(ui_ArrowRight5, 80);
    lv_obj_set_y(ui_ArrowRight5, 137);
    lv_obj_set_align(ui_ArrowRight5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowRight5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowRight5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowRight5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowRight5, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowRight5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeft5 = lv_btn_create(ui_WirelessSSID);
    lv_obj_set_width(ui_ArrowLeft5, 146);
    lv_obj_set_height(ui_ArrowLeft5, 31);
    lv_obj_set_x(ui_ArrowLeft5, -80);
    lv_obj_set_y(ui_ArrowLeft5, 137);
    lv_obj_set_align(ui_ArrowLeft5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowLeft5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowLeft5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowLeft5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowLeft5, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowLeft5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeftLabel5 = lv_label_create(ui_WirelessSSID);
    lv_obj_set_width(ui_ArrowLeftLabel5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowLeftLabel5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowLeftLabel5, -80);
    lv_obj_set_y(ui_ArrowLeftLabel5, 137);
    lv_obj_set_align(ui_ArrowLeftLabel5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowLeftLabel5, "<");
    lv_obj_set_style_text_font(ui_ArrowLeftLabel5, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowRightLabel5 = lv_label_create(ui_WirelessSSID);
    lv_obj_set_width(ui_ArrowRightLabel5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowRightLabel5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowRightLabel5, 80);
    lv_obj_set_y(ui_ArrowRightLabel5, 137);
    lv_obj_set_align(ui_ArrowRightLabel5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowRightLabel5, ">");
    lv_obj_set_style_text_font(ui_ArrowRightLabel5, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NetworkSSID = lv_textarea_create(ui_WirelessSSID);
    lv_obj_set_width(ui_NetworkSSID, 249);
    lv_obj_set_height(ui_NetworkSSID, LV_SIZE_CONTENT);    /// 70
    lv_obj_set_x(ui_NetworkSSID, 0);
    lv_obj_set_y(ui_NetworkSSID, -100);
    lv_obj_set_align(ui_NetworkSSID, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_NetworkSSID, "Network SSID");
    lv_textarea_set_one_line(ui_NetworkSSID, true);

    ui_Keyboard1 = lv_keyboard_create(ui_WirelessSSID);
    lv_obj_set_width(ui_Keyboard1, 300);
    lv_obj_set_height(ui_Keyboard1, 120);
    lv_obj_set_x(ui_Keyboard1, 0);
    lv_obj_set_y(ui_Keyboard1, 46);
    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_ArrowRight5, ui_event_ArrowRight5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArrowLeft5, ui_event_ArrowLeft5, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_Keyboard1, ui_NetworkSSID);

}
void ui_WirelessPSWD_screen_init(void)
{
    ui_WirelessPSWD = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_WirelessPSWD, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TopBar5 = lv_obj_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_TopBar5, 343);
    lv_obj_set_height(ui_TopBar5, 50);
    lv_obj_set_x(ui_TopBar5, 0);
    lv_obj_set_y(ui_TopBar5, -155);
    lv_obj_set_align(ui_TopBar5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TopBar5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_TopBar5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_TopBar5, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TopBar5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_TopBar5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_TopBar5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_TopBar5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_TopBar5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TBT6 = lv_label_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_TBT6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TBT6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TBT6, 8);
    lv_obj_set_y(ui_TBT6, -145);
    lv_obj_set_align(ui_TBT6, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_TBT6, "Control32X");

    ui_WirelessSetup2 = lv_label_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_WirelessSetup2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WirelessSetup2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WirelessSetup2, -9);
    lv_obj_set_y(ui_WirelessSetup2, -145);
    lv_obj_set_align(ui_WirelessSetup2, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_WirelessSetup2, "Wireless Setup");

    ui_ArrowRight6 = lv_btn_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_ArrowRight6, 146);
    lv_obj_set_height(ui_ArrowRight6, 31);
    lv_obj_set_x(ui_ArrowRight6, 80);
    lv_obj_set_y(ui_ArrowRight6, 137);
    lv_obj_set_align(ui_ArrowRight6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowRight6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowRight6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowRight6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowRight6, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowRight6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeft6 = lv_btn_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_ArrowLeft6, 146);
    lv_obj_set_height(ui_ArrowLeft6, 31);
    lv_obj_set_x(ui_ArrowLeft6, -80);
    lv_obj_set_y(ui_ArrowLeft6, 137);
    lv_obj_set_align(ui_ArrowLeft6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ArrowLeft6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ArrowLeft6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ArrowLeft6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ArrowLeft6, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ArrowLeft6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowLeftLabel6 = lv_label_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_ArrowLeftLabel6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowLeftLabel6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowLeftLabel6, -80);
    lv_obj_set_y(ui_ArrowLeftLabel6, 137);
    lv_obj_set_align(ui_ArrowLeftLabel6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowLeftLabel6, "<");
    lv_obj_set_style_text_font(ui_ArrowLeftLabel6, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ArrowRightLabel6 = lv_label_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_ArrowRightLabel6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ArrowRightLabel6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ArrowRightLabel6, 80);
    lv_obj_set_y(ui_ArrowRightLabel6, 137);
    lv_obj_set_align(ui_ArrowRightLabel6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ArrowRightLabel6, ">");
    lv_obj_set_style_text_font(ui_ArrowRightLabel6, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NetworkPSWD = lv_textarea_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_NetworkPSWD, 249);
    lv_obj_set_height(ui_NetworkPSWD, LV_SIZE_CONTENT);    /// 70
    lv_obj_set_x(ui_NetworkPSWD, 0);
    lv_obj_set_y(ui_NetworkPSWD, -100);
    lv_obj_set_align(ui_NetworkPSWD, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_NetworkPSWD, "Network Password");
    lv_textarea_set_one_line(ui_NetworkPSWD, true);
    lv_textarea_set_password_mode(ui_NetworkPSWD, true);

    ui_Keyboard3 = lv_keyboard_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_Keyboard3, 300);
    lv_obj_set_height(ui_Keyboard3, 120);
    lv_obj_set_x(ui_Keyboard3, 0);
    lv_obj_set_y(ui_Keyboard3, 46);
    lv_obj_set_align(ui_Keyboard3, LV_ALIGN_CENTER);

    ui_WifiConnect = lv_btn_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_WifiConnect, 183);
    lv_obj_set_height(ui_WifiConnect, 31);
    lv_obj_set_x(ui_WifiConnect, 0);
    lv_obj_set_y(ui_WifiConnect, -48);
    lv_obj_set_align(ui_WifiConnect, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WifiConnect, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WifiConnect, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_WifiConnect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_WifiConnect, lv_color_hex(0x530000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_WifiConnect, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiConnectLabel = lv_label_create(ui_WirelessPSWD);
    lv_obj_set_width(ui_WifiConnectLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiConnectLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WifiConnectLabel, 0);
    lv_obj_set_y(ui_WifiConnectLabel, -48);
    lv_obj_set_align(ui_WifiConnectLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WifiConnectLabel, "Connect");
    lv_obj_set_style_text_font(ui_WifiConnectLabel, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ArrowRight6, ui_event_ArrowRight6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArrowLeft6, ui_event_ArrowLeft6, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_Keyboard3, ui_NetworkPSWD);
    lv_obj_add_event_cb(ui_WifiConnect, ui_event_WifiConnect, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_LoadingScreen_screen_init();
    ui_MainPanelOne_screen_init();
    ui_PanelTwo_screen_init();
    ui_PanelThree_screen_init();
    ui_Settings_screen_init();
    ui_WirelessSSID_screen_init();
    ui_WirelessPSWD_screen_init();
    lv_disp_load_scr(ui_LoadingScreen);
}
