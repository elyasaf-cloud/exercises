#include "triangle.h"
#include <math.h>

const double EPSILON = 1e-9;

static bool is_triangle(triangle_t tri)
{
    double sides[3] = {tri.a, tri.b, tri.c};
    double sum_sides = tri.a + tri.b + tri.c;
    for(int i = 0; i < 3; i++)
    {
        double current = sides[i];
        if (current <= 0 || current > sum_sides - current)
            return false;
    }
    return true;
}

static bool doubles_equal(double a, double b)
{
    return fabs(a - b) < EPSILON;
}

bool is_scalene(triangle_t tri)
{
    if (!is_triangle(tri))
        return false;
    return !doubles_equal(tri.a, tri.b) && !doubles_equal(tri.a, tri.c) && !doubles_equal(tri.b, tri.c);
}

bool is_isosceles(triangle_t tri)
{
    if (!is_triangle(tri))
        return false;
    return doubles_equal(tri.a, tri.b) || doubles_equal(tri.a, tri.c) || doubles_equal(tri.b, tri.c);
}

bool is_equilateral(triangle_t tri)
{
    if (!is_triangle(tri))
        return false;
    return doubles_equal(tri.a, tri.b) && doubles_equal(tri.a, tri.c);
}
