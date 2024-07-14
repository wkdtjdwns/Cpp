#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {

	int price, sum = 0, num; cin >> price;

	for (int i = 0; i < 9; ++i) {
		cin >> num;
		sum += num;
	}

	cout << price - sum;

    return 0;
}
