/**
 * @file screen1_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen1_gen.h"
#include "test_project.h"

/*********************
 *      DEFINES
 *********************/

#define SCREEN_BORDER_WIDTH 6

#define SCREEN_DARK_COLOR lv_color_hex3(0x111)

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

lv_obj_t * screen1_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_light;
    static lv_style_t style_dark;
    static lv_style_t style_big_red_text;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_light);
        lv_style_set_bg_color(&style_light, lv_color_hex3(0xaaf));
        lv_style_set_border_width(&style_light, 4);
        lv_style_set_border_color(&style_light, lv_color_hex(0x3939ff));
        lv_style_set_pad_all(&style_light, 8);

        lv_style_init(&style_dark);
        lv_style_set_bg_color(&style_dark, SCREEN_DARK_COLOR);

        lv_style_init(&style_big_red_text);
        lv_style_set_text_color(&style_big_red_text, lv_color_hex3(0xf00));
        lv_style_set_text_font(&style_big_red_text, noto_regular_24);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen1_#");
    lv_obj_set_style_border_width(lv_obj_0, SCREEN_BORDER_WIDTH, 0);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);

    lv_obj_add_style(lv_obj_0, &style_light, 0);
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_bind_style(lv_obj_1, &style_dark, 0, &dark_theme, 1);
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_1);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_translation_tag(lv_label_0, "greeting");
    
    lv_obj_add_event_cb(lv_button_0, screen_1_hello_cb, LV_EVENT_SHORT_CLICKED, "foo");
    
    lv_obj_t * empty = my_button_create(lv_obj_1, "Empty", WHITE);
    lv_obj_set_name(empty, "empty");
    
    lv_obj_t * my_button_0 = my_button_create(lv_obj_1, "Hello <World> \nNewline test\nTabs: A\tB\nControl char: \x07"" (bell)\nQuote test: \"double\" and 'single'\nAccents: Ä Ö Ü ° © ™\nCJK: 你 好 世界\nEmoji: 😀 🚀\nHex only: 6¯", WHITE);
    
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_2, lv_pct(100));
    lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
    lv_obj_bind_flag_if_eq(lv_obj_2, &show_clock, LV_OBJ_FLAG_HIDDEN, 0);
    lv_obj_t * h2_0 = h2_create(lv_obj_2, "H2 text");
    lv_label_bind_text(h2_0, &clock_title, NULL);
    
    lv_obj_t * lv_spangroup_0 = lv_spangroup_create(lv_obj_2);
    lv_span_t * lv_spangroup_span_0 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_bind_span_text(lv_spangroup_0, lv_spangroup_span_0, &hour, NULL);
    lv_spangroup_set_span_style(lv_spangroup_0, lv_spangroup_span_0, &style_big_red_text);
    lv_span_t * lv_spangroup_span_1 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_set_span_text(lv_spangroup_0, lv_spangroup_span_1, ":");
    lv_span_t * lv_spangroup_span_2 = lv_spangroup_add_span(lv_spangroup_0);
    lv_spangroup_bind_span_text(lv_spangroup_0, lv_spangroup_span_2, &minutes, "%02d");
    
    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_3, lv_pct(100));
    lv_obj_set_height(lv_obj_3, LV_SIZE_CONTENT);
    lv_obj_t * my_button_1 = my_button_create(lv_obj_3, "Special characters:\n\nNew lined\n\n&&//~<>", WHITE);

    lv_obj_add_play_timeline_event(lv_button_0, LV_EVENT_SHORT_CLICKED, my_button_get_timeline(empty, MY_BUTTON_TIMELINE_SHAKE), 0, false);
    lv_obj_add_play_timeline_event(lv_button_0, LV_EVENT_LONG_PRESSED, my_button_get_timeline(empty, MY_BUTTON_TIMELINE_SHAKE), 500, true);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

