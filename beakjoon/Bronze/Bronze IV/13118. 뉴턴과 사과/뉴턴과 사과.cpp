#include<iostream>
using namespace std;

int main() {

	int p1, p2, p3, p4, x, y, z;
	cin >> p1 >> p2 >> p3 >> p4 >> x >> y >> z;

	int people[] = { p1, p2, p3, p4 };
	int result = 0;
	for (int i = 0; i < 4; i++) {
		if (people[i] == x) {
			result = i + 1;
		}
	}

	cout << result;

	return 0;
}
