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

    double n, avg = 0, exp = 0, a[101]; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        avg += a[i];
        exp += a[i] * 1 / n;
    }

    avg /= n;
    if (exp == 0 || n == 0) {
        cout << "divide by zero\n";
    }

    else {
        printf("%.2f\n", avg / exp);
    }

    return 0;
}
