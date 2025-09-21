#include "raindrops.h"
#include <string.h>


void convert(char result[], int drops)
{
    result[0] = '\0';
    if(drops%3==0)
        strcat(result, "Pling");
    if(drops%5==0)
        strcat(result, "Plang");
    if(drops%7==0)
        strcat(result, "Plong");
    if(result[0]=='\0')
    {
        int i = 0;
        while(drops)
        {
            result[i] = (drops%10) + '0';
            drops /= 10;
            i++;
        }
        for(int j=0; j<i/2; j++)
        {
            char temp = result[j];
            result[j] = result[i-1-j];
            result[i-1-j] = temp;
        }
        result[i] = '\0';
    }
}