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

	string mbti; cin >> mbti;
	for (int i = 0; i < 4; i++)
	{
		switch (mbti[i])
		{
			case 'E': cout << "I"; break;
			case 'S': cout << "N"; break;
			case 'F': cout << "T"; break;
			case 'P': cout << "J"; break;
			case 'I': cout << "E"; break;
			case 'N': cout << "S"; break;
			case 'T': cout << "F"; break;
			case 'J': cout << "P"; break;
		}
	}
	
	return 0;
}
