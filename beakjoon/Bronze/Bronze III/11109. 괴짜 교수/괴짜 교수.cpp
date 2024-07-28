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

    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int d, n, s, p; cin >> d >> n >> s >> p;
        if (d + p * n == n * s) {
            cout << "does not matter\n";
        }

        else if (d + p * n > n * s) {
            cout << "do not parallelize\n";
        }

        else {
            cout << "parallelize\n";
        }
    }

		return 0;
}
