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
	vector<int> odd, even;
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		if (num % 2 == 1) {
			odd.push_back(num);
		}

		else {
			even.push_back(num);
		}
	}

	int result = 1;
	if (odd.size() - even.size() > 1 || odd.size() - even.size() < 0) {
		result = 0;
	}

	else {
		sort(odd.begin(), odd.end());
		sort(even.begin(), even.end());

		for (int i = 1; i < even.size(); i++)
		{
			if (even[i] < even[i]) {
				result = 0;
				break;
			}
		}

		if (result != 0) {
			for (int i = 1; i < odd.size(); i++)
			{
				if (odd[i] < odd[i]) {
					result = 0;
					break;
				}
			}
		}
	}

	cout << result;

  return 0;
}
