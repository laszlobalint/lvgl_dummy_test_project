/**
 * @file with_getter_private_gen.h
 *
 */

#ifndef WITH_GETTER_PRIVATE_H
#define WITH_GETTER_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl_private.h"
#include "with_getter.h"

/*********************
 *      DEFINES
 *********************/

#ifndef WITH_GETTER_USER_DATA
#define WITH_GETTER_USER_DATA
#endif

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    lv_obj_t obj;  /* Base widget to extend */
    lv_obj_t * lv_dropdown_0;
    lv_obj_t * lv_dropdown_list_0;
    WITH_GETTER_USER_DATA
} with_getter_t;

extern const lv_obj_class_t with_getter_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void with_getter_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*WITH_GETTER_PRIVATE_H*/