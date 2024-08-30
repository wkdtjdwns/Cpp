#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int n; cin >> n;
    while (n--)
    {
        int level; cin >> level;

        if (level >= 300) {
            cout << 1;
        }

        else if (300 > level && level >= 275) {
            cout << 2;
        }

        else if (275 > level && level >= 250) {
            cout << 3;
        }

        else {
            cout << 4;
        }

        cout << " ";
    }

    return 0;
}
