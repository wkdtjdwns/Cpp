#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#include <iomanip>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int n, m; cin >> n >> m;
    int bulb[4001] = { 0, };
    for (int i = 1; i <= n; i++)
    {
        cin >> bulb[i];
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c; cin >> a >> b >> c;
        if (a == 1) {
            bulb[b] = c;
        }

        else if (a == 2) {
            for (int j = b; j <= c; j++)
            {
                if (bulb[j] == 0) {
                    bulb[j] = 1;
                }

                else {
                    bulb[j] = 0;
                }
            }
        }

        else if (a == 3) {
            for (int j = b; j <= c; j++)
            {
                bulb[j] = 0;
            }
        }

        else {
            for (int j = b; j <= c; j++)
            {
                bulb[j] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << bulb[i] << " ";
    }

    return 0;
}
