#include <iostream>
using namespace std;

int main() {
    
    int max = -1;
    int xIndex = 0;
    int yIndex = 0;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            int n; cin >> n;
            if (n > max) {
                max = n;
                xIndex = i;
                yIndex = j;
            }
        }
    }

    cout << max << "\n";
    cout << xIndex << " " << yIndex;
}
