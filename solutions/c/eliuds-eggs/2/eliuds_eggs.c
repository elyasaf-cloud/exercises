#include "eliuds_eggs.h"


unsigned int egg_count(unsigned int decimal)
{
    unsigned int count = 0;
    while(decimal)
    {
        count++;
        decimal &= decimal - 1;
    }
    return count;
}