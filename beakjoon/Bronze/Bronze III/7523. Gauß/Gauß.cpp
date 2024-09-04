#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#include <iomanip>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        ll n, m; cin >> n >> m;
        cout << "Scenario #" << i + 1 << ":\n";
        cout << (m - n + 1) * (n + m) / 2 << "\n\n";
    }

    return 0;
}
