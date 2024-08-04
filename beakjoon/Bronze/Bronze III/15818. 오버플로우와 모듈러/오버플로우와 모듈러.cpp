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

    int n; cin >> n;
    ll m, result = 1; cin >> m;
    for (int i = 0; i < n; i++) {
        ll num; cin >> num;
        result = (result * (num % m)) % m;
    }

    cout << result;

    return 0;
}
