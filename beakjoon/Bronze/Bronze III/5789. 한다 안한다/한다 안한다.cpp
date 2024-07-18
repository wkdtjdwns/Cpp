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
    while (n--)
    {
        string str; cin >> str;
        if (str[str.size() / 2 - 1] == str[str.size() / 2]) {
            cout << "Do-it\n";
        }

        else {
            cout << "Do-it-Not\n";
        }
    }

	return 0;
}
