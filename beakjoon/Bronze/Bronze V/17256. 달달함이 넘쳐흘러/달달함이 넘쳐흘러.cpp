#include <iostream>
using namespace std;

int main() {

	int ax, ay, az;
	cin >> ax >> ay >> az;

	int cx, cy, cz;
	cin >> cx >> cy >> cz;

	cout << (cx - az) << " " << (cy / ay) << " " << (cz - ax);

	return 0;
}
