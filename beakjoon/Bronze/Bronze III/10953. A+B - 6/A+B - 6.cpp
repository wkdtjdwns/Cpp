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

    int t, a, b; char comma; cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> comma >> b;
        cout << a + b << "\n";
    }

    return 0;
}
