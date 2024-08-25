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

    int n, k, p; cin >> n >> k >> p;
    vector<int> breads(n * k);
    for (int i = 0; i < n * k; i++)
    {
        cin >> breads[i];
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = i * k; j < (i + 1) * k; j++)
        {
            if (breads[j] == 0) {
                cnt++;
            }
        }

        if (cnt < p) {
            result++;
        }
    }

    cout << result;

    return 0;
}
