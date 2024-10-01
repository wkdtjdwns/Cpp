#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#include <iomanip>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fixPrint(n) cout << fixed; cout.precision(n);
using namespace std;

vector<ll> getNextSequence(vector <ll> nums) {
    vector <ll> temp(4);
    temp[0] = abs(nums[0] - nums[1]);
    temp[1] = abs(nums[1] - nums[2]);
    temp[2] = abs(nums[2] - nums[3]);
    temp[3] = abs(nums[3] - nums[0]);
    return temp;
}

int main() {
    fastIo;

    while (true)
    {
        int cnt = 0;
        vector <ll> nums(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> nums[i];
        }
        
        if (!nums[0] && !nums[1] && !nums[2] && !nums[3]) {
            break;
        }

        while (!(nums[0] == nums[1] && nums[1] == nums[2] && nums[2] == nums[3]))
        {
            cnt++;
            nums = getNextSequence(nums);
        }

        cout << cnt << '\n';
    }

    return 0;
}
