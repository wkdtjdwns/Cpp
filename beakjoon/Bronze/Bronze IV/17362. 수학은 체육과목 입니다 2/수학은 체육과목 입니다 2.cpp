#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	n %= 8;

    if (n % 8 == 0) {
        cout << 2;
    }

    else if (n % 4 == 3) {
        cout << 3;
    }

    else if (n % 8 == 6) {
        cout << 4;
    }

    else {
        cout << n % 8;
    }

	return 0;
}
