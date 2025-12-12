/**
 * @file my_button_gen.h
 */

#ifndef MY_BUTTON_H
#define MY_BUTTON_H

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
    MY_BUTTON_TIMELINE_SHAKE = 0,
    _MY_BUTTON_TIMELINE_CNT = 1
}my_button_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * my_button_create(lv_obj_t * parent, const char * text, lv_color_t text_color);

/**
 * Get a timeline of a my_button
 * @param obj          pointer to a my_button component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * my_button_get_timeline(lv_obj_t * obj, my_button_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*MY_BUTTON_H*/