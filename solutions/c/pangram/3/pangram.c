#include "pangram.h"
#include <stdint.h>

const uint32_t ALL_LETTERS_MASK = ((1U << 26) - 1);

bool is_pangram(const char *sentence)
{
    if (!sentence)
        return false;
    
    uint32_t found = 0;
    for (const char *current = sentence; *current; current++)
    {
        char c = *current | 32;
        if (c >= 'a' && c <= 'z')
        {
            found |= 1U << (c - 'a');
            if (found == ALL_LETTERS_MASK)
                return true;
        }   
    }
    return false;
}