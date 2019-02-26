#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;

	unordered_multimap<string, pair<int, int>> m;
	map<string, int> gList;
	map<int, string, greater<int>> temp;
	unordered_map<string, int> gSortList;


	for (int i = 0; i < genres.size(); i++)
	{
		m.insert(pair<string, pair<int, int>>(genres[i], pair<int, int>(plays[i], i)));
		gList.insert(pair<string, int>(genres[i], 0));
	}

	for (unordered_multimap<string, pair<int, int>>::iterator iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "장르 : " << (*iter).first << ", play count :  " << (*iter).second.first << ", index : " << (*iter).second.second << endl;
	}

	// gList에 각 장르별 합을 구함
	for (unordered_multimap<string, pair<int, int>>::iterator iter = m.begin(); iter != m.end(); iter++)
	{
		(*gList.find((*iter).first)).second += (*iter).second.first;
	}

	int i = 0;

	cout << endl << endl;

	for (map<string, int>::iterator iter = gList.begin(); iter != gList.end(); iter++)
	{
		temp.insert(pair<int, string>((*iter).second, (*iter).first));
	}

	for (map<int, string>::iterator iter = temp.begin(); iter != temp.end(); iter++)
	{
		gSortList.insert(pair<string, int>((*iter).second, (*iter).first));
	}

	for (unordered_map<string, int>::iterator iter = gSortList.begin(); iter != gSortList.end(); iter++)
	{
		cout << "장르 : " << (*iter).first << ", 플레이횟수 : " << (*iter).second << endl;
		// 여기서 장르별로 두곡씩 answer vector에 index를 넣어주면됨.
	}

	return answer;
}

void main()
{
	vector<string> t1a = { "classic", "classic", "pop", "classic", "classic", "pop" };
	vector<int> t1b = { 150, 500, 600, 150, 800, 2500 };
	vector<int> a;
	a = solution(t1a, t1b);
	
	cout << "[";
	for (int i = 0; i < a.size(); i++) 
	{
		cout << a[i] << " ";
	}
	cout << "]";
}