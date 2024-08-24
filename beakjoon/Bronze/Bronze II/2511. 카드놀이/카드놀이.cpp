#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int a[10], b[10], scoreA = 0, scoreB = 0;
    char win = 'D';
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i]) {
            scoreA += 3;
            win = 'A';
        }

        else if (a[i] < b[i]) {
            scoreB += 3;
            win = 'B';
        }

        else {
            scoreA++;
            scoreB++;
        }
    }

    cout << scoreA << " " << scoreB << "\n";
    if (scoreA > scoreB) {
        cout << "A";
    }

    else if (scoreA < scoreB) {
        cout << "B";
    }

    else {
        cout << win;
    }

    return 0;
}
