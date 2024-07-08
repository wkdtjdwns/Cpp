#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string k; cin >> k;
        if ((k[k.size() - 1] - '0') % 2 == 0) {
            cout << "even\n";
        }

        else {
            cout << "odd\n";
        }
    }

    return 0;
}
