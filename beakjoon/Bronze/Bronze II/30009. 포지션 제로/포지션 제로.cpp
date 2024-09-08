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

    int n, x, y, r; cin >> n >> x >> y >> r;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;
        int distance = abs(t - x);
        if (distance < r) {
            a++;
        }

        else if (distance == r) {
            b++;
        }
    }

    cout << a << " " << b;

    return 0;
}
