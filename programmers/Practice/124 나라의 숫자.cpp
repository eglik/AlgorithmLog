#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "";

	int z = 0;

	while (n > 0) {
		int d = n % 3;
		n /= 3;

		if (d == 0) {
			n -= 1;
		}

		switch (d) {
		case 0:
			answer = "4" + answer;
			break;

		case 1:
			answer = "1" + answer;
			break;

		case 2:
			answer = "2" + answer;
			break;
		}
	}

	return answer;
}