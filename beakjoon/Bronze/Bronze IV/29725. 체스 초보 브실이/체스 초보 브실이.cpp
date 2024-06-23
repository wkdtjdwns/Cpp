#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    vector<string> v(8);
    for (int i = 0; i < 8; i++) {
        cin >> v[i];
    }

    int result = 0;
    for (int i = 0; i < 8; i++) for (int j = 0; j < 8; j++) {
        switch (v[i][j]) {
        case 'Q': result += 9; break;
        case 'R': result += 5; break;
        case 'B': result += 3; break;
        case 'N': result += 3; break;
        case 'P': result += 1; break;
        case 'q': result -= 9; break;
        case 'r': result -= 5; break;
        case 'b': result -= 3; break;
        case 'n': result -= 3; break;
        case 'p': result -= 1; break;
        default: break;
        }
    }

    cout << result;

    return 0;
}
