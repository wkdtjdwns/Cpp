#include<iostream>
#include <string>
using namespace std;

int main() {

	bool check = false;
	for (int i = 1; i <= 5; i++) {
		string str; getline(cin, str);

		if (str.find("FBI") != string::npos) {
			cout << i << " ";
			check = true;
		}
	}

	if (!check) {
		cout << "HE GOT AWAY!";
	}

    return 0;
}
