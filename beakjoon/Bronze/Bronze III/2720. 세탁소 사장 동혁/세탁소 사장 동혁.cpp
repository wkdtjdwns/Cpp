#include <iostream>
using namespace std;

int main() {

    int t, pay; cin >> t;
    while (t--) {
        int q = 0, d = 0, n = 0, p = 0;
        cin >> pay;
        while (pay) {

            if (pay >= 25) {
                q++;
                pay -= 25;
            }

            else if (pay >= 10) {
                d++;
                pay -= 10;
            }

            else if (pay >= 5) {
                n++;
                pay -= 5;
            }

            else {
                p++;
                pay -= 1;
            }
        }
        
        cout << q << " " << d << " " << n << " " << p << "\n";
    }

    return 0;
}
