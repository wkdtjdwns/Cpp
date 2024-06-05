#include <iostream>
using namespace std;

int main() {

	int n, a, b;
	cin >> n >> a >> b;

	string result = (a < b) ? "Bus" : (a > b) ? "Subway" : "Anything";
	cout << result;

	return 0;
}
