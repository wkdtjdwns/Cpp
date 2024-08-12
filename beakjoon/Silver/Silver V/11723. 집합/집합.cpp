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

    int m, x, set[21] = { 0 }; cin >> m;
    for (int i = 0; i < m; i++) {
        string str; cin >> str;

        if (str == "add") {
            cin >> x;
            if (set[x] == 0) {
                set[x] = 1;
            }
        }

        else if (str == "remove") {
            cin >> x;
            if (set[x] == 1) {
                set[x] = 0;
            }
        }

        else if (str == "check") {
            cin >> x;
            if (set[x] == 0) {
                cout << "0\n";
            }

            else {
                cout << "1\n";
            }
        }

        else if (str == "toggle") {
            cin >> x;
            if (set[x] == 1) {
                set[x] = 0;
            }

            else {
                set[x] = 1;
            }
        }

        else if (str == "all") {
            for (int k = 1; k <= 20; k++)
            {
                set[k] = 1;
            }
        }

        else if (str == "empty") {
            memset(set, 0, sizeof(set));
        }
    }

    return 0;
}
