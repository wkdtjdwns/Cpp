#include <iostream>
using namespace std;

int main() {

	int info1, math1, sci1, eng1;
	cin >> info1 >> math1 >> sci1 >> eng1;
	
	int info2, math2, sci2, eng2;
	cin >> info2 >> math2 >> sci2 >> eng2;

	cout << max((info1 + math1 + sci1 + eng1), (info2 + math2 + sci2 + eng2));

	return 0;
}
