#include <iostream>
using namespace std;

int main() {
    
    int N = 0;
    // C++은 배열 크기에 동적 값을 넣을 수 없음. (변수 사용 불가)
    int nums[101]; // 입력이 100보다 작거나 같기 때문에 101로 설정함.
    int v = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    cin >> v;
    
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (nums[i] == v) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
