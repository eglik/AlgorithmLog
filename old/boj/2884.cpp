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
	ll H, M;
	cin >> H >> M;
	auto M1 = M - 45;
	if (M1 < 0) {
		H--;
		if (H < 0) H = 23;
		M = 60 + M1;
	}
	else M = M1;
	cout << H << " " << M;
}