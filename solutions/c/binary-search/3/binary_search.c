#include "binary_search.h"


const int *binary_search(int value, const int *arr, size_t length)
{
    size_t start = 0, end = length;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        const int *current = arr + mid;
        if (*current == value)
            return current;
        if (*current < value)
            start = mid + 1;
        else
            end = mid;
    }
    return NULL;
}