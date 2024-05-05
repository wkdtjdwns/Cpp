#include <iostream>
using namespace std;

int main() {

	int n;
	string str;

	cin >> n;

	while (n--) {
		cin >> str;
		cout << str[0] << str[str.length() - 1] << '\n';
	}

	return 0;
}
