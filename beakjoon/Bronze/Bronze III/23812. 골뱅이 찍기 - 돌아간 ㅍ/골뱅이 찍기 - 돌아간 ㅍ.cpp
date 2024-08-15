#include <iostream>
#include <algorithm>
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

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }

        for (int j = 0; j < n * 3; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 5; j++)
        {
            cout << "@";
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }

        for (int j = 0; j < n * 3; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 5; j++)
        {
            cout << "@";
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }

        for (int j = 0; j < n * 3; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n; j++)
        {
            cout << "@";
        }

        cout << "\n";
    }

    return 0;
}
