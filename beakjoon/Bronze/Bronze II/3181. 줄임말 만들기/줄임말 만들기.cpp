#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
    fastIo;

		string str, temp; getline(cin, str);
		vector<string> v;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ')
			{
				v.push_back(temp);
				temp = "";
			}
	
			else {
				temp += str[i];
			}
		}
	
		v.push_back(temp);
		cout << char(v[0][0] - 'a' + 'A');
	
		for (int i = 1; i < v.size(); i++)
		{
			if (v[i] != "i" && v[i] != "pa" && v[i] != "te" && v[i] != "ni" && v[i] != "niti" && v[i] != "a" && v[i] != "ali" && v[i] != "nego" && v[i] != "no" && v[i] != "ili") {
				cout << char(v[i][0] - 'a' + 'A');
			}
		}

    return 0;
}
