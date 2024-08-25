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
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        a.push_back(temp);
    }

    int maxValue = -1;
    int result = 0;
    for (int i = n; i >= 0; i--)
    {
        maxValue = max(maxValue, a[i]);
        result = max(result, maxValue - a[i]);
    }

    cout << result;

    return 0;
}
