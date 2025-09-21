#include "perfect_numbers.h"
#include <math.h>


kind classify_number (int number)
{
    if(number <= 0)
        return ERROR;
    if(number == 1)
        return DEFICIENT_NUMBER;
    
    int sum_factors = 1;
    int root = (int)sqrt((double)number);
    for(int i = 2; i <= root; i++)
    {
        if(number % i == 0)
        {
            sum_factors += i;
            if(i != number / i)
                sum_factors += number / i;
        }
        if(number < sum_factors)
            return ABUNDANT_NUMBER;
    }

    return number == sum_factors ? PERFECT_NUMBER : DEFICIENT_NUMBER;
}