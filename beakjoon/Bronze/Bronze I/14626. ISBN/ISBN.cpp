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

	string str; cin >> str;
	int check = 0, n = 0, result = 0;
	for (int i = 0; i < str.length(); i++)
	{
		char c = str[i];
		if (c != '*') {
			n += i % 2 == 0 ? c - '0' : (c - '0') * 3;
		}

		else {
			check = i;
		}
	}

	while (true)
	{
		if (check % 2 == 0) {
			if ((n + result) % 10 == 0) {
				cout << result;
				break;
			}
		}

		else {
			if ((n + result * 3) % 10 == 0) {
				cout << result;
				break;
			}
		}

		result++;
	}

	return 0;
}
