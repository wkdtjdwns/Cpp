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

    int t, n, result, a, b, c; cin >> t;
    while (t--) {
        cin >> n;
        result = 0;
        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c;
            int profit = max({ a, b, c });

            if (profit <= 0) {
                continue;
            }

            result += profit;
        }

        cout << result << '\n';
    }

    return 0;
}
