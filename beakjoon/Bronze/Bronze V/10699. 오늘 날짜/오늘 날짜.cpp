#include <iostream>
using namespace std;

int main(void) {
    
    cout << "2024-05-14";

    return 0;
}

/* 왜 안되는 것인지 모르겠음...
#include <iostream>
#include <ctime>
using namespace std;

int main(void) {
    // time_t 자료형의 형태로 현재 시간을 반환함
    // (1970년 1월 1일 0시 0분 0초부터 현재까지 흐른 시간을 초로 나타낸 것)
    time_t timer = time(NULL);

    // struct tm의 구조체의 형태로 t에 저장됨.
    struct tm* t = localtime(&timer);

    // tm_year : 1900부터 시작, tm_mon : 0 ~ 11
    cout << t->tm_year + 1900 << "-";
    cout.width(2); // 두 자릿수로 고정함.
    cout.fill('0'); // 숫자가 없는 칸을 0으로 채움

    cout << t->tm_mon + 1 << "-";
    cout.width(2);
    cout.fill('0');

    cout << t->tm_mday;

    return 0;
}
*/
