#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    vector<ll> s[2];
    s[0].resize(6, 0);
    s[1].resize(6, 0);

    ll N, K;
    cin >> N >> K;

    while(N--) {
        ll S, Y;
        cin >> S >> Y;
        s[S][Y-1]++;
    }

    ll total = 0;
    for(int i=0; i<2; i++) {
        for(int k=0; k<6; k++) {
            total += ceil(s[i][k] / (float)K);
        }
    }
    
    cout << total;
}