#include<iostream>
using namespace std;

int main() {

	int n, w, h, l;
	cin >> n >> w >> h >> l;

	int result = (w / l) * (h / l);
	n < result ? cout << n : cout << result;

	return 0;
}
