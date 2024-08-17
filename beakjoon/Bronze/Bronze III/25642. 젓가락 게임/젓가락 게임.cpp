#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
	fastIo;

	int a, b; cin >> a >> b;
	while (true)
	{
		b += a;
		if (b >= 5) {
			cout << "yt";
			return 0;
		}

		a += b;
		if (a >= 5) {
			cout << "yj";
			return 0;
		}
	}

	return 0;
}
