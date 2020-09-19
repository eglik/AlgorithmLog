#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll A, B;
	cin >> A >> B;
	ll a = min(A, B);
	ll b = max(A, B);
	
	if(a != b) cout << b-a-1 << "\n";
	else cout << 0 << "\n";

	for(ll i=a+1; i<b; i++) {
		cout << i << " ";
	}
}