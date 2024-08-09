#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);

using namespace std;

vector<int> getPrime(const int& max) {
    vector<bool> isPrime(max + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= max; i++)
    {
        if (isPrime[i]) {
            for (int j = i * i; j <= max; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= max; i++)
    {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    fastIo;

    int n; cin >> n; vector<int> primes = getPrime(1000);
    cout << n << "\n";
    cout << "1 2 ";

    int e = 2;
    for (int i = 3; i < n; i++)
    {
        e++;
        cout << e << " ";
    }

    for (int prime : primes)
    {
        if (prime > e) {
            cout << prime << "\n";
            break;
        }
    }

    return 0;
}
