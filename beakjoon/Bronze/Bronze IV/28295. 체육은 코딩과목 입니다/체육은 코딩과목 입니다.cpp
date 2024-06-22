#include <iostream>
using namespace std;

int main() {

    int total = 0;
    for (int i = 0; i < 10; i++) {
        int command;
        cin >> command;

        total += command;
    }

    if (total % 4 == 0) {
        cout << "N";
    }

    else if (total % 4 == 1) {
        cout << "E";
    }

    else if (total % 4 == 2) {
        cout << "S";
    }

    else {
        cout << "W";
    }

    return 0;
}
