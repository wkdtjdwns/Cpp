#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int start[3], end[3], sTotal, eTotal, result;
    scanf("%d:%d:%d", start, start + 1, start + 2);
    scanf("%d:%d:%d", end, end + 1, end + 2);
    
    sTotal = start[0] * 3600 + start[1] * 60 + start[2];
    eTotal = end[0] * 3600 + end[1] * 60 + end[2];
    
    if (sTotal >= eTotal) {
        eTotal += 24 * 3600;
    }

    result = eTotal - sTotal;
    printf("%02d:%02d:%02d", result / 3600, (result % 3600) / 60, result % 60);

    return 0;
}
