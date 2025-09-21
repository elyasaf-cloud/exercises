#include "isogram.h"
#include <stdint.h>

bool is_isogram(const char phrase[])
{
    if (!phrase)
        return false;
    
    uint32_t found = 0;
    for (const char *current = phrase; *current; current++)
    {
        char lower_letter = *current | 32;
        if (lower_letter >= 'a' && lower_letter <= 'z')
        {
            if (found & (1U << (lower_letter - 'a')))
            {
                return false;
            }
            found |= (1U << (lower_letter - 'a'));
        }
    }
    return true;
}