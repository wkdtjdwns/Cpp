#include <iostream>
using namespace std;

int main() {
    
    int max = 0;
    int index = 0;
    for (int i = 1; i < 10; i++) {
        int n; cin >> n;
        if (n > max) {
            max = n;
            index = i;
        }
    }

    cout << max << "\n" << index;
}
