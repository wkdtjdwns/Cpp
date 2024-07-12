#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    while (true) {
        int b, n; cin >> b >> n;
        if (!b && !n) { break; }

        int minDiff = 0x3f3f3f3f;
        int minVal = 0x3f3f3f3f;
        for (int a = 1; pow(a, n) <= 2000000; a++) {
            int diff = abs(pow(a, n) - b);
            if (diff < minDiff) { minDiff = diff, minVal = a; }
        }
        cout << minVal << '\n';
    }

    return 0;
}
