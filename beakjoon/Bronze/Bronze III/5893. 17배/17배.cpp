#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fastIo;

    string u, v, result; cin >> u;
    v = u;
    u += "0000";
    int c = 0;
    while (!v.empty()) {
        int val = u.back() + v.back() - 48 * 2 + c;
        c = val / 2;
        result += to_string(val % 2);
        u.pop_back();
        v.pop_back();
    }

    while (!u.empty()) {
        int val = u.back() - 48 + c;
        c = val / 2;
        result += to_string(val % 2);
        u.pop_back();
    }

    if (c) result += "1";
    reverse(result.begin(), result.end());

    cout << result;

	return 0;
}
