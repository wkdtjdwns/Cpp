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

int main() {
    fastIo;

    int k; cin >> k;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << "G";
        }

        for (int j = 0; j < k * 3; j++)
        {
            cout << ".";
        }

        cout << "\n";
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << ".";
        }

        for (int j = 0; j < k; j++)
        {
            cout << "I";
        }

        for (int j = 0; j < k; j++)
        {
            cout << ".";
        }

        for (int j = 0; j < k; j++)
        {
            cout << "T";
        }

        cout << "\n";
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k * 2; j++)
        {
            cout << ".";
        }

        for (int j = 0; j < k; j++)
        {
            cout << "S";
        }

        for (int j = 0; j < k; j++)
        {
            cout << ".";
        }

        cout << "\n";
    }

    return 0;
}
