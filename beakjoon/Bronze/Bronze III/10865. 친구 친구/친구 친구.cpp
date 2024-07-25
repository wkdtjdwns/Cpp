#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int result[100001];
int main() {
	fastIo;

  int n, m, a, b; cin >> n >> m;
  for (int i = 1; i <= m; i++)
  {
      cin >> a >> b;
      result[a]++; result[b]++;
  }

  for (int i = 1; i <= n; i++)
  {
      cout << result[i] << '\n';
  }

	return 0;
}
