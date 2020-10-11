#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	vector<int> vec;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		if (input < X)
			vec.push_back(input);
	}

	for (auto v : vec) {
		cout << v << " ";
	}
}