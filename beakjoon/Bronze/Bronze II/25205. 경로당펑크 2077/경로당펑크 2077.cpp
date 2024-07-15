#include <cmath>
#include <string>
#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {

	vector<char> v(14);
	v = { 'q', 'w', 'e', 'r', 't', 'a', 's', 'd', 'f', 'g', 'z', 'x', 'c', 'v' };
	int n; cin >> n;
	string s; cin >> s;

	bool flag = false;
	for (int i = 0; i <= 13; i++) {
		if (s[s.size() - 1] == v[i]) {
			flag = true;
			break;
		}
	}

	cout << (flag ? 1 : 0);

	return 0;
}
