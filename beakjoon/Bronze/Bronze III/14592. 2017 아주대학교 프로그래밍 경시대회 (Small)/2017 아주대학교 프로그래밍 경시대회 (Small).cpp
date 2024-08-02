#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

struct Info {
    int score, commit, loaded, index;
};

bool cmp(Info a, Info b) {
    if (a.score == b.score) {
        if (a.commit == b.commit) {
            return a.loaded < b.loaded;
        }

        return a.commit < b.commit;
    }

    return a.score > b.score;
}

int main() {
    fastIo;

    int n; cin >> n;
    vector <Info> v; v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].score >> v[i].commit >> v[i].loaded;
        v[i].index = i + 1;
    }

    sort(v.begin(), v.end(), cmp);
    cout << v[0].index;

    return 0;
}
