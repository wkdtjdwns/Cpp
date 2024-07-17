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
		int n; cin >> n;
		string s;
		for (int i = 1; i <= n; ++i) {
			cin >> s;
			cout << "String #" << i << "\n";
			for (int j = 0; j < s.length(); ++j) {
				cout << (char)((s[j] - 'A' + 1) % 26 + 'A');
			}
	
			cout << "\n\n";
		}
	
    return 0;
}
