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
	
	int h; cin >> h;
	for (int i = 1; i <= h; i++)
	{
		int cnt; cin >> cnt;
		string head; cin >> head;

		cout << "Data Set " << i << ":\n";
		for (char c : head)
		{
			if (c == 'c') { cnt++; }
			else { cnt--; }
		}

		cout << cnt << "\n\n";
	}

	return 0;
}
