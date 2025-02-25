#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE 24000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_I2S_GPIO_MCLK GPIO_NUM_8
#define AUDIO_I2S_GPIO_WS GPIO_NUM_11
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_9
#define AUDIO_I2S_GPIO_DIN GPIO_NUM_10
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_12

#define AUDIO_CODEC_PA_PIN GPIO_NUM_4 // pcb v2.4不起作用，适用于2.4A
#define AUDIO_CODEC_I2C_SDA_PIN GPIO_NUM_5
#define AUDIO_CODEC_I2C_SCL_PIN GPIO_NUM_6
#define AUDIO_CODEC_ES8311_ADDR ES8311_CODEC_DEFAULT_ADDR

//led power
#define BUILTIN_LED_POWER GPIO_NUM_39 // 低电平有效
#define BUILTIN_LED_POWER_OUTPUT_INVERT true

#define BUILTIN_LED_NUM 2
#define BUILTIN_LED_GPIO GPIO_NUM_38

#define MAIN_BUTTON_GPIO GPIO_NUM_21
#define LEFT_BUTTON_GPIO GPIO_NUM_0
#define RIGHT_BUTTON_GPIO GPIO_NUM_47

// display
#define DISPLAY_SDA_PIN GPIO_NUM_15
#define DISPLAY_SCL_PIN GPIO_NUM_16
#define DISPLAY_CS_PIN GPIO_NUM_17
#define DISPLAY_DC_PIN GPIO_NUM_18
#define DISPLAY_RST_PIN GPIO_NUM_14

#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 128
#define DISPLAY_MIRROR_X false
#define DISPLAY_MIRROR_Y true
#define DISPLAY_SWAP_XY false

#define DISPLAY_OFFSET_X 0
#define DISPLAY_OFFSET_Y 0

#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_13
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

#endif // _BOARD_CONFIG_H_
