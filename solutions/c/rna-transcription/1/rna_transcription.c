#include "rna_transcription.h"
#include <stdlib.h>

char *to_rna(const char *dna)
{
    size_t capacity = 10;
    char *rna = malloc(10);
    if(rna==NULL)
    {
        exit(1);
    }
    
    size_t i;
    for(i=0; dna[i]!='\0'; i++)
    {
        if(i==capacity)
        {
            char *temp = realloc(rna, capacity*10);
            if(temp==NULL)
            {
                free(rna);
                exit(1);
            }
            rna = temp;
        }
        switch (dna[i])
        {
            case 'G':
                 rna[i]= 'C';
            break;

            case 'C':
                rna[i] = 'G';
            break;

            case 'T':
                rna[i] = 'A';
            break;

            case 'A':
                rna[i] = 'U';
            break;
        }
    }
    
    char *temp = realloc(rna, i+1);
        if(temp==NULL)
        {
            free(rna);
            exit(1);
        }
    rna = temp;
    rna[i] = '\0';
    
    return rna;
}