#include <iostream>
#include <algorithm>
#include <sstream>
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
  vector<int> x(n), l(n);
  vector<char> c(n);

  for (int i = 0; i < n; ++i)
  {
      cin >> x[i];
  }

  for (int i = 0; i < n; ++i)
  {
      cin >> l[i];
  }

  for (int i = 0; i < n; ++i)
  {
      cin >> c[i];
  }

  for (int i = 0; i < n; ++i)
  {
      for (int j = i + 1; j < n; ++j)
      {
          if (abs(x[i] - x[j]) <= l[i] + l[j]) {
              if (c[i] != c[j]) {
                  cout << "YES\n";
                  cout << (i + 1) << " " << (j + 1);
                  return 0;
              }
          }
      }
  }

  cout << "NO";

	return 0;
}
