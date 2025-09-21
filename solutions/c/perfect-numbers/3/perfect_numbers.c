#include "perfect_numbers.h"


kind classify_number (int number)
{
    if(number <= 0)
        return ERROR;
    
    int sum_factors = 0;
    int half = number / 2;
    for(int i = 1; i <= half; i++)
    {
        if(number % i == 0)
            sum_factors += i;
    }
    
    if(number > sum_factors)
        return DEFICIENT_NUMBER;
    if(number < sum_factors)
        return ABUNDANT_NUMBER;
    return PERFECT_NUMBER;
}