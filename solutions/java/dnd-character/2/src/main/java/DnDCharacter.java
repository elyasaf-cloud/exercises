import java.util.List;
import java.util.ArrayList;
import java.util.concurrent.ThreadLocalRandom;

class DnDCharacter
{
    private static final int DICE_COUNT = 4;
    private static final int DICE_SIDES = 6;
    private static final int BASE_HP = 10;
    
    private int strength;
    private int dexterity;
    private int constitution;
    private int intelligence;
    private int wisdom;
    private int charisma;

    public DnDCharacter()
    {
        this.strength = ability(rollDice());
        this.dexterity = ability(rollDice());
        this.constitution = ability(rollDice());
        this.intelligence = ability(rollDice());
        this.wisdom = ability(rollDice());
        this.charisma = ability(rollDice());
    }
    
    int ability(List<Integer> scores)
    {
        if(scores.size() != 4)
        {
            if (scores.size() != 4)
            {
                throw new IllegalArgumentException("Must have exactly 4 scores");
            }
        }
        int sum = 0;
        int min = DICE_SIDES;
        for (int i = 0; i < DICE_COUNT; i++)
        {
            int currentScore = scores.get(i);
            sum += currentScore;
            if (currentScore < min)
            {
                min = currentScore;
            }
        }
        return sum - min;
    }

    List<Integer> rollDice()
    {
        List<Integer> scores = new ArrayList<>();
        for (int i = 0; i < DICE_COUNT; i++)
        {
            scores.add(ThreadLocalRandom.current().nextInt(1, DICE_SIDES + 1));    
        }
        return scores;
    }

    int modifier(int input)
    {
        double mod = input - 10;
        mod /= 2;
        return (int)Math.floor(mod);
    }

    int getStrength()
    {
        return this.strength;
    }

    int getDexterity()
    {
        return this.dexterity;
    }

    int getConstitution()
    {
        return this.constitution;
    }

    int getIntelligence()
    {
        return this.intelligence;
    }

    int getWisdom()
    {
        return this.wisdom;
    }

    int getCharisma()
    {
        return this.charisma;
    }

    int getHitpoints()
    {   
        int mod = modifier(this.constitution);
        return mod + BASE_HP;
    }
}
