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
	
		ll k, n; cin >> k >> n;
		if (n == 1) {
			cout << -1;
		}
	
		else {
			ll x = (k * n) / (n - 1);
			if ((k * n) % (n - 1) != 0) {
				x++;
			}
	
			cout << x;
		}
	
		return 0;
}
