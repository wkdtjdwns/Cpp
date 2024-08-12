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

    long long r, c, n, x, y; cin >> r >> c >> n;
    if (r % n) {
        x = r / n + 1;
    }

    else {
        x = r / n;
    }

    if (c % n) {
        y = c / n + 1;
    }

    else {
        y = c / n;
    }

    cout << x * y;

    return 0;
}
