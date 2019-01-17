using System;

class AlgorithmLog
{
    static int Euclidean(int a, int b)
    {
        return Convert.ToBoolean(a % b)  Euclidean(b, a % b)  b;
    }
}