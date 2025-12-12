/**
 * @file main_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "main_screen_gen.h"
#include "reference_project.h"

/*********************
 *      DEFINES
 *********************/

#define BTN_TEXT "Super button"

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

lv_obj_t * main_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style1;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style1);
        lv_style_set_bg_color(&style1, lv_color_hex3(0xf00));

        style_inited = true;
    }

    if (main_screen == NULL) main_screen = lv_obj_create(NULL);
    lv_obj_t * lv_obj_0 = main_screen;
    lv_obj_set_name_static(lv_obj_0, "main_screen_#");
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);

    lv_obj_t * mybutton_0 = mybutton_create(lv_obj_0, lv_color_hex(0xff0000), (255 * 70 / 100), NULL, "My button 1", &subject1, "%d °C", 30);
    
    lv_obj_t * mybutton_1 = mybutton_create(lv_obj_0, lv_color_hex(0x000000), 200, img_bell, "My button 2", &subject1, "%d °C", 30);
    lv_obj_set_width(mybutton_1, 100);
    lv_obj_add_screen_load_event(mybutton_1, LV_EVENT_LONG_PRESSED, a_permanent_screen, LV_SCREEN_LOAD_ANIM_OVER_RIGHT, 300, 100);
    lv_obj_add_screen_create_event(mybutton_1, LV_EVENT_CLICKED, some_screen_1_create, LV_SCREEN_LOAD_ANIM_NONE, 0, 0);
    lv_obj_add_style(mybutton_1, &style1, LV_PART_SCROLLBAR);
    lv_obj_remove_style(mybutton_1, &style1, LV_PART_SCROLLBAR);
    lv_obj_remove_style(mybutton_1, NULL, LV_STATE_PRESSED);
    lv_obj_remove_style(mybutton_1, NULL, LV_PART_SCROLLBAR | LV_STATE_PRESSED);
    lv_obj_remove_style(mybutton_1, NULL, 0);
    lv_obj_remove_style_all(mybutton_1);
    lv_obj_t * lv_label_0 = lv_label_create(mybutton_1);
    lv_label_set_text(lv_label_0, "an additional label");
    lv_obj_set_style_width(lv_label_0, 150, 0);
    
    lv_obj_t * super_button_0 = super_button_create(lv_obj_0, BTN_TEXT, &subject1);
    
    lv_obj_t * super_button_1 = super_button_create(lv_obj_0, BTN_TEXT, &subject1);
    
    lv_obj_t * with_getter_0 = with_getter_create(lv_obj_0);
    lv_obj_t * with_getter_container_0 = with_getter_get_container(with_getter_0);
    
    lv_obj_t * lv_slider_0 = lv_slider_create(lv_obj_0);
    lv_slider_bind_value(lv_slider_0, &subject1);
    
    lv_obj_t * smart_slider_0 = smart_slider_create(lv_obj_0);
    smart_slider_set_value(smart_slider_0, 50);
    lv_obj_add_event_cb(smart_slider_0, my_cb1, LV_EVENT_CLICKED, "1");
    lv_obj_add_event_cb(smart_slider_0, my_cb1, LV_EVENT_PRESSED, NULL);
    lv_obj_t * smart_slider_text_0 = smart_slider_add_text(smart_slider_0, lv_color_hex(0x00ff00));
    smart_slider_set_text_font(smart_slider_0, smart_slider_text_0, font_md);
    lv_obj_set_style_bg_opa(smart_slider_0, (255 * 50 / 100), 0);
    lv_obj_t * lv_image_0 = lv_image_create(smart_slider_text_0);
    lv_image_set_src(lv_image_0, img_bell);
    lv_obj_set_x(lv_image_0, 100);
    
    lv_obj_t * smart_slider_item_0 = smart_slider_get_item(smart_slider_0, 30);
    smart_slider_set_item_size(smart_slider_0, smart_slider_item_0, 20);
    lv_obj_t * smart_slider_item_1 = smart_slider_get_item(smart_slider_0, 31);
    smart_slider_set_item_size(smart_slider_0, smart_slider_item_1, 30);
    smart_slider_set_ticks_speed(smart_slider_0, SMART_SLIDER_PART_TOP, 10, 1);
    // the element 'ticks' has no properties specified, skipping
    smart_slider_bind_value(smart_slider_0, &subject1, UI_STATE_WARNING, "%04d");
    smart_slider_bind_value(smart_slider_0, &subject2, UI_STATE_CRITICAL, "%d %%");
    
    lv_obj_t * h3_0 = h3_create(lv_obj_0);
    
    lv_obj_t * h3_1 = h3_create(lv_obj_0);
    lv_obj_set_width(h3_1, 100);
    
    lv_obj_t * h3_2 = h3_create(lv_obj_0);
    lv_label_set_text(h3_2, "Hello");
    
    lv_obj_t * h3_3 = h3_create(lv_obj_0);
    lv_label_set_text(h3_3, "Hello\nnew line");
    
    lv_obj_t * h3_4 = h3_create(lv_obj_0);
    lv_label_set_translation_tag(h3_4, "dog");
    
    lv_obj_t * h3_5 = h3_create(lv_obj_0);
    lv_label_bind_text(h3_5, &subject2, NULL);
    
    lv_obj_t * lv_chart_0 = lv_chart_create(lv_obj_0);
    lv_chart_series_t * lv_chart_series_0 = lv_chart_add_series(lv_chart_0, lv_color_hex(0xff0000), LV_CHART_AXIS_PRIMARY_Y);
    static const int32_t lv_chart_0_values_0[] = {10, 20};
    lv_chart_set_series_values(lv_chart_0, lv_chart_series_0, lv_chart_0_values_0, 2);
    
    lv_obj_t * lv_buttonmatrix_0 = lv_buttonmatrix_create(lv_obj_0);
    static const char *lv_buttonmatrix_0_map_1[] = {"first", "second", "\n", "third", NULL};
    lv_buttonmatrix_set_map(lv_buttonmatrix_0, lv_buttonmatrix_0_map_1);
    static const lv_buttonmatrix_ctrl_t lv_buttonmatrix_0_ctrl_map_2[] = {LV_BUTTONMATRIX_CTRL_WIDTH_4, LV_BUTTONMATRIX_CTRL_CHECKED, LV_BUTTONMATRIX_CTRL_CHECKABLE | LV_BUTTONMATRIX_CTRL_DISABLED};
    lv_buttonmatrix_set_ctrl_map(lv_buttonmatrix_0, lv_buttonmatrix_0_ctrl_map_2);
    
    lv_obj_t * lv_buttonmatrix_1 = lv_buttonmatrix_create(lv_obj_0);
    static const char *lv_buttonmatrix_1_map_3[] = {"first", "second", "\n", "third", NULL};
    lv_buttonmatrix_set_map(lv_buttonmatrix_1, lv_buttonmatrix_1_map_3);
    static const lv_buttonmatrix_ctrl_t lv_buttonmatrix_1_ctrl_map_4[] = {LV_BUTTONMATRIX_CTRL_WIDTH_4, LV_BUTTONMATRIX_CTRL_CHECKED, LV_BUTTONMATRIX_CTRL_CHECKABLE | LV_BUTTONMATRIX_CTRL_DISABLED};
    lv_buttonmatrix_set_ctrl_map(lv_buttonmatrix_1, lv_buttonmatrix_1_ctrl_map_4);
    
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_add_subject_set_string_event(lv_button_0, &subject_string, LV_EVENT_PRESSED, "jump");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

