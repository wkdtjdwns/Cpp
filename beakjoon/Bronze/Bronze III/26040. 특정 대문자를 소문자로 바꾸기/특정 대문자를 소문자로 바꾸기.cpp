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

	string a, b; getline(cin, a); getline(cin, b);
	istringstream ss(b);

	string buf, ans;
	while (getline(ss, buf, ' ')) {
		alphabet[buf[0] - 'A'] = true;
	}

	for (int i = 0; i < a.length(); i++) {
		if (alphabet[a[i] - 'A'] && isupper(a[i])) {
			a[i] = tolower(a[i]);
		}
	}

	cout << a;

	return 0;
}
