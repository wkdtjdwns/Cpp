#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		string result = (str.size() >= 6 && str.size() <= 9) ? "yes" : "no";
		cout << result << "\n";
	}

	return 0;
}
