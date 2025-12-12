/**
 * @file super_button_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "super_button_gen.h"
#include "reference_project.h"

/*********************
 *      DEFINES
 *********************/

#define DEF_FMT "Progress %02d"

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

lv_obj_t * super_button_create(lv_obj_t * parent, const char * button_text, lv_subject_t * subject)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * mybutton_0 = mybutton_create(parent, PINK, (255 * 70 / 100), NULL, button_text, subject, DEF_FMT, 30);
    lv_obj_set_name_static(mybutton_0, "super_button_#");

    lv_obj_t * extra_label = lv_label_create(mybutton_0);
    lv_obj_set_name(extra_label, "extra_label");
    lv_label_set_text(extra_label, "Extra");
    lv_obj_set_align(extra_label, LV_ALIGN_RIGHT_MID);

    LV_TRACE_OBJ_CREATE("finished");

    return mybutton_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

