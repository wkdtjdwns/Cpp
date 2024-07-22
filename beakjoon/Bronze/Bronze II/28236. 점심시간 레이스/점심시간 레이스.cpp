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

    int n, m, k; cin >> n >> m >> k;
    vector<pair<int, int>> result;
    for (int i = 0; i < k; i++) {
        int y, x; cin >> y >> x;
        y--;

        int dist = y - 1 + m + 1 - x;
        result.push_back({ dist, i + 1 });
    }

    sort(result.begin(), result.end());
    cout << result[0].second;

    return 0;
}
