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

	int cnt, n, m, t, a, b; cin >> t;
	while (t--)
	{
		cnt = 0;
		cin >> n >> m;
		for (a = 1; a < n; a++)
		{
			for (b = a + 1; b < n; b++)
			{
				if (!((a * a + b * b + m) % (a * b))) {
					cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}
