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

	int T; cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n, m, u, t; cin >> n >> m;
		u = m * 2 - n; t = n - m;

		cout << u << " " << t << "\n";
	}

	return 0;
}
