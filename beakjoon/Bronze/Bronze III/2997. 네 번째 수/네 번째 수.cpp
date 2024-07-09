#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int nums[3]; cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);

    if (nums[1] - nums[0] == nums[2] - nums[1]) {
        cout << nums[2] + (nums[1] - nums[0]);
    }

    else {
        cout << nums[2] - (nums[1] - nums[0]);
    }

    return 0;
}
