#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
	fastIo;

	int n; cin >> n;
	string str; cin >> str;
	int s = 0, t = 0;
	for (char c : str)
	{
		c == 's' ? s++ : t++;
	}

	int index = 0;
	while (s != t)
	{
		str[index] == 's' ? s-- : t--;
		index++;
	}

	cout << str.substr(index, n - index);

	return 0;
}
