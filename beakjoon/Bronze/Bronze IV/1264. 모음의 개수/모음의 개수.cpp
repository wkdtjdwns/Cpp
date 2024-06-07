#include <iostream>
#include <string>
using namespace std;

char c[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

int main()
{
	int cnt;
	string str;

	while (true) {
		cnt = 0;
		getline(cin, str);
		
		if (str == "#") {
			break;
		}

		for (int i = 0; i < str.length(); i++) {

			for (int j = 0; j < 10; j++) {
				if (str[i] == c[j]) {
					cnt++;
					break;
				}
			}
		}
		cout << cnt << "\n";
	}

	return 0;
}
