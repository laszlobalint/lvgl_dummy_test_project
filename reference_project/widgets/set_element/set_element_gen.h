/**
 * @file set_element_gen.h
 *
 */

#ifndef SET_ELEMENT_GEN_H
#define SET_ELEMENT_GEN_H

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
 * Create a set_element object
 * @param parent pointer to an object, it will be the parent of the new set_element
 * @return pointer to the created set_element
 */
lv_obj_t * set_element_create(lv_obj_t * parent);
/**
 * set_element emission width
 * @param obj   pointer to a set_element
 * @param foo  foo
 * @param width  width
 */
void set_element_set_emission_width(lv_obj_t * set_element, const char * foo, int32_t width);

/**
 * set_element emission height
 * @param obj   pointer to a set_element
 * @param foo  foo
 * @param height  height
 */
void set_element_set_emission_height(lv_obj_t * set_element, const char * foo, int32_t height);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SET_ELEMENT_GEN_H*/