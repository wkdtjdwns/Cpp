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

		int l, r, a, different; cin >> l >> r >> a;
		int total = l + r + a;
		if (l < r) {
			different = min(r - l, a);
			l += different;
			a -= different;
		}
	
		else {
			different = min(l - r, a);
			r += different;
			a -= different;
		}
	
		if (r == l) {
			cout << total - (a & 1);
		}
	
		else {
			cout << total - abs(r - l);
		}

    return 0;
}
