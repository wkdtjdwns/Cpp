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

    int n, a[11]; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        bool check = true;
        for (int j = 1; j <= 10; j++)
        {
            cin >> a[j];
            if (a[j] != (j - 1) % 5 + 1) {
                check = false;
            }
        }

        if (check) {
            cout << i << "\n";
        }
    }

    return 0;
}
