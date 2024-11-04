/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// #include <stdio.h>
// #include "pico/stdlib.h"
// #include "hardware/gpio.h"

// int main() {
//     stdio_init_all();
//     while (true) {
//         printf("Hello, world!\n");
//         sleep_ms(1000);
//     }
// }


#include "pico/stdlib.h"

#include "ili9341.h"
#include "gfx.h"

int c;

int main()
{

    LCD_initDisplay();
    LCD_setRotation(1);
    GFX_createFramebuf();
    while (true)
    {
        GFX_clearScreen();
        GFX_setCursor(0, 0);
        GFX_printf("Hello GFX!\n%d", c++);
        GFX_flush();
        sleep_ms(500);
    }
}
