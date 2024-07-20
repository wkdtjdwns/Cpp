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

    int t, candy, bs; cin >> t;
    while (t--)
    {
        cin >> candy >> bs;
        cout << "You get " << candy / bs << " piece(s) and your dad gets " << candy % bs << " piece(s)." << "\n";
    }

	return 0;
}
