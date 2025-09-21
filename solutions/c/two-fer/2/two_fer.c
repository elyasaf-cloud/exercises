#include "two_fer.h"

void two_fer(char *buffer, const char *name)
{
    const char *str1 = "One for ";
    const char *who = name ? name : "you";  
    const char *str2 = ", one for me.";

    while(*str1)
        *buffer++ = *str1++;
    while(*who)
        *buffer++ = *who++;
    do
        *buffer++ = *str2;
    while(*str2++);
}