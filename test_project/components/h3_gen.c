/**
 * @file h3_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "h3_gen.h"
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

lv_obj_t * h3_create(lv_obj_t * parent, const char * label_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * h1_0 = h1_create(parent, label_text);
    lv_obj_set_name_static(h1_0, "h3_#");
    lv_obj_set_style_text_font(h1_0, noto_regular_24, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return h1_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

