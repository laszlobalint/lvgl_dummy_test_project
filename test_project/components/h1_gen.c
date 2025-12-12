/**
 * @file h1_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "h1_gen.h"
#include "test_project.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * h1_create(lv_obj_t * parent, const char * label_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_light;
    static lv_style_t style_dark;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_light);
        lv_style_set_text_color(&style_light, BLACK);
        lv_style_set_text_font(&style_light, noto_regular_32);

        lv_style_init(&style_dark);
        lv_style_set_text_color(&style_dark, WHITE);

        style_inited = true;
    }

    lv_obj_t * lv_label_0 = lv_label_create(parent);
    lv_obj_set_name_static(lv_label_0, "h1_#");
    lv_label_set_text(lv_label_0, label_text);
    lv_obj_set_x(lv_label_0, 0);
    lv_obj_set_y(lv_label_0, -1);

    lv_obj_add_style(lv_label_0, &style_light, 0);
    lv_obj_bind_style(lv_label_0, &style_dark, 0, &dark_theme, 1);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_label_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

