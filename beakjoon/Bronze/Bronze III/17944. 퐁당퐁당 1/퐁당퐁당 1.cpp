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

    int n, t, cnt = 0, x = 1; cin >> n >> t;
    for (int i = 0; i < t; i++)
    {
        cnt += x;
        if (cnt == 2 * n) {
            x = -1;
        }

        if (cnt == 1) {
            x = 1;
        }
    }

    cout << cnt;

    return 0;
}
