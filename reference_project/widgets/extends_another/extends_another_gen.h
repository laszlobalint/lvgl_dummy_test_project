/**
 * @file extends_another_gen.h
 *
 */

#ifndef EXTENDS_ANOTHER_GEN_H
#define EXTENDS_ANOTHER_GEN_H

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
 * Create a extends_another object
 * @param parent pointer to an object, it will be the parent of the new extends_another
 * @return pointer to the created extends_another
 */
lv_obj_t * extends_another_create(lv_obj_t * parent);
;

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXTENDS_ANOTHER_GEN_H*/