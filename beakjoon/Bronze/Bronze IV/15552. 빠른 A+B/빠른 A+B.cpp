#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); // C, C++ 동기화 해제
	cin.tie(NULL); // 입력과 출력을 분리

	int t, a, b;

	cin >> t;
	for (int i = 0; i < t; i++) {

		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}
