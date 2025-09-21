#include "binary.h"

static int my_strlen(const char* str)
{
    int i;
    for(i=0; str[i]!='\0'; i++);
    return i;
}

int convert(const char *input)
{
    if(!input)
        return INVALID;
    
    int len = my_strlen(input);
    int decimal = 0;
    int power = 1;

    for(int i=len-1; i>=0; i--)
    {
        switch (input[i])
        {
            case '0':
                break;
            case '1':
                decimal+=power;
                break;
            default:
                return INVALID;
        }
        power*=2;
    }
    return decimal;
}