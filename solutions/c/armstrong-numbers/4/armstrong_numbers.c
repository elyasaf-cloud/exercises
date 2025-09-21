#include "armstrong_numbers.h"
#include <math.h>


bool is_armstrong_number(int candidate)
{
    if(candidate == 0)
        return true;
    
    int copy = candidate;
    int num_digits = log10(candidate) + 1;
    int sum_powers = 0;
    
    while(copy)
    {
        int current = copy % 10;
        int power = current;
        for(int i = 1; i < num_digits; i++)
            power *= current;
        sum_powers += power;
        copy /= 10;
    }
    return sum_powers == candidate;
}