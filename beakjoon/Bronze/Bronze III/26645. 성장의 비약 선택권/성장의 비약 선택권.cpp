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

bool alphabet[26];

int main() {
	fastIo;

	int level; cin >> level;
	if (level < 206) {
		cout << 1;
	}

	else if (level < 218) {
		cout << 2;
	}

	else if (level < 229) {
		cout << 3;
	}

	else {
		cout << 4;
	}

	return 0;
}
