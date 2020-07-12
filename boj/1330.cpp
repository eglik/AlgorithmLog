#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>
#include <vector>

#define ll long long int

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll A, B;
	cin >> A >> B;

	if (A > B) cout << ">";
	else if (A < B) cout << "<";
	else if (A == B) cout << "==";
}