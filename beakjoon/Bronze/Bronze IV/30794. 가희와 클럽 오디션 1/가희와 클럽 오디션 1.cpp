#include <iostream>
using namespace std;

int main() {

    int lv;
    string sign;
    cin >> lv >> sign;

    if (sign == "miss") {
        cout << 0;
    }

    else if (sign == "bad") {
        cout << 200 * lv;
    }

    else if (sign == "cool") {
        cout << 400 * lv;
    }

    else if (sign == "great") {
        cout << 600 * lv;
    }

    else {
        cout << 1000 * lv;
    }

    return 0;
}
