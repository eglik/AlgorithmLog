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
	ll T;
	cin >> T;

	while (T--) {
		ll R;
		string S;
		cin >> R >> S;
		
		for (auto s : S) {
			for (int i = 0; i < R; i++) cout << s;
		}
		cout << "\n";
	}
}