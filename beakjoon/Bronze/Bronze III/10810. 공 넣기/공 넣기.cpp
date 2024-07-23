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

	int n, m, i, j, k; cin >> n >> m;
	int basket[101] = { 0, };
	for (int o = 0; o < m; o++)
	{
		cin >> i >> j >> k;
		for (int p = i; p <= j; p++) {
			basket[p] = k;
		}
	}

	for (int o = 1; o <= n; o++) {
		cout << basket[o] << " ";
	}

	return 0;
}
