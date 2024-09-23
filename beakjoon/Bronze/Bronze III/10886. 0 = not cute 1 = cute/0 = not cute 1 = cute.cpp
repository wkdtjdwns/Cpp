#include <iostream>
#include <algorithm>
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

    int n, cute = 0, notCute = 0; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m; cin >> m;
        if (m == 1) {
            cute++;
        }

        else {
            notCute++;
        }
    }

    if (cute > notCute) {
        cout << "Junhee is cute!";
    }

    else {
        cout << "Junhee is not cute!";
    }

    return 0;
}
