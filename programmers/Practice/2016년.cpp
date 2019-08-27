#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int a, int b)
{
	vector<int> days = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	int index = max(0, a - 1);

	int day = b;
	for (int i = 0; i < index; i++)
	{
		day += days[i];
	}

	switch (day % 7)
	{
	case 1:
		return "FRI";
	case 2:
		return "SAT";
	case 3:
		return "SUN";
	case 4:
		return "MON";
	case 5:
		return "TUE";
	case 6:
		return "WED";
	case 0:
		return "THU";
	}
}