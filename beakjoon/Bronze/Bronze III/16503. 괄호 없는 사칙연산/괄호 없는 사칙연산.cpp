#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int calc(int a, char op, int b) {
    int result = 0;
    if (op == '*') result = a * b;
    else if (op == '/') result = a / b;
    else if (op == '+') result = a + b;
    else if (op == '-') result = a - b;

    return result;
}

int main() {

    int a, b, c; char op1, op2; cin >> a >> op1 >> b >> op2 >> c;
    int result = calc(calc(a, op1, b), op2, c);
    int ans2 = calc(a, op1, calc(b, op2, c));

    cout << min(result, ans2) << "\n" << max(result, ans2);

    return 0;
}
