#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location)
{
	int answer = 1;

	queue<pair<int, int>> dataQue;
	priority_queue<int> priorQue;

	for (int i = 0; i < priorities.size(); i++)
	{
		dataQue.push(pair<int, int>(i, priorities[i]));
		priorQue.push(priorities[i]);
	}

	while (!dataQue.empty())
	{
		if (priorQue.top() == dataQue.front().second)
		{
			if (location == dataQue.front().first)
			{
				return answer;
			}
			else
			{
				answer++;
				dataQue.pop();
				priorQue.pop();
			}
		}
		else
		{
			dataQue.push(dataQue.front());
			dataQue.pop();
		}
	}

	return answer;
}