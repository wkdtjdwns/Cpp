#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	string str;
	cin >> str;

	for (int i = n - 5; i < n; i++) {
		cout << str[i];
	}

	return 0;
}
