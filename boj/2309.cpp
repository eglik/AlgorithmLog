#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 9;
	ll total = 0;
	vector<ll> v;
	while(n--) {
		ll a;
		cin >> a;
		
		v.push_back(a);
	}

	ll dis = accumulate(v.begin(), v.end(), 0) - 100;

	for(int i=0; i<9; i++) {
		for(int k=i+1; k<9; k++) {
			if(v[i]+v[k] == dis) {
				v.erase(find(v.begin(), v.end(), v[k]));
				v.erase(find(v.begin(), v.end(), v[i]));
			}
		}
	}
	sort(v.begin(), v.end());

	for(auto p : v) {
		cout << p << "\n";
	}
}