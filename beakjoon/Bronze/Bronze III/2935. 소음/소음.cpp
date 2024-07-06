#include <iostream>
using namespace std;

int main() {

    string a, b;
    char op;

    cin >> a >> op >> b;

    int aSize = a.length();
    int bSize = b.length();

    if (op == '*') {
        int totalSize = aSize + bSize - 2;
        cout << '1';

        for (int i = 0; i < totalSize; i++) {
            cout << 0;
        }
    }

    else {
        if (aSize == bSize) {
            cout << '2';

            for (int i = 0; i < bSize - 1; i++) {
                cout << '0';
            }
        }

        else if (aSize != bSize) {
            int a = max(aSize, bSize);
            int b = min(aSize, bSize); 
            for (int i = a; i > 0; i--) {
                if (i == a || i == b) {
                    cout << '1';
                }
                else {
                    cout << '0';
                }
            }
        }
    }

	return 0;
}
