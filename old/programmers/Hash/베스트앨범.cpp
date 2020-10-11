#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays)
{
	vector<int> answer;

	multimap<int, pair<string, int>, greater<int>> list;
	multimap<string, pair<int, int>> sortList;
	unordered_map<string, int> genreList;
	map<int, string, greater<int>> temp;

	for (int i = 0; i < genres.size(); i++)
	{
		list.insert(pair<int, pair<string, int>>(plays[i], pair<string, int>(genres[i], i)));
		genreList.insert(pair<string, int>(genres[i], 0));
	}

	for (multimap<int, pair<string, int>>::iterator iter = list.begin(); iter != list.end(); iter++)
	{
		sortList.insert(pair<string, pair<int, int>>(iter->second.first, pair<int, int>(iter->first, iter->second.second)));
	}
    
	for (multimap<string, pair<int, int>>::iterator iter = sortList.begin(); iter != sortList.end(); iter++)
	{
		genreList.find(iter->first)->second += iter->second.first;
	}

	for (unordered_map<string, int>::iterator iter = genreList.begin(); iter != genreList.end(); iter++)
	{
		temp.insert(pair<int, string>(iter->second, iter->first));
	}

	genreList.clear();

	for (map<int, string>::iterator iter = temp.begin(); iter != temp.end(); iter++)
	{
        if (sortList.count(iter->second) > 1)
		{
			answer.push_back((sortList.equal_range((*iter).second).first)->second.second);
			answer.push_back((++(sortList.equal_range((*iter).second).first))->second.second);
		}
		else if (sortList.count(iter->second) == 1)
		{
			answer.push_back((sortList.equal_range((*iter).second).first)->second.second);
		}
	}

	return answer;
}