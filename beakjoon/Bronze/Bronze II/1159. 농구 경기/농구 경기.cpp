#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int alphabet[26];
int main() {
    fastIo;

    int n; cin >> n;
  	for (int i = 0; i < n; i++) {
  		string str; cin >> str;
  		alphabet[str[0] - 'a']++;
  	}
  
  	bool isPredaja = true;
  	for (int i = 0; i < 26; i++) {
  		if (alphabet[i] >= 5) {
  			cout << "abcdefghijklmnopqrstuvwxyz"[i];
  			isPredaja = false;
  		}
  	}
  
  	if (isPredaja) {
  		cout << "PREDAJA";
  	}

    return 0;
}
