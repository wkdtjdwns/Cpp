#include <iostream>
using namespace std;

int main() {

    int x = 100;
    int y = 100;

    // 연산을 하기 전 x값 확인
    cout << "x : " << x << "\n";

    int sum = x++ + y;

    // 증감 연산자를 앞에 쓸 때의 연산
    cout << "x++ + y : " << sum << "\n";

    // 연산을 하고 나서 x값 확인
    cout << "x : " << x << "\n";
    return 0;
}

/* 
 * x++ + y : 200
 * x : 101
 */
