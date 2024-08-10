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

	int m, seed, x1, x2; cin >> m >> seed >> x1 >> x2;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (x1 == (i * seed + j) % m && x2 == (i * x1 + j) % m) {
				cout << i << " " << j;
				return 0;
			}
		}
	}
	
	return 0;
}
