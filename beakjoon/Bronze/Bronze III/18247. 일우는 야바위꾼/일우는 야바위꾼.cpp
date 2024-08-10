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

	int n, x, k, a, b; cin >> n >> x >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> a >> b;
		if (x == a) {
			x = b;
		}

		else if (x == b) {
			x = a;
		}
	}

	cout << x;

	return 0;
}
