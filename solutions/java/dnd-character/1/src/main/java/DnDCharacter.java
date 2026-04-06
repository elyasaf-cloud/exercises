import java.util.List;
import java.util.ArrayList;
import java.util.concurrent.ThreadLocalRandom;

class DnDCharacter
{
    private int strength;
    private int dexterity;
    private int constitution;
    private int intelligence;
    private int wisdom;
    private int charisma;
    private int modifier;

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
        int sum = 0;
        int min = 6;
        for (int i = 0; i < 4; i++)
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
        for (int i = 0; i < 4; i++)
        {
            scores.add(ThreadLocalRandom.current().nextInt(1, 7));    
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
        return mod + 10;
    }
}
