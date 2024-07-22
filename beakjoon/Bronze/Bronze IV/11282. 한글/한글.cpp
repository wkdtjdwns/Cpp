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

	int n; cin >> n;
	n += 3071;
	
	string str;
	str.push_back(n / 4096 + 234);
	str.push_back(n / 64 % 64 + 128);
	str.push_back(n % 64 + 128);

	cout << str;

	return 0;
}
