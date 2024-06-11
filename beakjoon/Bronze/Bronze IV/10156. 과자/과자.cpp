#include <iostream>
using namespace std;

int main() {

	int k, n, m;
	cin >> k >> n >> m;

	int result = ((k * n) >= m) ? (k * n) - m : 0;
	cout << result;

    return 0;
}
