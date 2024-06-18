#include<iostream>
using namespace std;

int main() {

	int result = 0;
	while (true) {
		int n;
		cin >> n;

		if (n == -1) {
			break;
		}

		result += n;
	}
	
	cout << result;

	return 0;
}
