#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fastIo;

	string str; cin >> str;
	int alphabet[26] = { 0 };
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
		alphabet[str[i] - 65]++;
	}

	int max = 0;
	int index = -1;
	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i]) {
			max = alphabet[i];
			index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (i == index) {
			continue;
		}

		if (alphabet[i] == max) {
			cout << '?';
			return 0;
		}
	}

	cout << (char)(index + 65);

    return 0;
}
