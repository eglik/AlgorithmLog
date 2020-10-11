#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>
#include <vector>
#include <set>
#include <map>

#define ll long long int

using namespace std;

int main() { 
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n1, n2, n12;
	cin >> n1 >> n2 >> n12;
	cout << (((n1 + 1) * (n2 + 1)) / (n12 + 1)) - 1;
}