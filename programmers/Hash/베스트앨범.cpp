#include <iostream>
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
	unordered_multimap<string, pair<int, int>> sortList;
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

	for (unordered_multimap<string, pair<int, int>>::iterator iter = sortList.begin(); iter != sortList.end(); iter++)
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
		genreList.insert(pair<string, int>(iter->second, iter->first));
	}

	for (unordered_map<string, int>::iterator iter = genreList.begin(); iter != genreList.end(); iter++)
	{
		if (sortList.count(iter->first) > 1)
		{
			answer.push_back((sortList.equal_range((*iter).first).first)->second.second);
			answer.push_back((++(sortList.equal_range((*iter).first).first))->second.second);
		}
		else if(sortList.count(iter->first) == 1)
		{
			answer.push_back((sortList.equal_range((*iter).first).first)->second.second);
		}
	}

	return answer;
}

void main()
{
	vector<string> t1a = { "classic", "pop", "classic", "classic", "pop" };
	vector<int> t1b = { 500, 600, 150, 800, 2500 };
	vector<int> a;
	a = solution(t1a, t1b);

	cout << "[";
	for (int i = 0; i < a.size() - 1; i++)
	{
		cout << a[i] << ", ";
	}
	cout << a[a.size() - 1];
	cout << "]";
}