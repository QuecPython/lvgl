CSRCS += lv_font.c
CSRCS += lv_font_fmt_txt.c
CSRCS += lv_font_roboto_12.c
CSRCS += lv_font_roboto_16.c
CSRCS += lv_font_roboto_22.c
CSRCS += lv_font_roboto_28.c
CSRCS += lv_font_unscii_8.c
CSRCS += lv_font_chinese_11.c
CSRCS += lv_font_chinese_9.c
CSRCS += quec_font.c

DEPPATH += --dep-path $(LVGL_DIR)/lvgl/src/lv_font
VPATH += :$(LVGL_DIR)/lvgl/src/lv_font

CFLAGS += "-I$(LVGL_DIR)/lvgl/src/lv_font"
