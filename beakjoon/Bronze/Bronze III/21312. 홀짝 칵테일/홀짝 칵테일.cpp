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

	int abc[3], result = 1; bool check = false;
	for (int i = 0; i < 3; i++)
	{
		cin >> abc[i];
		if (abc[i] % 2 == 1) {
			result *= abc[i];
			check = true;
		}
	}

	if (check) {
		cout << result;
	}

	else {
		cout << abc[0] * abc[1] * abc[2];
	}

	return 0;
}
