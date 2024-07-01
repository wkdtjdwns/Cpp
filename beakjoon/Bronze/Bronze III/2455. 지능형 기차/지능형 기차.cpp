#include<iostream>
using namespace std;

int main() {

    int result = 0;
    int now = 0;

    for (int i = 0; i < 4; i++) {
        int out, in; cin >> out >> in;

        now -= out;
        now += in;
        result = max(result, now);
    }

    cout << result;

	return 0;
}
