- 출력은 `cout` 와 `<<` 를 사용함.
- `cout` : “see-out”으로 발음 / `<<`  : 삽입 연산자 사용
- **출력의 기본**
    
    ---
    
    ```cpp
    #include <iostream>
    using namespace std;
    
    int main() {
      cout << "안녕 세상아!";
      cout << "안녕 세상아!";
      return 0;
    }
    
    // 안녕 세상아!안녕 세상아!
    ```
    
- **줄바꿈**
    
    ---
  
    - C++의 줄바꿈은 `“\n”`와 `endl`이 사용되지만 `“\n”`이 더 자주 사용됨.

    <br>

    ```cpp
    #include <iostream>
    using namespace std;
    
    int main() {
      cout << "안녕 세상아!\n";
      cout << "안녕 세상아!";
    	
      // 줄바꿈을 2번 해서 빈줄을 생성함.
      cout << endl;
      cout << endl;
    	
      cout << "안녕 세상아!" << endl;
      cout << "안녕 세상아!";
    	
      return 0;
    }
    
    // 안녕 세상아!
    // 안녕 세상아!
    
    // 안녕 세상아!
    // 안녕 세상아!
    ```
    
    ---
    
- **또 다른 이스케이프 문자**
    
    
    | 구분 | 설명 |
    | --- | --- |
    | \t | tab 효과 |
    | \\ | \를 삽입함. |
    | \” | “를 삽입함. |
