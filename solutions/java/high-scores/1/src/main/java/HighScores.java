import java.util.List;
import java.util.Arrays;
import java.util.ArrayList;

class HighScores
{
    private List<Integer> scoresList;
    
    public HighScores(List<Integer> highScores)
    {
        this.scoresList = new ArrayList<>(highScores);
    }

    List<Integer> scores()
    {
        return List.copyOf(this.scoresList);
    }

    Integer latest()
    {
        return this.scoresList.get(this.scoresList.size() - 1);
    }

    Integer personalBest()
    {
        int max = 0;
        for (Integer i: this.scoresList)
        {
            if (i > max)
            {
                max = i;
            }
        }
        return max;
    }

    List<Integer> personalTopThree()
    {
        Integer a = 0, b = 0, c = 0;
        for (Integer i: this.scoresList)
        {
            if (i > a)
            {
                c = b;
                b = a;
                a = i;
            }
            else if (i > b)
            {
                c = b;
                b = i;
            }
            else if (i > c)
            {
                c = i;
            }
        }
        
        switch (this.scoresList.size())
        {
            case 1:
                return Arrays.asList(a);

            case 2:
                return Arrays.asList(a, b);

            default:
                return Arrays.asList(a, b, c);
        }
    }
}
