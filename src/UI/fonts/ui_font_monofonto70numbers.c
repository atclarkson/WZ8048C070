/*******************************************************************************
 * Size: 70 px
 * Bpp: 2
 * Opts: --bpp 2 --size 70 --font /Users/adamclarkson/SquareLine/assets/monofonto rg.otf -o /Users/adamclarkson/SquareLine/assets/ui_font_monofonto70numbers.c --format lvgl -r 0x30-0x39 -r 0x2E -r 0x2D --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_MONOFONTO70NUMBERS
#define UI_FONT_MONOFONTO70NUMBERS 1
#endif

#if UI_FONT_MONOFONTO70NUMBERS

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+002D "-" */
    0x2a, 0xaa, 0xaa, 0xaa, 0xaa, 0xa1, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xf5, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x5f, 0xff, 0xff, 0xff, 0xff, 0xfd,

    /* U+002E "." */
    0x0, 0x65, 0x0, 0x2f, 0xfe, 0x2, 0xff, 0xfe,
    0xf, 0xff, 0xfc, 0x7f, 0xff, 0xf6, 0xff, 0xff,
    0xeb, 0xff, 0xff, 0x9f, 0xff, 0xfd, 0x3f, 0xff,
    0xf0, 0xbf, 0xff, 0x80, 0x7f, 0xf8, 0x0, 0x15,
    0x0,

    /* U+0030 "0" */
    0x0, 0x1, 0xaf, 0xff, 0xe9, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xff, 0xff, 0x80, 0x0, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f,
    0xff, 0xfe, 0x40, 0x7f, 0xff, 0xfd, 0x7f, 0xff,
    0xe0, 0x0, 0x2f, 0xff, 0xf6, 0xff, 0xff, 0x0,
    0x0, 0x3f, 0xff, 0xeb, 0xff, 0xfc, 0x0, 0x0,
    0xff, 0xff, 0xbf, 0xff, 0xe0, 0x0, 0x2, 0xff,
    0xfe, 0xff, 0xff, 0x80, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xfe, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xe0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0,
    0xb, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0xbf, 0xff,
    0xff, 0xff, 0xe0, 0x0, 0x2, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0xb, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x2,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xfe, 0x0, 0x0, 0x2f, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x0, 0xb, 0xff, 0xff, 0xff, 0xfe, 0x0, 0x0,
    0x2f, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0xbf,
    0xff, 0xff, 0xff, 0xe0, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0xb, 0xff, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xf8,
    0x0, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x2, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xfe, 0x0, 0x0, 0x2f, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0xbf, 0xff, 0xff,
    0xff, 0xe0, 0x0, 0x2, 0xff, 0xff, 0xbf, 0xff,
    0x80, 0x0, 0xb, 0xff, 0xfa, 0xff, 0xff, 0x0,
    0x0, 0x3f, 0xff, 0xeb, 0xff, 0xfd, 0x0, 0x1,
    0xff, 0xff, 0x9f, 0xff, 0xfc, 0x0, 0x1f, 0xff,
    0xfd, 0x3f, 0xff, 0xff, 0xab, 0xff, 0xff, 0xf0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0x3, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x2, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x1, 0x55, 0x50, 0x0, 0x0,

    /* U+0031 "1" */
    0x0, 0x0, 0x0, 0x0, 0x80, 0x0, 0x0, 0x0,
    0x7c, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0,
    0x3f, 0xfc, 0x0, 0x0, 0x2f, 0xff, 0xc0, 0x0,
    0x1f, 0xff, 0xfc, 0x0, 0x1f, 0xff, 0xff, 0xc0,
    0xf, 0xff, 0xff, 0xfc, 0xb, 0xff, 0xff, 0xff,
    0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff,
    0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3f,
    0xfe, 0x3f, 0xff, 0xc3, 0xff, 0x3, 0xff, 0xfc,
    0x3f, 0x40, 0x3f, 0xff, 0xc3, 0x80, 0x3, 0xff,
    0xfc, 0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0, 0x3,
    0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0,
    0x3, 0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff, 0xc0,
    0x0, 0x3, 0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff,
    0xc0, 0x0, 0x3, 0xff, 0xfc, 0x0, 0x0, 0x3f,
    0xff, 0xc0, 0x0, 0x3, 0xff, 0xfc, 0x0, 0x0,
    0x3f, 0xff, 0xc0, 0x0, 0x3, 0xff, 0xfc, 0x0,
    0x0, 0x3f, 0xff, 0xc0, 0x0, 0x3, 0xff, 0xfc,
    0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0, 0x3, 0xff,
    0xfc, 0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0, 0x3,
    0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0,
    0x3, 0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff, 0xc0,
    0x0, 0x3, 0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff,
    0xc0, 0x0, 0x3, 0xff, 0xfc, 0x0, 0x0, 0x3f,
    0xff, 0xc0, 0x0, 0x3, 0xff, 0xfc, 0x0, 0x0,
    0x3f, 0xff, 0xc0, 0x0, 0x3, 0xff, 0xfc, 0x0,
    0x0, 0x3f, 0xff, 0xc0, 0x0, 0x3, 0xff, 0xfc,
    0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0, 0x3, 0xff,
    0xfc, 0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0, 0x3,
    0xff, 0xfc,

    /* U+0032 "2" */
    0x0, 0x0, 0x1b, 0xff, 0xe4, 0x0, 0x0, 0x0,
    0x1, 0xbf, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x2,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x2, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x0, 0x7f, 0xff, 0xff, 0xbf, 0xff,
    0xff, 0xe0, 0x3f, 0xff, 0xf8, 0x0, 0x3f, 0xff,
    0xfc, 0xf, 0xff, 0xf8, 0x0, 0x2, 0xff, 0xff,
    0x47, 0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff, 0xe2,
    0xff, 0xfe, 0x0, 0x0, 0xf, 0xff, 0xfc, 0xbf,
    0xff, 0x40, 0x0, 0x2, 0xff, 0xff, 0x3f, 0xff,
    0xd0, 0x0, 0x0, 0xbf, 0xff, 0xca, 0xaa, 0xa0,
    0x0, 0x0, 0x1f, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xff,
    0xf4, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xea, 0xaa, 0xaa, 0xa0,
    0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x7, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x3, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc2, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf0,

    /* U+0033 "3" */
    0x0, 0x0, 0x6, 0xff, 0xf9, 0x0, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xf, 0xff,
    0xff, 0x0, 0xb, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xe0, 0x0, 0x7, 0xff, 0xff, 0x2, 0xff, 0xff,
    0x0, 0x0, 0xb, 0xff, 0xfc, 0xf, 0xff, 0xf8,
    0x0, 0x0, 0xf, 0xff, 0xf4, 0x3f, 0xff, 0xe0,
    0x0, 0x0, 0x3f, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x2, 0xbf, 0xff, 0xff,
    0xd0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xc3, 0xff,
    0xfd, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf, 0xff,
    0xf8, 0x0, 0x0, 0xf, 0xff, 0xfc, 0x2f, 0xff,
    0xf0, 0x0, 0x0, 0xbf, 0xff, 0xf0, 0xbf, 0xff,
    0xe0, 0x0, 0x3, 0xff, 0xff, 0x80, 0xff, 0xff,
    0xd0, 0x0, 0x3f, 0xff, 0xfc, 0x3, 0xff, 0xff,
    0xf9, 0x5b, 0xff, 0xff, 0xe0, 0x7, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x40, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x15, 0x54,
    0x0, 0x0, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x7, 0xff, 0xfb,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x3, 0xff, 0xfc,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x1, 0xff, 0xfe,
    0x3f, 0xff, 0xf0, 0x0, 0x0, 0x0, 0xff, 0xff,
    0xf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0x43, 0xff, 0xff, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xc0, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x2f, 0xff,
    0xd0, 0x3f, 0xff, 0xf0, 0x0, 0x0, 0xf, 0xff,
    0xf0, 0xf, 0xff, 0xfc, 0x0, 0x0, 0xb, 0xff,
    0xf4, 0x3, 0xff, 0xff, 0x0, 0x0, 0x3, 0xff,
    0xf8, 0x0, 0xff, 0xff, 0xc0, 0x0, 0x2, 0xff,
    0xfc, 0x0, 0x3f, 0xff, 0xf0, 0x0, 0x0, 0xff,
    0xfe, 0x0, 0xf, 0xff, 0xfc, 0x0, 0x0, 0xbf,
    0xff, 0x0, 0x3, 0xff, 0xff, 0x0, 0x0, 0x3f,
    0xff, 0x80, 0x0, 0xff, 0xff, 0xc0, 0x0, 0x2f,
    0xff, 0xc0, 0x0, 0x3f, 0xff, 0xf0, 0x0, 0xf,
    0xff, 0xd0, 0x0, 0xf, 0xff, 0xfc, 0x0, 0xb,
    0xff, 0xf0, 0x0, 0x3, 0xff, 0xff, 0x0, 0x3,
    0xff, 0xf4, 0x0, 0x0, 0xff, 0xff, 0xc0, 0x2,
    0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff, 0xf0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xaa, 0xaa, 0xaa, 0xaa, 0xaf, 0xff,
    0xfe, 0xaa, 0x80, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3f, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xc0, 0x0,

    /* U+0035 "5" */
    0x3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x7,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x1f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xb, 0xff,
    0xfe, 0xaa, 0xaa, 0xaa, 0xaa, 0x0, 0x2f, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xf4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xd0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0x1, 0x6a,
    0xa4, 0x0, 0x0, 0x3, 0xff, 0xfc, 0xbf, 0xff,
    0xfe, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x40, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x1, 0xff, 0xff, 0xe4, 0x1, 0xff, 0xff,
    0xfc, 0xb, 0xff, 0xfc, 0x0, 0x0, 0xff, 0xff,
    0xf4, 0x2f, 0xff, 0xc0, 0x0, 0x0, 0xff, 0xff,
    0xe0, 0x6a, 0xa9, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xc3, 0xff,
    0xfd, 0x0, 0x0, 0x3, 0xff, 0xff, 0xf, 0xff,
    0xf8, 0x0, 0x0, 0x1f, 0xff, 0xf8, 0x2f, 0xff,
    0xf0, 0x0, 0x0, 0xff, 0xff, 0xd0, 0x7f, 0xff,
    0xe0, 0x0, 0x7, 0xff, 0xff, 0x0, 0xff, 0xff,
    0xd0, 0x0, 0x7f, 0xff, 0xfc, 0x2, 0xff, 0xff,
    0xf9, 0x5f, 0xff, 0xff, 0xd0, 0x3, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf4, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0x80, 0x0, 0x0, 0x7, 0xff, 0xff,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x15, 0x54,
    0x0, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xe4, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfc, 0x3, 0xff, 0xff, 0xf4, 0x7, 0xff, 0xff,
    0xf0, 0x1f, 0xff, 0xfe, 0x0, 0x2, 0xff, 0xff,
    0xe0, 0xff, 0xff, 0xf0, 0x0, 0x3, 0xff, 0xff,
    0xc3, 0xff, 0xff, 0x40, 0x0, 0x7, 0xff, 0xff,
    0x1f, 0xff, 0xfc, 0x0, 0x0, 0xf, 0xff, 0xfd,
    0x7f, 0xff, 0xe0, 0x0, 0x0, 0x2f, 0xff, 0xf5,
    0xff, 0xff, 0x80, 0x0, 0x0, 0xbf, 0xff, 0xeb,
    0xff, 0xfd, 0x0, 0x0, 0x1, 0xff, 0xff, 0xaf,
    0xff, 0xf4, 0x0, 0x0, 0x7, 0xff, 0xfe, 0xbf,
    0xff, 0xd0, 0x0, 0x0, 0x1f, 0xff, 0xf9, 0xff,
    0xff, 0x80, 0x0, 0x0, 0xbf, 0xff, 0xd7, 0xff,
    0xfe, 0x0, 0x0, 0x2, 0xff, 0xff, 0x4f, 0xff,
    0xfc, 0x0, 0x0, 0xf, 0xff, 0xfc, 0x3f, 0xff,
    0xf8, 0x0, 0x0, 0xbf, 0xff, 0xf0, 0xff, 0xff,
    0xf0, 0x0, 0x3, 0xff, 0xff, 0x81, 0xff, 0xff,
    0xf0, 0x0, 0x3f, 0xff, 0xfd, 0x3, 0xff, 0xff,
    0xf9, 0x5b, 0xff, 0xff, 0xf0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x40, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5, 0x54,
    0x0, 0x0, 0x0,

    /* U+0037 "7" */
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf4,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x2a, 0xaa, 0xaa, 0xaa, 0xab, 0xff, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0x80, 0x0,
    0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1f, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x2f, 0xff, 0xfd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0xb, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x0, 0x6, 0xff, 0xfe, 0x40, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x2, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xf, 0xff,
    0xff, 0x80, 0xb, 0xff, 0xff, 0xc0, 0x7f, 0xff,
    0xf4, 0x0, 0x7, 0xff, 0xff, 0x42, 0xff, 0xff,
    0xc0, 0x0, 0xf, 0xff, 0xfe, 0xf, 0xff, 0xfd,
    0x0, 0x0, 0x1f, 0xff, 0xfc, 0x3f, 0xff, 0xf0,
    0x0, 0x0, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xf, 0xff, 0xfc, 0x0,
    0x0, 0xf, 0xff, 0xfc, 0x2f, 0xff, 0xf0, 0x0,
    0x0, 0x3f, 0xff, 0xe0, 0x7f, 0xff, 0xd0, 0x0,
    0x1, 0xff, 0xff, 0x40, 0xff, 0xff, 0xc0, 0x0,
    0xf, 0xff, 0xfc, 0x3, 0xff, 0xff, 0x80, 0x0,
    0xbf, 0xff, 0xf0, 0x3, 0xff, 0xff, 0xd0, 0x1f,
    0xff, 0xff, 0x0, 0xb, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0xb, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x0, 0xb, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x2, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff,
    0xe0, 0xf, 0xff, 0xff, 0x40, 0x7, 0xff, 0xff,
    0xc0, 0xbf, 0xff, 0xf4, 0x0, 0x7, 0xff, 0xff,
    0x83, 0xff, 0xff, 0x80, 0x0, 0xb, 0xff, 0xff,
    0xf, 0xff, 0xfc, 0x0, 0x0, 0xf, 0xff, 0xfc,
    0x7f, 0xff, 0xf0, 0x0, 0x0, 0x3f, 0xff, 0xf5,
    0xff, 0xff, 0x80, 0x0, 0x0, 0xbf, 0xff, 0xdb,
    0xff, 0xfd, 0x0, 0x0, 0x1, 0xff, 0xff, 0x6f,
    0xff, 0xf4, 0x0, 0x0, 0x7, 0xff, 0xfe, 0xbf,
    0xff, 0xd0, 0x0, 0x0, 0x1f, 0xff, 0xfa, 0xff,
    0xff, 0x80, 0x0, 0x0, 0xbf, 0xff, 0xd7, 0xff,
    0xfe, 0x0, 0x0, 0x2, 0xff, 0xff, 0x5f, 0xff,
    0xfc, 0x0, 0x0, 0xf, 0xff, 0xfd, 0x3f, 0xff,
    0xf4, 0x0, 0x0, 0x7f, 0xff, 0xf0, 0xff, 0xff,
    0xf0, 0x0, 0x3, 0xff, 0xff, 0xc2, 0xff, 0xff,
    0xf0, 0x0, 0x3f, 0xff, 0xfe, 0x3, 0xff, 0xff,
    0xf9, 0x5b, 0xff, 0xff, 0xf0, 0xb, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0xf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfc, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xd0, 0x0, 0x0, 0xb, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x15, 0x55,
    0x0, 0x0, 0x0,

    /* U+0039 "9" */
    0x0, 0x0, 0x6, 0xff, 0xfa, 0x40, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0xb,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x7f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff,
    0xff, 0x80, 0xb, 0xff, 0xff, 0xc0, 0xff, 0xff,
    0xf4, 0x0, 0x7, 0xff, 0xff, 0x83, 0xff, 0xff,
    0x80, 0x0, 0xb, 0xff, 0xff, 0x1f, 0xff, 0xfc,
    0x0, 0x0, 0xf, 0xff, 0xfc, 0x7f, 0xff, 0xe0,
    0x0, 0x0, 0x2f, 0xff, 0xf5, 0xff, 0xff, 0x80,
    0x0, 0x0, 0xbf, 0xff, 0xdb, 0xff, 0xfd, 0x0,
    0x0, 0x1, 0xff, 0xff, 0xaf, 0xff, 0xf4, 0x0,
    0x0, 0x7, 0xff, 0xfe, 0xbf, 0xff, 0xe0, 0x0,
    0x0, 0x2f, 0xff, 0xf9, 0xff, 0xff, 0x80, 0x0,
    0x0, 0xbf, 0xff, 0xd7, 0xff, 0xff, 0x0, 0x0,
    0x3, 0xff, 0xff, 0x4f, 0xff, 0xfe, 0x0, 0x0,
    0x2f, 0xff, 0xfd, 0x3f, 0xff, 0xfd, 0x0, 0x1,
    0xff, 0xff, 0xf0, 0x7f, 0xff, 0xfe, 0x0, 0x2f,
    0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfd, 0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x6f, 0xfe, 0xff, 0xff, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0xb, 0xff, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xfd, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xff,
    0xe0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xf4,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 560, .box_w = 23, .box_h = 8, .ofs_x = 6, .ofs_y = 22},
    {.bitmap_index = 46, .adv_w = 560, .box_w = 11, .box_h = 12, .ofs_x = 12, .ofs_y = -1},
    {.bitmap_index = 79, .adv_w = 560, .box_w = 27, .box_h = 52, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 430, .adv_w = 560, .box_w = 18, .box_h = 52, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 560, .box_w = 29, .box_h = 51, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1034, .adv_w = 560, .box_w = 31, .box_h = 52, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1437, .adv_w = 560, .box_w = 33, .box_h = 51, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1858, .adv_w = 560, .box_w = 31, .box_h = 52, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2261, .adv_w = 560, .box_w = 31, .box_h = 52, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2664, .adv_w = 560, .box_w = 32, .box_h = 51, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3072, .adv_w = 560, .box_w = 31, .box_h = 52, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 3475, .adv_w = 560, .box_w = 31, .box_h = 51, .ofs_x = 2, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 1, 0, 2, 3, 4, 5, 6,
    7, 8, 9, 10, 11
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 45, .range_length = 13, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 13, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_monofonto70numbers = {
#else
lv_font_t ui_font_monofonto70numbers = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 53,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -9,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_MONOFONTO70NUMBERS*/

