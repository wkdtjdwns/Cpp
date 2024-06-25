#include <iostream>
using namespace std;

int main() {

    int t, n, f;
    cin >> t >> n;

    int candy = 0;
    for (int i = 0; i < n; i++) {
        cin >> f;
        candy += f;
    }
    
    if (candy >= t) {
        cout << "Padaeng_i Happy";
    }

    else {
        cout << "Padaeng_i Cry";
    }

    return 0;
}
