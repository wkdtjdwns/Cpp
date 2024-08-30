#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int n; cin >> n;
    string str; cin >> str;
    int u = 0, o = 0, s = 0, p = 0, c = 0;

    for (char ch : str)
    {
        if (ch == 'u') {
            u++;
        }

        else if (ch == 'o') {
            o++;
        }

        else if (ch == 's') {
            s++;
        }

        else if (ch == 'p') {
            p++;
        }

        else {
            c++;
        }
    }

    int result = min({ u, o, s, p, c });
    cout << result;

    return 0;
}
