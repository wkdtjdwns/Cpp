#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    string a; cin >> a;
    string b = "CAMBRIDGE";
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 0; j < b.length(); j++)
        {
            if (a[i] == b[j]) {
                a[i] = 0;
            }
        }
    }

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != 0) {
            cout << a[i];
        }
    }

    return 0;
}
