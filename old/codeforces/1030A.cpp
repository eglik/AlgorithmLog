#include <iostream>

using namespace std;

void main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int z;
		cin >> z;

		if (z == 1) {
			cout << "HARD" << endl;
			return;
		}
	}

	cout << "EASY" << endl;
}