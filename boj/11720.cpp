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
	string num;
	cin >> num;
	ll total = 0;
	for (auto n : num) {
		total += (ll)(n - 48);
	}
	cout << total;
}