#define ll long long int

#include <iostream>

using namespace std;

int main() {
	ll input;
	cin >> input;

	ll cnt = 1;

	while (input > cnt)
	{
		input -= cnt;
		cnt++;
	}

	if (cnt % 2 == 0) cout << input << '/' << cnt - input + 1 << endl;
	else cout << cnt - input + 1 << '/' << input << endl;
}