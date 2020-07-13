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
	ll count = 9;

	vector<ll> vec;

	while (count--) {
		ll n;
		cin >> n;
		vec.push_back(n);
	}

	ll index, m = 0;

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] > m) {
			index = i + 1;
			m = vec[i];
		}
	}

	cout << m << "\n";
	cout << index << "\n";
}