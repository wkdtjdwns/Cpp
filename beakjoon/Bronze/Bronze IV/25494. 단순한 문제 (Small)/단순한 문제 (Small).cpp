#include<iostream>
using namespace std;

int main() {

	int n, x, y, z;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y >> z;
		cout << min(min(x, y), z) << "\n";
	}

	return 0;
}
