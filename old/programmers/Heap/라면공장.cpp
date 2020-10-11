#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) 
{
	int answer = 0;

	priority_queue<int, vector<int>, less<int>> queue;
	int index = 0;

	for (int i = 0; i < k; i++)
	{
		if (dates[index] == i)
		{
			queue.push(supplies[index]);
			index++;
			index = min(index, static_cast<int>(supplies.size() - 1));
		}

		if (stock == 0)
		{
			stock += queue.top();
			queue.pop();
			answer++;
		}

		stock--;
	}

	return answer; 
}