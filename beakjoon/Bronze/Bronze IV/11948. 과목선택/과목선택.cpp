#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int abcd[] = { a, b , c,  d };
	sort(abcd, abcd + 4);

	int sum = abcd[1] + abcd[2] + abcd[3] + max(e, f);
	cout << sum;

	return 0;
}
