#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int abs(int a, int b)
{
		return a < b ? (b - a) : (a - b);
}

int main() {
    fastIo;

		vector<string> str(4);
		for (int i = 0; i < 4; i++) { cin >> str[i]; }
	
		int result = 0;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (str[i][j] != '.') {
					result += abs(i, (str[i][j] - 'A') / 4) + abs(j, (str[i][j] - 'A') % 4);
				}
			}
		}
	
		cout << result;

    return 0;
}
