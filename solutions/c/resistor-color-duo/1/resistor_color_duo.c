#include "resistor_color_duo.h"


uint16_t color_code(resistor_band_t *duo)
{
    return (duo[0]*10+duo[1]);
}