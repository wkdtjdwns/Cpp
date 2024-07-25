#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int factorial(int n) {
    if (n <= 1) { return 1; }
    return n * factorial(n - 1);
}

int main() {
    fastIo;

    int n; cin >> n;
    cout << factorial(n);

    return 0;
}
