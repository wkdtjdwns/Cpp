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

	int t, y, x; cin >> t;
  for (int i = 0; i < t; i++) {
      cin >> y >> x;

      int result = -1;
      if (y >= 12 && x >= 4) {
          result = 11 * x + 4;
      }

      cout << result << "\n";
  }

	return 0;
}
