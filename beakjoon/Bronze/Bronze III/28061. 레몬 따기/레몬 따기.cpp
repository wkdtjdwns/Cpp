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

    int n; cin >> n;
    int result = 0;

    for (int i = 0; i < n; ++i) {
        int now; cin >> now;
        now = now - n + i;
        result = max(result, now);
    }

    cout << result;

    return 0;
}
