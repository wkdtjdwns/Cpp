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

	string time; cin >> time;
	int  hour = 0, equal = 1, d[3] = {
		(time.at(0) - '0') * 10 + (time.at(1) - '0'),
		(time.at(3) - '0') * 10 + (time.at(4) - '0'),
		(time.at(6) - '0') * 10 + (time.at(7) - '0')
	};

	for (int i = 0; i < 3; i++)
	{
		if (1 <= d[i] && d[i] <= 12) {
			hour++;
		}

		if (d[i] >= 60) {
			cout << 0;
			return 0;
		}

		for (int j = i + 1; j < 3; j++)
		{
			if (d[i] == d[j]) equal++;
		}
	}

	if (hour == 0) {
		cout << 0;
		return 0;
	}

	cout << hour * 2;

	return 0;
}
