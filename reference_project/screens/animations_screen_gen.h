/**
 * @file animations_screen_gen.h
 */

#ifndef ANIMATIONS_SCREEN_H
#define ANIMATIONS_SCREEN_H

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
    ANIMATIONS_SCREEN_TIMELINE_SCREEN_INTRO = 0,
    _ANIMATIONS_SCREEN_TIMELINE_CNT = 1
}animations_screen_timeline_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/



lv_obj_t * animations_screen_create(void);

/**
 * Get a timeline of a animations_screen
 * @param obj          pointer to a animations_screen component
 * @param timeline_id  ID of the the timeline
 * @return             pointer to the timeline or NULL if not found
 */
lv_anim_timeline_t * animations_screen_get_timeline(lv_obj_t * obj, animations_screen_timeline_t timeline_id);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*ANIMATIONS_SCREEN_H*/