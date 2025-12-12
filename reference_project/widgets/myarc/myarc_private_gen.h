/**
 * @file myarc_private_gen.h
 *
 */

#ifndef MYARC_PRIVATE_H
#define MYARC_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl_private.h"
#include "myarc.h"

/*********************
 *      DEFINES
 *********************/

#ifndef MYARC_USER_DATA
#define MYARC_USER_DATA
#endif

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    lv_arc_t obj;  /* Base widget to extend */
    MYARC_USER_DATA
} myarc_t;

extern const lv_obj_class_t myarc_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void myarc_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*MYARC_PRIVATE_H*/