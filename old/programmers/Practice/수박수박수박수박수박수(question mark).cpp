#include <string>
#include <vector>

using namespace std;

string solution(int n) 
{
	string answer = "";

	bool flag = false;

	while (n)
	{
		if (flag)
			answer += "박";
		else
			answer += "수";

		flag = !flag;

		n--;
	}

	return answer;
}