#include <iostream>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	string result = ((n * 100) >= m) ? "Yes" : "No";
	cout << result;

	return 0;
}
