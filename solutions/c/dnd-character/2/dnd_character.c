#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>


int modifier(int score)
{
    return (int)floor(((double)score - 10.0) / 2);
}

int ability(void)
{
    static int initialized = 0;
    if(!initialized)
    {
        srand(time(NULL));
        initialized = 1;
    }
    int sum = 0, smallest = 6;
    for(int i = 0; i < 4; i++)
    {
        int roll = rand() % 6 + 1;
        sum += roll;
        if(roll < smallest)
            smallest = roll;
    }
    return sum - smallest;
}

dnd_character_t make_dnd_character(void)
{
    dnd_character_t character;
    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();
    character.hitpoints = modifier(character.constitution) + 10;
    return character;
}