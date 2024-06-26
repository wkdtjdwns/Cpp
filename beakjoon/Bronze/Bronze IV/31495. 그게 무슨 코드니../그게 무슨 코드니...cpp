#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    cout << (str.length() <= 2 || str.front() != '\"' || str.back() != '\"' ? "CE" : str.substr(1, str.length() - 2));

    return 0;
}
