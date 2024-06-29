#include <iostream>
#include <vector>
using namespace std;

int main() {

    int age;
    vector <int> v;
    while (true)
    {
        cin >> age;


        if (!age) {
            break;
        }

        v.resize(age * 2);

        int leaves = 1;
        for (int i = 0; i < 2 * age; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < age; i++) {
            int splitingFactor = v[i * 2];
            int cut = v[i * 2 + 1];

            leaves = leaves * splitingFactor - cut;
        }

        cout << leaves << '\n';
    }

	return 0;
}
