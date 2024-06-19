#include<iostream>
using namespace std;

int main() {

	double a, b;
	cin >> a >> b;
	
	a -= a * (b / 100);

	int result = (a >= 100) ? 0 : 1;
	cout << result;

	return 0;
}
