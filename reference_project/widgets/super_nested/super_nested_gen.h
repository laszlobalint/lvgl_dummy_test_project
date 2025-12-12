/**
 * @file super_nested_gen.h
 *
 */

#ifndef SUPER_NESTED_GEN_H
#define SUPER_NESTED_GEN_H

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
 * Create a super_nested object
 * @param parent pointer to an object, it will be the parent of the new super_nested
 * @return pointer to the created super_nested
 */
lv_obj_t * super_nested_create(lv_obj_t * parent);
;

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SUPER_NESTED_GEN_H*/