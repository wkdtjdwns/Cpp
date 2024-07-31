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

    int a1, a2, b1, b2; cin >> a1 >> a2 >> b1 >> b2;
    while (true)
    {
        a2 -= b1;
        b2 -= a1;
        if (a2 < 1 || b2 < 1) { break; }
    }

    if (a2 < 1 && b2 < 1) {
        cout << "DRAW" << "\n";
    }

    else {
        printf("%s\n", a2 > b2 ? "PLAYER A" : "PLAYER B");
    }

    return 0;
}
