#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>
#include <vector>

#define ll long long int

using namespace std;

void sol(vector<ll> vec) {
	ll yt = 0, mt = 0;

	for (auto v : vec) {
		yt += 10 * (v / 30 + 1);
		mt += 15 * (v / 60 + 1);
	}

	if (yt == mt) cout << "Y M " << mt;
	else if (yt < mt) cout << "Y " << yt;
	else cout << "M " << mt;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin >> n;

	vector<ll> v;

	while (n--) {
		ll m;
		cin >> m;
		v.push_back(m);
	}

	sol(v);
}