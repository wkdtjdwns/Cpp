#include <iostream>
using namespace std;

int main() {

	int day;
	cin >> day;

	int cars[5];
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		cin >> cars[i];

		if (cars[i] == day) {
			cnt++;
		}
	}

	cout << cnt;

    return 0;
}
