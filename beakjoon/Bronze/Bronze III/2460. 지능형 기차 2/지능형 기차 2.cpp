#include<iostream>
using namespace std;

int main() {

    int result = 0;
    int now = 0;

    for (int i = 0; i < 10; i++) {
        int n, m; cin >> n >> m;

        now = now - n + m;
        result = max(result, now);
    }

    cout << result;

	return 0;
}
