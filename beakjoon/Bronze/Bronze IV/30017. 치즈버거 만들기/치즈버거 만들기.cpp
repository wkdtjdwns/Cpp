#include<iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    int result = 1;
    a--;

    while (a > 0 && b > 0) {
        result += 2;
        a--;
        b--;
    }

    cout << result;

	return 0;
}
