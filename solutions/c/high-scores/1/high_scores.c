#include "high_scores.h"


int32_t latest(const int32_t *scores, size_t len)
{
    return scores[len - 1];
}

int32_t personal_best(const int32_t *scores, size_t len)
{
    int32_t best = 0;
    for(size_t i = 0; i < len; i++)
    {
        if(scores[i] > best)
            best = scores[i];
    }
    return best;
}

size_t personal_top_three(const int32_t *scores, size_t len, int32_t *output)
{
    int32_t best = 0;
    size_t loc1, loc2;
    
    for(size_t i = 0; i < len; i++)
    {
        if(scores[i] > best)
        {
                best = scores[i];
                loc1 = i;
        }
    }
    output[0] = best;

    if(len == 1)
        return 1;

    best = 0;
    for(size_t i = 0; i < len; i++)
    {
        if(scores[i] > best)
        {
                if(i != loc1)
                {
                    best = scores[i];
                    loc2 = i;
                }
        }
    }
    output[1] = best;

    if(len == 2)
        return 2;

    best = 0;
    for(size_t i = 0; i < len; i++)
    {
        if(scores[i] > best)
        {
                if(i != loc1 && i != loc2)
                {
                    best = scores[i];
                }
        }
    }
    output[2] = best;

    return 3;
}