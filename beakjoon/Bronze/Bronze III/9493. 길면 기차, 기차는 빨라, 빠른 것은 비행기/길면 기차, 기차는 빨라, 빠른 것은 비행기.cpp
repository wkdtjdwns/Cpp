#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

double m, a, b;

string getTimeString(double t) {
    string tmp;
    int ti = t, hour, minute, second;

    hour = ti / 3600;
    tmp += to_string(hour) + ":";
    ti %= 3600;

    minute = ti / 60;
    if (minute < 10) { tmp += "0"; }
    tmp += to_string(minute) + ":";
    ti %= 60;

    second = ti;
    if (second < 10) { tmp += "0"; }
    tmp += to_string(second);

    return tmp + "\n";
}

int main() {

    while (true) {
        cin >> m >> a >> b;
        if (!m && !a && !b) { break; }

        double aTime = m * 3600 / a;
        double bTime = m * 3600 / b;
        
        cout << getTimeString(round(aTime - bTime));
    }

    return 0;
}
