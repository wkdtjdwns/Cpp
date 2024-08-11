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

	string str; getline(cin, str);
	if (str.find("d2") != string::npos || str.find("D2") != string::npos) {
		cout << "D2";
	}
	
	else {
		cout << "unrated";
	}

	return 0;
}
