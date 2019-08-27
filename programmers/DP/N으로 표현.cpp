#include <string>
#include <vector>

using namespace std;

int answer = -1;

void dfs(int n, int index, int result, int number)
{
	if (index > 8)
		return;

	if (result == number)
	{
		if (answer == -1 || answer > index)
		{
			answer = index;
		}
		return;
	}

	int nNumber = 0;
	for (int i = 0; i < 8; i++)
	{
		nNumber = nNumber * 10 + n;
		dfs(n, index + i + 1, result + nNumber, number);
		dfs(n, index + i + 1, result - nNumber, number);
		dfs(n, index + i + 1, result * nNumber, number);
		dfs(n, index + i + 1, result / nNumber, number);
	}
}

int solution(int N, int number) 
{
	dfs(N, 0, 0, number);
	return answer;
}