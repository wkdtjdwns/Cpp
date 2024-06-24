#include<iostream>
using namespace std;

int main() {

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			string pixel;
			cin >> pixel;

			if (pixel == "w") {
				cout << "chunbae";
				return 0;
			}

			else if (pixel == "b") {
				cout << "nabi";
				return 0;
			}

			else if (pixel == "g") {
				cout << "yeongcheol";
				return 0;
			}
		}
	}

	return 0;
}
