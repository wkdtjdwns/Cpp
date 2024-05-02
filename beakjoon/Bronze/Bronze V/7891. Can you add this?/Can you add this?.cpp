#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    int x, y;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        cout << (x + y) << "\n";
    }

    return 0;
}
