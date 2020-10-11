#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 5;
	ll total = 0;
	vector<ll> v;
	while(n--) {
		ll a;
		cin >> a;

		total += a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());
	cout << total / 5 << "\n";
	cout << v[2];
}