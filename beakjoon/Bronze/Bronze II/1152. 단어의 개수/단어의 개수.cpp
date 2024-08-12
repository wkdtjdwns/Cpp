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

    string str; int cnt = 1; getline(cin, str);
    if (str.length() == 1 && str[0] == ' ') {
        cout << 0;
        return 0;
    }

    for (int i = 1; i < str.length() - 1; i++)
    {
        if (str[i] == ' ') {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
