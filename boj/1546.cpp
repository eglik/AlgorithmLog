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
	cin.precision(10);
	ll count;
	cin >> count;

	vector<double> vec;

	while (count--) {
		double N;
		cin >> N;
		vec.push_back(N);
	}

	auto m = *max_element(vec.begin(), vec.end());

	double total = 0;

	for (auto v : vec) {
		total += v / m;
	}

	cout << total / vec.size() * 100;
}