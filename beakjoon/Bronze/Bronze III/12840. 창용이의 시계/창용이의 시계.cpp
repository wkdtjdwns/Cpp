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

    int h, m, s, q, t, c, sec; cin >> h >> m >> s >> q;
    sec = h * 3600 + m * 60 + s;
    while (q--) {
        cin >> t;
        if (t == 1) {
            cin >> c;
            sec = (sec + c) % 86400;
        }

        else if (t == 2) {
            cin >> c;
            sec = (sec - c) % 86400;;
            if (sec < 0) {
                sec += 24 * 3600;
            }
        }

        else {
            h = sec / 3600;
            m = sec / 60 % 60;

            cout << h << " " << m << " " << sec % 60 << "\n";
        }
    }

    return 0;
}
