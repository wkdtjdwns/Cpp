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

    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, l, f; cin >> n >> l >> f;
        vector<string> words(n);
        for (int j = 0; j < n; j++)
        {
            cin >> words[j];
        }

        vector<bool> check(n, false);
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (check[j]) {
                continue;
            }

            for (int k = j + 1; k < n; k++)
            {
                if (check[k]) {
                    continue;
                }

                int length = 0;
                for (int o = 1; o <= l; o++)
                {
                    if (words[j][l - o] == words[k][l - o]) {
                        length++;
                    }

                    else {
                        break;
                    }
                }

                if (length >= f) {
                    check[j] = check[k] = true;
                    cnt++;
                    break;
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}
