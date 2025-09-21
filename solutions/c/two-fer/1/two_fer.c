#include "two_fer.h"

void two_fer(char *buffer, const char *name)
{
    int i, j;
    const char str1[] = "One for ";
    for(i=0; str1[i]!='\0'; i++)
    {
        buffer[i] = str1[i];
    }

    const char *who = name ? name : "you";
    for(j=i; who[j-i]!='\0'; j++)
    {
        buffer[j] = who[j-i];
    }
        
    const char str2[] = ", one for me.";
    for(i=j; str2[i-j]!='\0'; i++)
    {
        buffer[i] = str2[i-j];
    }

    buffer[i] = '\0';
}