#include <iostream>
using namespace std;

int main() {

    int n, time, result = 0;
    cin >> n;
    result += (n - 1) * 8;

    for (int i = 0; i < n; i++) {
        cin >> time;
        result += time;
    }

    cout << result / 24 << " " << result % 24;

    return 0;
}
