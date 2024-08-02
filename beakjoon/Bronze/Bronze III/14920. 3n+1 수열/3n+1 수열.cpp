#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int result = 1; ll n; cin >> n;
    while (n != 1) {
        result++;
        if (n & 1) {
            n = 3 * n + 1;
        }

        else {
            n /= 2;
        }
    }

    cout << result;

    return 0;
}
