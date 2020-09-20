#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    ll n;
    cin >> n;
    
    vector<ll> num;

    while(n--) {
        ll input;
        cin >> input;
        num.push_back(input);
    }

    sort(num.begin(), num.end());

    for(auto N : num) {
        cout << N << "\n";
    }
}