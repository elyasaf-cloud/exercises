#include "hamming.h"

const int DIFFERENT_LENGTHS = -1;

static int my_strlen(const char *strand)
{
    int i;
    for(i=0; strand[i]!='\0'; i++);
    return i;
}

static int find_differences(const char *first, const char *second)
{
    int count = 0;
    for(int i=0; i<my_strlen(first); i++)
    {
        if(first[i]!=second[i])
        {
            count++;
        }
    }
    return count;
}

int compute(const char *lhs, const char *rhs)
{
    return (my_strlen(lhs)==my_strlen(rhs)) ? find_differences(lhs, rhs) : DIFFERENT_LENGTHS;
}