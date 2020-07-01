#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <list>

using namespace std;

void keylogger(string input) {
	list<char> keys;

	auto index = keys.begin();
	
	for (auto i : input) {
		if (i == '<') {
			if(index != keys.begin())
				index--;
		}
		else if (i == '>') {
			if (index != keys.end())
				index++;
		}
		else if (i == '-') {
			if (index != keys.begin())
				index = keys.erase(--index);
		}
		else {
			keys.insert(index, i);
		}
	}
	
	for (auto key : keys) {
		cout << key;
	}
	cout << endl;
}

int main() {
	int input;
	cin >> input;

	for (int i = 0; i < input; i++) {
		string keys;
		cin >> keys;
		keylogger(keys);
	}
}