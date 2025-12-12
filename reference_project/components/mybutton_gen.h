/**
 * @file mybutton_gen.h
 */

#ifndef MYBUTTON_H
#define MYBUTTON_H

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

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * mybutton_create(lv_obj_t * parent, lv_color_t button_color, lv_opa_t button_opa, const void * icon, const char * text, lv_subject_t * subject, const char * fmt, int32_t ref_value);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*MYBUTTON_H*/