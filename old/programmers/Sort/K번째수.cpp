#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
	vector<int> answer;

	vector<int> temp;

	for (int i = 0; i < commands.size(); i++)
	{
		int startIndex = commands[i][0];
		int endIndex = commands[i][1];

		for (int k = 0; k < endIndex - startIndex + 1; k++)
		{
			temp.push_back(array[startIndex + k - 1]);
		}
		sort(temp.begin(), temp.end());
		answer.push_back(temp[commands[i][2] - 1]);
		temp.clear();
	}

	return answer;
}