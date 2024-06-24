#include<iostream>
using namespace std;

int main() {

    int Str, Dex, Int, Luk, n;
    cin >> Str >> Dex >> Int >> Luk >> n;

    int totalStatus = Str + Dex + Int + Luk;

    if (totalStatus < (4 * n)) {
        cout << (4 * n) - totalStatus;
    }

    else {
        cout << 0;
    }

	return 0;
}
