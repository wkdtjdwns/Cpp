#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main() {

    int a, b; cin >> a;
    char op;

    int result = a;
    while (true)
    {
        cin >> op;
        if (op == '=') {
            break;
        }

        cin >> b;
        if (op == '+') {
            result += b;
        }

        else if (op == '-') {
            result -= b;
        }

        else if (op == '*') {
            result *= b;
        }

        else {
            result /= b;
        }
    }

    cout << result;

    return 0;
}
