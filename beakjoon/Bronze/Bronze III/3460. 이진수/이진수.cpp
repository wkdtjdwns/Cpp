#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        int digit = 0;

        while (n > 0) {
            if (n % 2 == 1) {
                cout << digit << " ";
            }

            n /= 2;
            digit++;
        }
    }

    return 0;
}
