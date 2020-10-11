#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    ll nums[201] = {0,}, N;
    cin >> N;
    while(N--) {
        ll num;
        cin >> num;
        nums[num+100]++;
    }
    ll v;
    cin >> v;
    cout << nums[v+100];
}