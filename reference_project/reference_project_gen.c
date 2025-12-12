/**
 * @file reference_project_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "reference_project_gen.h"

#if LV_USE_XML
#include "widgets/extends_another/extends_another_private_gen.h"
#include "widgets/myarc/myarc_private_gen.h"
#include "widgets/set_element/set_element_private_gen.h"
#include "widgets/smart_slider/smart_slider_private_gen.h"
#include "widgets/super_nested/super_nested_private_gen.h"
#include "widgets/super_nested_components/super_nested_components_private_gen.h"
#include "widgets/very_simple/very_simple_private_gen.h"
#include "widgets/with_getter/with_getter_private_gen.h"
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

#ifndef LV_EDITOR_PREVIEW
    static const char * translation_languages[] = {"en", "de", "hu", NULL};
    static const char * translation_tags[] = {"dog", "cat", "snake", "rabbit", NULL};
    static const char * translation_texts[] = {
        "The dog", "Der Hund", "A kutya", /* dog */
        "The cat", "Die Katze", "A cica", /* cat */
        "A snake", NULL, "A kígyó", /* snake */
        "A rabbit", NULL, NULL, /* rabbit */
    };
#endif

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

lv_obj_t * a_permanent_screen = NULL;
lv_obj_t * main_screen = NULL;
lv_obj_t * screen_extends_something = NULL;

/*----------------
 * Fonts
 *----------------*/

lv_font_t * font_md;
extern uint8_t Nunito_SemiBold_ttf_data[];
extern size_t Nunito_SemiBold_ttf_data_size;
lv_font_t * font_sm;
extern lv_font_t font_sm_data;

/*----------------
 * Images
 *----------------*/

const void * img_bell;
extern const void * img_bell_data;
const void * img_bell_file;

/*----------------
 * Global styles
 *----------------*/

lv_style_t global_style;

/*----------------
 * Subjects
 *----------------*/

lv_subject_t subject1;
lv_subject_t subject2;
lv_subject_t subject_float;
lv_subject_t subject_string;
lv_subject_t subject_rtc_time;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void reference_project_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Fonts
     *----------------*/

    /* create tiny ttf font 'font_md' from C array */
    font_md = lv_tiny_ttf_create_data(Nunito_SemiBold_ttf_data, Nunito_SemiBold_ttf_data_size, 40);
    /* get font 'font_sm' from a C array */
    font_sm = &font_sm_data;


    /*----------------
     * Images
     *----------------*/
    img_bell = &img_bell_data;
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/bell_solid.png");
    img_bell_file = lv_strdup(buf);

    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&global_style);
        lv_style_set_bg_color(&global_style, PINK);
        lv_style_set_border_color(&global_style, lv_color_hex(0xffff00));
        lv_style_set_border_width(&global_style, 4);

        style_inited = true;
    }

    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&subject1, 10);
    lv_subject_set_min_value_int(&subject1, 0);
    lv_subject_set_max_value_int(&subject1, 10);
    lv_subject_init_int(&subject2, 20);
    lv_subject_init_float(&subject_float, 5.3);
    lv_subject_set_min_value_float(&subject_float, 0.1);
    lv_subject_set_max_value_float(&subject_float, 11.11);
    static char subject_string_buf[UI_SUBJECT_STRING_LENGTH];
    static char subject_string_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&subject_string,
                           subject_string_buf,
                           subject_string_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "skip"
                          );
    static char subject_rtc_time_buf[UI_SUBJECT_STRING_LENGTH];
    static char subject_rtc_time_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&subject_rtc_time,
                           subject_rtc_time_buf,
                           subject_rtc_time_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "09:55:02\nMon 3 Nov"
                          );

    /*----------------
     * Translations
     *----------------*/

    #ifndef LV_EDITOR_PREVIEW
        lv_translation_add_static(translation_languages, translation_tags, translation_texts);
    #endif

#if LV_USE_XML
    /* Register widgets */
    extends_another_register();
    myarc_register();
    set_element_register();
    smart_slider_register();
    super_nested_register();
    super_nested_components_register();
    very_simple_register();
    with_getter_register();

    /* Register fonts */
    lv_xml_register_font(NULL, "font_md", font_md);
    lv_xml_register_font(NULL, "font_sm", font_sm);

    /* Register subjects */
    lv_xml_register_subject(NULL, "subject1", &subject1);
    lv_xml_register_subject(NULL, "subject2", &subject2);
    lv_xml_register_subject(NULL, "subject_float", &subject_float);
    lv_xml_register_subject(NULL, "subject_string", &subject_string);
    lv_xml_register_subject(NULL, "subject_rtc_time", &subject_rtc_time);

    /* Register callbacks */
    lv_xml_register_event_cb(NULL, "my_cb1", my_cb1);
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "img_bell", img_bell);
    lv_xml_register_image(NULL, "img_bell_file", img_bell_file);
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
    /* To allow screens to reference each other, create them all before calling the sceen create functions */
    a_permanent_screen = lv_obj_create(NULL);
    main_screen = lv_obj_create(NULL);
    screen_extends_something = lv_label_create(NULL);

    a_permanent_screen_create();
    main_screen_create();
    screen_extends_something_create();
#endif
}

/* Callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) my_cb1(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("my_cb1 was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/