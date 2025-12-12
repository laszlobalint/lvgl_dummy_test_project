/**
 * @file extends_widget_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "extends_widget_gen.h"
#include "reference_project.h"

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

lv_obj_t * extends_widget_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * very_simple_0 = very_simple_create(parent);
    lv_obj_set_name_static(very_simple_0, "extends_widget_#");
    lv_obj_set_style_layout(very_simple_0, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(very_simple_0, LV_FLEX_FLOW_COLUMN);

    lv_obj_t * lv_label_0 = lv_label_create(very_simple_0);
    lv_label_set_text(lv_label_0, "Component Label");

    LV_TRACE_OBJ_CREATE("finished");

    return very_simple_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

