# 변수 다중 선언

- 똑같은 자료형의 변수들은 한꺼번에 선언이 가능함.
- `자료형 변수명 = 값, 변수명 = 값;` 의 꼴,  `자료형 변수명, 변수명` 의 꼴로 선언함.

```c++
int x = 5, y = 6, z = 50;
cout << x + " " y + " " z;
// 61

string a, b, c;
a = b = c = "안녕 세상아!";
cout << a + b + c;
// 안녕 세상아!안녕 세상아!안녕 세상아!
```
