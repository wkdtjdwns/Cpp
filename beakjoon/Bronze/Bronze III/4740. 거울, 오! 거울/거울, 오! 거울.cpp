#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {

    while (true) {
        string str; getline(cin, str);
        if (str == "***") { break; }

        for (int i = str.size() - 1; i >= 0; i--)
        {
            cout << str[i];
        }

        cout << "\n";
    }

    return 0;
}
