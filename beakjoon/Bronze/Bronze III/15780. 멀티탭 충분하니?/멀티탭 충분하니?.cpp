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

    int n, k, sum = 0; cin >> n >> k;
    while (k--)
    {
        int mul; cin >> mul;
        if (mul % 2 == 0) {
            sum += mul / 2;
        }

        else {
            sum += mul / 2 + 1;
        }
    }

    if (sum >= n) {
        cout << "YES" << "\n";
    }
    
    else {
        cout << "NO" << "\n";
    }

    return 0;
}
