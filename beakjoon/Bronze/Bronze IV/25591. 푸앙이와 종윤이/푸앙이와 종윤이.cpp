#include <iostream>
using namespace std;

int n, m, a, b, c, d, q, r;
int main() {

	cin >> n >> m;
	a = 100 - n;
	b = 100 - m;
	c = 100 - (a + b);
	d = a * b;
	q = d / 100;
	r = d % 100;

	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << q << ' ' << r << '\n';
	cout << c + q << ' ' << r << '\n';

	return 0;
}
