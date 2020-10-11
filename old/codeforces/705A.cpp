#include <iostream>
#include <string>

using namespace std;

string solution(int count) {
	string s;

	for (int i = 0; i < count; i++) {
		if (i % 2 == 0) {
			s += "I hate ";
		}
		else {
			s += "I love ";
		}
		if (i == count - 1) {
			s += "it";
		}
		else {
			s += "that ";
		}
	}

	return s;
}

void main() {
	int n;
	cin >> n;
	cout << solution(n) << endl;
}