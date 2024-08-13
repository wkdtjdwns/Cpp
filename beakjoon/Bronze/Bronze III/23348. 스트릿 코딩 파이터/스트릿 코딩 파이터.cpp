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

    int a, b, c, group, max = 0; cin >> a >> b >> c >> group;
    for (int i = 0; i < group; i++)
    {
        int score = 0;
        for (int j = 0; j < 3; j++) {
            int n; cin >> n;
            score += a * n;

            cin >> n;
            score += b * n;

            cin >> n;
            score += c * n;
        }

        if (max < score) {
            max = score;
        }
    }

    cout << max;

    return 0;
}
