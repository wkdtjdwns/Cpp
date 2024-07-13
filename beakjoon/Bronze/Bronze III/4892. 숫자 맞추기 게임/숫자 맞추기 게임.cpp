#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {

    int n, i = 1;
    while (true) {
        cin >> n;
        if (n == 0) { break; }

        cout << i << ". ";

        n *= 3;
        if (n % 2) {
            cout << "odd ";
            
            n = (n + 1) / 2;
            n = 3 * n;
            n = n / 9;

            cout << n << "\n";
        }

        else {
            cout << "even ";

            n = n / 2;
            n = 3 * n;
            n = n / 9;
            cout << n << "\n";
        }

        i++;
    }

    return 0;
}
