#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#include <iomanip>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    ll a, b, c; cin >> a >> b >> c;
    ll abc = a * b * c;
    string str = to_string(abc);
    int nums[10] = { 0, };
    while (true)
    {
        if (str.empty()) {
            break;
        }

        char c = str.back();
        nums[c - '0']++;
        str.pop_back();
    }

    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << "\n";
    }

    return 0;
}
