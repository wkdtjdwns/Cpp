#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {

    fastIo;
    int n, result = 0; cin >> n;
    for (int i = 1; i <= 500; i++)
    {
        for (int j = i; j <= 500; j++)
        {
            if (j * j == i * i + n)
                result++;
        }
    }

    cout << result << '\n';

    return 0;
}
