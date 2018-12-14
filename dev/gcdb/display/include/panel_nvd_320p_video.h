#ifndef _PANEL_NVD_320P_VIDEO_H_
#define _PANEL_NVD_320P_VIDEO_H_

#include "panel.h"

/* Panel configuration */
static struct panel_config nvd_320p_video_panel_data = {
    .panel_node_id = "qcom,mdss_dsi_nvd_320p_video",
    .panel_controller = "dsi:0:",
    .panel_compatible = "qcom,mdss-dsi-panel",
    .panel_interface = 10,
    .panel_type = 0,
    .panel_destination = "DISPLAY_1",
    .panel_orientation = 0,
    .panel_clockrate = 0,
    .panel_framerate = 60,
    .panel_channelid = 0,
    .dsi_virtualchannel_id = 0,
    .panel_broadcast_mode = 0,
    .panel_lp11_init = 0,
    .panel_init_delay = 0,
    .dsi_stream = 0,
    .interleave_mode = 0,
    .panel_bitclock_freq = 0,
    .panel_operating_mode = 0,
    .panel_with_enable_gpio = 0,
    .mode_gpio_state = 0,
    .slave_panel_node_id = 0
};

/* Panel resolution */
static struct panel_resolution nvd_320p_video_panel_res = {
    .panel_width = 320,
    .panel_height = 480,
    .hfront_porch = 38,
    .hback_porch = 50,
    .hpulse_width = 50,
    .hsync_skew = 0,
    .vfront_porch = 8,
    .vback_porch = 4,
    .vpulse_width = 4,
    .hleft_border = 0,
    .hright_border = 0,
    .vtop_border = 0,
    .vbottom_border = 0,
    .hactive_res = 0,
    .vactive_res = 0,
    .invert_data_polarity = 0,
    .invert_vsync_polarity = 0,
    .invert_hsync_polarity = 0
};

/* Panel color information */
static struct color_info nvd_320p_video_color = {
    .color_format = 24,
    .color_order = 0,
    .underflow_color = 0xff,
    .border_color = 0,
    .pixel_packing = 0,
    .pixel_alignment = 0
};

/* Panel on/off command information */
static char nvd_320p_video_on_cmd0[] = {
    0x01, 0xFF, 0x05, 0x80
};

static char nvd_320p_video_on_cmd1[] = {
    0x11, 0xFF, 0x05, 0x80
};

static char nvd_320p_video_on_cmd2[] = {
    0x13, 0xFF, 0x05, 0x80
};

static char nvd_320p_video_on_cmd3[] = {
    0x21, 0xFF, 0x05, 0x80
};

static char nvd_320p_video_on_cmd4[] = {
    0x36, 0x48, 0x15, 0x80
};

static char nvd_320p_video_on_cmd5[] = {
    0x38, 0xFF, 0x05, 0x80
};

static char nvd_320p_video_on_cmd6[] = {
    0x3a, 0x77, 0x15, 0x80
};

static char nvd_320p_video_on_cmd7[] = {
    0xf0, 0xc3, 0x15, 0x80
};

static char nvd_320p_video_on_cmd8[] = {
    0xf0, 0x96, 0x15, 0x80
};

static char nvd_320p_video_on_cmd9[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xb1, 0xa0, 0x0b, 0xFF,
};

static char nvd_320p_video_on_cmd10[] = {
    0xb4, 0x01, 0x15, 0x80
};

static char nvd_320p_video_on_cmd11[] = {
    0xb5, 0x08, 0x04, 0x00,
    0x19, 0xFF, 0x15, 0x80
};

static char nvd_320p_video_on_cmd12[] = {
    0xb7, 0x06, 0x15, 0x80
};

static char nvd_320p_video_on_cmd13[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xb9, 0x02, 0xc0, 0xFF,
};

static char nvd_320p_video_on_cmd14[] = {
    0x03, 0x00, 0x39, 0xC0,
    0xc0, 0xc0, 0x00, 0xFF,
};

static char nvd_320p_video_on_cmd15[] = {
    0xc1, 0x09, 0x15, 0x80
};

static char nvd_320p_video_on_cmd16[] = {
    0xc5, 0x20, 0x15, 0x80
};

static char nvd_320p_video_on_cmd17[] = {
    0x0f, 0x00, 0x39, 0xC0,
    0xe0, 0xf0, 0x06, 0x0a,
    0x0a, 0x08, 0x05, 0x30,
    0x43, 0x46, 0x37, 0x13,
    0x13, 0x2a, 0x30, 0xFF,
};

static char nvd_320p_video_on_cmd18[] = {
    0x0f, 0x00, 0x39, 0xC0,
    0xe1, 0xf0, 0x06, 0x0a,
    0x0a, 0x08, 0x05, 0x30,
    0x43, 0x46, 0x37, 0x13,
    0x13, 0x2a, 0x30, 0xFF,
};

static char nvd_320p_video_on_cmd19[] = {
    0x08, 0x00, 0x39, 0xC0,
    0xe8, 0x40, 0x8a, 0x00,
    0x00, 0x2a, 0x00, 0x36,
};

static char nvd_320p_video_on_cmd20[] = {
    0xc2, 0x0f, 0x15, 0x80
};

static char nvd_320p_video_on_cmd21[] = {
    0x05, 0x00, 0x39, 0xC0,
    0xe7, 0x27, 0x02, 0x42,
    0xb2, 0xFF, 0xFF, 0xFF,
};

static char nvd_320p_video_on_cmd22[] = {
    0x29, 0xFF, 0x05, 0x80
};

static struct mipi_dsi_cmd nvd_320p_video_on_command[] = {
    {0x4, nvd_320p_video_on_cmd0, 0x0A},
    {0x4, nvd_320p_video_on_cmd1, 0xAA},
    {0x4, nvd_320p_video_on_cmd2, 0x00},
    {0x4, nvd_320p_video_on_cmd3, 0x00},
    {0x4, nvd_320p_video_on_cmd4, 0x00},
    {0x4, nvd_320p_video_on_cmd5, 0x00},
    {0x4, nvd_320p_video_on_cmd6, 0x00},
    {0x4, nvd_320p_video_on_cmd7, 0x00},
    {0x4, nvd_320p_video_on_cmd8, 0x00},
    {0x8, nvd_320p_video_on_cmd9, 0x00},
    {0x4, nvd_320p_video_on_cmd10, 0x00},
    {0x4, nvd_320p_video_on_cmd11, 0x00},
    {0x4, nvd_320p_video_on_cmd12, 0x00},
    {0x8, nvd_320p_video_on_cmd13, 0x00},
    {0x8, nvd_320p_video_on_cmd14, 0x00},
    {0x4, nvd_320p_video_on_cmd15, 0x00},
    {0x4, nvd_320p_video_on_cmd16, 0x00},
    {0x14, nvd_320p_video_on_cmd17, 0x0a},
    {0x14, nvd_320p_video_on_cmd18, 0x00},
    {0xc, nvd_320p_video_on_cmd19, 0x00},
    {0x4, nvd_320p_video_on_cmd20, 0x00},
    {0xc, nvd_320p_video_on_cmd21, 0x00},
    {0x4, nvd_320p_video_on_cmd22, 0x05}
};

#define NVD_320P_VIDEO_ON_COMMAND 23


static char nvd_320p_videooff_cmd0[] = {
    0x28, 0xFF, 0x05, 0x80
};

static char nvd_320p_videooff_cmd1[] = {
    0x10, 0xFF, 0x05, 0x80
};

static struct mipi_dsi_cmd nvd_320p_video_off_command[] = {
    {0x4, nvd_320p_videooff_cmd0, 0x50},
    {0x4, nvd_320p_videooff_cmd1, 0x0A}
};

#define NVD_320P_VIDEO_OFF_COMMAND 2


static struct command_state nvd_320p_video_state = {
    0, 1
};

/* Command mode panel information */
static struct commandpanel_info nvd_320p_video_command_panel = {
    .techeck_enable = 0,
    .tepin_select = 0,
    .teusing_tepin = 0,
    .autorefresh_enable = 0,
    .autorefresh_framenumdiv = 0,
    .tevsync_rdptr_irqline = 0,
    .tevsync_continue_lines = 0,
    .tevsync_startline_divisor = 0,
    .tepercent_variance = 0,
    .tedcs_command = 0,
    .disable_eotafter_hsxfer = 0,
    .cmdmode_idletime = 0
};

/* Video mode panel information */
static struct videopanel_info nvd_320p_video_video_panel = {
    .hsync_pulse = 1,
    .hfp_power_mode = 0,
    .hbp_power_mode = 0,
    .hsa_power_mode = 0,
    .bllp_eof_power_mode = 1,
    .bllp_power_mode = 1,
    .traffic_mode = 0,
    .dma_delayafter_vsync = 0,
    .bllp_eof_power = 0x9
};

/* Lane configuration */
static struct lane_configuration nvd_320p_video_lane_config = {
    .dsi_lanes = 1,
    .dsi_lanemap = 0,
    .lane0_state = 1,
    .lane1_state = 0,
    .lane2_state = 0,
    .lane3_state = 0,
    .force_clk_lane_hs = 0
};

/* Panel timing */
static const uint32_t nvd_320p_video_timings[] = {
    0x51, 0x0E, 0x0A, 0x00, 0x2E, 0x32, 0x0E, 0x12, 0x0D, 0x03, 0x04, 0x00
};

static struct panel_timing nvd_320p_video_timing_info = {
    .dsi_mdp_trigger = 0,
    .dsi_dma_trigger = 4,
    .tclk_post = 0x1f,
    .tclk_pre = 0x2d
};

/* Panel reset sequence */
static struct panel_reset_sequence nvd_320p_video_panel_reset_seq = {
    .pin_state  = {1, 0, 1},
    .sleep      = {1, 5, 120},
    .pin_direction = 2
};

/* Backlight setting */
static struct backlight nvd_320p_video_backlight = {
    .bl_interface_type = 1,
    .bl_min_level = 1,
    .bl_max_level = 4095,
    .bl_step = 100,
    .bl_pmic_controltype = 1,
    .bl_pmic_model = "PMIC_8941"
};

#define NVD_320P_VIDEO_SIGNATURE 0xFFFF

#endif /*_PANEL_NVD_320P_VIDEO_H_*/
