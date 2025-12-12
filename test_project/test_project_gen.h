/**
 * @file test_project_gen.h
 */

#ifndef TEST_PROJECT_GEN_H
#define TEST_PROJECT_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

#define WHITE lv_color_hex3(0xfff)

#define BLACK lv_color_hex3(0x000)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

extern lv_style_t global_style;

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * noto_regular_16;

extern lv_font_t * noto_regular_24;

extern lv_font_t * noto_regular_32;

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t dark_theme;
extern lv_subject_t hour;
extern lv_subject_t minutes;
extern lv_subject_t clock_title;
extern lv_subject_t show_clock;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

void screen_1_hello_cb(lv_event_t * e);

/**
 * Initialize the component library
 */

void test_project_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/h1_gen.h"
#include "components/h2_gen.h"
#include "components/h3_gen.h"
#include "components/my_button/my_button_gen.h"
#include "screens/screen1/screen1_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*TEST_PROJECT_GEN_H*/