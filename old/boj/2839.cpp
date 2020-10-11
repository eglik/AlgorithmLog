#define ll long long int

#include <iostream>

using namespace std;

int main()
{
	ll input;
	cin >> input;

	if (input == 4 || input == 7)
	{
		cout << -1 << endl;
		return 0;
	}
	
	ll count = input / 5;
	switch (input % 5)
	{
	case 0:
		cout << count << endl;
		break;
	case 1:
	case 3:
		cout << count + 1 << endl;
		break;
	case 2:
	case 4:
		cout << count + 2 << endl;
		break;
	}
}