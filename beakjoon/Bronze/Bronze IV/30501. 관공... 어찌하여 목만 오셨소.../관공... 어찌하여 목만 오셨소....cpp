#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        if (name.find("S") != std::string::npos) {
            cout << name;
            break;
        }
    }

    return 0;
}
