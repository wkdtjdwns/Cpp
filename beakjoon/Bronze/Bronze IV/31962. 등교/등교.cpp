#include<iostream>
using namespace std;

int main() {

    int n, x; cin >> n >> x;

    int result = -1;
    while (n--) {
        int s, t; cin >> s >> t;
        if (s + t > x) continue;
        result = max(result, s);
    }

    cout << result;

	return 0;
}
