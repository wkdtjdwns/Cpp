#include<iostream>
using namespace std;

int main() {

    int n, width, height;
    cin >> n;

    int result = 0;
    while (n--) {
        cin >> width >> height;

        switch (width) {
            case 136: result += 1000; break;
            case 142: result += 5000; break;
            case 148: result += 10000; break;
            default: result += 50000; break;
        }
    }

    cout << result;

	return 0;
}
