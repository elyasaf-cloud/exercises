#include "eliuds_eggs.h"


unsigned int egg_count(unsigned int decimal)
{
    unsigned int count = 0;
    while(decimal)
    {
        count += (decimal % 2);
        decimal /= 2;
    }
    return count;
}