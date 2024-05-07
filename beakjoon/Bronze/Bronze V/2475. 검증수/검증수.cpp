#include <iostream>
using namespace std;

int main()
{
	int nums[5];

	int temp = 0;

	for (int i = 0; i < 5; i++) cin >> nums[i];

	for (int n : nums) temp += (n * n);

	cout << temp % 10;

	return 0;
}
