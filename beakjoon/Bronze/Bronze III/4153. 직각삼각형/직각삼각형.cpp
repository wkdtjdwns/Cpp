#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	while (true) {
		int x, y, z; cin >> x >> y >> z;
		int temp = 0;
		if (x == 0 && y == 0 && z == 0) {
			return 0;
		}

		if (x > y) {
			temp = y;
			y = x;
			x = temp;
		}

		if (y > z) {
			temp = z;
			z = y;
			y = temp;
		}

		if (z * z == x * x + y * y) {
			cout << "right\n";
		}

		else {
			cout << "wrong\n";
		}
	}

    return 0;
}
