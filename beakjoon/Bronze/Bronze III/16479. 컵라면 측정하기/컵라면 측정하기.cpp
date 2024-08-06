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

    double k, d1, d2, n; cin >> k >> d1 >> d2;
    n = (max(d1, d2) - min(d1, d2)) / 2.0;
    cout << k * k - n * n;

    return 0;
}
