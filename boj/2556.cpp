#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    ll n;
    cin >> n;
    
    for(ll i=0; i<n; i++) {
        ll N = n;
        while(N--) cout << "*";
        cout << "\n";
    }
}