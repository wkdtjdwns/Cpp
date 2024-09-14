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

    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    string strA = "";
    for (int i = 0; i < n; i++)
    {
        strA += to_string(a[i]);
    }

    string strB = "";
    for (int i = 0; i < n; i++)
    {
        strB += to_string(b[i]);
    }

    ll resultA = stoll(strA);
    ll resultB = stoll(strB);

    cout << min(resultA, resultB);

    return 0;
}
