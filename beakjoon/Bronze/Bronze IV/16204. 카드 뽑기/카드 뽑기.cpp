#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    cout << min(m, k) + n - max(m, k);
	return 0;
}
