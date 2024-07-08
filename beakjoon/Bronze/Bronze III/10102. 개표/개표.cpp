#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int v; cin >> v;
    
    string ab; cin >> ab;
    int a = 0, b = 0;

    for (char c : ab) {
        if (c == 'A') { a++; }
        else { b++; }
    }

    if (a > b) {
        cout << 'A';
    }

    else if (a < b) {
        cout << 'B';
    }

    else {
        cout << "Tie";
    }

    return 0;
}
