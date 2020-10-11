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
	transform(input.begin(), input.end(), input.begin(), ::tolower);

	int nums[26] = { 0, };

	for (auto i : input) {
		nums[(int)i - 97]++;
	}

	ll max = 0, nMax = 0;
	bool flag = false;

	for (int i = 0; i < 26; i++) {
		if (nums[i] > nMax) {
			nMax = nums[i];
			max = i;
			flag = false;
		}
		else if (nums[i] == nMax) {
			flag = true;
		}
	}

	if (flag) cout << "?";
	else cout << (char)toupper(max + 97);
}