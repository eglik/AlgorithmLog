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
	ll count;
	cin >> count;
	while (count--) {
		string T;
		cin >> T;
		ll total = 0, score = 0;
		for (auto t : T) {
			if (t == 'O') total += ++score;
			else score = 0;
		}
		cout << total << "\n";
	}
}