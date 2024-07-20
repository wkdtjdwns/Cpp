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

    int n, as = 100, bs = 100; cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            bs -= a;
        }

        else if (a < b) {
            as -= b;
        }

    }

    cout << as << "\n" << bs;

    return 0;
}
