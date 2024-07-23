#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fastIo;

    int n, t, cnt = 0; cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        int num; cin >> num;
        if (t - num < 0) { break; }

        t -= num;
        cnt++;
    }

    cout << cnt;

    return 0;
}
