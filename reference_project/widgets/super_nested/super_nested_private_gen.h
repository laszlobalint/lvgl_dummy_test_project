/**
 * @file super_nested_private_gen.h
 *
 */

#ifndef SUPER_NESTED_PRIVATE_H
#define SUPER_NESTED_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl_private.h"
#include "super_nested.h"

/*********************
 *      DEFINES
 *********************/

#ifndef SUPER_NESTED_USER_DATA
#define SUPER_NESTED_USER_DATA
#endif

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    lv_obj_t * parent;
    lv_obj_t * obj_parent;
    lv_obj_t * lv_label_0;
    lv_obj_t * lv_label_1;
    lv_obj_t * last_gen;
    SUPER_NESTED_USER_DATA
} super_nested_t;

extern const lv_obj_class_t super_nested_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void super_nested_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SUPER_NESTED_PRIVATE_H*/