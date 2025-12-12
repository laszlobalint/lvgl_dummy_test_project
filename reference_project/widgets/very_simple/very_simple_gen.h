/**
 * @file very_simple_gen.h
 *
 */

#ifndef VERY_SIMPLE_GEN_H
#define VERY_SIMPLE_GEN_H

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

#include "reference_project_gen.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a very_simple object
 * @param parent pointer to an object, it will be the parent of the new very_simple
 * @return pointer to the created very_simple
 */
lv_obj_t * very_simple_create(lv_obj_t * parent);
/**
 * very_simple temp
 * @param obj   pointer to a very_simple
 * @param temp_low  temp_low
 * @param temp_high  temp_high
 */
void very_simple_set_temp(lv_obj_t * very_simple, int32_t temp_low, int32_t temp_high);

/**
 * very_simple temp_over
 * @param obj   pointer to a very_simple
 * @param temp_over  temp_over
 */
void very_simple_set_temp_over(lv_obj_t * very_simple, int32_t temp_over);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*VERY_SIMPLE_GEN_H*/