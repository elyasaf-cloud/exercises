#include "binary.h"


int convert(const char *input)
{
    if(!input)
        return INVALID;
    
    int decimal = 0;
    for(const char *current = input; *current != '\0'; current++)
    {
        if(*current != '0' && *current != '1')
            return INVALID;
        decimal = decimal * 2 + (*current - '0');
    }
    return decimal;
}