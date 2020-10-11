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
	vector<ll> asc = { 1,2,3,4,5,6,7,8 };
	vector<ll> desc = { 8,7,6,5,4,3,2,1 };

	vector<ll> vec;

	ll count = 8;

	while (count--) {
		ll N;
		cin >> N;
		vec.push_back(N);
	}
	
	if (asc == vec) cout << "ascending";
	else if (desc == vec) cout << "descending";
	else cout << "mixed";
}