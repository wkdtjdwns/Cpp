#include <iostream>
#include <algorithm>
#include <sstream>
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

    int n, m; cin >> n >> m;
    int r = 1, c = 1, x, N = 50, M = 50;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        if (x < N) {
            r = i;
            N = x;
        }
    }

    cin >> x;
    if (x < N) {
        r = n;
    }

    M = x;
    for (int i = 2; i <= m; i++)
    {
        cin >> x;
        if (x < M) {
            c = i;
            M = x;
        }
    }

    cout << r << " " << c;

    return 0;
}
