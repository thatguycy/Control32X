#include <lvgl.h>
#include <LGFX.hpp>
#include <display_driver.h>
#include <WiFi.h>
#include "ui.h"
#include "ui_helpers.h"
#include "time.h"
#include <Arduino.h>

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
///////////////////////////////////////////////////

///////////////////// WIRELESS ////////////////////
const char* ssid = "SSID"; // Your SSID Here
const char* password = "PASSWORD"; // Your Password Here 

const char* ntpServer = "pool.ntp.org"; // This Time Server Should Work Fine!
const long  gmtOffset_sec = 0; // Change to your local time zone offset
const int   daylightOffset_sec = 3600; // Change to your daylight offset
///////////////////////////////////////////////////

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
        _ui_screen_change(ui_MainPanelOne, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
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

///////////////////////////////////////////////////

LGFX lcd;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t *buf = (lv_color_t *)heap_caps_malloc(TFT_WIDTH * 20 * sizeof(lv_color_t), MALLOC_CAP_DMA);

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

    lv_obj_add_event_cb(ui_ArrowRight1, ui_event_ArrowRight1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArrowLeft1, ui_event_ArrowLeft1, LV_EVENT_ALL, NULL);

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

    lv_obj_add_event_cb(ui_ArrowRight4, ui_event_ArrowRight4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ArrowLeft4, ui_event_ArrowLeft4, LV_EVENT_ALL, NULL);

}



void setup()
{
    Serial.begin(115200);
    Serial.printf("Version: %d.%d.%d\n", lv_version_major(), lv_version_minor(), lv_version_patch());

    lv_init();
    lv_theme_default_init(NULL, lv_color_hex(0xFFEB3B), lv_color_hex(0xFF7043), 1, LV_FONT_DEFAULT);

#if LV_USE_LOG != 0
    lv_log_register_print_cb(my_print); /* register print function for debugging */
#endif

    lcd.init();

    uint16_t data[8]{1020, 44, 1020, 645, 5, 44, 3, 647};
    lcd.setTouchCalibrate(data);

    lv_disp_draw_buf_init(&draw_buf, buf, NULL, TFT_WIDTH * 20);

    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = TFT_WIDTH;
    disp_drv.ver_res = TFT_HEIGHT;
    disp_drv.flush_cb = flush_pixels;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = touchpad_read;
    lv_indev_drv_register(&indev_drv);

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_LoadingScreen_screen_init();
    ui_MainPanelOne_screen_init();
    ui_PanelTwo_screen_init();
    ui_PanelThree_screen_init();
    ui_Settings_screen_init();
    lv_disp_load_scr(ui_LoadingScreen);

    WiFi.mode(WIFI_STA); //Optional
    WiFi.begin(ssid, password);

    delay(5000);
    _ui_screen_change(ui_MainPanelOne, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
}

unsigned long timer1;
void loop()
{
    lv_label_set_text(ui_IPAddressText, WiFi.localIP().toString().c_str());
    lv_timer_handler();

    if (millis() - timer1 > 2000)
    {
        timer1 = millis();
        // lv_roller_set_selected(roller1, random(0, 6), LV_ANIM_ON);
    }
}

void _ui_screen_change(lv_obj_t * target, lv_scr_load_anim_t fademode, int spd, int delay)
{
    lv_scr_load_anim(target, fademode, spd, delay, false);
}
