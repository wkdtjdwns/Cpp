#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

	int t; cin >> t;
	for (int i = 0; i < t; i++)
	{
		int sum = 0, minValue = 100;
		for (int j = 0; j < 7; j++) {
			int n; cin >> n;
			if (n % 2 == 0) {
				sum += n;
				minValue = min(minValue, n);
			}
		}

		cout << sum << " " << minValue << "\n";
	}

    return 0;
}
