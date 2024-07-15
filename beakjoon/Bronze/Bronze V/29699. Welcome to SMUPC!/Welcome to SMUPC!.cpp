#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {

	int n; cin >> n;
	n -= 1; n %= 14;
	cout << "WelcomeToSMUPC"[n];

    return 0;
}
