#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

bool alphabet[26];

int main() {
	fastIo;

	int n, m; cin >> n >> m;
	vector<int> money(n + m + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> money[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n + m; j++) {
			int temp; cin >> temp;
			money[i] -= temp;
			money[j] += temp;
		}
	}

	for (int i = 1; i <= n + m; i++) {
		cout << money[i] << " ";
	}

	return 0;
}
