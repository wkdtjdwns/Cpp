#include <bits/stdc++.h>
using namespace std;
double n, p, result;

int getPrice() {

	if (n < 5) return p;
	if (n < 10) return p - 500;
	if (n < 15) return min(p - 500, p * 0.9);
	if (n < 20) return min({ p - 500, p * 0.9, p - 2000 });

	return min({ p - 500, p * 0.9, p - 2000, p * 0.75 });
}

int main() {

	cin >> n >> p;
	result = getPrice();

	if (result < 0) {
		result = 0;
	}

	cout << result;

	return 0;
}
