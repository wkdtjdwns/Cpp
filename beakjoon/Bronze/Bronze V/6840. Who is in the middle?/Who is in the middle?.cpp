#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int weights[] = { 0, 0, 0 };
    for (int i = 0; i < 3; i++) cin >> weights[i];

    // sort(배열명, 배열명 + 정렬할 길이
    sort(weights, weights + 3); // 배열을 오름차순으로 정렬함
    cout << weights[1];

    return 0;
}
