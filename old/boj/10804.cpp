#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    vector<ll> vec;
    for(int i=1; i<=20; i++) vec.push_back(i);

    ll n = 10;
    while(n--) {
        ll a, b;
        cin >> a >> b;
        reverse(vec.begin() + a - 1, vec.begin() + b);
    }

    for(auto v : vec) cout << v << " ";
}