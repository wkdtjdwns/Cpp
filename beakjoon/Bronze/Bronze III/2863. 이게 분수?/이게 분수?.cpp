#include <iostream>
using namespace std;

int main() {
    double a[5];
    double ans[4];

    for (int i = 1; i <= 4; i++) {
        cin >> a[i];
    }

    ans[0] = a[1] / a[3] + a[2] / a[4];
    ans[1] = a[3] / a[4] + a[1] / a[2];
    ans[2] = a[4] / a[2] + a[3] / a[1];
    ans[3] = a[2] / a[1] + a[4] / a[3];
    
    double rot = 0;
    int minValue = 10;
    for (int i = 0; i < 4; i++) {
        if (rot < ans[i]) {
            rot = ans[i];
        }
    }

    for (int i = 0; i < 4; i++) {
        if (rot == ans[i]) {
            minValue = min(minValue, i);
        }
    }

    cout << minValue << "\n";
}
