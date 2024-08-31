#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int n; cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (x == 0) {
            v[0]++;
        }

        else {
            v[x]++;
        }
    }

    int max = 0;
    int cnt = 0;
    int result = -1;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] > max) {
            max = v[i];
            cnt = 1;
            result = i;
        }

        else if (v[i] == max) {
            cnt++;
        }
    }

    if (cnt > 1) {
        cout << "skipped";
    }

    else {
        cout << result;
    }

    return 0;
}
