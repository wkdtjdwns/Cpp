#include <iostream>
using namespace std;

int main() {

	int T = 0;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int A, B;
		cin >> A >> B;

		cout << "Case #" << i << ": " << (A + B) << "\n";
	}

	return 0;
}
