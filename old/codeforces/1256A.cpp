#include <iostream>
#include <algorithm>

using namespace std;

bool A(int a, int b, int n, int s) {
	int count = min(a, s / n);
	return n * count + b >= s;
}

void main() {
	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int a, b, n, s;
		cin >> a >> b >> n >> s;
		cout << (A(a, b, n, s) ? "YES" : "NO") << endl;
	}
}