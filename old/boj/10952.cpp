#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>
#include <vector>
#include <set>
#include <map>

#define ll long long int

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll A = 1, B = 1;
	while (A | B != 0) {
		cin >> A >> B;
		if(A | B != 0)
			cout << A + B << "\n";
	}
}