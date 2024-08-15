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

    int h, w, n, m, col, row; cin >> h >> w >> n >> m;
    if (h % (n + 1) != 0) {
        col = (h / (n + 1)) + 1;
    }

    else {
        col = (h / (n + 1));
    }

    if ((w % (m + 1)) != 0) {
        row = (w / (m + 1)) + 1;
    }

    else {
        row = (w / (m + 1));
    }

    cout << col * row;

    return 0;
}
