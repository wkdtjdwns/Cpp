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

    int t, d, a = 0; cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> d;
        for (int j = 0; (j * j) + j <= d; j++)
        {
            if (j > a) {
                a = j;
            }
        }

        cout << a << "\n";
        a = 0;
    }

    return 0;
}
