#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>
#include <vector>
#include <set>
#include <map>

#define ll long long int

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll N;
	cin >> N;
	vector<ll> vec;
	while (N--) {
		ll num;
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	for (auto v : vec) {
		cout << v << "\n";
	}
}