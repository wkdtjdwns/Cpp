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

	int n; cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++) {
			cout << " ";
		}

		cout << "*";

		for (int j = 0; j < 2 * i - 1; j++) {
			cout << " ";
		}

		if (i != 0) {
			cout << "*";
		}

		cout << "\n";
	}

	for (int i = 0; i < n * 2 - 1; i++) {
		cout << "*";
	}

	return 0;
}
