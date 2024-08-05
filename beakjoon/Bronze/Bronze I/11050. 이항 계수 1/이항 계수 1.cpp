#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int factorial(int n) {
		if (n < 1) { return 1; }
		return n * factorial(n - 1);
}

int main() {
    fastIo;

		int n, k; cin >> n >> k;
		cout << factorial(n) / (factorial(k) * factorial(n - k));

    return 0;
}
