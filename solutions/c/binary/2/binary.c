#include "binary.h"


int convert(const char *input)
{
    if(!input)
        return INVALID;
    
    int decimal = 0;
    for(const char *binary = input; *binary!='\0'; binary++)
    {
        if((*binary!='0') && (*binary!='1'))
            return INVALID;
        decimal = decimal*2 + (*binary-'0');
    }
    return decimal;
}