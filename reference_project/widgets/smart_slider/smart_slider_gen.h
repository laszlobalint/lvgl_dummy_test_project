/**
 * @file smart_slider_gen.h
 *
 */

#ifndef SMART_SLIDER_GEN_H
#define SMART_SLIDER_GEN_H

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

#include "reference_project_gen.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
/**
 * Parts of the smart slider
 */
typedef enum {

    /**
     * The top part
     */
    SMART_SLIDER_PART_TOP = 10,

    /**
     * The bottom part
     */
    SMART_SLIDER_PART_BOTTOM = 20
}smart_slider_part_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a smart_slider object
 * @param parent pointer to an object, it will be the parent of the new smart_slider
 * @return pointer to the created smart_slider
 */
lv_obj_t * smart_slider_create(lv_obj_t * parent);
/**
 * smart_slider value
 * @param obj   pointer to a smart_slider
 * @param value  value
 */
void smart_slider_set_value(lv_obj_t * smart_slider, int32_t value);

/**
 * smart_slider min_value
 * @param obj   pointer to a smart_slider
 * @param min_value  min_value
 */
void smart_slider_set_min_value(lv_obj_t * smart_slider, int32_t min_value);

/**
 * smart_slider text
 * @param obj   pointer to a smart_slider
 * @param color  Color of the text
 */
lv_obj_t * smart_slider_add_text(lv_obj_t * smart_slider, lv_color_t color);

/**
 * smart_slider text font
 * @param obj   pointer to a smart_slider
 * @param text  text
 * @param font  font
 */
void smart_slider_set_text_font(lv_obj_t * smart_slider, lv_obj_t * text, lv_font_t * font);

/**
 * smart_slider item
 * @param obj   pointer to a smart_slider
 * @param idx  The index of the item to get
 */
lv_obj_t * smart_slider_get_item(lv_obj_t * smart_slider, int32_t idx);

/**
 * smart_slider item size
 * @param obj   pointer to a smart_slider
 * @param item  item
 * @param size  size
 */
void smart_slider_set_item_size(lv_obj_t * smart_slider, lv_obj_t * item, int32_t size);

/**
 * smart_slider ticks speed
 * @param obj   pointer to a smart_slider
 * @param part  part
 * @param value  value
 * @param speed  speed
 */
void smart_slider_set_ticks_speed(lv_obj_t * smart_slider, smart_slider_part_t part, int32_t value, int32_t speed);

/**
 * smart_slider bind_value
 * @param obj   pointer to a smart_slider
 * @param subject  subject
 * @param state  Bind the value to this state
 * @param fmt  fmt
 */
void smart_slider_bind_value(lv_obj_t * smart_slider, lv_subject_t * subject, ui_state_t state, const char * fmt);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SMART_SLIDER_GEN_H*/