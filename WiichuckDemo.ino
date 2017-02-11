/*
	PINOUT >> A2 GND, A3 PWR, A4 SDA, A5 SCL <<
*/

#include <Wire.h>
#include "nunchuck_funcs.h"

int loop_cnt=0;

void setup() {
    Serial.begin(19200);
    nunchuck_setpowerpins();
    nunchuck_init();
}

void loop() {
    if (loop_cnt > 100) { loop_cnt = 0;
        nunchuck_get_data();
		nunchuck_print_data();
    }
    loop_cnt++;
    delay(1);
}

