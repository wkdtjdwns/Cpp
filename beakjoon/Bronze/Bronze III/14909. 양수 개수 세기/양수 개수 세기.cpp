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

    int n, cnt = 0; 
    while (cin >> n)
    {
        if (n > 0) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
