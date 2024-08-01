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

    int n, result = 0; cin >> n;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100 - i; j++) {
            for (int k = 1; k <= 100 - i - j; k++) {
                if (i >= j + 2 && j != 0 && k != 0 && k % 2 == 0 && i + j + k == n) {
                    result++;
                }
            }
        }
    }

    cout << result << '\n';

    return 0;
}
