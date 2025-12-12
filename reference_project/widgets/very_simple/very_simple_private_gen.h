/**
 * @file very_simple_private_gen.h
 *
 */

#ifndef VERY_SIMPLE_PRIVATE_H
#define VERY_SIMPLE_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl_private.h"
#include "very_simple.h"

/*********************
 *      DEFINES
 *********************/

#ifndef VERY_SIMPLE_USER_DATA
#define VERY_SIMPLE_USER_DATA
#endif

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    int32_t temp_low;
    int32_t temp_high;
    int32_t temp_over;
    lv_obj_t * lv_label_0;
    VERY_SIMPLE_USER_DATA
} very_simple_t;

extern const lv_obj_class_t very_simple_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void very_simple_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*VERY_SIMPLE_PRIVATE_H*/