#include "armstrong_numbers.h"
#include <math.h>


bool is_armstrong_number(int candidate)
{
    int copy = candidate;
    int num_digits = 0, sum_powers = 0;
    int digits[10];
    
    while(copy)
    {
        digits[num_digits] = copy % 10;
        copy /= 10;
        num_digits++;
    }
    
    for(int i = 0; i < num_digits; i++)
        sum_powers += (int)pow(digits[i], num_digits);
    
    return sum_powers == candidate;
}