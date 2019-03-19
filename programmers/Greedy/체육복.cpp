#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
	int answer;

	set<int> res;
	set<int> nohas;

	for (int i = 0; i < lost.size(); i++)
	{
		nohas.insert(lost[i]);
	}

	for (int i = 0; i < reserve.size(); i++)
	{
		res.insert(reserve[i]);
	}

	for (int i = 0; i < reserve.size(); i++)
	{
		if (nohas.find(reserve[i]) != nohas.end())
		{
			nohas.erase(reserve[i]);
		}
	}

	answer = n - nohas.size();

	for (int i = 0; i < lost.size(); i++)
	{
		if (res.find(lost[i]) != res.end())
		{
			res.erase(lost[i]);
		}
	}

	if (res.empty())
	{
		return answer;
	}
	else
	{
		for (set<int>::iterator iter = res.begin(); iter != res.end(); iter++)
		{
			if (nohas.find(*iter - 1) != nohas.end())
			{
				answer++;
				nohas.erase(*iter - 1);
			}
			else if(nohas.find(*iter + 1) != nohas.end())
			{
				answer++;
				nohas.erase(*iter + 1);
			}
		}
	}

	return answer;
}