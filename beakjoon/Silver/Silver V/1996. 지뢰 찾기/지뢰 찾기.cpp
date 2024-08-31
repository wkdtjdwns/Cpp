#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int dr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dc[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
char board[1001][1001];
char result[1001][1001];

int main() {
    fastIo;

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n; c++)
        {
            if (board[r][c] != '.') {
                result[r][c] = '*';
                continue;
            }

            int cnt = 0;
            for (int i = 0; i < 8; i++)
            {
                int nr = r + dr[i];
                int nc = c + dc[i];
                if (0 > nr || nr >= n || 0 > nc || nc >= n) {
                    continue;
                }

                if (board[nr][nc] == '.') {
                    continue;
                }

                cnt += board[nr][nc] - '0';
            }

            if (cnt >= 10) {
                result[r][c] = 'M';
            }

            else {
                result[r][c] = cnt + '0';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}
