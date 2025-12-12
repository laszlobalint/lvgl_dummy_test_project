/**
 * @file test_widgets_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "test_widgets_gen.h"
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

lv_obj_t * test_widgets_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "test_widgets_#");

    lv_obj_t * set_element_0 = set_element_create(lv_obj_0);
    // the element 'emission' has no properties specified, skipping
    set_element_set_emission_width(set_element_0, "", 1);
    set_element_set_emission_width(set_element_0, "", 2);
    set_element_set_emission_height(set_element_0, "", 2);
    set_element_set_emission_height(set_element_0, "", 3);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

