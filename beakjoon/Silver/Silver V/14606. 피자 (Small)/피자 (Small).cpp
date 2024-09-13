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

    int n; cin >> n;
    int dp[11] = { 0, };
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        int div = i / 2;
        dp[i] = (div * (i - div)) + dp[div] + dp[i - div];
    }

    cout << dp[n];

    return 0;
}
