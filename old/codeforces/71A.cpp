#include <iostream>
#include <string>

using namespace std;

string solution(string input)
{
	if (input.length() <= 10)
		return input;

	string s;
	s += input.front();
	s += to_string((int)input.length() - 2);
	s += input.back();

	return s;
}

void main() {
	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		string input;
		cin >> input;

		cout << solution(input) << endl;
	}
}