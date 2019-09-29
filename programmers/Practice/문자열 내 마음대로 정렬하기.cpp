#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N = 0;

int compare(string a, string b) {
	if (a[N] != b[N]) {
		return a[N] < b[N];
	}
	else {
		return a < b;
	}
}

vector<string> solution(vector<string> strings, int n) {
	N = n;
	sort(strings.begin(), strings.end(), compare);
	return strings;
}