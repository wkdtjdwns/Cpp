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
    
    string str; cin >> str;
    int result = 1;
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] != str[str.size() - i - 1]) {
            result = 0;
            break;
        }
    }

    cout << result;

    return 0;
}
