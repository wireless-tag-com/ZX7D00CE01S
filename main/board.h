#pragma once

#define LCD_PCLK_GPIO     (9)
#define LCD_DE_GPIO       (39)
#define LCD_VSYNC_GPIO    (38)
#define LCD_HSYNC_GPIO    (5)

#define RGB_B0 (17) 
#define RGB_B1 (16)
#define RGB_B2 (15)
#define RGB_B3 (7)
#define RGB_B4 (6)
#define RGB_B5 (-1)

#define RGB_G0 (21)
#define RGB_G1 (0)
#define RGB_G2 (46)
#define RGB_G3 (3)
#define RGB_G4 (8)
#define RGB_G5 (18)

#define RGB_R0 (10)
#define RGB_R1 (11)
#define RGB_R2 (12)
#define RGB_R3 (13)
#define RGB_R4 (14)
#define RGB_R5 (-1)

#define LCD_DATA0_GPIO    (RGB_B0)   // B0
#define LCD_DATA1_GPIO    (RGB_B1)   // B1
#define LCD_DATA2_GPIO    (RGB_B2)   // B2
#define LCD_DATA3_GPIO    (RGB_B3)   // B3
#define LCD_DATA4_GPIO    (RGB_B4)   // B4
#define LCD_DATA5_GPIO    (RGB_G0)   // G0
#define LCD_DATA6_GPIO    (RGB_G1)    // G1
#define LCD_DATA7_GPIO    (RGB_G2)   // G2
#define LCD_DATA8_GPIO    (RGB_G3)   // G3
#define LCD_DATA9_GPIO    (RGB_G4)   // G4
#define LCD_DATA10_GPIO   (RGB_G5)   // G5
#define LCD_DATA11_GPIO   (RGB_R0)   // R0
#define LCD_DATA12_GPIO   (RGB_R1)    // R1
#define LCD_DATA13_GPIO   (RGB_R2)    // R2
#define LCD_DATA14_GPIO   (RGB_R3)    // R3
#define LCD_DATA15_GPIO   (RGB_R4)    // R4
#define LCD_DISP_EN_GPIO  (-1)

#define LCD_PIN_BK_LIGHT       45

#define LCD_BK_LIGHT_ON_LEVEL  1
#define LCD_BK_LIGHT_OFF_LEVEL !LCD_BK_LIGHT_ON_LEVEL

#define TOUCH_IIC_SCL   47
#define TOUCH_IIC_SDA   48

