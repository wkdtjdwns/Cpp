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

	string a, b, c, d; cin >> a >> b >> c >> d;
	ll ab = stoll(a + b);
	ll cd = stoll(c + d);

	cout << ab + cd;

	return 0;
}
