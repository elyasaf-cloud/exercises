#include "darts.h"
#include "math.h"

int score(coordinate_t landing_position)
{
    float x = landing_position.x;
    float y = landing_position.y;
    float r=sqrt((x*x)+(y*y));
    if((r<=1) && (r>=0))
        return 10;
    else if (r<=5)
        return 5;
    else if (r<=10)
        return 1;
    return 0;
}

