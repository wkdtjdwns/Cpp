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

    int m, n, a = 0, b = 0; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        int h; cin >> h;
        a = max(a, h);
    }

    for (int j = 0; j < n; j++)
    {
        int p; cin >> p;
        b = max(b, p);
    }

    cout << a + b << "\n";

    return 0;
}
