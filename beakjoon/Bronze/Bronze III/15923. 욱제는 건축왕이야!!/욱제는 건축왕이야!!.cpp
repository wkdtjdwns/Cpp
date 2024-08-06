#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

struct point { int x, y; };

int main() {
    int n; cin >> n;
    vector <point> v; v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].x >> v[i].y;
    }

    double result;
    for (int i = 0; i < v.size(); i++) {
        double len;
        if (!i) {
            len = sqrt(pow(v[0].x - v[n - 1].x, 2) + pow(v[0].y - v[n - 1].y, 2));
        }
        else {
            len = sqrt(pow(v[i].x - v[i - 1].x, 2) + pow(v[i].y - v[i - 1].y, 2));
        }

        result += len;
    }

    cout << result;
}
