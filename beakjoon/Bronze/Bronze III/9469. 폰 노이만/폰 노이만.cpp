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

	double d, a, b, f, timeLeft;
	int p, n; cin >> p;
	while (p--) {
		cin >> n >> d >> a >> b >> f;
		timeLeft = d / (a + b);
		printf("%d %f\n", n, f * timeLeft);
	}

	return 0;
}
