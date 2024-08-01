#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int count(int c)
{
    int d = 0;
    for (int i = 1; i <= c; i++) {
        d = d + i;
    }
    return d;
};

int main() {
    fastIo;

    int a, b, result = 1; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        result *= count(i);
        result %= 14579;
    }

    if (a < b && a >= 1 && b <= 1000) {
        cout << result << "\n";
    }

    return 0;
}
