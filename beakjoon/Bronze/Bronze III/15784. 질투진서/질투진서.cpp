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

		int n, x, y, p[1001][1001]; cin >> n >> x >> y; x--; y--;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> p[i][j];
			}
		}
	
		for (int i = 0; i < n; i++)
		{
			if (p[i][y] > p[x][y]) {
				cout << "ANGRY";
				return 0;
			}
	
			if (p[x][i] > p[x][y]) {
				cout << "ANGRY";
				return 0;
			}
		}
	
		cout << "HAPPY";

    return 0;
}
