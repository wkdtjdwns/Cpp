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

	int k; string str; cin >> k >> str;
	for (int i = 0; i < str.size(); i += k)
	{
		cout << str[i];
	}
	

	return 0;
}
