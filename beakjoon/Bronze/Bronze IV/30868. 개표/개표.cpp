#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n / 5; i++) cout << "++++ ";
        for (int i = 0; i < n % 5; i++) cout << "|";

        cout << "\n";
    }
    
    return 0;
}
