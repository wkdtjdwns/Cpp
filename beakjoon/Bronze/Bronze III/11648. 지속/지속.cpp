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

		string n; cin >> n;
		int cnt = 0;
		while (n.size() > 1)
		{
			int result = 1;
			for (char c : n) {
				result *= (c - '0');
			}
	
			n = to_string(result);
			cnt++;
		}
	
		cout << cnt;

    return 0;
}
