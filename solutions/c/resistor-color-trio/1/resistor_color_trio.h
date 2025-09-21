#ifndef RESISTOR_COLOR_TRIO_H
#define RESISTOR_COLOR_TRIO_H

#include <stdint.h>

typedef enum {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE}
resistor_band_t;
typedef enum {OHMS, KILOOHMS, MEGAOHMS, GIGAOHMS} units;

typedef struct Resistor_value_t
{
    uint16_t value;
    units unit;
} resistor_value_t;

resistor_value_t color_code(resistor_band_t resistor[]);

#endif
