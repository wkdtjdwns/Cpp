#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main() {

    int students[31] = { 0, }; int a;
    for (int i = 0; i < 28; i++) {
        cin >> a;
        students[a] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (!students[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}
