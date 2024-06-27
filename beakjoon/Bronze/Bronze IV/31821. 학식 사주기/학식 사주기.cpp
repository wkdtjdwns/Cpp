#include<iostream>
using namespace std;

int main() {

    int n; cin >> n;
    int prices[11];
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int m; cin >> m;
    int result = 0;
    for (int j = 0; j < m; j++) {
        int b; cin >> b;
        result += prices[b - 1];
    }

    cout << result;

	return 0;
}
