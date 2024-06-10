#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 3; i++) {
        int h1, m1, s1, h2, m2, s2;
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

        int t1 = h1 * 3600 + m1 * 60 + s1;
        int t2 = h2 * 3600 + m2 * 60 + s2;
        int t = t2 - t1;

        int h = t / 3600 % 24;
        int m = t / 60 % 60;
        int s = t % 60;

        cout << h << " " << m << " " << s << "\n";
	}

	return 0;
}
