/**
 * @file very_simple_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "very_simple_private_gen.h"
#include "lvgl/src/core/lv_obj_class_private.h"
#include "reference_project.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  GLOBAL PROTOTYPES
 **********************/

void very_simple_constructor_hook(lv_obj_t * obj);
void very_simple_destructor_hook(lv_obj_t * obj);
void very_simple_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void very_simple_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void very_simple_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void very_simple_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t very_simple_class = {
    .base_class = &lv_obj_class,
    .constructor_cb = very_simple_constructor,
    .destructor_cb = very_simple_destructor,
    .event_cb = very_simple_event,
    .instance_size = sizeof(very_simple_t),
    .editable = 1,
    .name = "very_simple"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * very_simple_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&very_simple_class, parent);
    lv_obj_class_init_obj(obj);

    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void very_simple_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    very_simple_t * widget = (very_simple_t *)obj;

    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }
    lv_obj_t * lv_label_0 = lv_label_create(obj);
    lv_label_set_text(lv_label_0, "My Label");
    widget->lv_label_0 = lv_label_0;


    very_simple_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void very_simple_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    very_simple_destructor_hook(obj);
}

static void very_simple_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&very_simple_class, e);
    if(res != LV_RESULT_OK) return;

    very_simple_event_hook(e);
}

