#define ll long long int

#include <bits/stdc++.h>

using namespace std;

bool solv(vector<int> A, vector<int> B) {
    for(int i=0; i<A.size(); i++) {
        if(A[i] != B[i]) return false;
    }
    return true;
}

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
    
    ll N;
    cin >> N;

    while(N--) {
        string a, b;
        cin >> a >> b;
        vector<int> A;
        vector<int> B;
        A.resize(26, 0);
        B.resize(26, 0);
        for(auto aa : a) A[aa-'a']++;
        for(auto bb : b) B[bb-'a']++;
        cout << (solv(A, B) ? "Possible" : "Impossible") << "\n";
    }
}