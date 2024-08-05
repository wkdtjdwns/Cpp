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
	
		int n, result = 1; cin >> n;
		for (int i = 1; i <= n; i++)
		{
			result *= i;
		}
	
		cout << result;

    return 0;
}
