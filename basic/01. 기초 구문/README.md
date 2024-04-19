# 기초 구문

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

1. `#include <iostream>` : 헤더 파일 라이브러리를 사용하는 것임.
    
    - `header file(헤더 파일)`, `include file(인클루드 파일)`
      
        - **→ 컴파일러에 의해 다른 소스 파일에 자동으로 포함된 소스 코드의 파일**
          
2. `using namespace std;`  : 표준 라이브러리의 개체 및 변수 이름을 사용할 수 있음을 의미.
    - 1번과 2번은 파일을 생성할 때마다 생김. → 거의 신경 안 써도 됨.
      
3. 빈 행임. (무시하면 됨)

4. C++ 프로그램에 항상 나오는 `int main()` 함수임.
    - `중괄호 { }` 안의 모든 코드가 실행됨.

5. `cout` (”see-out”으로 읽음) : 텍스트를 출력 또는 인쇄 하기 위해 삽입 연산자 `<<`와 함께 사용되는 개체임.
    - **참고**
        - C++의 모든 구문은 `; (세미콜론)` 으로 끝남.
        - `int main () { cout << "Hello World! "; return 0; }` 도 가능하긴 함.

6. `return 0`  : 주요 기능을 종료한다고 생각하면 편함.
