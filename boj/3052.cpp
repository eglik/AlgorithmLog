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
	ll count = 10;
	set<ll> s;
	while (count--) {
		ll N;
		cin >> N;
		s.insert(N % 42);
	}
	cout << s.size();
}