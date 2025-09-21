#include <math.h>
#include "darts.h"

static const float inner_c = 1; //inner circle
static const float middle_c = 5;
static const float outer_c = 10;

static const float inner_s = 10; //inner score
static const float middle_s = 5;
static const float outer_s = 1;

float score(coordinate_t pos)
{
    float r = hypotf(pos.x ,pos.y);
    if(r<=inner_c)
        return inner_s;
    else if (r<=middle_c)
        return middle_s;
    else if (r<=outer_c)
        return outer_s;
    return 0;
}

