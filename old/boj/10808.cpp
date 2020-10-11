#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    vector<ll> vec;
    vec.resize(26, 0);

    string input;
    cin >> input;

    for(auto in : input) {
        vec[in - 'a']++;
    }

    for(auto v : vec) cout << v << " ";
}