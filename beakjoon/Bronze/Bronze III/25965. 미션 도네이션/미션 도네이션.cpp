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

	int t; cin >> t;
	while (t--)
	{
		ll result = 0, temp = 0, array[101][3];
		int misson; cin >> misson;
		for (int i = 0; i < misson; i++)
		{
			cin >> array[i][0] >> array[i][1] >> array[i][2];
		}

		int k, d, a; cin >> k >> d >> a;
		for (int i = 0; i < misson; i++)
		{
			temp += (array[i][0] * k - array[i][1] * d + array[i][2] * a);
			if (temp < 0) {
				temp = 0;
			}

			result += temp;
			temp = 0;
		}

		cout << result << "\n";
	}

	return 0;
}
