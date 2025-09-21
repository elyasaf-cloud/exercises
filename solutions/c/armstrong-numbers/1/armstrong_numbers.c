#include "armstrong_numbers.h"
#include <math.h>


bool is_armstrong_number(int candidate)
{
    int copy = candidate;
    int num_digits = 0, sum_powers = 0;
    while(copy)
    {
        copy /= 10;
        num_digits++;
    }
    copy = candidate;
    while(copy)
    {
        int current = copy % 10;
        sum_powers += (int)pow(current, num_digits);
        copy /= 10;
    }
    return sum_powers == candidate;
}