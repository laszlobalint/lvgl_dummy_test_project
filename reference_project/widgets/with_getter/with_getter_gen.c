/**
 * @file with_getter_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/

#include "with_getter_private_gen.h"
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

void with_getter_constructor_hook(lv_obj_t * obj);
void with_getter_destructor_hook(lv_obj_t * obj);
void with_getter_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void with_getter_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void with_getter_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void with_getter_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t with_getter_class = {
    .base_class = &lv_obj_class,
    .constructor_cb = with_getter_constructor,
    .destructor_cb = with_getter_destructor,
    .event_cb = with_getter_event,
    .instance_size = sizeof(with_getter_t),
    .editable = 1,
    .name = "with_getter"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * with_getter_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&with_getter_class, parent);
    lv_obj_class_init_obj(obj);

    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void with_getter_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    with_getter_t * widget = (with_getter_t *)obj;

    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }
    lv_obj_t * lv_dropdown_0 = lv_dropdown_create(obj);
    widget->lv_dropdown_0 = lv_dropdown_0;
    lv_obj_t * lv_dropdown_list_0 = lv_dropdown_get_list(lv_dropdown_0);
    widget->lv_dropdown_list_0 = lv_dropdown_list_0;


    with_getter_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void with_getter_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    with_getter_destructor_hook(obj);
}

static void with_getter_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&with_getter_class, e);
    if(res != LV_RESULT_OK) return;

    with_getter_event_hook(e);
}

