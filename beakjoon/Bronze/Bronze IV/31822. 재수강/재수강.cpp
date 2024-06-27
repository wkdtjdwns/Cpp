#include<iostream>
#include <string>
using namespace std;

int main() {

    string s; cin >> s;
    int n; cin >> n;

    int result = 0;
    while (n--) {
        string t; cin >> t;
        result += (s.substr(0, 5) == t.substr(0, 5));
    }

    cout << result;

	return 0;
}
