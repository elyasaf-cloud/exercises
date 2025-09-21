#include "binary_search.h"


const int *binary_search(int value, const int *arr, size_t length)
{
    if (length == 0)
        return NULL;
    
    int start = 0, end = length;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        const int *loc = arr + mid;
        if (*loc == value)
            return loc;
        if (*loc < value)
            start = mid + 1;
        else if (*loc > value)
            end = mid;
    }
    return NULL;
}