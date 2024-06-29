#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<bool> precompute() {
    vector<bool> prime(1000001, true);
    prime[0] = prime[1] = false;
    for (int i = 4; i <= 1000000; i += 2) {
        prime[i] = false;
    }

    for (int i = 3; i * i <= 1000000; i += 2) {
        if (!prime[i]) {
            continue;
        }

        for (int j = i * i; j <= 1000000; j += i * 2) {
            prime[j] = false;
        }
    }

    return prime;
}

int main() {
    vector<bool> prime = precompute();
    string k; int l; cin >> k >> l;

    for (int i = 2; i < l; i++) {
        if (!prime[i]) {
            continue;
        }

        int r = 0;
        for (char c : k) {
            r = (10 * r + (c - '0')) % i;
        }
        if (r) {
            continue;
        }
        cout << "BAD " << i;

        return 0;
    }

    cout << "GOOD";

    return 0;
}
