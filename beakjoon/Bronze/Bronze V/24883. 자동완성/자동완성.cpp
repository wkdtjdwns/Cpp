#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;

	switch (tolower(c)) {
		case 'n': cout << "Naver D2"; break;
		default: cout << "Naver Whale"; break;
	}

	return 0;
}
