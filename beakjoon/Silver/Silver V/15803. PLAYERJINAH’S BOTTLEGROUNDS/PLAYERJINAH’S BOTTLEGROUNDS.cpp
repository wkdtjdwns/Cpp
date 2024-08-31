#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    double x[3];
    double y[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }

    bool check = true;
    if (x[0] == x[1] && x[1] == x[2]) {
        check = false;
    }

    else if (y[0] == y[1] && y[1] == y[2]) {
        check = false;
    }

    else if ((double)(x[0] - x[1]) / (y[0] - y[1]) == (double)(x[1] - x[2]) / (y[1] - y[2])) {
        check = false;
    }

    if (check) {
        cout << "WINNER WINNER CHICKEN DINNER!";
    }

    else {
        cout << "WHERE IS MY CHICKEN?";
    }

    return 0;
}
