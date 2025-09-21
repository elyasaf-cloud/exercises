#include "resistor_color_trio.h"


resistor_value_t color_code(resistor_band_t resistor[])
{
    resistor_value_t result;
    uint64_t value = resistor[0] * 10 + resistor[1];
    res_units unit = OHMS;
    for(int i = 0; i < (int)resistor[2]; i++)
    {
        value *= 10;
        if(value % 1000 == 0)
        {
            value /= 1000;
            unit++;
        }
    }
    result.value = value;
    result.unit = unit;
    return result;
}