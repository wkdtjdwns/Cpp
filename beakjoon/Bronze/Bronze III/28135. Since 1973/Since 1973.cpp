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
    for (int i = 0; i < n; i++)
    {
        result += 1;
        if (to_string(i).find("50") != string::npos) {
            result += 1;
        }
    }

    cout << result;

    return 0;
}
