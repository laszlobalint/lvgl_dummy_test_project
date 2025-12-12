/**
 * @file set_element_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "set_element_private_gen.h"
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

void set_element_constructor_hook(lv_obj_t * obj);
void set_element_destructor_hook(lv_obj_t * obj);
void set_element_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void set_element_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void set_element_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void set_element_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t set_element_class = {
    .base_class = &lv_obj_class,
    .constructor_cb = set_element_constructor,
    .destructor_cb = set_element_destructor,
    .event_cb = set_element_event,
    .instance_size = sizeof(set_element_t),
    .editable = 1,
    .name = "set_element"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * set_element_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&set_element_class, parent);
    lv_obj_class_init_obj(obj);

    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void set_element_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    set_element_t * widget = (set_element_t *)obj;

    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }
    


    set_element_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void set_element_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    set_element_destructor_hook(obj);
}

static void set_element_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&set_element_class, e);
    if(res != LV_RESULT_OK) return;

    set_element_event_hook(e);
}

