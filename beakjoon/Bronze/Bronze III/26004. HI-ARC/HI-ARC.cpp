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
	vector<int> result(5, 0);
	for (int i = 0; i < n; i++)
	{
		switch (str[i])
		{
			case 'H':
				result[0]++;
				break;

			case 'I':
				result[1]++;
				break;

			case 'A':
				result[2]++;
				break;

			case 'R':
				result[3]++;
				break;

			case 'C':
				result[4]++;
				break;
		}
	}

	cout << *min_element(result.begin(), result.end());

	return 0;
}
