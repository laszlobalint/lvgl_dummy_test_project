/**
 * @file some_screen_1_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "some_screen_1_gen.h"
#include "reference_project.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * some_screen_1_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "some_screen_1_#");
    lv_obj_set_style_layout(lv_obj_0, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_all(lv_obj_0, 10, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, "some_screen_1");
    
    lv_obj_t * lv_scale_0 = lv_scale_create(lv_obj_0);
    lv_scale_set_rotation(lv_scale_0, -90);
    lv_scale_set_angle_range(lv_scale_0, 60);
    lv_scale_set_mode(lv_scale_0, LV_SCALE_MODE_ROUND_OUTER);
    lv_obj_set_style_pad_top(lv_scale_0, 48, 0);
    lv_scale_section_t * lv_scale_section_0 = lv_scale_add_section(lv_scale_0);
    lv_scale_set_section_min_value(lv_scale_0, lv_scale_section_0, 0);
    lv_scale_bind_section_max_value(lv_scale_0, lv_scale_section_0, &subject1);
    
    lv_obj_t * lv_spangroup_0 = lv_spangroup_create(lv_obj_0);
    lv_obj_set_align(lv_spangroup_0, LV_ALIGN_BOTTOM_RIGHT);
    lv_span_t * lv_spangroup_span_0 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_bind_span_text(lv_spangroup_0, lv_spangroup_span_0, &subject_string, NULL);
    lv_span_t * lv_spangroup_span_1 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_set_span_text(lv_spangroup_0, lv_spangroup_span_1, "°C");
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    static const int32_t lv_obj_1_style_grid_column_dsc_array_0[] = {100, LV_GRID_FR(1), LV_GRID_TEMPLATE_LAST};
    lv_obj_set_style_grid_column_dsc_array(lv_obj_1, lv_obj_1_style_grid_column_dsc_array_0, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_1, "5 is < than 10, ä你好 ÁÉ° \n new line Ｃ «Í I'm \"this\". ÿ\n\n\"Hi, Gábor!\" & >");
    lv_obj_set_height(lv_label_1, 44);
    
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_2, "Button");
    
    lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(lv_button_0, &subject1, LV_EVENT_CLICKED, -2);
    lv_obj_set_subject_increment_event_max_value(lv_button_0, subject_increment_event_0, 10);
    lv_obj_set_subject_increment_event_min_value(lv_button_0, subject_increment_event_0, 0);
    lv_obj_set_subject_increment_event_rollover(lv_button_0, subject_increment_event_0, true);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

