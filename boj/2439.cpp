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
		for (int k = 0; k < input - i - 1; k++)
		{
			cout << " ";
		}
		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}