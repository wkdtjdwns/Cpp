#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {

    double a, b, n, cnt; cin >> n; cnt = n;
    while (true)
    {
        cin >> a;
        if (a == 999) { break; }
        printf("%.2f\n", a - cnt);
        
        cnt = a;
    }

    return 0;
}
