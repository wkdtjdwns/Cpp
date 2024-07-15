#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {

    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int n; cin >> n;

        cout << "Case #" << i << ": ";
        if (n > 4500) {
            cout << "Round 1\n";
        }

        else if (n > 1000) {
            cout << "Round 2\n";
        }

        else if (n > 25) {
            cout << "Round 3\n";
        }

        else {
            cout << "World Finals\n";
        }
    }

    return 0;
}
