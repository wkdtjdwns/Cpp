#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int, int> m;
    for (int i = 0; i < 5; i++) {
        int x; cin >> x;
        m[x]++;
    }

    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second & 1) {
            cout << (it->first);
            return 0;
        }
    }
    
    cout << -1;

    return 0;
}
