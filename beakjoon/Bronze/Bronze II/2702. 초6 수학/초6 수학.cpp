#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int gcd(int a, int b) {
    int r;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {

    int t, a, b; cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> a >> b;

        cout << (a * b) / gcd(a, b) << " ";
        cout << gcd(a, b) << "\n";
    }

    return 0;
}
