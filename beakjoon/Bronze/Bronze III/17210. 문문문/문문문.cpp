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

  ll n; int num; cin >> n >> num;

  if (n > 5) {
      cout << "Love is open door";
  }

  else {
      for (int i = 0; i < n - 1; i++)
      {
          if (num == 1) {
              cout << 0 << "\n";
              num = 0;
          }

          else {
              cout << 1 << "\n";
              num = 1;
          }
      }
  }

	return 0;
}
