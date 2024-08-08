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

    int n, cnt = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string str = to_string(i);
        int sum = 0;
        for (char c : str)
        {
            sum += c - '0';
        }

        if (i % sum == 0) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
