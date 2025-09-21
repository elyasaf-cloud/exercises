#include "gigasecond.h"

const unsigned int GIGA_S = 1000000000;

void gigasecond(time_t input, char *output, size_t size)
{
    time_t plus_giga = input + GIGA_S;
    struct tm *after = gmtime(&plus_giga);
    strftime(output, size, "%Y-%m-%d %H:%M:%S", after);
}