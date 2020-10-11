#include <string>
#include <vector>
#include <regex>
#include <algorithm>

using namespace std;

int solution(string dartResult) 
{
	int answer = 0;

	regex dartRegex("[0-9]+[A-Z][#*]?");
	regex numberRegex("\\d+");
	regex scoreRegex("[A-Z][*#]?");
	smatch match;
	sregex_token_iterator iter(dartResult.begin(), dartResult.end(), dartRegex);
	sregex_token_iterator end;

	vector<pair<int, int>> scoreVector;

	while (iter != end)
	{
		string dart = *iter;
		sregex_token_iterator numberIter(dart.begin(), dart.end(), numberRegex);
		sregex_token_iterator scoreIter(dart.begin(), dart.end(), scoreRegex);

		int number = 0;

		while (numberIter != end)
		{
			string numberString = *numberIter;
			number = atoi(numberString.c_str());
			numberIter++;
		}

		while (scoreIter != end)
		{
			string score = *scoreIter;

			switch (score[0])
			{
				case 'S':
					number = pow(number, 1);
					break;
				case 'D':
					number = pow(number, 2);
					break;
				case 'T':
					number = pow(number, 3);
					break;
			}

			if (score.length() == 2)
			{
				switch (score[1])
				{
					case '*':
						scoreVector.push_back(pair<int, int>(number, 2));
						break;
					case '#':
						scoreVector.push_back(pair<int, int>(number, -1));
						break;
				}
			}
			else
			{
				scoreVector.push_back(pair<int, int>(number, 0));
			}

			scoreIter++;
		}

		iter++;
	}

	int starCount = 0;
	int missCount = 0;

	for (int i = 0; i < scoreVector.size(); i++)
	{
		if (i != 0 && scoreVector[i].second > 0)
		{
			if (scoreVector[i - 1].second != 0)
			{
				scoreVector[i - 1].second *= 2;
			}
			else
			{
				scoreVector[i - 1].second = 2;
			}
		}
	}

	for (auto i : scoreVector)
	{
		if (i.second == 0)
		{
			i.second = 1;
		}

		answer += i.first * i.second;
	}

	return answer;
}