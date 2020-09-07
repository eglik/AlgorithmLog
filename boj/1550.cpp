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
	string input;
	cin >> input;
	stringstream ss;
	ss << hex << input;
	ll output;
	ss >> output;
	cout << output;
}