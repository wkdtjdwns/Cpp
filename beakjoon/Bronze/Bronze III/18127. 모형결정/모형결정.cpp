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

	ll a, b; cin >> a >> b;
	cout << ((b + 1) * (2 + b * (a - 2))) / 2;

	return 0;
}
