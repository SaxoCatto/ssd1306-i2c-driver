#include <stdio.h>
#include <string.h>

#include "ssd1306_i2c.h" // name for header file that I will be putting in this repo

#include <wiringPiI2C.h> // required btw http://wiringpi.com/

#include "oled_fonts.h" // like the name

#define true 1
#define false 0

#define rotation 0

#define pgm_read_byte(addr) (*(const unsigned char *)(addr))
/*
  for cursor, prob:
  int cursor_x = 0;
  int cursor_y = 0;
*/
/* i gotta 
- map the whole oled screen as in pixels. so something WIDTH * something HEIGHT 
*/

int tvccstate;
int i2cd;
