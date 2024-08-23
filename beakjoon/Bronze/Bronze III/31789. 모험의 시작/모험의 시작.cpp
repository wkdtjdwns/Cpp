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

    int n, x, s; cin >> n >> x >> s;
    bool result = false;

    for (int i = 0; i < n; i++)
    {
        int power, price; cin >> price >> power;
        if (price <= x && power > s) {
            result = true;
            break;
        }
    }

    if (result) {
        cout << "YES";
    }

    else {
        cout << "NO";
    }

    return 0;
}
