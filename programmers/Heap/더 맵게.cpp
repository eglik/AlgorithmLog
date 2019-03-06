#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) 
{
	int answer = 0;
	
	priority_queue<int, vector<int>, greater<int>> heap;

	for (int i = 0; i < scoville.size(); i++)
	{
		heap.push(scoville[i]);
	}

	while (heap.top() < K)
	{
		int first = heap.top();
		heap.pop();

		if (heap.empty())
		{
			return -1;
		}

		int second = heap.top();
		heap.pop();

		heap.push(first + (second * 2));
		answer++;

	}

	return answer;
}