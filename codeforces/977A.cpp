#include <iostream>
#include <string>

using namespace std;

int solution(int input)
{
	if (input % 10 == 0) {
		return input / 10;
	}
	else {
		return input - 1;
	}
}

void main() {
	int n, k;

	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		n = solution(n);
	}

	cout << n << endl;
}