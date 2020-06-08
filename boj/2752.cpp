#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;
	for (int i = 0; i < 3; i++) {
		int input;
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

	for (auto v : vec) {
		cout << v << " ";
	}
}