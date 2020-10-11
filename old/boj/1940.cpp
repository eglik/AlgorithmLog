#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
    

    int N, M, total = 0;
    cin >> N >> M;

    int* vec = new int[M+1];

    while(N--) {
        int num;
        cin >> num;

        if(num >= M) continue;

        if(vec[M-num]) {
            total++;
            vec[M-num]--;
        }
        else {
            vec[num]++;
        }
    }

    cout << total;
}