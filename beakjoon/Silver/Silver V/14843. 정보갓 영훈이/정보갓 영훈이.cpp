#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#include <iomanip>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

    int n; cin >> n;
    double score = 0.0;
    for (int i = 0; i < n; i++)
    {
        double s, a, t, m; cin >> s >> a >> t >> m;
        score += s * (1 + 1 / a) * (1 + m / t) / 4;
    }

    int p; cin >> p;
    vector<double> scores(p + 1);
    scores[0] = score;
    for (int i = 1; i <= p; i++)
    {
        cin >> scores[i];
    }

    sort(scores.begin(), scores.end());
    for (int i = 0; i <= p; i++)
    {
        if (scores[i] == score) {
            double rank = static_cast<double>(i) / (p + 1);
            cout << fixed << setprecision(2);
            if (rank >= 0.85) {
                cout << "The total score of Younghoon \"The God\" is " << score << ".";
            }

            else {
                cout << "The total score of Younghoon is " << score << ".";
            }

            break;
        }
    }

    return 0;
}
