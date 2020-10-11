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

	vector<ll> vec;

	ll N;
	cin >> N;

	while (N--) {
		ll num;
		cin >> num;
		vec.push_back(num);
	}

	cout << *min_element(vec.begin(), vec.end()) << ' ' << *max_element(vec.begin(), vec.end());
}