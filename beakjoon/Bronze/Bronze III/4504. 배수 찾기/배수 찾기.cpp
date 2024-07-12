#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    int n, num; cin >> n;
    while (true) {
        cin >> num;
        if (num == 0) { break; }

        if (num % n != 0) { cout << num << " is NOT a multiple of " << n << ".\n"; }
        else { cout << num << " is a multiple of " << n << ".\n"; }
    }

    return 0;
}
