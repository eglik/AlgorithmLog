#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}