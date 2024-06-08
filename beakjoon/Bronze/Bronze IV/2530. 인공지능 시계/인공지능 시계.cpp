#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	c += d;

	b += c / 60;
	c %= 60;

	a += b / 60;
	b %= 60;
	a %= 24;

	cout << a % 60 << " " << b % 60 << " " << c;

	return 0;
}
