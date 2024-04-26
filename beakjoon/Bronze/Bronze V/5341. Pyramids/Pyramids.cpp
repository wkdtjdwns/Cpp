#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    while (true)
    {
        int blocks = 0;
        int n = 0;
        cin >> n;

        for (int i = 1; i <= n; i++) blocks += i;
        if (n == 0) break;

        cout << blocks << "\n";
    }

    return 0;
}
