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

int sol(string a, string b) {
	if (a.length() != b.length()) return a.length() < b.length();
	else return a < b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true) {
		string num;
		cin >> num;
		if (num == "0") return 0;
		ll l = num.length() / 2;

		if (num.length() % 2 == 0) {
			auto r = num.substr(l, num.length() - l);
			reverse(r.begin(), r.end());
			cout << ((num.substr(0, l) == r) == 1 ? "yes\n" : "no\n");
		}
		else {
			auto r = num.substr(l + 1, num.length() - l);
			reverse(r.begin(), r.end());
			cout << ((num.substr(0, l) == r) == 1? "yes\n" : "no\n");
		}
	}
}