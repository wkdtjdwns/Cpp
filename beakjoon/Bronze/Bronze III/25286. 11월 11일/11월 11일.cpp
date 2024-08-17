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

	int temp[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int t; cin >> t;
	while (t--)
	{
		int y, m; cin >> y >> m;
		if (m == 1) {
			cout << y - 1 << " " << 12 << " " << 31;
		}
	
		else {
			cout << y << " " << m - 1 << " ";
			if (m == 3 && ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)) {
				cout << 29;
			}
	
			else {
				cout << temp[m - 1];
			}
		}
	
		cout << "\n";
	}
	
  return 0;
}
