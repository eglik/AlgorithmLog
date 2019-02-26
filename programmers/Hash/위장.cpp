#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
	int answer = 0;

	vector<string> total;

	multimap<string, string> mm;
	set<string> types;

	for (int i = 0; i < clothes.size(); i++)
	{
		total = clothes[i];

		mm.insert(pair<string, string>(total[1], total[0]));
		types.insert(total[1]);
	}

	vector<int> typesCount;

	for (set<string>::iterator i = types.begin(); i != types.end(); i++)
	{
		typesCount.push_back(mm.count(*i));
	}

	for (int i = 0; i < typesCount.size(); i++)
	{
		if (answer == 0)
			answer = 1;
		answer *= (typesCount[i] + 1);
	}

	return answer - 1;
}