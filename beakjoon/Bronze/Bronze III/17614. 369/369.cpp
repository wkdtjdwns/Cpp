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

    int n, result = 0; cin >> n;
    char c;
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        for (int j = 0; j < str.size(); j++) {
            c = str[j];
            if (c == '3' || c == '6' || c == '9') {
                result++;
            }
        }
    }

    cout << result;

    return 0;
}
