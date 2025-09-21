#include "resistor_color.h"
#include <stdint.h>

int color_code(resistor_band_t color)
{
    return color;
}

const resistor_band_t* colors()
{
    static const resistor_band_t listcolors [] =
    {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
    return listcolors;
}