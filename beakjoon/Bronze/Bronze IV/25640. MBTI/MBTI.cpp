#include <iostream>
using namespace std;

int main() {

	string myMbti;
	cin >> myMbti;

	int n;
	cin >> n;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		string yourMbti;
		cin >> yourMbti;

		if (myMbti == yourMbti) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
