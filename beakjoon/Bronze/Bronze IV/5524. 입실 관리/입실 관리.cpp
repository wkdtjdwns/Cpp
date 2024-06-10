#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		for (int i = 0; i < str.size(); i++) {
			str[i] = tolower(str[i]);
		}

		cout << str << "\n";
	}

	return 0;
}
