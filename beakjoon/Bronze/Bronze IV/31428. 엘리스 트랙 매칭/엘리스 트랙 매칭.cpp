#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<char> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    char c;
    cin >> c;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (v[i] == c);
    }

    cout << cnt;

    return 0;
}
