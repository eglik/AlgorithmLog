#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int input;
	cin >> input;
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", input, i, i * input);
	}
	return 0;
}