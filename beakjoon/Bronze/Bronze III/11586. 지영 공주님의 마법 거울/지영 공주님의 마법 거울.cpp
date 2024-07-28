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
    string str; vector<string> mirror;
    for (int i = 0; i < n; i++) {
        cin >> str;
        mirror.push_back(str);
    }

    int k; cin >> k;
    if (k == 1) {
        for (int i = 0; i < n; i++)
        {
            cout << mirror[i] << "\n";
        }
    }

    else if (k == 2) {
        for (int i = 0; i < n; i++)
        {
            reverse(mirror[i].begin(), mirror[i].end());
            cout << mirror[i] << "\n";
        }
    }

    else {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << mirror[i] << "\n";
        }
    }

    return 0;
}
