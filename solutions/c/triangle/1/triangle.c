#include "triangle.h"

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

static inline bool a_similar_b(triangle_t tri)
{
    return tri.a == tri.b;
}

static inline bool a_similar_c(triangle_t tri)
{
    return tri.a == tri.c;
}

static inline bool b_similar_c(triangle_t tri)
{
    return tri.b == tri.c;
}

bool is_scalene(triangle_t tri)
{
    if (!is_triangle(tri))
        return false;
    if (!a_similar_b(tri) && !a_similar_c(tri) && !b_similar_c(tri))
        return true;
    return false;
}

bool is_isosceles(triangle_t tri)
{
    if (!is_triangle(tri))
        return false;
    if (a_similar_b(tri) || a_similar_c(tri) || b_similar_c(tri))
        return true;
    return false;
}

bool is_equilateral(triangle_t tri)
{
    if (!is_triangle(tri))
        return false;
    if (a_similar_b(tri) && a_similar_c(tri) && b_similar_c(tri))
        return true;
    return false;
}
