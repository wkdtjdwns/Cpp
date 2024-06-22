#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    long long result = 1;
    for (int i = 11; i < n + 1; i++) {
        result *= i;
    }

    cout << (6 * result);

    return 0;
}
