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
    fixPrint(1);

    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int num, c = 0; double g = 0.0; cin >> num;
        for (int j = 0; j < num; j++)
        {
            int x; double y; cin >> x >> y;
            c += x;
            g += y * x;
        }

        cout << c << " " << g / c << "\n";
    }

    return 0;
}
