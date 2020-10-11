#define ll long long int

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	ll A, B, V, X, T, C = 0, cnt = 1;
	cin >> A >> B >> V;
	X = V - A;
	T = A - B;
	if (T != 0)
		C = ceil((X / (double)T));
	cout << C + cnt << endl;
}