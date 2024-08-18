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

	int n; cin >> n;
	double result = 0;
	for (int i = 0; i < n; i++)
	{
		int a; cin >> a;
		result = (a + result) - ((result * a) / 100);

		fixPrint(6);
		cout << result << "\n";
	}

	return 0;
}
