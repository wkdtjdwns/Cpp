#include<iostream>
using namespace std;

int main() {

	int x, n, a, b;
	cin >> x >> n;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		sum += (a * b);
	}

	string result = (sum == x) ? "Yes" : "No";
	cout << result;

	return 0;
}
