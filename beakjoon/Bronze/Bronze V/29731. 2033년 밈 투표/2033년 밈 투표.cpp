#include <iostream>
#include <string>
using namespace std;

int main() {

    string check[7] = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };

    int  n, i;
    string str;

    cin >> n; cin.ignore();
    while (n--)
    {
        getline(cin, str);
        for (i = 0; i < 7; i++) {

            if (str == check[i]) {
                break;
            }
        }
            
        if (i == 7)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

	return 0;
}
