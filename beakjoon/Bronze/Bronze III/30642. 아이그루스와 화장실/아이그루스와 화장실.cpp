#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#include <iomanip>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int n; cin >> n;
    string str; cin >> str;
    int k; cin >> k;
    if (str == "annyong") {
        if (k % 2 == 1) {
            cout << k;
        }

        else {
            if (k + 1 <= n) {
                cout << k + 1;
            }

            else {
                cout << k - 1;
            }
        }
    }

    if (str == "induck") {
        if (k % 2 == 0) {
            cout << k;
        }

        else {
            if (k + 1 <= n) {
                cout << k + 1;
            }

            else {
                cout << k - 1;
            }
        }
    }

    return 0;
}
