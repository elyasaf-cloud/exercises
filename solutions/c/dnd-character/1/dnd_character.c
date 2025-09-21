#include "dnd_character.h"
#include <stdlib.h>
#include <time.h>


int modifier(int score)
{
    int mod = score - 10;
    if(mod % 2 < 0)
        mod--;
    return mod / 2;
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
        int roll = rand() % (6) + 1;
        sum += roll;
        if(roll < smallest)
            smallest = roll;
    }
    return sum - smallest;
}

dnd_character_t make_dnd_character(void)
{
    dnd_character_t character;
    int *abilities[] = {
        &character.strength,
        &character.dexterity,
        &character.constitution,
        &character.intelligence,
        &character.wisdom,
        &character.charisma
    };
    
    for(size_t i = 0; i < sizeof(abilities) / sizeof(*abilities); i++)
        *abilities[i] = ability();
    
    character.hitpoints = modifier(character.constitution) + 10;
    return character;
}