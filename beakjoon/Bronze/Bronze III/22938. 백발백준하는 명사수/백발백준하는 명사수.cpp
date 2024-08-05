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

    int x1, y1, r1, x2, y2, r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if (1l * (x1 - x2) * (x1 - x2) + 1l * (y1 - y2) * (y1 - y2) < 1l * (r1 + r2) * (r1 + r2)) {
        cout << "YES";
    }

    else {
        cout << "NO";
    }

    return 0;
}
