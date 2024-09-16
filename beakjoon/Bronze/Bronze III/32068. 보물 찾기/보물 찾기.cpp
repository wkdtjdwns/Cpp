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

    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l, r, s; cin >> l >> r >> s;

        int ls = s - l;
        int rs = r - s;
        if (ls < rs) {
            cout << ls * 2 + 1 << "\n";
        }

        else {
            cout << rs * 2 << "\n";
        }
    }

    return 0;
}
