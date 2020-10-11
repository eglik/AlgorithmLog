#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>
#include <vector>
#include <set>
#include <map>
#include <sstream>

#define ll long long int

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	int dice[6] {0,};
	int a, b, c;
	cin >> a >> b >> c;
	dice[a-1]++;
	dice[b-1]++;
	dice[c-1]++;

	int A = 0, B = 0, C = 0;

	for(int i = 0; i < 6; i++)
	{
		if(dice[i] == 3) A = i + 1;
		else if(dice[i] == 2) B = i + 1;
		else if(dice[i] == 1) C = i + 1;
	}

	if(A != 0) cout << 10000 + A * 1000;
	else if(B != 0) cout << 1000 + B * 100;
	else cout << C * 100;
}