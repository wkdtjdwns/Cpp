#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, b, k, x;
    cin >> a >> b >> k >> x;

    int result = 0;
    for (int i = a; i <= b; i++) {
        if (abs(k - i) <= x) {
            result++;
        }
    }

    if (result) {
        cout << result;
    }
    
    else {
        cout << "IMPOSSIBLE";
    }

    return 0;
}
