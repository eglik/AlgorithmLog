#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) 
{
	vector<int> answer;

	for (int i = 0; i < prices.size() - 1; i++)
	{
		int day = 0;
		for (int k = 1 + i; k < prices.size(); k++)
		{
			if (prices[i] <= prices[k])
			{
				day++;
			}
			else
			{
				day++;
				break;
			}
		}
		answer.push_back(day);
	}

	answer.push_back(0);

	return answer;
}