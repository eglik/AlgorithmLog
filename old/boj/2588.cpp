#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>

#define ll long long int

using namespace std;

bool sol(ll year) {
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() {
	ll a, b;
	cin >> a >> b;
	cout << a * (b % 10) << endl;
	cout << a * (b / 10 % 10) << endl;
	cout << a * (b / 100 % 10) << endl;
	cout << a * b << endl;
}