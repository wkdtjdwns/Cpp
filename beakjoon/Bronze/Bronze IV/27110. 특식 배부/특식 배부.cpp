#include<iostream>
using namespace std;

int main() {

	int n, a, b, c;
	cin >> n >> a >> b >> c;

    int abc[] = { a, b, c };
    int total = 0;
    for (int num : abc) {
        if (num > n) {
            total += n;
        }

        else {
            total += num;
        }
    }

    cout << total;

	return 0;
}
