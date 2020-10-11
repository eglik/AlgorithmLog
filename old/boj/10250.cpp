#define ll long long int

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() 
{
	ll cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		ll W, H, C;
		cin >> H >> W >> C;
		
		cout << (C - 1) % H + 1 << setfill('0') << setw(2) << (C - 1) / H + 1 << endl;
	}
}