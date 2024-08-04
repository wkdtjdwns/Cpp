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

    int q; cin >> q;
    while (q--)
    {
        int a; cin >> a;
        if ((a & (-a)) == a) {
            cout << 1 << "\n";
        }

        else {
            cout << 0 << "\n";
        }
    }

    return 0;
}
