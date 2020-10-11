#define ll long long int

#include <iostream>

using namespace std;

ll solve(ll a, ll b)
{
	if (a == 0)
		return b;
	else if (b == 1)
		return 1;
	else
		return solve(a, b - 1) + solve(a - 1, b);
}

int main() 
{
	ll cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		ll A, B;
		cin >> A >> B;
		cout << solve(A, B) << endl;
	}
}