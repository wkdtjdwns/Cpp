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
	cout << "int a;\nint *ptr = &a;\n";
	for (int i = 2; i <= n; i++)
	{
		cout << "int ";
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		cout << "ptr" << i << " = &ptr";

		if (i - 1 != 1) {
			cout << i - 1;
		}

		cout << ";\n";
	}

	return 0;
}
