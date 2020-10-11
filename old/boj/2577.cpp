#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>
#include <vector>

#define ll long long int

using namespace std;

int main() {
	vector<int> vec;
	vec.resize(10);

	ll A, B, C;
	cin >> A >> B >> C;
		for (auto a : to_string(A * B * C)) {
			vec[((int)a - 48)]++;
		}

	for (auto v : vec) {
		cout << v << endl;
	}
}