#include <iostream>
using namespace std;

int tri(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int t, n, sum; cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        sum = 0;

        for (int j = 1; j <= n; ++j) {
            sum += tri(j + 1) * j;
        }

        cout << sum << "\n";
    }

    return 0;
}
