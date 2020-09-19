#define ll long long int

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a >> b;

	vector<ll> num1, num2, num3;
	num1.resize(26, 0);
    num2.resize(26, 0);
    num3.resize(26, 0);

	char p = 'a';

    for(auto A : a) {
        num1[A - p]++;
    }

    for(auto B : b) {
        num2[B - p]++;
    }

    for(int i=0; i<26; i++) {
        num3[i] = abs(num1[i] - num2[i]);
    }


    cout << accumulate(num3.begin(), num3.end(), 0);
}