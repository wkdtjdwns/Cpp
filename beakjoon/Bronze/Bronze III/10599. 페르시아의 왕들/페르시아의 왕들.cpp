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

	while (true)
	{
		int a, b, c, d; cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) { break; }
		cout << c - b << " " << d - a << "\n";
	}

	return 0;
}
