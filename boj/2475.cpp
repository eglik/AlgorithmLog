#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>
#include <vector>

#define ll long long int

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	cout << (a * a + b * b + c * c + d * d + e * e) % 10;
}