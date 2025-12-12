/**
 * @file h3_gen.h
 */

#ifndef H3_H
#define H3_H

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

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

typedef enum {
    H3_TIMELINE_GROW = 0,
    _H3_TIMELINE_CNT = 1
}h3_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * h3_create(lv_obj_t * parent);

/**
 * Get a timeline of a h3
 * @param obj          pointer to a h3 component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * h3_get_timeline(lv_obj_t * obj, h3_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*H3_H*/