#include <iostream>
using namespace std;

int main()
{
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        int score = 0;
        cin >> score;
        total += score;
    }

    cout << total;

    return 0;
}
