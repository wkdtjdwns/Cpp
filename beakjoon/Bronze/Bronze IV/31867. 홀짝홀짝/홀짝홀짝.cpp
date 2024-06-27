#include<iostream>
using namespace std;

int main() {

    int n; cin >> n;
    string k; cin >> k;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if ((k[i] - '0') & 1) cnt++;
        else cnt--;
    }

    cout << (cnt ? (cnt > 0) : -1);

	return 0;
}
