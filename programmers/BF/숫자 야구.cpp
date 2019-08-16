#include <string>
#include <vector>

using namespace std;

int strikeCount(string number, string answer)
{
	int count = 0;

	for (int i = 0; i < number.length(); i++)
	{
		if (number[i] == answer[i])
			count++;
	}

	return count;
}

int ballCount(string number, string answer)
{
	int count = 0;

	for (int i = 0; i < number.length(); i++)
	{
		for (int k = 0; k < number.length(); k++)
		{ 
			if (answer[i] == number[k])
			{
				if (k == i)
					continue;

				count++;
			}
		}
	}

	return count;
}

int solution(vector<vector<int>> baseball) 
{
	int answer = 0;

	for (int i = 1; i <= 9; i++)
	{
		for (int k = 1; k <= 9; k++)
		{
			for (int z = 1; z <= 9; z++)
			{
				if (i == k || k == z || i == z)
					continue;

				bool isFlag = true;

				for (int q = 0; q < baseball.size(); q++)
				{
					if (strikeCount(to_string(baseball[q][0]), to_string(i * 100 + k * 10 + z)) != baseball[q][1] ||
						ballCount(to_string(baseball[q][0]), to_string(i * 100 + k * 10 + z)) != baseball[q][2])
					{
						isFlag = false;
					}
				}

				if (isFlag)
				{
					answer++;
				}
			}
		}
	}

	return answer;
}