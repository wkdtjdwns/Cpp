#include <iostream>
using namespace std;

int main() {
    
    int t; cin >> t;
    while (t--) {
        long long student, totalCandy = 0, candy;
        cin >> student;

        for (int i = 0; i < student; i++) {
            cin >> candy;
            totalCandy = (totalCandy + candy) % student;
        }

        if (totalCandy % student) { cout << "NO\n"; }
        else { cout << "YES\n"; }
    }
}
