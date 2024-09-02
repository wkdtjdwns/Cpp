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

    int n, l, maxValue = -1; cin >> n >> l;
    vector<int> cnt(n);
    for (int i = 0; i < n; i++)
    {
        string str; cin >> str;
        int c = 0;
        for (int j = 0; j < l - 1; j++)
        {
            if (str[j] == '1' && str[j + 1] == '0') {
                c++;
            }
        }

        if (str[l - 1] == '1') {
            c++;
        }

        cnt[i] = c;
        maxValue = max(maxValue, cnt[i]);
    }

    int zebra = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt[i] == maxValue) {
            zebra++;
        }
    }

    cout << maxValue << " " << zebra;

    return 0;
}
