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

		string s1, s2, str, result; cin >> s1 >> s2;
		for (int i = 0; i < s1.size(); i++) {
			str = str + s1[i] + s2[i];
		}
	
		while (str.size() != 2) {
			for (int i = 0; i < str.size() - 1; i++) {
				result = result + char('0' + ((str[i] - '0') + (str[i + 1] - '0')) % 10);
			}
	
			str = result;
			result.clear();
		}
	
		cout << str;

    return 0;
}
