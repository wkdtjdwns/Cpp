#include <iostream>
using namespace std;

string n;
int result[5];

int main() {

    cin >> n;

    for (int i = 0; i < n.size(); i++) {
        if (n[i] == 'M') result[0]++;
        if (n[i] == 'O') result[1]++;
        if (n[i] == 'B') result[2]++;
        if (n[i] == 'I') result[3]++;
        if (n[i] == 'S') result[4]++;
    }

    for (int i = 0; i < 5; i++) {
        if (result[i] == 0) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
