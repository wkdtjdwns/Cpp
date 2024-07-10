#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    int t; cin >> t;

    for (int i = 0; i < t; i++) {

        string str;
        cin >> str;

        int len = str.length();

        int arr[26] = { 0 };
        int cnt = 0;

        for (int i = 0; i < len; i++) {
            cnt = str[i] - 65;
            arr[cnt]++;
        }

        int sum = 0;

        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) {
                sum += i + 65;
            }
        }

        cout << sum << "\n";
    }

    return 0;
}
