bool isPrime[10000000];

long long solution(int N)
{
	long long answer = 0;

	for (int i = 2; i*i <= N; i++)
	{
		if (!isPrime[i])
		{
			for (int j = i * i; j <= N; j += i)
			{
				isPrime[j] = true;
			}
		}
	}
	
	for (int i = 2; i <= N; i++)
	{
		if (!isPrime[i])
		{
			answer += i;
		}
	}

	return answer;
}