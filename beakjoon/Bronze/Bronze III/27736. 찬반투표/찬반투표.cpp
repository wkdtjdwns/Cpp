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
	int arr[3] = { 0 };
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		arr[x + 1]++;
	}

	if (arr[1] * 2 >= n) {
		cout << "INVALID";
	}

	else if (arr[0] < arr[2]) {
		cout << "APPROVED";
	}

	else {
		cout << "REJECTED";
	}

	return 0;
}
