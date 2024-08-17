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

	int n; cin >> n;
	string str; cin >> str;
	int cnt = 0;
	for (int i = 0; i < n / 2; i++)
	{
		if (str[i] != str[n - 1 - i]) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
