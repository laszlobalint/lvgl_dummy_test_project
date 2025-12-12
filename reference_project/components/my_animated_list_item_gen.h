/**
 * @file my_animated_list_item_gen.h
 */

#ifndef MY_ANIMATED_LIST_ITEM_H
#define MY_ANIMATED_LIST_ITEM_H

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
    MY_ANIMATED_LIST_ITEM_TIMELINE_LOAD = 0,
    _MY_ANIMATED_LIST_ITEM_TIMELINE_CNT = 1
}my_animated_list_item_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * my_animated_list_item_create(lv_obj_t * parent);

/**
 * Get a timeline of a my_animated_list_item
 * @param obj          pointer to a my_animated_list_item component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * my_animated_list_item_get_timeline(lv_obj_t * obj, my_animated_list_item_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*MY_ANIMATED_LIST_ITEM_H*/