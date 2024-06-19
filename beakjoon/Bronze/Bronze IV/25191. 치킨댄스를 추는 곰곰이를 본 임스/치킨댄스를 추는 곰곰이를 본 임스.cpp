#include<iostream>
using namespace std;

int main() {

	int n, a, b;
	cin >> n >> a >> b;
	
	int result = min(n, (a / 2 + b));
	cout << result;

	return 0;
}
