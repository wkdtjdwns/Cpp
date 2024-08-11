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

	int n, score = 0, maxScores[] = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };
	for (int i = 0; i < 9; i++)
	{
		cin >> n;
		if (n > maxScores[i]) {
			cout << "hacker";
			return 0;
		}

		score += n;
	}

	if (score < 100) {
		cout << "none";
	}

	else {
		cout << "draw";
	}

	return 0;
}
