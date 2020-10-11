#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees) 
{
	int answer = 0;

	list<char> skill_require;


	for (auto i : skill_trees)
	{
		skill_require.clear();
		for (auto i : skill)
		{
			skill_require.push_back(i);
		}

		bool isPossible = true;

		for (auto k : i)
		{
			auto isFind = find(skill.begin(), skill.end(), k);

			if (isFind != skill.end())
			{
				if (k == skill_require.front())
				{
					skill_require.pop_front();
				}
				else
				{
					isPossible = false;
					break;
				}
			}
		}
		
		if (isPossible)
			answer++;
	}

	return answer;
}