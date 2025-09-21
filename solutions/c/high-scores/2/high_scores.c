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
    int32_t highests[3] = {0, 0, 0};
    for(size_t i = 0; i < len; i++)
    {
        if(scores[i] > highests[0])
        {
            highests[2] = highests[1];
            highests[1] = highests[0];
            highests[0] = scores[i]; 
        }
        else if(scores[i] > highests[1])
        {
            highests[2] = highests[1];
            highests[1] = scores[i];
        }
        else if(scores[i] > highests[2])
        {
            highests[2] = scores[i];
        }
    }
    int count = len < 3 ? len : 3;
    for(int i = 0; i < count; i++)
    {
        output[i] = highests[i];
    }
    return count;
}