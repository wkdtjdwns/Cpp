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

	int n, k; cin >> n >> k;
	int modK = k % 10, mod2K = (2 * k) % 10;
	vector<int> result;
	for (int i = 1; i <= n; i++)
	{
		if (i % 10 != modK && i % 10 != mod2K) {
			result.push_back(i);
		}
	}

	cout << result.size() << "\n";
	for (int num : result)
	{
		cout << num << " ";
	}

	return 0;
}
