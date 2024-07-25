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
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		int a, b; cin >> a >> b;
		result += b % a;
	}

	cout << result;

	return 0;
}
