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

int sol(string a, string b) {
	if (a.length() != b.length()) return a.length() < b.length();
	else return a < b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll count;
	cin >> count;
	vector<string> words;
	while (count--) {
		string input;
		cin >> input;
		if(find(words.begin(), words.end(), input) == words.end())
			words.push_back(input);
	}

	sort(words.begin(), words.end(), sol);

	for (auto word : words) {
		cout << word << "\n";
	}
}