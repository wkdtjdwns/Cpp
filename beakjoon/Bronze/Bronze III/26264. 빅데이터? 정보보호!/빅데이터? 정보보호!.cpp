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

	int n; cin >> n;
	string str; cin >> str;
	int a = 0, b = 0;
	for (int i = 0; i < str.length();)
	{
		if (str[i] == 'b') {
			a++;
			i += 7;
		}

		else {
			b++;
			i += 8;
		}
	}

	cout << (a > b ? "bigdata?" : (a < b ? "security!" : "bigdata? security!"));

	return 0;
}
