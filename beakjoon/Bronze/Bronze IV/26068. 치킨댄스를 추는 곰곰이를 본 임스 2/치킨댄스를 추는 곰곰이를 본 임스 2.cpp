#include<iostream>
using namespace std;

int main() {

	char d, hyphen;
	int n, x;
	cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> d >> hyphen >> x;
		if (x <= 90) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
