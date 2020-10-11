#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>

#define ll long long int

using namespace std;

void sol(ll num) {
	if (num == 0) return;

	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}

		for (int k = i; k < num; k++) {
			cout << "*";
		}

		for (int k = i; k < num - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i < num; i++)
	{
		for (int k = i; k < num - 1; k++)
		{
			cout << " ";
		}

		for (int k = 0; k <= i; k++) {
			cout << "*";
		}

		for (int k = 0; k < i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	ll i;
	cin >> i;
	sol(i);
}