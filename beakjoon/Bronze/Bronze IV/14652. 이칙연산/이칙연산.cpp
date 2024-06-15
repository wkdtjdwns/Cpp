#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	int x = (int)((a * b) / c);
	int y = (int)((a / b) * c);

	int result = x > y ? x : y;
	cout << result;

	return 0;
}
