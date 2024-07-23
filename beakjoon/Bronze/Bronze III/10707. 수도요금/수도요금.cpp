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

	int a, b, c, d, p; cin >> a >> b >> c >> d >> p;
	int x = a * p, y = 0;
	if (c >= p) {
	  y = b;
	}
	
	else {
	  y = b + ((p - c) * d);
	}
	
	if (x < y) {
	  cout << x;
	}
	
	else {
	  cout << y;
	}

	return 0;
}
