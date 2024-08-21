#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int n; cin >> n;
    int arr[36] = { 0 };
    for (int i = 0; i < n; i++)
    {
        int num; cin >> num;
        arr[num]++;
    }

    int sum = 0;
    for (int i = 3; i <= 35; i++)
    {
        if (arr[i - 1] == 0 && arr[i] != 0) {
            sum += i;
        }
    }

    cout << sum;

    return 0;
}
