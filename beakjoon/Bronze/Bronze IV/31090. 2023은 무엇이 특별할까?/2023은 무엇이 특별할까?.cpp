#include <iostream>
using namespace std;

int main() {

    int t, year, n = 0;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> year;
        n = year % 100;

        if ((year + 1) % n == 0) {
            cout << "Good\n";
        }

        else {
            cout << "Bye\n";
        }
    }

    return 0;
}
