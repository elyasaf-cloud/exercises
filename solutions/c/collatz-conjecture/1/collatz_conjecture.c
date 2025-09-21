#include "collatz_conjecture.h"

int steps (int start)
{
    if(start==1)
    {
        return 0;
    }
    if(start<=0)
    {
        return -1;
    }
    int rep = (start%2==0)? start/2 : (start*3)+1;
    if(rep==-1)
    {
        return -1;
    }
    return steps(rep)+1;
}