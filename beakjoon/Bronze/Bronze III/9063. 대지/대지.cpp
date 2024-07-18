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

    int n; cin >> n;
    int minX = 100000; int maxX = -100000;
    int minY = 100000; int maxY = -100000;

    int* x = new int[n];
    int* y = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i];

        if (minX > x[i]) minX = x[i];
        if (maxX < x[i]) maxX = x[i];
        if (minY > y[i]) minY = y[i];
        if (maxY < y[i]) maxY = y[i];
    }

    cout << (maxX - minX) * (maxY - minY);

	return 0;
}
