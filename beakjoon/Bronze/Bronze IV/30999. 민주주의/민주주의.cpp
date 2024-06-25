#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int o = 0;
        int x = 0;

        for (int j = 0; j < m; j++) {
            char str;
            cin >> str;

            if (str == 'O') {
                o++;
            }

            else {
                x++;
            }
        }

        if (o > x) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
