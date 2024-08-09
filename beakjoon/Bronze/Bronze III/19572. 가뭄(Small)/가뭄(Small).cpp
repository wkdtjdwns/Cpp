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

    float a = 0, b = 0, c = 0, d[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> d[i];
    }

    b = (d[0] - d[1] + d[2]) / 2;
    a = d[0] - b;
    c = d[2] - b;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "-1";
    }

    else {
        cout << "1\n";
        fixPrint(1);
        cout << a << " " << b << " " << c;
    }

    return 0;
}
