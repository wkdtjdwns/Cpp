#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int result = ((a + b) >= (c * 2)) ? (a + b) - (c * 2) : a + b;
	cout << result;

	return 0;
}
