#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int red) 
{
	vector<int> answer;
	int number = brown + red;
	int pivot = number;

	while (true)
	{
		for (int i = 1; i <= number; i++)
		{
			if (i * pivot > number)
				break;

			if (i * pivot == number &&
				(brown == (pivot * 2) + ((i - 2) * 2)))
			{
				answer.push_back(pivot);
				answer.push_back(i);
				return answer;
			}
		}
		pivot--;
	}
}