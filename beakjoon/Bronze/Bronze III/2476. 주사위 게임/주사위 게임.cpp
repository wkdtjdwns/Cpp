#include<iostream>
using namespace std;

int main() {

    int maxValue = 0;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b && b == c) {
            maxValue = max(maxValue, 10000 + (a * 1000));
        }

        else if (a == b || a == c) {
            maxValue = max(maxValue, 1000 + (a * 100));
        }

        else if (b == c) {
            maxValue = max(maxValue, 1000 + (b * 100));
        }

        else {
            maxValue = max(maxValue, max(max(a, b), c) * 100);
        }
    }

    cout << maxValue;

    return 0;
}
