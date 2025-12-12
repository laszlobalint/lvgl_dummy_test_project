/**
 * @file with_getter_gen.h
 *
 */

#ifndef WITH_GETTER_GEN_H
#define WITH_GETTER_GEN_H

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
 * Create a with_getter object
 * @param parent pointer to an object, it will be the parent of the new with_getter
 * @return pointer to the created with_getter
 */
lv_obj_t * with_getter_create(lv_obj_t * parent);
/**
 * with_getter container
 * @param obj   pointer to a with_getter

 */
lv_obj_t * with_getter_get_container(lv_obj_t * with_getter);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*WITH_GETTER_GEN_H*/