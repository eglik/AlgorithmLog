#include <string>
#include <stack>

using namespace std;

int solution(string arrangement)
{
	int answer = 0;

	stack<char> pipes;

	for (int i = 0; i < arrangement.size(); i++)
	{
		if (arrangement[i] == '(')
		{
			pipes.push(arrangement[i]);
		}
		else if (arrangement[i] == ')')
		{
			if (arrangement[i - 1] == '(')
			{
				pipes.pop();
				answer += pipes.size();
			}
			else
			{
				pipes.pop();
				answer += 1;
			}
		}

	}

	return answer;
}