/**
 * @file super_nested_components_private_gen.h
 *
 */

#ifndef SUPER_NESTED_COMPONENTS_PRIVATE_H
#define SUPER_NESTED_COMPONENTS_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl_private.h"
#include "super_nested_components.h"

/*********************
 *      DEFINES
 *********************/

#ifndef SUPER_NESTED_COMPONENTS_USER_DATA
#define SUPER_NESTED_COMPONENTS_USER_DATA
#endif

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    lv_obj_t * h3;
    lv_obj_t * kidkid;
    SUPER_NESTED_COMPONENTS_USER_DATA
} super_nested_components_t;

extern const lv_obj_class_t super_nested_components_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void super_nested_components_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SUPER_NESTED_COMPONENTS_PRIVATE_H*/