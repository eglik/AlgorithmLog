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
	string input;
	getline(cin, input);
	ll count = 0;
	if (input == " ") {
		cout << 0;
		return 0;
	}

	for (int i = 1; i < input.size() - 1; i++) {
		if (input[i] == ' ') {
			count++;
		}
	}
	cout << count + 1;
}