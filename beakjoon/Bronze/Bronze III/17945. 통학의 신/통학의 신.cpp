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
		
		int a, b; cin >> a >> b;
		int x = -a + sqrt(a * a - b);
		int y = -a - sqrt(a * a - b);
		
		if (x == y) {
			cout << x;
		}
		
		else {
			cout << y << " " << x;
		}

    return 0;
}
