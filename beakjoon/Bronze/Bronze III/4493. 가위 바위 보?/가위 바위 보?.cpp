#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    int n, a; cin >> n;
    char p1, p2;
    for (int i = 0; i < n; i++) {
        int p1Win = 0, p2Win = 0;
        cin >> a;

        for (int i = 0; i < a; i++) {
            cin >> p1 >> p2;

            if (p1 == 'R') {
                if (p2 == 'R') {
                    p1Win++;
                    p2Win++;
                }

                else if (p2 == 'S') {
                    p1Win++;
                }

                if (p2 == 'P') {
                    p2Win++;
                }
            }

            else if (p1 == 'S') {
                if (p2 == 'R') {
                    p2Win++;
                }

                else if (p2 == 'S') {
                    p1Win++;
                    p2Win++;
                }

                if (p2 == 'P') {
                    p1Win++;
                }
            }

            else if (p1 == 'P') {
                if (p2 == 'R') {
                    p1Win++;
                }

                else if (p2 == 'S') {
                    p2Win++;
                }

                if (p2 == 'P') {
                    p1Win++;
                    p2Win++;
                }
            }
        }

        if (p1Win > p2Win) {
            cout << "Player 1" << "\n";
        }

        else if (p2Win > p1Win) {
            cout << "Player 2" << "\n";
        }

        else if (p1Win == p2Win) {
            cout << "TIE" << "\n";
        }
    }

    return 0;
}
