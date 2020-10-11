#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int main() {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		for (int k = 0; k < input - i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}