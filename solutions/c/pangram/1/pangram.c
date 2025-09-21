#include "pangram.h"
#include <string.h>
#include <stdint.h>


bool is_pangram(const char *sentence)
{
    if(!sentence)
        return false;
    
    uint32_t found = 0;
    for(const char *current = sentence; *current; current++)
    {
        char c = *current | 32;
        if(c >= 'a' && c <= 'z')
            found |= 1U << (c - 'a');
        if(found == (1U << 26) - 1)
            return true;
    }
    
    return false;
}