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

	string s;
	int sum;

	while (true) {
		sum = 0;
		cin >> s;

		if (s == "0") {
			break;
		}

		while (true) {
			for (int i = 0; i < s.length(); ++i) {
				sum += s[i] - '0';
			}

			if (sum < 10) {
				break;
			}

			else {
				s = to_string(sum);
				sum = 0;
			}
		}

		cout << sum << endl;
	}

	return 0;
}
