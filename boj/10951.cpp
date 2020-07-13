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
	while (1) {
		ll A, B;
		cin >> A >> B;
		if (!cin.eof())
			cout << A + B << "\n";
		else return 0;
	}
}