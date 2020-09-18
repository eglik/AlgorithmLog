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
	
	int n = 3;
	while(n--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		
		switch(a+b+c+d) {
			case 0: cout << "D\n"; break;
			case 1: cout << "C\n"; break;
			case 2: cout << "B\n"; break;
			case 3: cout << "A\n"; break;
			case 4: cout << "E\n"; break;
		}
	}
}