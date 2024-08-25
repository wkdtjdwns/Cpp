#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int p; cin >> p;
    int sw = 0, em = 0, ai = 0, no = 0;
    for (int i = 0; i < p; i++) {
        int grade, classNum, num; cin >> grade >> classNum >> num;

        if (grade == 1) {
            no++;
        }

        else if (classNum <= 2) {
            sw++;
        }

        else if (classNum == 3) {
            em++;
        }

        else {
            ai++;
        }
    }

    cout << sw << "\n" << em << "\n" << ai << "\n" << no;

    return 0;
}
