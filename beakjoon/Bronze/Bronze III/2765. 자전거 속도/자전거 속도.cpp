#include<iostream>
using namespace std;

int main() {

    int cnt = 0;
    double pi = 3.14159265359;
    while (true) {
        cnt++;
        double diameter, rotated, sec; cin >> diameter >> rotated >> sec;
        if (!rotated) { break; }

        double moved = diameter / (5280.0 * 12.0) * rotated * pi;
        printf("Trip #%d: %.2f %.2f\n", cnt, moved, moved / sec * 3600);
    }

    return 0;
}
