/**
 * @file reference_project_gen.h
 */

#ifndef REFERENCE_PROJECT_GEN_H
#define REFERENCE_PROJECT_GEN_H

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

/**
 * To make paddings unified.
 */
#define PAD_SM 8

#define PINK lv_color_hex(0xff00ff)

/**********************
 *      TYPEDEFS
 **********************/

typedef enum {

    /**
     * All good
     */
    UI_STATE_NORMAL,

    /**
     * There is a warning
     */
    UI_STATE_WARNING = 0x20,
    UI_STATE_ERROR,

    /**
     * Big problem.
     */
    UI_STATE_CRITICAL
}ui_state_t;

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

extern lv_obj_t * a_permanent_screen;
extern lv_obj_t * main_screen;
extern lv_obj_t * screen_extends_something;

/*----------------
 * Global styles
 *----------------*/

/**
 * We will use it in some places
 */
extern lv_style_t global_style;

/*----------------
 * Fonts
 *----------------*/

extern lv_font_t * font_md;

extern lv_font_t * font_sm;

/*----------------
 * Images
 *----------------*/

extern const void * img_bell;
extern const void * img_bell_file;

/*----------------
 * Subjects
 *----------------*/

extern lv_subject_t subject1;
extern lv_subject_t subject2;
extern lv_subject_t subject_float;
extern lv_subject_t subject_string;
extern lv_subject_t subject_rtc_time;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

void my_cb1(lv_event_t * e);

/**
 * Initialize the component library
 */

void reference_project_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "components/chart_gen.h"
#include "components/component_with_previews/component_with_previews_gen.h"
#include "components/extends_widget_gen.h"
#include "components/h3_gen.h"
#include "components/my_animated_button_gen.h"
#include "components/my_animated_list_item_gen.h"
#include "components/mybutton_gen.h"
#include "components/super_button_gen.h"
#include "screens/a_permanent_screen_gen.h"
#include "screens/animations_screen_gen.h"
#include "screens/main_screen_gen.h"
#include "screens/screen_extends_something_gen.h"
#include "screens/some_screen_1_gen.h"
#include "screens/test_widgets_gen.h"
#include "widgets/extends_another/extends_another_gen.h"
#include "widgets/myarc/myarc_gen.h"
#include "widgets/set_element/set_element_gen.h"
#include "widgets/smart_slider/smart_slider_gen.h"
#include "widgets/super_nested_components/super_nested_components_gen.h"
#include "widgets/super_nested/super_nested_gen.h"
#include "widgets/very_simple/very_simple_gen.h"
#include "widgets/with_getter/with_getter_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*REFERENCE_PROJECT_GEN_H*/