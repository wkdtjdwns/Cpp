#include <iostream>
using namespace std;

int main() {

    int n, t, m = 0, y = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        y += (t / 30 + 1) * 10;
        m += (t / 60 + 1) * 15;
    }

    if (m < y) cout << "M " << m;
    else if (m > y) cout << "Y " << y;
    else if (m == y) cout << "Y M " << m;

    return 0;
}
