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

    string str; cin >> str;
    int n; cin >> n;
    int y = stoi(str.substr(0, 4));
    int m = stoi(str.substr(5, 2));
    int d = stoi(str.substr(8, 2));

    d += n;
    m += (d - 1) / 30;
    d = (d - 1) % 30 + 1;
    y += (m - 1) / 12;
    m = (m - 1) % 12 + 1;

    cout << y << '-' << setw(2) << setfill('0') << m << '-' << setw(2) << setfill('0') << d;

    return 0;
}
