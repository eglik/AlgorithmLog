#include <sstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) 
{
	vector<string> answer;

	map<string, string> userDatas;

	for (int i = 0; i < record.size(); i++)
	{
		vector<string> s;
		std::istringstream iss(record[i]);

		do
		{
			string sub;
			iss >> sub;
			if (sub.length() == 0)
				break;
			s.push_back(sub);
		} while (iss);

		if (s[0] == "Enter")
		{
			if (!userDatas.insert(pair<string, string>(s[1], s[2])).second)
			{
				userDatas.find(s[1])->second = s[2];
			}
		}
		else if (s[0] == "Change")
		{
			userDatas.find(s[1])->second = s[2];
		}
	}

	for (int i = 0; i < record.size(); i++)
	{
		vector<string> s;
		std::istringstream iss(record[i]);

		do
		{
			string sub;
			iss >> sub;
			if (sub.length() == 0)
				break;
			s.push_back(sub);
		} while (iss);

		if (s[0] == "Enter")
		{
			string temp = userDatas.find(s[1])->second;
			temp.append("님이 들어왔습니다.");
			answer.push_back(temp);
		}
		else if (s[0] == "Leave")
		{
			string temp = userDatas.find(s[1])->second;
			temp.append("님이 나갔습니다.");
			answer.push_back(temp);
		}
	}

	return answer;
}