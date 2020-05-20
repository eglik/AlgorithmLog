#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int input;
	cin >> input;
	if (input >= 90) cout << "A" << endl;
	else if (input >= 80) cout << "B" << endl;
	else if (input >= 70) cout << "C" << endl;
	else if (input >= 60) cout << "D" << endl;
	else cout << "F" << endl;
}