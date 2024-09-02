#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#include <iomanip>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

char flip(char c, int d) {
    if (d == 1) {
        if (c == 'd') {
            return 'q';
        }

        else if (c == 'q') {
            return 'd';
        }

        else if (c == 'b') {
            return 'p';
        }

        else {
            return 'b';
        }
    }

    else {
        if (c == 'd') {
            return 'b';
        }

        else if (c == 'b') {
            return 'd';
        }
        
        else if (c == 'q') {
            return 'p';
        }

        else {
            return 'q';
        }
    }

    return c;
}

int main() {
    fastIo;

    int n, d; cin >> n >> d;
    vector<string> board(n);
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = flip(board[i][j], d);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << board[i] << "\n";
    }

    return 0;
}
