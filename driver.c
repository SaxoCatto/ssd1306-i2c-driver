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
- map the whole oled screen as in pixels. so something WIDTH * something HEIGHT oh its called a buffer
https://github.com/rickkas7/SSD1306-tutorial
https://www.stealthylabs.com/blog/2020/03/21/oled-ssd1306-framebuffer.html
*/


int tvccstate;
int i2cd;
