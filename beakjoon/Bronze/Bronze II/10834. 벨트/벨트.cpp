#include <cmath>
#include <string>
#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {

	int m, a = 1, b = 1, s, rNum = 1; cin >> m;
	bool r = true;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> s;
		rNum = (rNum / a) * b;
		r = s == 1 ? !r : r;
	}

	if (r) { cout << "0 " << rNum; }
	else { cout << "1 " << rNum; }
	
	return 0;
}
