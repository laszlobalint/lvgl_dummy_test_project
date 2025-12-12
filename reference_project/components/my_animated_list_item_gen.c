/**
 * @file my_animated_list_item_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "my_animated_list_item_gen.h"
#include "reference_project.h"

/*********************
 *      DEFINES
 *********************/

#define DELAY1 200

#define DELAY2 400

#define DURATION 300

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

static lv_anim_timeline_t * timeline_load_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * my_animated_list_item_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "my_animated_list_item_#");
    lv_obj_set_height(lv_obj_0, 200);

    lv_obj_t * title = h3_create(lv_obj_0);
    lv_label_set_text(title, "List title");
    lv_obj_set_name(title, "title");
    
    lv_obj_t * my_animated_button_0 = my_animated_button_create(lv_obj_0, "Button 1");
    lv_obj_set_y(my_animated_button_0, 20);
    
    lv_obj_t * my_animated_button_1 = my_animated_button_create(lv_obj_0, "Button 2");
    lv_obj_set_y(my_animated_button_1, 60);
    lv_obj_set_flag(my_animated_button_1, LV_OBJ_FLAG_CHECKABLE, true);
    
    lv_obj_t * my_animated_button_2 = my_animated_button_create(lv_obj_0, "Button 3");
    lv_obj_set_y(my_animated_button_2, 60);
    lv_obj_set_flag(my_animated_button_2, LV_OBJ_FLAG_CHECKABLE, true);
    
    lv_obj_t * footer = h3_create(lv_obj_0);
    lv_label_set_text(footer, "Footer");
    lv_obj_set_y(footer, 100);
    lv_obj_set_name(footer, "footer");
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _MY_ANIMATED_LIST_ITEM_TIMELINE_CNT);
    at_array[MY_ANIMATED_LIST_ITEM_TIMELINE_LOAD] = timeline_load_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(my_animated_button_0, LV_EVENT_CLICKED, my_animated_list_item_get_timeline(lv_obj_0, MY_ANIMATED_LIST_ITEM_TIMELINE_LOAD), 0, false);
    lv_obj_add_play_timeline_event(my_animated_button_1, LV_EVENT_PRESSED, my_animated_button_get_timeline(my_animated_button_1, MY_ANIMATED_BUTTON_TIMELINE_GROW), 0, false);
    lv_obj_add_play_timeline_event(my_animated_button_1, LV_EVENT_RELEASED, my_animated_button_get_timeline(my_animated_button_1, MY_ANIMATED_BUTTON_TIMELINE_SHRINK), 1000, false);
    lv_obj_add_play_timeline_event(my_animated_button_2, LV_EVENT_PRESSED, h3_get_timeline(title, H3_TIMELINE_GROW), 0, false);
    lv_obj_add_play_timeline_event(my_animated_button_2, LV_EVENT_PRESSED, h3_get_timeline(footer, H3_TIMELINE_GROW), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * my_animated_list_item_get_timeline(lv_obj_t * obj, my_animated_list_item_timeline_t timeline_id)
{
    if (timeline_id >= _MY_ANIMATED_LIST_ITEM_TIMELINE_CNT) {
        LV_LOG_WARN("my_animated_list_item has no timeline with %d ID", timeline_id);
        return NULL;
    }

    lv_anim_timeline_t ** at_array = lv_obj_get_user_data(obj);
    return at_array[timeline_id];
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/* Helper function to execute animations */
static void int_anim_exec_cb(lv_anim_t * a, int32_t v)
{
    uint32_t data = (lv_uintptr_t)lv_anim_get_user_data(a);
    lv_style_prop_t prop = data >> 24;
    lv_style_selector_t selector = data & 0x00ffffff;

    lv_style_value_t style_value;
    style_value.num = v;
    lv_obj_set_local_style_prop(a->var, prop, style_value, selector);
}

static lv_anim_timeline_t * timeline_load_create(lv_obj_t * obj)
{
    lv_anim_timeline_t * at = lv_anim_timeline_create();
    lv_anim_timeline_t * at_to_merge = NULL;

    lv_anim_t a;
    uint32_t selector_and_prop;

    selector_and_prop = ((LV_STYLE_TRANSLATE_X & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "title"));
    lv_anim_set_values(&a, -30, 0);
    lv_anim_set_duration(&a, 500);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_timeline_add(at, 0, &a);

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "title"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 500);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_timeline_add(at, 0, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "my_button_1"));
    lv_anim_set_values(&a, -20, 0);
    lv_anim_set_duration(&a, DURATION);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, DELAY2, &a);

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "my_button_1"));
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, DURATION);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, DELAY2, &a);

    selector_and_prop = ((LV_STYLE_TRANSLATE_Y & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, lv_obj_find_by_name(obj, "my_button_1"));
    lv_anim_set_values(&a, 20, 0);
    lv_anim_set_duration(&a, DURATION);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_set_early_apply(&a, true);
    lv_anim_timeline_add(at, DELAY2, &a);

    return at;
}

static void free_timeline_event_cb(lv_event_t * e)
{
    lv_anim_timeline_t ** at_array = lv_event_get_user_data(e);
    uint32_t i;
    for(i = 0; i < _MY_ANIMATED_LIST_ITEM_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

