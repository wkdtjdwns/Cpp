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

	string str; cin >> str;
	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != str[0]) {
			break;
		}

		cnt++;
	}

	cout << cnt;

	return 0;
}
