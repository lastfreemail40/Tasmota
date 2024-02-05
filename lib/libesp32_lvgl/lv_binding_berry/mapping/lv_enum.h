// ======================================================================
// Functions
// ======================================================================

load_font=@lv0_load_font

// lv_anim_path_functions
anim_path_bounce=&lv_anim_path_bounce
anim_path_ease_in=&lv_anim_path_ease_in
anim_path_ease_in_out=&lv_anim_path_ease_in_out
anim_path_ease_out=&lv_anim_path_ease_out
anim_path_linear=&lv_anim_path_linear
anim_path_overshoot=&lv_anim_path_overshoot
anim_path_step=&lv_anim_path_step
LV_LAYOUT_GRID=>be_LV_LAYOUT_GRID
LV_LAYOUT_FLEX=>be_LV_LAYOUT_FLEX

// ======================================================================
// Colors
// ======================================================================
// LV Colors - we store in 24 bits format and will convert at runtime
// This is specific treatment because we keep colors in 24 bits format
COLOR_WHITE=0xFFFFFF
COLOR_SILVER=0xC0C0C0
COLOR_GRAY=0x808080
COLOR_BLACK=0x000000
COLOR_RED=0xFF0000
COLOR_MAROON=0x800000
COLOR_YELLOW=0xFFFF00
COLOR_OLIVE=0x808000
COLOR_LIME=0x00FF00
COLOR_GREEN=0x008000
COLOR_CYAN=0x00FFFF
COLOR_AQUA=0x00FFFF
COLOR_TEAL=0x008080
COLOR_BLUE=0x0000FF
COLOR_NAVY=0x000080
COLOR_MAGENTA=0xFF00FF
COLOR_ORANGE=0xFF7F00
COLOR_PURPLE=0x800080

// Freetype
FT_FONT_STYLE_NORMAL=FT_FONT_STYLE_NORMAL
FT_FONT_STYLE_ITALIC=FT_FONT_STYLE_ITALIC
FT_FONT_STYLE_BOLD=FT_FONT_STYLE_BOLD

// following are #define, not enum
LV_GRID_FR=LV_GRID_FR(0)

// ======================================================================
// Symbols
// ======================================================================

SYMBOL_AUDIO="\xef\x80\x81"
SYMBOL_VIDEO="\xef\x80\x88"
SYMBOL_LIST="\xef\x80\x8b"
SYMBOL_OK="\xef\x80\x8c"
SYMBOL_CLOSE="\xef\x80\x8d"
SYMBOL_POWER="\xef\x80\x91"
SYMBOL_SETTINGS="\xef\x80\x93"
SYMBOL_HOME="\xef\x80\x95"
SYMBOL_DOWNLOAD="\xef\x80\x99"
SYMBOL_DRIVE="\xef\x80\x9c"
SYMBOL_REFRESH="\xef\x80\xa1"
SYMBOL_MUTE="\xef\x80\xa6"
SYMBOL_VOLUME_MID="\xef\x80\xa7"
SYMBOL_VOLUME_MAX="\xef\x80\xa8"
SYMBOL_IMAGE="\xef\x80\xbe"
SYMBOL_EDIT="\xef\x8C\x84"
SYMBOL_PREV="\xef\x81\x88"
SYMBOL_PLAY="\xef\x81\x8b"
SYMBOL_PAUSE="\xef\x81\x8c"
SYMBOL_STOP="\xef\x81\x8d"
SYMBOL_NEXT="\xef\x81\x91"
SYMBOL_EJECT="\xef\x81\x92"
SYMBOL_LEFT="\xef\x81\x93"
SYMBOL_RIGHT="\xef\x81\x94"
SYMBOL_PLUS="\xef\x81\xa7"
SYMBOL_MINUS="\xef\x81\xa8"
SYMBOL_EYE_OPEN="\xef\x81\xae"
SYMBOL_EYE_CLOSE="\xef\x81\xb0"
SYMBOL_WARNING="\xef\x81\xb1"
SYMBOL_SHUFFLE="\xef\x81\xb4"
SYMBOL_UP="\xef\x81\xb7"
SYMBOL_DOWN="\xef\x81\xb8"
SYMBOL_LOOP="\xef\x81\xb9"
SYMBOL_DIRECTORY="\xef\x81\xbb"
SYMBOL_UPLOAD="\xef\x82\x93"
SYMBOL_CALL="\xef\x82\x95"
SYMBOL_CUT="\xef\x83\x84"
SYMBOL_COPY="\xef\x83\x85"
SYMBOL_SAVE="\xef\x83\x87"
SYMBOL_CHARGE="\xef\x83\xa7"
SYMBOL_PASTE="\xef\x83\xAA"
SYMBOL_BELL="\xef\x83\xb3"
SYMBOL_KEYBOARD="\xef\x84\x9c"
SYMBOL_GPS="\xef\x84\xa4"
SYMBOL_FILE="\xef\x85\x9b"
SYMBOL_WIFI="\xef\x87\xab"
SYMBOL_BATTERY_FULL="\xef\x89\x80"
SYMBOL_BATTERY_3="\xef\x89\x81"
SYMBOL_BATTERY_2="\xef\x89\x82"
SYMBOL_BATTERY_1="\xef\x89\x83"
SYMBOL_BATTERY_EMPTY="\xef\x89\x84"
SYMBOL_USB="\xef\x8a\x87"
SYMBOL_BLUETOOTH="\xef\x8a\x93"
SYMBOL_TRASH="\xef\x8B\xAD"
SYMBOL_BACKSPACE="\xef\x95\x9A"
SYMBOL_SD_CARD="\xef\x9F\x82"
SYMBOL_NEW_LINE="\xef\xA2\xA2"

SYMBOL_DUMMY="\xEF\xA3\xBF"

SYMBOL_BULLET="\xE2\x80\xA2"
      
// LVGL 8 to 9 compatibility
      
LV_DISP_ROTATION_0=LV_DISPLAY_ROTATION_0
LV_DISP_ROTATION_90=LV_DISPLAY_ROTATION_90
LV_DISP_ROTATION_180=LV_DISPLAY_ROTATION_180
LV_DISP_ROTATION_270=LV_DISPLAY_ROTATION_270

LV_DISP_RENDER_MODE_PARTIAL=LV_DISPLAY_RENDER_MODE_PARTIAL
LV_DISP_RENDER_MODE_DIRECT=LV_DISPLAY_RENDER_MODE_DIRECT
LV_DISP_RENDER_MODE_FULL=LV_DISPLAY_RENDER_MODE_FULL

LV_BTNMATRIX_BTN_NONE=LV_BUTTONMATRIX_BUTTON_NONE

LV_BTNMATRIX_CTRL_HIDDEN=LV_BUTTONMATRIX_CTRL_HIDDEN
LV_BTNMATRIX_CTRL_NO_REPEAT=LV_BUTTONMATRIX_CTRL_NO_REPEAT
LV_BTNMATRIX_CTRL_DISABLED=LV_BUTTONMATRIX_CTRL_DISABLED
LV_BTNMATRIX_CTRL_CHECKABLE=LV_BUTTONMATRIX_CTRL_CHECKABLE
LV_BTNMATRIX_CTRL_CHECKED=LV_BUTTONMATRIX_CTRL_CHECKED
LV_BTNMATRIX_CTRL_CLICK_TRIG=LV_BUTTONMATRIX_CTRL_CLICK_TRIG
LV_BTNMATRIX_CTRL_POPOVER=LV_BUTTONMATRIX_CTRL_POPOVER
LV_BTNMATRIX_CTRL_CUSTOM_1=LV_BUTTONMATRIX_CTRL_CUSTOM_1
LV_BTNMATRIX_CTRL_CUSTOM_2=LV_BUTTONMATRIX_CTRL_CUSTOM_2

LV_RES_OK=LV_RESULT_OK
LV_RES_INV=LV_RESULT_INVALID

LV_INDEV_STATE_PR=LV_INDEV_STATE_PRESSED
LV_INDEV_STATE_REL=LV_INDEV_STATE_RELEASED

LV_STYLE_ANIM_TIME=LV_STYLE_ANIM_DURATION
LV_STYLE_IMG_OPA=LV_STYLE_IMAGE_OPA
LV_STYLE_IMG_RECOLOR=LV_STYLE_IMAGE_RECOLOR
LV_STYLE_IMG_RECOLOR_OPA=LV_STYLE_IMAGE_RECOLOR_OPA
LV_STYLE_SHADOW_OFS_X=LV_STYLE_SHADOW_OFFSET_X
LV_STYLE_SHADOW_OFS_Y=LV_STYLE_SHADOW_OFFSET_Y
LV_STYLE_TRANSFORM_ANGLE=LV_STYLE_TRANSFORM_ROTATION

LV_ZOOM_NONE=LV_SCALE_NONE

// ======================================================================
// Generated from headers
// ======================================================================

// File: ../../lvgl/src/core/lv_global.h
// File: ../../lvgl/src/core/lv_group.h
LV_KEY_UP
LV_KEY_DOWN
LV_KEY_RIGHT
LV_KEY_LEFT
LV_KEY_ESC
LV_KEY_DEL
LV_KEY_BACKSPACE
LV_KEY_ENTER
LV_KEY_NEXT
LV_KEY_PREV
LV_KEY_HOME
LV_KEY_END

LV_GROUP_REFOCUS_POLICY_NEXT
LV_GROUP_REFOCUS_POLICY_PREV
// File: ../../lvgl/src/core/lv_obj.h
LV_STATE_DEFAULT
LV_STATE_CHECKED
LV_STATE_FOCUSED
LV_STATE_FOCUS_KEY
LV_STATE_EDITED
LV_STATE_HOVERED
LV_STATE_PRESSED
LV_STATE_SCROLLED
LV_STATE_DISABLED
LV_STATE_USER_1
LV_STATE_USER_2
LV_STATE_USER_3
LV_STATE_USER_4
LV_STATE_ANY

LV_PART_MAIN
LV_PART_SCROLLBAR
LV_PART_INDICATOR
LV_PART_KNOB
LV_PART_SELECTED
LV_PART_ITEMS
LV_PART_CURSOR
LV_PART_CUSTOM_FIRST
LV_PART_ANY

LV_OBJ_FLAG_HIDDEN
LV_OBJ_FLAG_CLICKABLE
LV_OBJ_FLAG_CLICK_FOCUSABLE
LV_OBJ_FLAG_CHECKABLE
LV_OBJ_FLAG_SCROLLABLE
LV_OBJ_FLAG_SCROLL_ELASTIC
LV_OBJ_FLAG_SCROLL_MOMENTUM
LV_OBJ_FLAG_SCROLL_ONE
LV_OBJ_FLAG_SCROLL_CHAIN_HOR
LV_OBJ_FLAG_SCROLL_CHAIN_VER
LV_OBJ_FLAG_SCROLL_CHAIN
LV_OBJ_FLAG_SCROLL_ON_FOCUS
LV_OBJ_FLAG_SCROLL_WITH_ARROW
LV_OBJ_FLAG_SNAPPABLE
LV_OBJ_FLAG_PRESS_LOCK
LV_OBJ_FLAG_EVENT_BUBBLE
LV_OBJ_FLAG_GESTURE_BUBBLE
LV_OBJ_FLAG_ADV_HITTEST
LV_OBJ_FLAG_IGNORE_LAYOUT
LV_OBJ_FLAG_FLOATING
LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS
LV_OBJ_FLAG_OVERFLOW_VISIBLE
LV_OBJ_FLAG_FLEX_IN_NEW_TRACK
LV_OBJ_FLAG_LAYOUT_1
LV_OBJ_FLAG_LAYOUT_2
LV_OBJ_FLAG_WIDGET_1
LV_OBJ_FLAG_WIDGET_2
LV_OBJ_FLAG_USER_1
LV_OBJ_FLAG_USER_2
LV_OBJ_FLAG_USER_3
LV_OBJ_FLAG_USER_4

// File: ../../lvgl/src/core/lv_obj_class.h
LV_OBJ_CLASS_EDITABLE_INHERIT
LV_OBJ_CLASS_EDITABLE_TRUE
LV_OBJ_CLASS_EDITABLE_FALSE

LV_OBJ_CLASS_GROUP_DEF_INHERIT
LV_OBJ_CLASS_GROUP_DEF_TRUE
LV_OBJ_CLASS_GROUP_DEF_FALSE

LV_OBJ_CLASS_THEME_INHERITABLE_FALSE
LV_OBJ_CLASS_THEME_INHERITABLE_TRUE

// File: ../../lvgl/src/core/lv_obj_draw.h
LV_LAYER_TYPE_NONE
LV_LAYER_TYPE_SIMPLE
LV_LAYER_TYPE_TRANSFORM

// File: ../../lvgl/src/core/lv_obj_event.h
LV_COVER_RES_COVER
LV_COVER_RES_NOT_COVER
LV_COVER_RES_MASKED

// File: ../../lvgl/src/core/lv_obj_pos.h
// File: ../../lvgl/src/core/lv_obj_property.h
// File: ../../lvgl/src/core/lv_obj_scroll.h
LV_SCROLLBAR_MODE_OFF
LV_SCROLLBAR_MODE_ON
LV_SCROLLBAR_MODE_ACTIVE
LV_SCROLLBAR_MODE_AUTO

LV_SCROLL_SNAP_NONE
LV_SCROLL_SNAP_START
LV_SCROLL_SNAP_END
LV_SCROLL_SNAP_CENTER
// File: ../../lvgl/src/core/lv_obj_style.h

// File: ../../lvgl/src/core/lv_obj_style_gen.h
// File: ../../lvgl/src/core/lv_obj_tree.h
LV_OBJ_TREE_WALK_NEXT
LV_OBJ_TREE_WALK_SKIP_CHILDREN
LV_OBJ_TREE_WALK_END

// File: ../../lvgl/src/core/lv_refr.h
// File: ../../lvgl/src/display/lv_display.h
LV_DISPLAY_ROTATION_0
LV_DISPLAY_ROTATION_90
LV_DISPLAY_ROTATION_180
LV_DISPLAY_ROTATION_270
LV_DISPLAY_RENDER_MODE_PARTIAL
LV_DISPLAY_RENDER_MODE_DIRECT
LV_DISPLAY_RENDER_MODE_FULL

LV_SCR_LOAD_ANIM_NONE
LV_SCR_LOAD_ANIM_OVER_LEFT
LV_SCR_LOAD_ANIM_OVER_RIGHT
LV_SCR_LOAD_ANIM_OVER_TOP
LV_SCR_LOAD_ANIM_OVER_BOTTOM
LV_SCR_LOAD_ANIM_MOVE_LEFT
LV_SCR_LOAD_ANIM_MOVE_RIGHT
LV_SCR_LOAD_ANIM_MOVE_TOP
LV_SCR_LOAD_ANIM_MOVE_BOTTOM
LV_SCR_LOAD_ANIM_FADE_IN
LV_SCR_LOAD_ANIM_FADE_ON
LV_SCR_LOAD_ANIM_FADE_OUT
LV_SCR_LOAD_ANIM_OUT_LEFT
LV_SCR_LOAD_ANIM_OUT_RIGHT
LV_SCR_LOAD_ANIM_OUT_TOP
LV_SCR_LOAD_ANIM_OUT_BOTTOM

// File: ../../lvgl/src/draw/lv_draw.h
LV_DRAW_TASK_TYPE_FILL
LV_DRAW_TASK_TYPE_BORDER
LV_DRAW_TASK_TYPE_BOX_SHADOW
LV_DRAW_TASK_TYPE_LABEL
LV_DRAW_TASK_TYPE_IMAGE
LV_DRAW_TASK_TYPE_LAYER
LV_DRAW_TASK_TYPE_LINE
LV_DRAW_TASK_TYPE_ARC
LV_DRAW_TASK_TYPE_TRIANGLE
LV_DRAW_TASK_TYPE_MASK_RECTANGLE
LV_DRAW_TASK_TYPE_MASK_BITMAP
LV_DRAW_TASK_TYPE_VECTOR

LV_DRAW_TASK_STATE_WAITING
LV_DRAW_TASK_STATE_QUEUED
LV_DRAW_TASK_STATE_IN_PROGRESS
LV_DRAW_TASK_STATE_READY

// File: ../../lvgl/src/draw/lv_draw_arc.h
// File: ../../lvgl/src/draw/lv_draw_buf.h
LV_STRIDE_AUTO
// File: ../../lvgl/src/draw/lv_draw_image.h
// File: ../../lvgl/src/draw/lv_draw_label.h
LV_DRAW_LETTER_BITMAP_FORMAT_INVALID
LV_DRAW_LETTER_BITMAP_FORMAT_A8
LV_DRAW_LETTER_BITMAP_FORMAT_IMAGE
LV_DRAW_LETTER_VECTOR_FORMAT

// File: ../../lvgl/src/draw/lv_draw_line.h
// File: ../../lvgl/src/draw/lv_draw_mask.h
// File: ../../lvgl/src/draw/lv_draw_rect.h
LV_RADIUS_CIRCLE
// File: ../../lvgl/src/draw/lv_draw_triangle.h
// File: ../../lvgl/src/draw/lv_draw_vector.h
LV_VECTOR_FILL_NONZERO
LV_VECTOR_FILL_EVENODD

LV_VECTOR_STROKE_CAP_BUTT
LV_VECTOR_STROKE_CAP_SQUARE
LV_VECTOR_STROKE_CAP_ROUND

LV_VECTOR_STROKE_JOIN_MITER
LV_VECTOR_STROKE_JOIN_BEVEL
LV_VECTOR_STROKE_JOIN_ROUND

LV_VECTOR_PATH_QUALITY_MEDIUM
LV_VECTOR_PATH_QUALITY_HIGH
LV_VECTOR_PATH_QUALITY_LOW

LV_VECTOR_BLEND_SRC_OVER
LV_VECTOR_BLEND_SRC_IN
LV_VECTOR_BLEND_DST_OVER
LV_VECTOR_BLEND_DST_IN
LV_VECTOR_BLEND_SCREEN
LV_VECTOR_BLEND_MULTIPLY
LV_VECTOR_BLEND_NONE
LV_VECTOR_BLEND_ADDITIVE
LV_VECTOR_BLEND_SUBTRACTIVE

LV_VECTOR_PATH_OP_MOVE_TO
LV_VECTOR_PATH_OP_LINE_TO
LV_VECTOR_PATH_OP_QUAD_TO
LV_VECTOR_PATH_OP_CUBIC_TO
LV_VECTOR_PATH_OP_CLOSE

LV_VECTOR_DRAW_STYLE_SOLID
LV_VECTOR_DRAW_STYLE_PATTERN
LV_VECTOR_DRAW_STYLE_GRADIENT

LV_VECTOR_GRADIENT_SPREAD_PAD
LV_VECTOR_GRADIENT_SPREAD_REPEAT
LV_VECTOR_GRADIENT_SPREAD_REFLECT

LV_VECTOR_GRADIENT_STYLE_LINEAR
LV_VECTOR_GRADIENT_STYLE_RADIAL

// File: ../../lvgl/src/draw/lv_image_buf.h
LV_IMAGE_FLAGS_PREMULTIPLIED
LV_IMAGE_FLAGS_MODIFIABLE
LV_IMAGE_FLAGS_VECTORS
LV_IMAGE_FLAGS_COMPRESSED
LV_IMAGE_FLAGS_ALLOCATED
LV_IMAGE_FLAGS_USER1
LV_IMAGE_FLAGS_USER2
LV_IMAGE_FLAGS_USER3
LV_IMAGE_FLAGS_USER4
LV_IMAGE_FLAGS_USER5
LV_IMAGE_FLAGS_USER6
LV_IMAGE_FLAGS_USER7
LV_IMAGE_FLAGS_USER8

LV_IMAGE_COMPRESS_NONE
LV_IMAGE_COMPRESS_RLE
LV_IMAGE_COMPRESS_LZ4

// File: ../../lvgl/src/draw/lv_image_decoder.h
LV_IMAGE_SRC_VARIABLE
LV_IMAGE_SRC_FILE
LV_IMAGE_SRC_SYMBOL
LV_IMAGE_SRC_UNKNOWN

// File: ../../lvgl/src/misc/lv_anim.h
LV_ANIM_OFF
LV_ANIM_ON

LV_ANIM_REPEAT_INFINITE
LV_ANIM_PLAYTIME_INFINITE
// File: ../../lvgl/src/misc/lv_anim_timeline.h
// File: ../../lvgl/src/misc/lv_area.h
LV_ALIGN_DEFAULT
LV_ALIGN_TOP_LEFT
LV_ALIGN_TOP_MID
LV_ALIGN_TOP_RIGHT
LV_ALIGN_BOTTOM_LEFT
LV_ALIGN_BOTTOM_MID
LV_ALIGN_BOTTOM_RIGHT
LV_ALIGN_LEFT_MID
LV_ALIGN_RIGHT_MID
LV_ALIGN_CENTER
LV_ALIGN_OUT_TOP_LEFT
LV_ALIGN_OUT_TOP_MID
LV_ALIGN_OUT_TOP_RIGHT
LV_ALIGN_OUT_BOTTOM_LEFT
LV_ALIGN_OUT_BOTTOM_MID
LV_ALIGN_OUT_BOTTOM_RIGHT
LV_ALIGN_OUT_LEFT_TOP
LV_ALIGN_OUT_LEFT_MID
LV_ALIGN_OUT_LEFT_BOTTOM
LV_ALIGN_OUT_RIGHT_TOP
LV_ALIGN_OUT_RIGHT_MID
LV_ALIGN_OUT_RIGHT_BOTTOM

LV_DIR_NONE
LV_DIR_LEFT
LV_DIR_RIGHT
LV_DIR_TOP
LV_DIR_BOTTOM
LV_DIR_HOR
LV_DIR_VER
LV_DIR_ALL

LV_SIZE_CONTENT
LV_COORD_MAX
LV_COORD_MIN
// File: ../../lvgl/src/misc/lv_array.h
// File: ../../lvgl/src/misc/lv_assert.h
// File: ../../lvgl/src/misc/lv_async.h
// File: ../../lvgl/src/misc/lv_bidi.h
LV_BASE_DIR_LTR
LV_BASE_DIR_RTL
LV_BASE_DIR_AUTO
LV_BASE_DIR_NEUTRAL
LV_BASE_DIR_WEAK

// File: ../../lvgl/src/misc/lv_color.h
LV_OPA_TRANSP
LV_OPA_0
LV_OPA_10
LV_OPA_20
LV_OPA_30
LV_OPA_40
LV_OPA_50
LV_OPA_60
LV_OPA_70
LV_OPA_80
LV_OPA_90
LV_OPA_100
LV_OPA_COVER

LV_COLOR_FORMAT_UNKNOWN
LV_COLOR_FORMAT_RAW
LV_COLOR_FORMAT_RAW_ALPHA
LV_COLOR_FORMAT_L8
LV_COLOR_FORMAT_I1
LV_COLOR_FORMAT_I2
LV_COLOR_FORMAT_I4
LV_COLOR_FORMAT_I8
LV_COLOR_FORMAT_A8
LV_COLOR_FORMAT_RGB565
LV_COLOR_FORMAT_RGB565A8
LV_COLOR_FORMAT_RGB888
LV_COLOR_FORMAT_ARGB8888
LV_COLOR_FORMAT_XRGB8888
LV_COLOR_FORMAT_A1
LV_COLOR_FORMAT_A2
LV_COLOR_FORMAT_A4
LV_COLOR_FORMAT_YUV_START
LV_COLOR_FORMAT_I420
LV_COLOR_FORMAT_I422
LV_COLOR_FORMAT_I444
LV_COLOR_FORMAT_I400
LV_COLOR_FORMAT_NV21
LV_COLOR_FORMAT_NV12
LV_COLOR_FORMAT_YUY2
LV_COLOR_FORMAT_UYVY
LV_COLOR_FORMAT_YUV_END
LV_COLOR_FORMAT_NATIVE
LV_COLOR_FORMAT_NATIVE
LV_COLOR_FORMAT_NATIVE_WITH_ALPHA
LV_COLOR_FORMAT_NATIVE
LV_COLOR_FORMAT_NATIVE_WITH_ALPHA
LV_COLOR_FORMAT_NATIVE
LV_COLOR_FORMAT_NATIVE_WITH_ALPHA

LV_COLOR_DEPTH
// File: ../../lvgl/src/misc/lv_color_op.h
// File: ../../lvgl/src/misc/lv_event.h
LV_EVENT_ALL
LV_EVENT_PRESSED
LV_EVENT_PRESSING
LV_EVENT_PRESS_LOST
LV_EVENT_SHORT_CLICKED
LV_EVENT_LONG_PRESSED
LV_EVENT_LONG_PRESSED_REPEAT
LV_EVENT_CLICKED
LV_EVENT_RELEASED
LV_EVENT_SCROLL_BEGIN
LV_EVENT_SCROLL_THROW_BEGIN
LV_EVENT_SCROLL_END
LV_EVENT_SCROLL
LV_EVENT_GESTURE
LV_EVENT_KEY
LV_EVENT_FOCUSED
LV_EVENT_DEFOCUSED
LV_EVENT_LEAVE
LV_EVENT_HIT_TEST
LV_EVENT_INDEV_RESET
LV_EVENT_COVER_CHECK
LV_EVENT_REFR_EXT_DRAW_SIZE
LV_EVENT_DRAW_MAIN_BEGIN
LV_EVENT_DRAW_MAIN
LV_EVENT_DRAW_MAIN_END
LV_EVENT_DRAW_POST_BEGIN
LV_EVENT_DRAW_POST
LV_EVENT_DRAW_POST_END
LV_EVENT_DRAW_TASK_ADDED
LV_EVENT_VALUE_CHANGED
LV_EVENT_INSERT
LV_EVENT_REFRESH
LV_EVENT_READY
LV_EVENT_CANCEL
LV_EVENT_CREATE
LV_EVENT_DELETE
LV_EVENT_CHILD_CHANGED
LV_EVENT_CHILD_CREATED
LV_EVENT_CHILD_DELETED
LV_EVENT_SCREEN_UNLOAD_START
LV_EVENT_SCREEN_LOAD_START
LV_EVENT_SCREEN_LOADED
LV_EVENT_SCREEN_UNLOADED
LV_EVENT_SIZE_CHANGED
LV_EVENT_STYLE_CHANGED
LV_EVENT_LAYOUT_CHANGED
LV_EVENT_GET_SELF_SIZE
LV_EVENT_INVALIDATE_AREA
LV_EVENT_RESOLUTION_CHANGED
LV_EVENT_COLOR_FORMAT_CHANGED
LV_EVENT_REFR_REQUEST
LV_EVENT_REFR_START
LV_EVENT_REFR_READY
LV_EVENT_RENDER_START
LV_EVENT_RENDER_READY
LV_EVENT_FLUSH_START
LV_EVENT_FLUSH_FINISH
LV_EVENT_VSYNC
LV_EVENT_PREPROCESS

// File: ../../lvgl/src/misc/lv_fs.h
LV_FS_RES_OK
LV_FS_RES_HW_ERR
LV_FS_RES_FS_ERR
LV_FS_RES_NOT_EX
LV_FS_RES_FULL
LV_FS_RES_LOCKED
LV_FS_RES_DENIED
LV_FS_RES_BUSY
LV_FS_RES_TOUT
LV_FS_RES_NOT_IMP
LV_FS_RES_OUT_OF_MEM
LV_FS_RES_INV_PARAM
LV_FS_RES_UNKNOWN

LV_FS_MODE_WR
LV_FS_MODE_RD

LV_FS_SEEK_SET
LV_FS_SEEK_CUR
LV_FS_SEEK_END

// File: ../../lvgl/src/misc/lv_ll.h
// File: ../../lvgl/src/misc/lv_log.h
LV_LOG_LEVEL_TRACE
LV_LOG_LEVEL_INFO
LV_LOG_LEVEL_WARN
LV_LOG_LEVEL_ERROR
LV_LOG_LEVEL_USER
LV_LOG_LEVEL_NONE
// File: ../../lvgl/src/misc/lv_lru.h
// File: ../../lvgl/src/misc/lv_math.h
// File: ../../lvgl/src/misc/lv_palette.h
LV_PALETTE_RED
LV_PALETTE_PINK
LV_PALETTE_PURPLE
LV_PALETTE_DEEP_PURPLE
LV_PALETTE_INDIGO
LV_PALETTE_BLUE
LV_PALETTE_LIGHT_BLUE
LV_PALETTE_CYAN
LV_PALETTE_TEAL
LV_PALETTE_GREEN
LV_PALETTE_LIGHT_GREEN
LV_PALETTE_LIME
LV_PALETTE_YELLOW
LV_PALETTE_AMBER
LV_PALETTE_ORANGE
LV_PALETTE_DEEP_ORANGE
LV_PALETTE_BROWN
LV_PALETTE_BLUE_GREY
LV_PALETTE_GREY
LV_PALETTE_NONE

// File: ../../lvgl/src/misc/lv_profiler.h
// File: ../../lvgl/src/misc/lv_profiler_builtin.h
// File: ../../lvgl/src/misc/lv_rb.h
LV_RB_COLOR_RED
LV_RB_COLOR_BLACK
// File: ../../lvgl/src/misc/lv_style.h
LV_BLEND_MODE_NORMAL
LV_BLEND_MODE_ADDITIVE
LV_BLEND_MODE_SUBTRACTIVE
LV_BLEND_MODE_MULTIPLY

LV_TEXT_DECOR_NONE
LV_TEXT_DECOR_UNDERLINE
LV_TEXT_DECOR_STRIKETHROUGH

LV_BORDER_SIDE_NONE
LV_BORDER_SIDE_BOTTOM
LV_BORDER_SIDE_TOP
LV_BORDER_SIDE_LEFT
LV_BORDER_SIDE_RIGHT
LV_BORDER_SIDE_FULL
LV_BORDER_SIDE_INTERNAL

LV_GRAD_DIR_NONE
LV_GRAD_DIR_VER
LV_GRAD_DIR_HOR

LV_STYLE_PROP_INV
LV_STYLE_WIDTH
LV_STYLE_HEIGHT
LV_STYLE_LENGTH
LV_STYLE_MIN_WIDTH
LV_STYLE_MAX_WIDTH
LV_STYLE_MIN_HEIGHT
LV_STYLE_MAX_HEIGHT
LV_STYLE_X
LV_STYLE_Y
LV_STYLE_ALIGN
LV_STYLE_RADIUS
LV_STYLE_PAD_TOP
LV_STYLE_PAD_BOTTOM
LV_STYLE_PAD_LEFT
LV_STYLE_PAD_RIGHT
LV_STYLE_PAD_ROW
LV_STYLE_PAD_COLUMN
LV_STYLE_LAYOUT
LV_STYLE_MARGIN_TOP
LV_STYLE_MARGIN_BOTTOM
LV_STYLE_MARGIN_LEFT
LV_STYLE_MARGIN_RIGHT
LV_STYLE_BG_COLOR
LV_STYLE_BG_OPA
LV_STYLE_BG_GRAD_DIR
LV_STYLE_BG_MAIN_STOP
LV_STYLE_BG_GRAD_STOP
LV_STYLE_BG_GRAD_COLOR
LV_STYLE_BG_MAIN_OPA
LV_STYLE_BG_GRAD_OPA
LV_STYLE_BG_GRAD
LV_STYLE_BASE_DIR
LV_STYLE_BG_IMAGE_SRC
LV_STYLE_BG_IMAGE_OPA
LV_STYLE_BG_IMAGE_RECOLOR
LV_STYLE_BG_IMAGE_RECOLOR_OPA
LV_STYLE_BG_IMAGE_TILED
LV_STYLE_CLIP_CORNER
LV_STYLE_BORDER_WIDTH
LV_STYLE_BORDER_COLOR
LV_STYLE_BORDER_OPA
LV_STYLE_BORDER_SIDE
LV_STYLE_BORDER_POST
LV_STYLE_OUTLINE_WIDTH
LV_STYLE_OUTLINE_COLOR
LV_STYLE_OUTLINE_OPA
LV_STYLE_OUTLINE_PAD
LV_STYLE_SHADOW_WIDTH
LV_STYLE_SHADOW_COLOR
LV_STYLE_SHADOW_OPA
LV_STYLE_SHADOW_OFFSET_X
LV_STYLE_SHADOW_OFFSET_Y
LV_STYLE_SHADOW_SPREAD
LV_STYLE_IMAGE_OPA
LV_STYLE_IMAGE_RECOLOR
LV_STYLE_IMAGE_RECOLOR_OPA
LV_STYLE_LINE_WIDTH
LV_STYLE_LINE_DASH_WIDTH
LV_STYLE_LINE_DASH_GAP
LV_STYLE_LINE_ROUNDED
LV_STYLE_LINE_COLOR
LV_STYLE_LINE_OPA
LV_STYLE_ARC_WIDTH
LV_STYLE_ARC_ROUNDED
LV_STYLE_ARC_COLOR
LV_STYLE_ARC_OPA
LV_STYLE_ARC_IMAGE_SRC
LV_STYLE_TEXT_COLOR
LV_STYLE_TEXT_OPA
LV_STYLE_TEXT_FONT
LV_STYLE_TEXT_LETTER_SPACE
LV_STYLE_TEXT_LINE_SPACE
LV_STYLE_TEXT_DECOR
LV_STYLE_TEXT_ALIGN
LV_STYLE_OPA
LV_STYLE_OPA_LAYERED
LV_STYLE_COLOR_FILTER_DSC
LV_STYLE_COLOR_FILTER_OPA
LV_STYLE_ANIM
LV_STYLE_ANIM_DURATION
LV_STYLE_TRANSITION
LV_STYLE_BLEND_MODE
LV_STYLE_TRANSFORM_WIDTH
LV_STYLE_TRANSFORM_HEIGHT
LV_STYLE_TRANSLATE_X
LV_STYLE_TRANSLATE_Y
LV_STYLE_TRANSFORM_SCALE_X
LV_STYLE_TRANSFORM_SCALE_Y
LV_STYLE_TRANSFORM_ROTATION
LV_STYLE_TRANSFORM_PIVOT_X
LV_STYLE_TRANSFORM_PIVOT_Y
LV_STYLE_TRANSFORM_SKEW_X
LV_STYLE_TRANSFORM_SKEW_Y
LV_STYLE_FLEX_FLOW
LV_STYLE_FLEX_MAIN_PLACE
LV_STYLE_FLEX_CROSS_PLACE
LV_STYLE_FLEX_TRACK_PLACE
LV_STYLE_FLEX_GROW
LV_STYLE_GRID_COLUMN_ALIGN
LV_STYLE_GRID_ROW_ALIGN
LV_STYLE_GRID_ROW_DSC_ARRAY
LV_STYLE_GRID_COLUMN_DSC_ARRAY
LV_STYLE_GRID_CELL_COLUMN_POS
LV_STYLE_GRID_CELL_COLUMN_SPAN
LV_STYLE_GRID_CELL_X_ALIGN
LV_STYLE_GRID_CELL_ROW_POS
LV_STYLE_GRID_CELL_ROW_SPAN
LV_STYLE_GRID_CELL_Y_ALIGN
LV_STYLE_PROP_ANY
LV_STYLE_RES_NOT_FOUND
LV_STYLE_RES_FOUND

LV_SCALE_NONE
// File: ../../lvgl/src/misc/lv_style_gen.h
// File: ../../lvgl/src/misc/lv_templ.h
// File: ../../lvgl/src/misc/lv_text.h
LV_TEXT_FLAG_NONE
LV_TEXT_FLAG_EXPAND
LV_TEXT_FLAG_FIT

LV_TEXT_ALIGN_AUTO
LV_TEXT_ALIGN_LEFT
LV_TEXT_ALIGN_CENTER
LV_TEXT_ALIGN_RIGHT

// File: ../../lvgl/src/misc/lv_text_ap.h
// File: ../../lvgl/src/misc/lv_timer.h
// File: ../../lvgl/src/misc/lv_types.h
LV_RESULT_INVALID
LV_RESULT_OK

// File: ../../lvgl/src/misc/lv_utils.h
// File: ../../lvgl/src/widgets/animimage/lv_animimage.h
LV_ANIM_IMAGE_PART_MAIN

// File: ../../lvgl/src/widgets/arc/lv_arc.h
LV_ARC_MODE_NORMAL
LV_ARC_MODE_SYMMETRICAL
LV_ARC_MODE_REVERSE
// File: ../../lvgl/src/widgets/bar/lv_bar.h
LV_BAR_MODE_NORMAL
LV_BAR_MODE_SYMMETRICAL
LV_BAR_MODE_RANGE
// File: ../../lvgl/src/widgets/button/lv_button.h
// File: ../../lvgl/src/widgets/buttonmatrix/lv_buttonmatrix.h
LV_BUTTONMATRIX_CTRL_HIDDEN
LV_BUTTONMATRIX_CTRL_NO_REPEAT
LV_BUTTONMATRIX_CTRL_DISABLED
LV_BUTTONMATRIX_CTRL_CHECKABLE
LV_BUTTONMATRIX_CTRL_CHECKED
LV_BUTTONMATRIX_CTRL_CLICK_TRIG
LV_BUTTONMATRIX_CTRL_POPOVER
LV_BUTTONMATRIX_CTRL_CUSTOM_1
LV_BUTTONMATRIX_CTRL_CUSTOM_2

LV_BUTTONMATRIX_BUTTON_NONE
// File: ../../lvgl/src/widgets/calendar/lv_calendar.h
// File: ../../lvgl/src/widgets/calendar/lv_calendar_header_arrow.h
// File: ../../lvgl/src/widgets/calendar/lv_calendar_header_dropdown.h
// File: ../../lvgl/src/widgets/canvas/lv_canvas.h
// File: ../../lvgl/src/widgets/chart/lv_chart.h
LV_CHART_TYPE_NONE
LV_CHART_TYPE_LINE
LV_CHART_TYPE_BAR
LV_CHART_TYPE_SCATTER

LV_CHART_UPDATE_MODE_SHIFT
LV_CHART_UPDATE_MODE_CIRCULAR

LV_CHART_AXIS_PRIMARY_Y
LV_CHART_AXIS_SECONDARY_Y
LV_CHART_AXIS_PRIMARY_X
LV_CHART_AXIS_SECONDARY_X
LV_CHART_POINT_NONE
// File: ../../lvgl/src/widgets/checkbox/lv_checkbox.h
// File: ../../lvgl/src/widgets/dropdown/lv_dropdown.h
LV_DROPDOWN_POS_LAST
// File: ../../lvgl/src/widgets/image/lv_image.h
LV_IMAGE_ALIGN_DEFAULT
LV_IMAGE_ALIGN_TOP_LEFT
LV_IMAGE_ALIGN_TOP_MID
LV_IMAGE_ALIGN_TOP_RIGHT
LV_IMAGE_ALIGN_BOTTOM_LEFT
LV_IMAGE_ALIGN_BOTTOM_MID
LV_IMAGE_ALIGN_BOTTOM_RIGHT
LV_IMAGE_ALIGN_LEFT_MID
LV_IMAGE_ALIGN_RIGHT_MID
LV_IMAGE_ALIGN_CENTER
LV_IMAGE_ALIGN_STRETCH
LV_IMAGE_ALIGN_TILE

// File: ../../lvgl/src/widgets/imagebutton/lv_imagebutton.h
LV_IMAGEBUTTON_STATE_RELEASED
LV_IMAGEBUTTON_STATE_PRESSED
LV_IMAGEBUTTON_STATE_DISABLED
LV_IMAGEBUTTON_STATE_CHECKED_RELEASED
LV_IMAGEBUTTON_STATE_CHECKED_PRESSED
LV_IMAGEBUTTON_STATE_CHECKED_DISABLED

// File: ../../lvgl/src/widgets/keyboard/lv_keyboard.h
LV_KEYBOARD_MODE_TEXT_LOWER
LV_KEYBOARD_MODE_TEXT_UPPER
LV_KEYBOARD_MODE_SPECIAL
LV_KEYBOARD_MODE_NUMBER
LV_KEYBOARD_MODE_USER_1
LV_KEYBOARD_MODE_USER_2
LV_KEYBOARD_MODE_USER_3
LV_KEYBOARD_MODE_USER_4
// File: ../../lvgl/src/widgets/label/lv_label.h
LV_LABEL_LONG_WRAP
LV_LABEL_LONG_DOT
LV_LABEL_LONG_SCROLL
LV_LABEL_LONG_SCROLL_CIRCULAR
LV_LABEL_LONG_CLIP

LV_LABEL_DOT_NUM
LV_LABEL_POS_LAST
LV_LABEL_TEXT_SELECTION_OFF
// File: ../../lvgl/src/widgets/led/lv_led.h
// File: ../../lvgl/src/widgets/line/lv_line.h
// File: ../../lvgl/src/widgets/list/lv_list.h
// File: ../../lvgl/src/widgets/menu/lv_menu.h
LV_MENU_HEADER_TOP_FIXED
LV_MENU_HEADER_TOP_UNFIXED
LV_MENU_HEADER_BOTTOM_FIXED
LV_MENU_ROOT_BACK_BUTTON_DISABLED
LV_MENU_ROOT_BACK_BUTTON_ENABLED
// File: ../../lvgl/src/widgets/msgbox/lv_msgbox.h
// File: ../../lvgl/src/widgets/objx_templ/lv_objx_templ.h
// File: ../../lvgl/src/widgets/roller/lv_roller.h
LV_ROLLER_MODE_NORMAL
LV_ROLLER_MODE_INFINITE

// File: ../../lvgl/src/widgets/scale/lv_scale.h
LV_SCALE_MODE_HORIZONTAL_TOP
LV_SCALE_MODE_HORIZONTAL_BOTTOM
LV_SCALE_MODE_VERTICAL_LEFT
LV_SCALE_MODE_VERTICAL_RIGHT
LV_SCALE_MODE_ROUND_INNER
LV_SCALE_MODE_ROUND_OUTER
LV_SCALE_TOTAL_TICK_COUNT_DEFAULT
LV_SCALE_MAJOR_TICK_EVERY_DEFAULT
LV_SCALE_LABEL_ENABLED_DEFAULT
// File: ../../lvgl/src/widgets/slider/lv_slider.h
LV_SLIDER_MODE_NORMAL
LV_SLIDER_MODE_SYMMETRICAL
LV_SLIDER_MODE_RANGE
// File: ../../lvgl/src/widgets/span/lv_span.h
LV_SPAN_OVERFLOW_CLIP
LV_SPAN_OVERFLOW_ELLIPSIS

LV_SPAN_MODE_FIXED
LV_SPAN_MODE_EXPAND
LV_SPAN_MODE_BREAK
// File: ../../lvgl/src/widgets/spinbox/lv_spinbox.h
// File: ../../lvgl/src/widgets/spinner/lv_spinner.h
// File: ../../lvgl/src/widgets/switch/lv_switch.h
// File: ../../lvgl/src/widgets/table/lv_table.h
LV_TABLE_CELL_CTRL_MERGE_RIGHT
LV_TABLE_CELL_CTRL_TEXT_CROP
LV_TABLE_CELL_CTRL_CUSTOM_1
LV_TABLE_CELL_CTRL_CUSTOM_2
LV_TABLE_CELL_CTRL_CUSTOM_3
LV_TABLE_CELL_CTRL_CUSTOM_4

LV_TABLE_CELL_NONE
// File: ../../lvgl/src/widgets/tabview/lv_tabview.h
// File: ../../lvgl/src/widgets/textarea/lv_textarea.h
LV_PART_TEXTAREA_PLACEHOLDER

LV_TEXTAREA_CURSOR_LAST
// File: ../../lvgl/src/widgets/tileview/lv_tileview.h
// File: ../../lvgl/src/widgets/win/lv_win.h
