#define ll long long int

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	ll cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		ll A, B;
		cin >> A >> B;
		ll R = B - A;
		ll Q = (ll)sqrt(R);
		ll S = R - (Q * Q);
		S = (ll)ceil(S / (double)Q);
		cout << Q * 2 - 1 + S << endl;
	}
}