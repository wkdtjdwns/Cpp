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

	int t, v, e; cin >> t;
	vector<int> result;
	for (int i = 0; i < t; i++) {
		cin >> v >> e;
		result.push_back(2 - v + e);
	}

	for (auto k : result) {
		cout << k << "\n";
	}

	return 0;
}
