#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	int sum = 0;
	if (a < 0) {
		sum = (abs(a) * c) + d + (b * e);
	}

	else if (a == 0) {
		sum = d + (b * e);
	}

	else {
		sum = (b - a) * e;
	}

	cout << sum;
	

	return 0;
}
