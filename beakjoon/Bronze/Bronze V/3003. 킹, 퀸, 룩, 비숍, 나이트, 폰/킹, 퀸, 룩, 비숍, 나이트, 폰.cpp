#include <iostream>
using namespace std;

int main()
{
    int chess[] = { 1, 1, 2, 2, 2, 8 };
    int piece[] = { 0, 0, 0, 0, 0, 0 };

    for (int i = 0; i < 6; i++) cin >> piece[i];
    for (int i = 0; i < 6; i++) cout << (chess[i] - piece[i]) << " ";

    return 0;
}
