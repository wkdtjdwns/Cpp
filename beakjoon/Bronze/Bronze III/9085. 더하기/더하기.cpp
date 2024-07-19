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

    int t; cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n; cin >> n;
		int result = 0;
		for (int j = 0; j < n; j++)
		{
			int num; cin >> num;
			result += num;
		}

		cout << result << "\n";
	}

	return 0;
}
