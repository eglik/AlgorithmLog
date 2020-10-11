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
	ll i;
	cin >> i;
	cout << sol(i);
}