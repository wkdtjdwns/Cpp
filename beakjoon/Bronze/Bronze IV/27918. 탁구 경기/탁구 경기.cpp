#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int x = 0;
    int y = 0;
    while (n--)
    {
        char c;
        cin >> c;

        if (c == 'D') {
            x++;
        }

        else {
            y++;
        }

        if (abs(x - y) >= 2) {
            break;
        }
    }

    cout << x << ":" << y;

	return 0;
}
