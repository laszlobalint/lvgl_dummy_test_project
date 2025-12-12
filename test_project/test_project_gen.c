/**
 * @file test_project_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "test_project_gen.h"

#if LV_USE_XML
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
    static const char * translation_languages[] = {"en", "de", NULL};
    static const char * translation_tags[] = {"greeting", NULL};
    static const char * translation_texts[] = {
        "Hey!", "Hallo!", /* greeting */
    };
#endif

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * noto_regular_16;
extern lv_font_t noto_regular_16_data;
lv_font_t * noto_regular_24;
extern lv_font_t noto_regular_24_data;
lv_font_t * noto_regular_32;
extern lv_font_t noto_regular_32_data;

/*----------------
 * Images
 *----------------*/

/*----------------
 * Global styles
 *----------------*/

lv_style_t global_style;

/*----------------
 * Subjects
 *----------------*/

lv_subject_t dark_theme;
lv_subject_t hour;
lv_subject_t minutes;
lv_subject_t clock_title;
lv_subject_t show_clock;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void test_project_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Fonts
     *----------------*/

    /* get font 'noto_regular_16' from a C array */
    noto_regular_16 = &noto_regular_16_data;
    /* get font 'noto_regular_24' from a C array */
    noto_regular_24 = &noto_regular_24_data;
    /* get font 'noto_regular_32' from a C array */
    noto_regular_32 = &noto_regular_32_data;


    /*----------------
     * Images
     *----------------*/
    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&global_style);
        lv_style_set_pad_all(&global_style, 30);
        lv_style_set_bg_color(&global_style, lv_color_hex(0xa80000));

        style_inited = true;
    }

    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&dark_theme, 0);
    lv_subject_init_int(&hour, 10);
    lv_subject_init_int(&minutes, 20);
    static char clock_title_buf[UI_SUBJECT_STRING_LENGTH];
    static char clock_title_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&clock_title,
                           clock_title_buf,
                           clock_title_prev_buf,
                           UI_SUBJECT_STRING_LENGTH,
                           "Clock"
                          );
    lv_subject_init_int(&show_clock, 1);

    /*----------------
     * Translations
     *----------------*/

    #ifndef LV_EDITOR_PREVIEW
        lv_translation_add_static(translation_languages, translation_tags, translation_texts);
    #endif

#if LV_USE_XML
    /* Register widgets */

    /* Register fonts */
    lv_xml_register_font(NULL, "noto_regular_16", noto_regular_16);
    lv_xml_register_font(NULL, "noto_regular_24", noto_regular_24);
    lv_xml_register_font(NULL, "noto_regular_32", noto_regular_32);

    /* Register subjects */
    lv_xml_register_subject(NULL, "dark_theme", &dark_theme);
    lv_xml_register_subject(NULL, "hour", &hour);
    lv_xml_register_subject(NULL, "minutes", &minutes);
    lv_xml_register_subject(NULL, "clock_title", &clock_title);
    lv_xml_register_subject(NULL, "show_clock", &show_clock);

    /* Register callbacks */
    lv_xml_register_event_cb(NULL, "screen_1_hello_cb", screen_1_hello_cb);
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
#endif

#if LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manaully from XML using lv_xml_create() */
#endif
}

/* Callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) screen_1_hello_cb(lv_event_t * e)
{
    LV_UNUSED(e);
    LV_LOG("screen_1_hello_cb was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/