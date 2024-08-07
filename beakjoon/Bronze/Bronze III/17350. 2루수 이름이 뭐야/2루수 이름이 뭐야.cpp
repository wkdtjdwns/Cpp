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

	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name; cin >> name;
		if (name == "anj") {
			cout << "뭐야;";
			return 0;
		}
	}

	cout << "뭐야?";

	return 0;
}
