#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

    if (a < b) {
        cout << -1;
    }

    else {
        int x = (a + b) / 2;
        int y = (a - b) / 2;

        if (((x + y) == a) && ((x - y) == b)) {
            cout << x << " " << y;
        }

        else {
            cout << -1;
        }
    }

	return 0;
}
