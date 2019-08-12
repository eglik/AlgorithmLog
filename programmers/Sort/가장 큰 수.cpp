#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	if (to_string(a) + to_string(b) > to_string(b) + to_string(a))
	{
		return true;
	}
	else
	{
		return false;
	}
}

string solution(vector<int> numbers)
{
	string answer = "";

	sort(numbers.begin(), numbers.end(), compare);

	for (int i = 0; i < numbers.size(); i++)
	{
		answer += to_string(numbers[i]);
	}

	if (answer[0] == '0')
	{
		return "0";
	}

	return answer;
}