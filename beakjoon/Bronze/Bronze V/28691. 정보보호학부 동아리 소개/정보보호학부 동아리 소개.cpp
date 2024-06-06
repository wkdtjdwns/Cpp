#include <iostream>
using namespace std;

int main() {

	string club;
	cin >> club;

	if (club == "M") {
		cout << "MatKor";
	}

	else if (club == "W") {
			cout << "WiCys";
	}

	else if (club == "C") {
		cout << "CyKor";
	}

	else if (club == "A") {
		cout << "AlKor";
	}

	else {
		cout << "$clear";
	}

	return 0;
}
