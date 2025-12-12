/**
 * @file super_nested_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "super_nested_private_gen.h"
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

void super_nested_constructor_hook(lv_obj_t * obj);
void super_nested_destructor_hook(lv_obj_t * obj);
void super_nested_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void super_nested_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void super_nested_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void super_nested_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t super_nested_class = {
    .base_class = &lv_obj_class,
    .constructor_cb = super_nested_constructor,
    .destructor_cb = super_nested_destructor,
    .event_cb = super_nested_event,
    .instance_size = sizeof(super_nested_t),
    .editable = 1,
    .name = "super_nested"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * super_nested_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&super_nested_class, parent);
    lv_obj_class_init_obj(obj);

    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void super_nested_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    super_nested_t * widget = (super_nested_t *)obj;

    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }
    lv_obj_t * parent = lv_label_create(obj);
    lv_label_set_text(parent, "parent");
    lv_obj_set_name(parent, "parent");
    widget->parent = parent;
    lv_obj_t * obj_parent = lv_obj_create(parent);
    lv_obj_set_name(obj_parent, "obj_parent");
    widget->obj_parent = obj_parent;
    lv_obj_t * lv_label_0 = lv_label_create(obj_parent);
    lv_label_set_text(lv_label_0, "3rd gen");
    widget->lv_label_0 = lv_label_0;
    lv_obj_t * lv_label_1 = lv_label_create(lv_label_0);
    lv_label_set_text(lv_label_1, "auto name me");
    widget->lv_label_1 = lv_label_1;
    lv_obj_t * last_gen = lv_obj_create(lv_label_1);
    lv_obj_set_name(last_gen, "last_gen");
    widget->last_gen = last_gen;


    super_nested_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void super_nested_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    super_nested_destructor_hook(obj);
}

static void super_nested_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&super_nested_class, e);
    if(res != LV_RESULT_OK) return;

    super_nested_event_hook(e);
}

