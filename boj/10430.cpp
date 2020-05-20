#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;
}