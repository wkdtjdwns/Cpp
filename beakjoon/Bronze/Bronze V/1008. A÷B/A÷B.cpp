#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    cout.precision(12); // 실수를 12자리까지만 표현함.
    cout << fixed; // 소수점 아래로 고정함.

    // cout.unsetf(ios::fixed); // 고정 소수점 표기 해제

    cout << a / b;
    return 0;
}
