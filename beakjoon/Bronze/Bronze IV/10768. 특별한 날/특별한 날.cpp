#include <iostream>
using namespace std;

int main() {

	int month, day;
	cin >> month >> day;

	if (month == 2) {
		if (day > 18) {
			cout << "After";
		}

		else if (day < 18) {
			cout << "Before";
		}

		else {
			cout << "Special";
		}
	}

	else if (month > 2) {
		cout << "After";
	}

	else {
		cout << "Before";
	}

    return 0;
}
