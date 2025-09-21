#include "grains.h"

uint64_t pow2(int num)
{
    if(num==0)
    {
        return 1;
    }
    uint64_t sum=1;
    for(int i=0; i<num; i++)
    {
        sum*=2;
    }
    return sum;
}

uint64_t square(uint8_t index)
{
    if((index<1) || (index>64))
    {
        return 0;
    }
    return pow2(((int)index)-1);
}

uint64_t total(void)
{
    uint64_t total=0;
    for(uint8_t i=1; i<=64; i++)
    {
        total+=(uint64_t)square(i);
    }
    return total;
}