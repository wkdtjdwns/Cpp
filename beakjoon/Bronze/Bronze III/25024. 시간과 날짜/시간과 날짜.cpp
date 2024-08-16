#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

int main() {
	fastIo;
	
	int t; cin >> t;
	for (int c = 0; c < t; c++)
	{
	    int x, y; cin >> x >> y;
	
	    if (x >= 0 && x <= 23 && y >= 0 && y <= 59) {
	        cout << "Yes ";
	    }
	
	    else {
	        cout << "No ";
	    }
	
	    if (x >= 1 && x <= 12) {
	        if ((x == 2 && y >= 1 && y <= 29) ||
	            ((x == 4 || x == 6 || x == 9 || x == 11) && y >= 1 && y <= 30) ||
	            ((x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) && y >= 1 && y <= 31)) {
	            cout << "Yes\n";
	        }
	
	        else {
	            cout << "No\n";
	        }
	    }
	
	    else {
	        cout << "No\n";
	    }
	}

	return 0;
}
