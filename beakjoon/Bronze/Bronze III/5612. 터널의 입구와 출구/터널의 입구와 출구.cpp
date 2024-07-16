#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main() {

    int n, m; cin >> n >> m;
    int result = m; int sum = m;
    for (int i = 0; i < n; i++) {
        int in, out; cin >> in >> out;
        sum += (in - out);

        if (sum < 0) {
            cout << 0 << "\n";
            return 0;
        }

        result = max(result, sum);
    }

    cout << result << "\n";

    return 0;
}
