#include <bits/stdc++.h>
using namespace std;

int main() {

	double a, b, m;
	cin >> a >> b;

	m = (b - a) / 400;
	printf("%.20f", 1 / (1 + pow(10, m)));

	return 0;
}
