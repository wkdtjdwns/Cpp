#include <iostream>
using namespace std;

int main()
{
    int n, m;

    while (true)
    {
        cin >> n >> m;
        
        if (n + m == 0) break;

        string str = n > m ? "Yes" : "No";

        cout << str << "\n";
    }

    return 0;
}
