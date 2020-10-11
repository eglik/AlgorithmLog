#include <string>
#include <vector>
#include <stack>

using namespace std;

bool solution(string s)
{
	bool answer = true;

	stack<char> checker;

	for (auto i : s) {
		if (checker.size() == 0 && i == ')') {
			return false;
		}
		else if (i == '(') {
			checker.push(i);
		}
		else if (checker.top() == '(') {
			checker.pop();
		}
		else {
			return false;
		}
	}

	if (checker.size() == 0) {
		return true;
	}
	else {
		return false;
	}
}