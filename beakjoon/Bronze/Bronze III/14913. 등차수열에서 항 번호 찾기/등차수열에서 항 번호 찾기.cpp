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

    int a, d, k, result; cin >> a >> d >> k; bool check = false;
    for (int i = 1; i <= 1000000; i++) {
        if (a + (i - 1) * d == k) {
            check = true;
            result = i;
            break;
        }
    }

    if (check) {
        cout << result;
    }

    else {
        cout << "X";
    }

    return 0;
}
