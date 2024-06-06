#include <iostream>
using namespace std;

int main() {

	int w, h;
	cin >> w >> h;
	double result = (w * h) * 0.5;

	cout << fixed;
	cout.precision(1);
	cout << result;

	return 0;
}
