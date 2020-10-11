#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
	vector<int> answer;
	
	queue<int> worklist;

	for (int i = 0; i < progresses.size(); i++)
	{
		int z = 0;
		while (progresses[i] < 100)
		{
			progresses[i] += speeds[i];
			z++;
		}

		worklist.push(z);
	}

	int count = 0;
	int day = 0;

	while (true)
	{
		if (day == 0)
		{
			count = 0;
			day = worklist.front();
			count++;
		}
		else if(day >= worklist.front())
		{
			count++;
		}
		else
		{
			day = 0;
			answer.push_back(count);
			continue;
		}
		
		worklist.pop();

		if (worklist.empty())
		{
			answer.push_back(count);
			break;
		}
	}

	return answer;
}