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

	int nums[31];
	for (int i = 0; i < 31; i++) {
		nums[i] = pow(2, i);
	}


	int n; cin >> n;
	if (find(begin(nums), end(nums), n) != end(nums)) {
		cout << 1;
	}
	

	else {
		cout << 0;
	}

	return 0;
}
