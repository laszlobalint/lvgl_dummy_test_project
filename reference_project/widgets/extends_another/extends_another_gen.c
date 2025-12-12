/**
 * @file extends_another_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "extends_another_private_gen.h"
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

void extends_another_constructor_hook(lv_obj_t * obj);
void extends_another_destructor_hook(lv_obj_t * obj);
void extends_another_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void extends_another_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void extends_another_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void extends_another_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t extends_another_class = {
    .base_class = &very_simple_class,
    .constructor_cb = extends_another_constructor,
    .destructor_cb = extends_another_destructor,
    .event_cb = extends_another_event,
    .instance_size = sizeof(extends_another_t),
    .editable = 1,
    .name = "extends_another"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * extends_another_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&extends_another_class, parent);
    lv_obj_class_init_obj(obj);

    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void extends_another_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    extends_another_t * widget = (extends_another_t *)obj;

    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }
    


    extends_another_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void extends_another_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    extends_another_destructor_hook(obj);
}

static void extends_another_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&extends_another_class, e);
    if(res != LV_RESULT_OK) return;

    extends_another_event_hook(e);
}

