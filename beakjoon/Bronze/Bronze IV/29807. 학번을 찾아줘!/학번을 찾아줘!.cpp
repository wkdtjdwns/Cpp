#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;
    vector<int> v(5, 0);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }

    int result = 0;
    result += (v[0] > v[2] ? 508 : 108) * abs(v[0] - v[2]);
    result += (v[1] > v[3] ? 212 : 305) * abs(v[1] - v[3]);
    result += v[4] * 707;

    cout << result * 4763;

    return 0;
}
