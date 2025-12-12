/**
 * @file animations_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "animations_screen_gen.h"
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

static lv_anim_timeline_t * timeline_screen_intro_create(lv_obj_t * obj);
static void free_timeline_event_cb(lv_event_t * e);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * animations_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "animations_screen_#");
    lv_obj_set_style_layout(lv_obj_0, LV_LAYOUT_FLEX, 0);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN);

    lv_obj_t * my_button = my_animated_button_create(lv_obj_0, "Screen Intro");
    lv_obj_set_name(my_button, "my_button");
    
    lv_obj_t * my_animated_button_0 = my_animated_button_create(lv_obj_0, "Animate this Button");
    
    lv_obj_t * label = lv_label_create(lv_obj_0);
    lv_obj_set_name(label, "label");
    lv_label_set_text(label, "Hi");
    
    
    /* create animation timeline(s) */
    lv_anim_timeline_t ** at_array = lv_malloc(sizeof(lv_anim_timeline_t *) * _ANIMATIONS_SCREEN_TIMELINE_CNT);
    at_array[ANIMATIONS_SCREEN_TIMELINE_SCREEN_INTRO] = timeline_screen_intro_create(lv_obj_0);
    lv_obj_set_user_data(lv_obj_0, at_array);
    lv_obj_add_event_cb(lv_obj_0, free_timeline_event_cb, LV_EVENT_DELETE, at_array);

    lv_obj_add_play_timeline_event(my_button, LV_EVENT_CLICKED, animations_screen_get_timeline(lv_obj_0, ANIMATIONS_SCREEN_TIMELINE_SCREEN_INTRO), 0, false);
    lv_obj_add_play_timeline_event(my_animated_button_0, LV_EVENT_CLICKED, my_animated_button_get_timeline(my_animated_button_0, MY_ANIMATED_BUTTON_TIMELINE_SHOW_UP), 0, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

lv_anim_timeline_t * animations_screen_get_timeline(lv_obj_t * obj, animations_screen_timeline_t timeline_id)
{
    if (timeline_id >= _ANIMATIONS_SCREEN_TIMELINE_CNT) {
        LV_LOG_WARN("animations_screen has no timeline with %d ID", timeline_id);
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

static lv_anim_timeline_t * timeline_screen_intro_create(lv_obj_t * obj)
{
    lv_anim_timeline_t * at = lv_anim_timeline_create();
    lv_anim_timeline_t * at_to_merge = NULL;

    lv_anim_t a;
    uint32_t selector_and_prop;

    selector_and_prop = ((LV_STYLE_OPA & 0xff) << 24) | 0;
    lv_anim_init(&a);
    lv_anim_set_custom_exec_cb(&a, int_anim_exec_cb);
    lv_anim_set_var(&a, obj);
    lv_anim_set_values(&a, 0, 255);
    lv_anim_set_duration(&a, 2000);
    lv_anim_set_user_data(&a, (void *)((uintptr_t)selector_and_prop));
    lv_anim_timeline_add(at, 0, &a);

    lv_obj_t * my_animated_button_0 = lv_obj_find_by_name(obj, "my_animated_button_0");
    at_to_merge = my_animated_button_get_timeline(my_animated_button_0, MY_ANIMATED_BUTTON_TIMELINE_SHOW_UP);
    lv_anim_timeline_merge(at, at_to_merge, 400);

    return at;
}

static void free_timeline_event_cb(lv_event_t * e)
{
    lv_anim_timeline_t ** at_array = lv_event_get_user_data(e);
    uint32_t i;
    for(i = 0; i < _ANIMATIONS_SCREEN_TIMELINE_CNT; i++) {
        lv_anim_timeline_delete(at_array[i]);
    }
    lv_free(at_array);
}

