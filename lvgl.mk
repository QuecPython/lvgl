NAME := lvgl

include config/$(KCONFIG_CONFIG)

$(NAME)_SRCS = \
	src/lv_core/lv_debug.c \
	src/lv_core/lv_disp.c \
	src/lv_core/lv_group.c \
	src/lv_core/lv_indev.c \
	src/lv_core/lv_obj.c \
	src/lv_core/lv_refr.c \
	src/lv_core/lv_style.c \
	src/lv_draw/lv_draw_img.c \
	src/lv_draw/lv_draw.c \
	src/lv_draw/lv_draw_arc.c \
	src/lv_draw/lv_draw_basic.c \
	src/lv_draw/lv_draw_label.c \
	src/lv_draw/lv_draw_line.c \
	src/lv_draw/lv_draw_rect.c \
	src/lv_draw/lv_draw_triangle.c \
	src/lv_draw/lv_img_cache.c \
	src/lv_draw/lv_img_decoder.c \
	src/lv_font/lv_font.c \
	src/lv_font/lv_font_fmt_txt.c \
	src/lv_font/lv_font_chinese_9.c \
	src/lv_font/lv_font_roboto_16.c \
	src/lv_font/quec_font.c	\
	src/lv_hal/lv_hal_disp.c \
	src/lv_hal/lv_hal_indev.c \
	src/lv_hal/lv_hal_tick.c \
	src/lv_misc/lv_anim.c \
	src/lv_misc/lv_area.c \
	src/lv_misc/lv_async.c \
	src/lv_misc/lv_bidi.c \
	src/lv_misc/lv_color.c \
	src/lv_misc/lv_fs.c \
	src/lv_misc/lv_gc.c \
	src/lv_misc/lv_ll.c \
	src/lv_misc/lv_log.c \
	src/lv_misc/lv_math.c \
	src/lv_misc/lv_mem.c \
	src/lv_misc/lv_printf.c \
	src/lv_misc/lv_task.c \
	src/lv_misc/lv_templ.c \
	src/lv_misc/lv_txt.c \
	src/lv_misc/lv_utils.c \
	src/lv_objx/lv_arc.c \
	src/lv_objx/lv_bar.c \
	src/lv_objx/lv_btn.c \
	src/lv_objx/lv_btnm.c \
	src/lv_objx/lv_calendar.c \
	src/lv_objx/lv_canvas.c \
	src/lv_objx/lv_cb.c \
	src/lv_objx/lv_chart.c \
	src/lv_objx/lv_cont.c \
	src/lv_objx/lv_cpicker.c \
	src/lv_objx/lv_ddlist.c \
	src/lv_objx/lv_gauge.c \
	src/lv_objx/lv_img.c \
	src/lv_objx/lv_imgbtn.c \
	src/lv_objx/lv_kb.c \
	src/lv_objx/lv_label.c \
	src/lv_objx/lv_led.c \
	src/lv_objx/lv_line.c \
	src/lv_objx/lv_list.c \
	src/lv_objx/lv_lmeter.c \
	src/lv_objx/lv_mbox.c \
	src/lv_objx/lv_objx_templ.c \
	src/lv_objx/lv_page.c \
	src/lv_objx/lv_preload.c \
	src/lv_objx/lv_roller.c \
	src/lv_objx/lv_slider.c \
	src/lv_objx/lv_spinbox.c \
	src/lv_objx/lv_sw.c \
	src/lv_objx/lv_ta.c \
	src/lv_objx/lv_table.c \
	src/lv_objx/lv_tabview.c \
	src/lv_objx/lv_tileview.c \
	src/lv_objx/lv_win.c \
	src/lv_themes/lv_theme.c \
	src/lv_themes/lv_theme_alien.c \
	src/lv_themes/lv_theme_default.c \
	src/lv_themes/lv_theme_material.c \
	src/lv_themes/lv_theme_mono.c \
	src/lv_themes/lv_theme_nemo.c \
	src/lv_themes/lv_theme_night.c \
	src/lv_themes/lv_theme_templ.c \
	src/lv_themes/lv_theme_zen.c \
	src/lv_misc/lv_circ.c \
	src/lv_lib_png/lodepng.c \
	src/lv_lib_png/lv_png.c
	

GLOBAL_INCS = \
	. \
	porting \
	src \
	src/lv_core \
	src/lv_draw \
	src/lv_font \
	src/lv_hal \
	src/lv_misc \
	src/lv_objx \
	src/lv_themes \
	src/lv_lib_png

$(NAME)_CFLAGS = \
	-Wno-error=unused-parameter \
	-Wno-error=unused-variable \
	-Wno-error=sign-compare \
	-Wno-error=incompatible-pointer-types \
	-Wno-error=type-limits \
	-Wno-error=unused-function \
	-Wno-error=format= \
	-Wno-error=discarded-qualifiers

$(NAME)_COMPONENTS = peripheral


