#include<iostream>
using namespace std;

int main() {

    for (int i = 0; i < 3; i++) {
        int n; cin >> n;
        long long s = 0, flow = 0;
        for (int j = 0; j < n; j++) {
            long long num; cin >> num;
            long long prev = s;
            s += num;

            if (num > 0 && prev > 0 && s < 0) flow++;
            if (num < 0 && prev < 0 && s > 0) flow--;
        }

        if (flow == 0) {
            if (s == 0) cout << '0' << "\n";
            else cout << (s > 0 ? '+' : '-') << "\n";
        }
        else {
            cout << (flow > 0 ? '+' : '-') << "\n";
        }
    }

	return 0;
}
