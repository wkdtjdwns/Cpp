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

    int n;
    while (true)
    {
        cin >> n; if (!n) { break; }

        int result = 0;
        result += 1 + n * n;
        for (int i = 2; i <= n - 1; i++) {
            result += i * i;
        }

        if (n != 1) {
            cout << result << '\n';
        }

        else {
            cout << 1 << '\n';
        }
    }

	return 0;
}
