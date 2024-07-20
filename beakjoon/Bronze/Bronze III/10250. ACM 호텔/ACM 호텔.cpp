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

	int t, h, w, n, result; cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;

		if (n % h == 0) {
			result = h * 100 + (n / h);
		}

		else {
			result = (n % h) * 100 + (n / h) + 1;
		}

		cout << result << "\n";
	}

	return 0;
}
