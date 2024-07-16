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
    while (true)
    {
        string n; cin >> n;
        if (n == "0") { break; }

        int result = 0;
        int index = n.size();
        for (char c : n) {
            result += (c - '0') * factorial(index--);
        }

        cout << result << "\n";
    }

    return 0;
}
