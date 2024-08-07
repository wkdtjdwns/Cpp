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

    char result, snack[] = { 'S', 'N', 'U' };
    float good, efficiency[3];

    for (int i = 0; i < 3; i++)
    {
        float price, weight; cin >> price >> weight;
        price *= 10;
        weight *= 10;
        if (price >= 5000) {
            price -= 500;
        }

        efficiency[i] = weight / price;
        good = max(good, efficiency[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (good == efficiency[i]) {
            result = snack[i];
            break;
        }
    }

    cout << result;

	return 0;
}
