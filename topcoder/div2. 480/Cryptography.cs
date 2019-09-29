using System.Linq;

class Cryptography
{
    public long encrypt(int[] numbers)
    {
        var num = numbers.ToList();
        num.Sort();
        num[0]++;

        long answer = 1;

        foreach(var i in num)
        {
            answer *= i;
        }

        return answer;
    }
}