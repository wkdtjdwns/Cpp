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

	int n, x, array[100]; cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	int index = 0;
	while (x <= array[index])
	{
		x++; index++;
		if (index == n) {
			index = 0;
		}
	}

	cout << index + 1;

	return 0;
}
