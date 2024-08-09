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

    int t, n, a, minValue, maxValue; cin >> t;
    for (int i = 0; i < t; i++)
    {
        minValue = 1000000; maxValue = -1000000;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            minValue = min(minValue, a);
            maxValue = max(maxValue, a);
        }

        cout << minValue << " " << maxValue << "\n";
    }

    return 0;
}
