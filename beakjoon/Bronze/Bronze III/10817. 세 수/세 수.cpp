#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define ll long long
#define fastIo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	fastIo;

	int nums[3] = { 0, };
	for (int i = 0; i < 3; i++)
	{
		cin >> nums[i];
	}

	sort(nums, nums + 3);
	cout << nums[1];

	return 0;
}
