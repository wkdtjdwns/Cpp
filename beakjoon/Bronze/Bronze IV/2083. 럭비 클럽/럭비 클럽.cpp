#include <iostream>
using namespace std;

int main()
{
	string name;
	int age;
	int weight;

	while (true) {
		cin >> name >> age >> weight;

		if (name == "#" && (age + weight) == 0) {
			break;
		}

		if (age > 17 || weight >= 80) {
			cout << name << " Senior\n";
		}
		
		else {
			cout << name << " Junior\n";
		}
	}

	return 0;
}
