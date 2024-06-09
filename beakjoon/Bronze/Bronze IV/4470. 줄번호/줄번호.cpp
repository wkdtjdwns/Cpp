#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n; cin.ignore();

	string str;
	for (int i = 1; i <= n; i++) {
		getline(cin, str);

		cout << i << ". " << str << "\n";
	}

	return 0;
}
