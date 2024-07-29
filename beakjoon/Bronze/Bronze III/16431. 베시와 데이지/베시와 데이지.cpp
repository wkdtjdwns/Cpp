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

    int bx, by, dx, dy, jx, jy, b, d; cin >> bx >> by >> dx >> dy >> jx >> jy;
    b = max(abs(jx - bx), abs(jy - by));
    d = abs(jx - dx) + abs(jy - dy);
    if (b > d) {
        cout << "daisy";
    }

    else if (b < d) {
        cout << "bessie";
    }

    else {
        cout << "tie";
    }

    return 0;
}
