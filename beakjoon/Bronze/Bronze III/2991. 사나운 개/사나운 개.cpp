#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a, b, c, d; cin >> a >> b >> c >> d;
    int deliver[3]; int result[3] = { 0,0,0 };
    
    for (int i = 0; i < 3; i++)
    {
        cin >> deliver[i];
        int dog1 = deliver[i] % (a + b);
        int dog2 = deliver[i] % (c + d);
        
        if (dog1 <= a && dog1 != 0) {
            result[i]++;
        }

        if (dog2 <= c && dog2 != 0) {
            result[i]++;
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << result[i] << '\n';
    }

	return 0;
}
