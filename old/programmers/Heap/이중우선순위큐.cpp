#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> operations) 
{
	vector<int> answer;
	deque<int> data;

	for (auto i : operations)
	{
        
		if (i.at(0) == 'I')
		{
			data.push_back(atoi(i.substr(2, i.length() - 2).c_str()));
            sort(data.begin(), data.end());
		}

		if (i.at(0) == 'D')
		{
			if (data.empty()) 
				continue;

			if (atoi(i.substr(2, i.length() - 2).c_str()) == 1)
			{
				data.pop_back();
			}
			else
			{
				data.pop_front();
			}
		}
	}

	if (data.empty())
	{
		answer.push_back(0);
		answer.push_back(0);
	}
	else
	{
		answer.push_back(data.back());
		answer.push_back(data.front());
	}

	return answer;
}