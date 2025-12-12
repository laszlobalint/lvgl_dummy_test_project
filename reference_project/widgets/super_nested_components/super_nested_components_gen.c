/**
 * @file super_nested_components_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "super_nested_components_private_gen.h"
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

void super_nested_components_constructor_hook(lv_obj_t * obj);
void super_nested_components_destructor_hook(lv_obj_t * obj);
void super_nested_components_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void super_nested_components_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void super_nested_components_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void super_nested_components_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t super_nested_components_class = {
    .base_class = &lv_obj_class,
    .constructor_cb = super_nested_components_constructor,
    .destructor_cb = super_nested_components_destructor,
    .event_cb = super_nested_components_event,
    .instance_size = sizeof(super_nested_components_t),
    .editable = 1,
    .name = "super_nested_components"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * super_nested_components_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&super_nested_components_class, parent);
    lv_obj_class_init_obj(obj);

    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void super_nested_components_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    super_nested_components_t * widget = (super_nested_components_t *)obj;

    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }
    lv_obj_t * h3 = h3_create(obj);
    lv_obj_set_name(h3, "h3");
    widget->h3 = h3;
    lv_obj_t * kidkid = h3_create(h3);
    lv_obj_set_name(kidkid, "kidkid");
    widget->kidkid = kidkid;


    super_nested_components_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void super_nested_components_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    super_nested_components_destructor_hook(obj);
}

static void super_nested_components_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&super_nested_components_class, e);
    if(res != LV_RESULT_OK) return;

    super_nested_components_event_hook(e);
}

