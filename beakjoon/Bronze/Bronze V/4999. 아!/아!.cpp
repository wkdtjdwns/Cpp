#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string me, doctor;
    cin >> me >> doctor;

    if (me.length() >= doctor.length()) cout << "go";
    else cout << "no";

    return 0;
}
