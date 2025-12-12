/**
 * @file set_element_private_gen.h
 *
 */

#ifndef SET_ELEMENT_PRIVATE_H
#define SET_ELEMENT_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl_private.h"
#include "set_element.h"

/*********************
 *      DEFINES
 *********************/

#ifndef SET_ELEMENT_USER_DATA
#define SET_ELEMENT_USER_DATA
#endif

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    SET_ELEMENT_USER_DATA
} set_element_t;

extern const lv_obj_class_t set_element_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void set_element_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SET_ELEMENT_PRIVATE_H*/