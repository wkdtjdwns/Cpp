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

    int n, m; cin >> n >> m;
    for (int i = 1; i <= n * m; i++)
    {
        if (i % m != 0) {
            cout << i << " ";
        }

        else {
            cout << i << "\n";
        }
    }

    return 0;
}
