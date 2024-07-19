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

	int c, s, n, q, p, price = 0; cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> s;
		price += s;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> q >> p;
			price += q * p;
		}

		cout << price << '\n';
		price = 0;
	}

	return 0;
}
