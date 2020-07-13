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
	string input;
	cin >> input;

	vector<ll> vec;
	vec.resize(26, -1);

	for (int i = 0; i < input.size(); i++) {
		if (vec[input[i] - 97] == -1) vec[input[i] - 97] = i;
	}

	for (auto v : vec) {
		cout << v << ' ';
	}
}