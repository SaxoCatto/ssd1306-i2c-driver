
#include <stdio.h>
#include <string.h>

#include "ssd1306_i2c.h" // name for header file that I will be putting in this repo

#include <wiringPiI2C.h> // required btw http://wiringpi.com/

#include "oled_fonts.h" // like the name

#define true 1
#define false 0

#define rotation 0

#define pgm_read_byte(addr) (*(const unsigned char *)(addr))
