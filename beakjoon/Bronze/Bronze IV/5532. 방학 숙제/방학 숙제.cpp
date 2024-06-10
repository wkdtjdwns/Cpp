#include <iostream>
using namespace std;

int main() {

	int l, a, b, c, d;
	cin >> l >> a >> b >> c >> d;

    int k = (a % c == 0) ? (a / c) : (a / c) + 1;
    int m = (b % d == 0) ? (b / d) : (b / d) + 1;

    int free = (k > m) ? l - k : l - m;
    cout << free;

	return 0;
}
