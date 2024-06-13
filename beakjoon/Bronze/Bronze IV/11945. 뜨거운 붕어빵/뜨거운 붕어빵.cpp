#include<iostream>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	string shape;
	for (int i = 0; i < n; i++) {
		cin >> shape;

		for (int j = m - 1; j >= 0; j--) {
			cout << shape[j];
		}

		cout << "\n";
	}

	return 0;
}
