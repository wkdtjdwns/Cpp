#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int s, system, result, sf = 0, systemf = 0; cin >> s >> system;
    while (s--)
    {
        int s, people; cin >> s >> people;
        if (s != people) {
            sf = 1;
        }
    }

    while (system--)
    {
        int s, people; cin >> s >> people;
        if (s != people) {
            systemf = 1;
        }
    }

    if (sf == 0 && systemf) {
        cout << "Why Wrong!!!\n";
    }

    else if (sf == 0 && systemf == 0) {
        cout << "Accepted\n";
    }

    else {
        cout << "Wrong Answer\n";
    }

    return 0;
}
