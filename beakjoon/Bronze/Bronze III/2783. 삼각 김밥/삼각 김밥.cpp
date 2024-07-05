#include<iostream>
using namespace std;

int main() {

	int a, b; cin >> a >> b;

	double min = ((double)a / b);
	int n; cin >> n;
	for (int i = 0; i < n; i++) {

		cin >> a >> b;
		min = min > ((double)a / b) ? ((double)a / b) : min;
	}

	cout << min * 1000;

    return 0;
}
