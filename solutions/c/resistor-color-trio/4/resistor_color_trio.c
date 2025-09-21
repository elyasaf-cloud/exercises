#include "resistor_color_trio.h"
#include <math.h>


resistor_value_t color_code(resistor_band_t resistor[])
{
    uint16_t value = resistor[0] * 10 + resistor[1];
    uint16_t exponent = resistor[2];
    if(value % 10 == 0)
    {
        value /= 10;
        exponent += 1;
    }
    return (resistor_value_t) {value * (uint16_t)pow(10, exponent % 3), exponent / 3};
}
