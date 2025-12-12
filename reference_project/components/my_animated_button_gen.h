/**
 * @file my_animated_button_gen.h
 */

#ifndef MY_ANIMATED_BUTTON_H
#define MY_ANIMATED_BUTTON_H

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
    MY_ANIMATED_BUTTON_TIMELINE_GROW = 0,
    MY_ANIMATED_BUTTON_TIMELINE_SHRINK = 1,
    MY_ANIMATED_BUTTON_TIMELINE_SHOW_UP = 2,
    _MY_ANIMATED_BUTTON_TIMELINE_CNT = 3
}my_animated_button_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * my_animated_button_create(lv_obj_t * parent, const char * text);

/**
 * Get a timeline of a my_animated_button
 * @param obj          pointer to a my_animated_button component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * my_animated_button_get_timeline(lv_obj_t * obj, my_animated_button_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*MY_ANIMATED_BUTTON_H*/