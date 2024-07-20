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

	cout << fixed;
	cout.precision(2);

  int t; cin >> t;
	while (t--)
	{
		double price; cin >> price;
		price *= 0.8;

		cout << "$" << price << "\n";
	}

	return 0;
}
