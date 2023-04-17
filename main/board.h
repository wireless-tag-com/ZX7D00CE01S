#pragma once


#define LCD_VSYNC_GPIO    (48)
#define LCD_HSYNC_GPIO    (47)
#define LCD_DE_GPIO       (38)
#define LCD_PCLK_GPIO     (15)
#define LCD_D0_GPIO    (11)  // B0
#define LCD_D1_GPIO    (12)  // B1
#define LCD_D2_GPIO    (13)  // B2
#define LCD_D3_GPIO    (14)  // B3
#define LCD_D4_GPIO    (21)  // B4
#define LCD_D5_GPIO    (46)  // G0
#define LCD_D6_GPIO    (19) // G1
#define LCD_D7_GPIO    (20) // G2
#define LCD_D8_GPIO    (9) // G3
#define LCD_D9_GPIO    (39) // G4
#define LCD_D10_GPIO   (10) // G5
#define LCD_D11_GPIO   (16) // R0
#define LCD_D12_GPIO   (17) // R1
#define LCD_D13_GPIO   (18) // R2
#define LCD_D14_GPIO   (8) // R3
#define LCD_D15_GPIO   (3) // R4
#define LCD_DISP_EN_GPIO  (-1)

#define LCD_PIN_RST            40
#define LCD_PIN_BK_LIGHT       45
#define LCD_PIN_EN       4

#define TOUCH_IIC_SCL   5
#define TOUCH_IIC_SDA   6
#define TOUCH_INT   7

#define LCD_BK_LIGHT_ON_LEVEL  1
#define LCD_BK_LIGHT_OFF_LEVEL !LCD_BK_LIGHT_ON_LEVEL
