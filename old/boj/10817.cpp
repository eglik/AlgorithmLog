#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> vec;
	vec.push_back(a);
	vec.push_back(b);
	vec.push_back(c);
	sort(vec.begin(), vec.end());
	cout << vec[1] << endl;
}