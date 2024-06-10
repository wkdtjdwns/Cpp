#include <iostream>
using namespace std;

int main() {

	int sang, jung, ha, cola, cider;
	cin >> sang >> jung >> ha >> cola >> cider;

    cout << min(min(sang, jung), ha) + min(cola, cider) - 50;

	return 0;
}
