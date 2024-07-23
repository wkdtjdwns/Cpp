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

	int n; cin >> n;
	int nums[1000001];
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	sort(nums, nums + n);
	cout << nums[0] << " " << nums[n - 1];

	return 0;
}
