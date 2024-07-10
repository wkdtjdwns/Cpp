#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    int abc[3]; cin >> abc[0] >> abc[1] >> abc[2];
    sort(abc, abc + 3);

    string str; cin >> str;
    for (char c : str) {
        if (c == 'A') {
            cout << abc[0] << " ";
        }

        else if (c == 'B') {
            cout << abc[1] << " ";
        }

        else {
            cout << abc[2] << " ";
        }
    }


    return 0;
}
