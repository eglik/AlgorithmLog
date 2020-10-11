#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int N, vector<int> stages) 
{
	vector<int> answer;
	vector<pair<float, float>> userDatas;
	multimap<float, int, greater<float>> failRate;

	userDatas.resize(N);

	for (int i = 0; i < stages.size(); i++)
	{
		if (stages[i] <= N)
		{
			userDatas[stages[i] - 1].second++;

			for (int k = 0; k <= stages[i] - 1; k++)
			{
				userDatas[k].first++;
			}
		}
		else
		{
			for (int k = 0; k < N; k++)
			{
				userDatas[k].first++;
			}
		}
	}

	for (int i = 0; i < userDatas.size(); i++)
	{
		failRate.insert(pair<float, int>(userDatas[i].second / userDatas[i].first, i + 1));
	}

	for (map<float, int>::iterator iter = failRate.begin(); iter != failRate.end(); iter++)
	{
		answer.push_back(iter->second);
	}

	return answer;
}