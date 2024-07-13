#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {

    string str;
    int cnt = 0;

    while (getline(cin, str)) { cnt++; }
    cout << cnt;

    return 0;
}
