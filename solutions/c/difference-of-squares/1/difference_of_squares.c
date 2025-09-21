#include "difference_of_squares.h"
unsigned int square_of_sum(unsigned int number)
{
    unsigned int sum =0;
    for(unsigned int i=1;i<=number; i++)
    {
        sum +=i;
    }
    return sum*sum;
}

unsigned int sum_of_squares(unsigned int number)
{
    unsigned int sum=0;
    for(unsigned int i=1; i<=number; i++)
    {
        sum+=(i*i);
    }
    return sum;
}

unsigned int difference_of_squares(unsigned int number)
{
    /*unsigned int squareof = square_of_sum(number);
    unsigned int sumof = sum_of_squares(number);
    return squareof-sumof;*/

    unsigned int difference=0;
    for(unsigned int i=number; i>1; i--)
    {
        unsigned int multy =1, sum =0;
        for(unsigned int j =1; j<i; j++)
        {
            sum+=j;
        }
        multy=2*i*sum;
        difference+=multy;
    }
    return difference;
}