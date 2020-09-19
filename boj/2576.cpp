#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 7;
	ll total = 0;
	ll min = 101;
	while(n--) {
		ll a;
		cin >> a;

		if(a % 2 != 0) {
			total += a;
			if(min > a) min = a;
		}
	}

	if(total == 0)
	{
		cout << "-1";
		return 0;
	}

	cout << total << "\n";
	cout << min;
}