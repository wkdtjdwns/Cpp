#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int n; cin >> n;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> a(2);
        vector<int> b(5);
        for (int j = 0; j < 2; j++)
        {
            cin >> a[j];
        }

        for (int j = 0; j < 5; j++)
        {
            cin >> b[j];
        }

        sort(b.begin(), b.end(), greater<int>());
        result = max(result, max(a[0], a[1]) + b[0] + b[1]);
    }

    cout << result;

    return 0;
}
