/**
 * @file smart_slider_private_gen.h
 *
 */

#ifndef SMART_SLIDER_PRIVATE_H
#define SMART_SLIDER_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl_private.h"
#include "smart_slider.h"

/*********************
 *      DEFINES
 *********************/

#ifndef SMART_SLIDER_USER_DATA
#define SMART_SLIDER_USER_DATA
#endif

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    int32_t value;
    int32_t min_value;
    lv_obj_t * title;
    lv_obj_t * lv_slider_0;
    SMART_SLIDER_USER_DATA
} smart_slider_t;

extern const lv_obj_class_t smart_slider_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void smart_slider_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SMART_SLIDER_PRIVATE_H*/