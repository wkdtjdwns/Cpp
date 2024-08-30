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
    vector<vector<string>> pictures(n, vector<string>(5));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> pictures[i][j];
        }
    }

    int min = INT_MAX;
    int result1 = 0, result2 = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int cnt = 0;

            for (int row = 0; row < 5; ++row)
            {
                for (int col = 0; col < 7; ++col)
                {
                    if (pictures[i][row][col] != pictures[j][row][col]) {
                        cnt++;
                    }
                }
            }

            if (cnt < min) {
                min = cnt;
                result1 = i + 1;
                result2 = j + 1;
            }
        }
    }

    cout << result1 << " " << result2;

    return 0;
}
