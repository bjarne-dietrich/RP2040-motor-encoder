//
// Copyright (c) 2024 Bjarne Dietrich
//
// SPDX-License-Identifier: BSD-3-Clause
//

#include "example.h"


int main()
{
    stdio_init_all();

    // Create two Objects
    MotorEncoder *encoder_1 = new MotorEncoder(2, 35000);
    MotorEncoder *encoder_2 = new MotorEncoder(4, 20000);

    // Initialize Encoders
    encoder_1->init();
    encoder_2->init();
    
    while (true)
    {
        tight_loop_contents();
        printf("Encoder 1: %d,\t %lf ms\n", encoder_1->get_dir(), encoder_1->get_period_us()*1e3);
        printf("Encoder 2: %d,\t %lf ms\n", encoder_2->get_dir(), encoder_2->get_period_us()*1e3);
        sleep_ms(100);
    }
}