#include "perfect_numbers.h"


kind classify_number (int number)
{
    if(number <= 0)
        return ERROR;
    if(number == 1)
        return DEFICIENT_NUMBER;
    
    int sum_factors = 1;
    int half = number / 2;
    for(int i = 2; i <= half; i++)
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