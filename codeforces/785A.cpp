#include <iostream>
#include <string>

using namespace std;

void main() {
	int count;
	cin >> count;

	int total = 0;

	for (int i = 0; i < count; i++) {
		string input;
		cin >> input;
		if (input == "Tetrahedron") {
			total += 4;
		}
		else if (input == "Cube") {
			total += 6;
		}
		else if (input == "Octahedron") {
			total += 8;
		}
		else if (input == "Dodecahedron") {
			total += 12;
		}
		else if (input == "Icosahedron") {
			total += 20;
		}
	}
	cout << total << endl;
}