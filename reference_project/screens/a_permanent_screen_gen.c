/**
 * @file a_permanent_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "a_permanent_screen_gen.h"
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

lv_obj_t * a_permanent_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    if (a_permanent_screen == NULL) a_permanent_screen = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = a_permanent_screen;
    lv_obj_set_name_static(lv_obj_0, "a_permanent_screen_#");
    lv_obj_set_style_layout(lv_obj_0, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_0, &subject1, "%d subject1");
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_1, &subject1, NULL);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_2, &subject_float, "%.2f");
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_3, &subject_string, NULL);
    
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
    lv_label_set_translation_tag(lv_label_4, "rabbit");
    
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_add_subject_set_string_event(lv_button_0, &subject_string, LV_EVENT_PRESSED, "jump");
    
    lv_obj_t * lv_table_0 = lv_table_create(lv_obj_0);
    lv_table_set_cell_value(lv_table_0, 0, 1, "1");
    lv_table_set_cell_value(lv_table_0, 1, 1, "2");
    lv_table_set_cell_ctrl(lv_table_0, 1, 1, LV_TABLE_CELL_CTRL_MERGE_RIGHT);
    // the element 'cell' has no properties specified, skipping
    
    lv_obj_t * very_simple_0 = very_simple_create(lv_obj_0);
    
    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_5, "---");
    
    lv_obj_t * extends_another_0 = extends_another_create(lv_obj_0);
    
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_6, "super nested below");
    
    lv_obj_t * super_nested_0 = super_nested_create(lv_obj_0);
    
    lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
    lv_arc_set_start_angle(lv_arc_0, 30);
    
    lv_obj_t * myarc_0 = myarc_create(lv_obj_0);
    lv_arc_set_start_angle(myarc_0, 40);
    
    lv_obj_t * lv_spangroup_0 = lv_spangroup_create(lv_obj_0);
    lv_spangroup_add_span(lv_spangroup_0);
    
    lv_obj_t * lv_chart_0 = lv_chart_create(lv_obj_0);
    lv_chart_add_series(lv_chart_0, lv_color_hex(0xff0000), LV_CHART_AXIS_PRIMARY_Y);
    
    lv_obj_t * lv_scale_0 = lv_scale_create(lv_obj_0);
    lv_scale_section_t * lv_scale_section_0 = lv_scale_add_section(lv_scale_0);
    lv_scale_set_section_style_indicator(lv_scale_0, lv_scale_section_0, &global_style);
    lv_scale_set_section_style_items(lv_scale_0, lv_scale_section_0, &global_style);
    lv_scale_set_section_style_main(lv_scale_0, lv_scale_section_0, &global_style);
    lv_scale_set_section_min_value(lv_scale_0, lv_scale_section_0, 0);
    lv_scale_set_section_max_value(lv_scale_0, lv_scale_section_0, 20);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

