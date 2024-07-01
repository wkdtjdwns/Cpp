#include<iostream>
using namespace std;

int main() {

    for (int i = 0; i < 3; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        int result = a + b + c + d;
        if (result == 3) {
            cout << "A\n";
        }

        else if (result == 2) {
            cout << "B\n";
        }

        else if (result == 1) {
            cout << "C\n";
        }

        else if (result == 0) {
            cout << "D\n";
        }

        else {
            cout << "E\n";
        }
    }

    return 0;
}
