#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main() {

    while (true)
    {
        int a, b; cin >> a >> b;
        if (a + b == 0) { break; }
        cout << a * 2 - b << "\n";
    }

    return 0;
}
