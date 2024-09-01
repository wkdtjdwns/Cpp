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

    int s, n, m; cin >> s >> n >> m;
    int cur = 0;
    for (int i = 0; i < n + m; i++) {
        int x; cin >> x;
        cur += x ? 1 : -1;
        if (cur > s) {
            s <<= 1;
        }
    }

    cout << s;

    return 0;
}
