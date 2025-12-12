/**
 * @file extends_another_private_gen.h
 *
 */

#ifndef EXTENDS_ANOTHER_PRIVATE_H
#define EXTENDS_ANOTHER_PRIVATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "widgets/very_simple/very_simple_private_gen.h" /* The ancestor of extends_another */
#include "extends_another.h"

/*********************
 *      DEFINES
 *********************/

#ifndef EXTENDS_ANOTHER_USER_DATA
#define EXTENDS_ANOTHER_USER_DATA
#endif

/**********************
 *      TYPEDEFS
 **********************/
typedef struct {
    very_simple_t obj;  /* Base widget to extend */
    EXTENDS_ANOTHER_USER_DATA
} extends_another_t;

extern const lv_obj_class_t extends_another_class;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

#if LV_USE_XML
    void extends_another_register(void);
#endif

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXTENDS_ANOTHER_PRIVATE_H*/