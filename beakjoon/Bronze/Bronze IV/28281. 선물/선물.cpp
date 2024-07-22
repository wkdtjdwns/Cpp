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

	int n, x; cin >> n >> x;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	ll result = 1e18;
	for (int i = 0; i < n - 1; i++) {
		result = min(result, 1LL * x * (v[i] + v[i + 1]));
	}

	cout << result << "\n";

	return 0;
}
