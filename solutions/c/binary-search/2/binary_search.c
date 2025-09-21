#include "binary_search.h"


const int *binary_search(int value, const int *arr, size_t length)
{
    if (!length)
        return NULL;
    
    const int *loc = arr;
    while (1)
    {
        length /= 2;
        loc += length;
        if (*loc == value)
            return loc;
        if (!length)
            break;
        if (*loc < value && loc != arr + length - 1)
            loc += 1;
        else if (*loc > value)
            loc -= length;
    }
    return NULL;
}