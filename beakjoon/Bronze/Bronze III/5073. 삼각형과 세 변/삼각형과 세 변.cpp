#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {

    int abc[3];
    while (true)
    {
        for (int i = 0; i < 3; i++) { cin >> abc[i]; }
        if (abc[0] == 0 && abc[0] == abc[1] && abc[0] == abc[2]) { break; }
        sort(abc, abc + 3);

        if (abc[2] >= abc[1] + abc[0]) { cout << "Invalid" << '\n'; }
        else if (abc[0] != abc[1] && abc[1] != abc[2] && abc[0] != abc[2]) { cout << "Scalene" << '\n'; }
        else
        {
            if (abc[0] == abc[1] && abc[1] == abc[2]) { cout << "Equilateral" << '\n'; }
            else { cout << "Isosceles" << '\n'; }
        }
    }

    return 0;
}
