/*
 *---------------------------------------------------------------
 *                        Lvgl Font Tool
 *
 * 注:使用unicode编码
 * 注:本字体文件由Lvgl Font Tool V0.3 生成
 * 作者:阿里(qq:617622104)
 *---------------------------------------------------------------
 */

#include "lvgl.h"

static const uint8_t glyph_bitmap[] = {
    /*  */
    0x00, 0x00, 0x00, 0x00, 0x08, 0xa0, //.........+%
    0x00, 0x00, 0x00, 0x00, 0x0c, 0xe0, //.........%@
    0x00, 0x00, 0x00, 0x00, 0x0c, 0xe0, //.........%@
    0x00, 0x00, 0x00, 0x3a, 0xac, 0xe0, //.......%%%@
    0x00, 0x00, 0x00, 0x5e, 0xec, 0xe0, //......+@@%@
    0x00, 0x00, 0x03, 0x5e, 0xec, 0xe0, //......+@@%@
    0x00, 0x00, 0xaf, 0xae, 0xec, 0xe0, //....%@%@@%@
    0x00, 0xaa, 0xaf, 0xae, 0xec, 0xe0, //..%%%@%@@%@
    0xca, 0xee, 0xaf, 0xae, 0xec, 0xe0, //%%@@%@%@@%@
    0xca, 0xcc, 0x8c, 0x8c, 0xca, 0xc0, //%%%%+%+%%%%

    /*  */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //%%%%%%%%%%%%%+
    0xa3, 0x33, 0x33, 0x33, 0x33, 0x33, 0xca, //%...........%%
    0xac, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xac, //%%@@@@@@@@@@%%
    0xac, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3c, //%%@@@@@@@@@@.%
    0xac, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3c, //%%@@@@@@@@@@.%
    0xac, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xae, //%%@@@@@@@@@@%@
    0xa5, 0x66, 0x66, 0x66, 0x66, 0x65, 0xca, //%+++++++++++%%
    0xec, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //@%%%%%%%%%%%%+

    /*  */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //%%%%%%%%%%%%%+
    0xa3, 0x33, 0x33, 0x33, 0x33, 0x00, 0xca, //%...........%%
    0xac, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xac, //%%@@@@@@@%..%%
    0xac, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x0c, //%%@@@@@@@%...%
    0xac, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x0c, //%%@@@@@@@%...%
    0xac, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xae, //%%@@@@@@@%..%@
    0xa5, 0x66, 0x66, 0x66, 0x65, 0x00, 0xca, //%+++++++++..%%
    0xec, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //@%%%%%%%%%%%%+

    /*  */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //%%%%%%%%%%%%%+
    0xa3, 0x33, 0x33, 0x30, 0x00, 0x00, 0xca, //%...........%%
    0xac, 0xff, 0xff, 0xe5, 0x00, 0x00, 0xac, //%%@@@@@+....%%
    0xac, 0xff, 0xff, 0xe5, 0x00, 0x00, 0x0c, //%%@@@@@+.....%
    0xac, 0xff, 0xff, 0xe5, 0x00, 0x00, 0x0c, //%%@@@@@+.....%
    0xac, 0xff, 0xff, 0xe5, 0x00, 0x00, 0xae, //%%@@@@@+....%@
    0xa5, 0x66, 0x66, 0x53, 0x00, 0x00, 0xca, //%++++++.....%%
    0xec, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //@%%%%%%%%%%%%+

    /*  */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //%%%%%%%%%%%%%+
    0xa3, 0x33, 0x30, 0x00, 0x00, 0x00, 0xca, //%...........%%
    0xac, 0xff, 0xe0, 0x00, 0x00, 0x00, 0xac, //%%@@@.......%%
    0xac, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x0c, //%%@@@........%
    0xac, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x0c, //%%@@@........%
    0xac, 0xff, 0xe0, 0x00, 0x00, 0x00, 0xae, //%%@@@.......%@
    0xa5, 0x66, 0x50, 0x00, 0x00, 0x00, 0xca, //%++++.......%%
    0xec, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //@%%%%%%%%%%%%+

    /*  */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //%%%%%%%%%%%%%+
    0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xca, //%...........%%
    0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, //%...........%%
    0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, //%............%
    0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, //%............%
    0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xae, //%...........%@
    0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xca, //%...........%%
    0xec, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc8, //@%%%%%%%%%%%%+

};

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 11, .box_h = 10, .box_w = 12, .ofs_x = 0, .ofs_y = 2},  /*()*/
    {.bitmap_index = 60, .adv_w = 14, .box_h = 8, .box_w = 14, .ofs_x = 0, .ofs_y = 2},  /*()*/
    {.bitmap_index = 116, .adv_w = 14, .box_h = 8, .box_w = 14, .ofs_x = 0, .ofs_y = 2}, /*()*/
    {.bitmap_index = 172, .adv_w = 14, .box_h = 8, .box_w = 14, .ofs_x = 0, .ofs_y = 2}, /*()*/
    {.bitmap_index = 228, .adv_w = 14, .box_h = 8, .box_w = 14, .ofs_x = 0, .ofs_y = 2}, /*()*/
    {.bitmap_index = 284, .adv_w = 14, .box_h = 8, .box_w = 14, .ofs_x = 0, .ofs_y = 2}, /*()*/
};

static const uint16_t unicode_list_1[] = {
    0xf012, /*()*/
    0xf240, /*()*/
    0xf241, /*()*/
    0xf242, /*()*/
    0xf243, /*()*/
    0xf244, /*()*/
    0x0000, /*End indicator*/
};

static const lv_font_fmt_txt_cmap_t cmaps[] = {{
    .range_start       = 61458,
    .range_length      = 6,
    .type              = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY,
    .glyph_id_start    = 0,
    .unicode_list      = unicode_list_1,
    .glyph_id_ofs_list = NULL,
    .list_length       = 6,
}};

static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc    = glyph_dsc,
    .cmaps        = cmaps,
    .cmap_num     = 1,
    .bpp          = 4,

    .kern_scale   = 0,
    .kern_dsc     = NULL,
    .kern_classes = 0,

    .last_letter   = 0xf244,
    .last_glyph_id = 5,
};

static int binsearch(const uint16_t * sortedSeq, int seqLength, uint16_t keyData)
{
    int low = 0, mid, high = seqLength - 1;
    while(low <= high) {
        mid = (low + high) / 2; //奇数，无论奇偶，有个值就行
        if(keyData < sortedSeq[mid]) {
            high = mid - 1; //是mid-1，因为mid已经比较过了
        } else if(keyData > sortedSeq[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

static const uint8_t * __user_font_get_bitmap(const lv_font_t * font, uint32_t unicode_letter)
{
    lv_font_fmt_txt_dsc_t * fdsc = (lv_font_fmt_txt_dsc_t *)font->dsc;

    if(unicode_letter < fdsc->cmaps[0].range_start) return NULL;

    int i = binsearch(fdsc->cmaps[0].unicode_list, fdsc->cmaps[0].list_length, unicode_letter);
    if(i != -1) {
        const lv_font_fmt_txt_glyph_dsc_t * gdsc = &fdsc->glyph_dsc[i];
        return &fdsc->glyph_bitmap[gdsc->bitmap_index];
    }
    return NULL;
}

static bool __user_font_get_glyph_dsc(const lv_font_t * font, lv_font_glyph_dsc_t * dsc_out, uint32_t unicode_letter,
                                      uint32_t unicode_letter_next)
{
    lv_font_fmt_txt_dsc_t * fdsc = (lv_font_fmt_txt_dsc_t *)font->dsc;

    if(unicode_letter < fdsc->cmaps[0].range_start) return false;

    int i = binsearch(fdsc->cmaps[0].unicode_list, fdsc->cmaps[0].list_length, unicode_letter);
    if(i != -1) {
        const lv_font_fmt_txt_glyph_dsc_t * gdsc = &fdsc->glyph_dsc[i];
        dsc_out->adv_w                           = gdsc->adv_w;
        dsc_out->box_h                           = gdsc->box_h;
        dsc_out->box_w                           = gdsc->box_w;
        dsc_out->ofs_x                           = gdsc->ofs_x;
        dsc_out->ofs_y                           = gdsc->ofs_y;
        dsc_out->bpp                             = fdsc->bpp;
        return true;
    }
    return false;
}

//微软雅黑,Regular,8
//字模高度：16
//内部字体
//使用排序和二分查表
lv_font_t quec_font = {
    .dsc              = &font_dsc,
    .get_glyph_bitmap = __user_font_get_bitmap,
    .get_glyph_dsc    = __user_font_get_glyph_dsc,
    .line_height      = 16,
    .base_line        = 0,
};

// end of file
