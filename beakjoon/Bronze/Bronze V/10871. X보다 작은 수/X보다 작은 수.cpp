#include <iostream>
using namespace std;

int main() {

	int N, X = 0;
	int A[10001];

	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> A[i];

		if (A[i] < X) {
			cout << A[i] << " ";
		}
	}

	return 0;
}
