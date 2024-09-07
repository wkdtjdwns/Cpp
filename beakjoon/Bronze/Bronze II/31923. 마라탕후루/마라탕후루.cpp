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

    int n, p, q; cin >> n >> p >> q;
    vector<int> sb(n);
    for (int i = 0; i < n; i++)
    {
        cin >> sb[i];
    }

    vector<int> sm(n);
    for (int i = 0; i < n; i++)
    {
        cin >> sm[i];
    }

    vector<int> results;
    for (int i = 0; i < n; i++)
    {
        int a = sb[i];
        int b = sm[i];
        int j = 0;
        while (a != b)
        {
            a += p;
            b += q;
            j++;

            if (j >= 10000) {
                cout << "NO";
                return 0;
            }
        }

        results.push_back(j);
    }

    cout << "YES\n";
    for (const int& result : results)
    {
        cout << result << " ";
    }

    return 0;
}
