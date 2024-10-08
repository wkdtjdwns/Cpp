# [타슈](https://www.acmicpc.net/problem/30018)

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞힌 사람 | 정답 비율 |
| --- | --- | --- | --- | --- | --- |
| 1 초 | 1024 MB | 1040 | 886 | 784 | 86.249% |

## 문제

타슈는 대전시에서 제공하는 공용자전거 서비스이다. 시민들은 각 무인대여소에 배치된 자전거를 대여해 이용할 수 있고, 이용이 끝난 후에는 다시 무인대여소에 반납해야 한다. 자전거를 대여한 대여소에 다시 반납할 필요 없이 아무 대여소에 반납하면 된다.

대전시는 N개의 대여소를 설치한 후, 자전거의 수요를 고려해서 각 대여소에 a1, a2, ⋯, aN개의 자전거를 배치하고 서비스를 시작했다. 그리고 얼마 뒤에 서비스의 품질 개선을 위해 잠시 타슈 서비스를 중단하고 모든 자전거를 대여소에 반납하게 했다. 다행히도 유실된 자전거는 없었지만, 각 대여소에 위치한 자전거의 개수가 b1, b2, ⋯, bN이 되었다.

대전시에서 일하는 영우는 타슈 서비스를 재개하기 전에 각 대여소에 위치한 자전거의 개수를 다시 a1, a2, ⋯, aN으로 만들려고 한다. 영우는 직접 발로 뛰면서 i번째 대여소에 위치한 자전거 한 대를 들어다가 j번째 대여소로 옮길 수 있다. 영우는 자전거를 최소 몇 번 옮겨야 하는지 구해보자.

## 입력

첫째 줄에 정수 N(2 ≤ N ≤ 100) 주어진다.

둘째 줄에 정수 a1, a2, ⋯, aN(1 ≤ ai ≤ 100)이 공백으로 구분되어 주어진다.

셋째 줄에 정수 b1, b2, ⋯, bN(1 ≤ bi ≤ 100)이 공백으로 구분되어 주어진다.

a1, a2, ⋯, aN은 b1, b2, ⋯, bN과 같다.

## 출력

각 대여소에 위치한 자전거의 개수를 a1, a2, ⋯, aN으로 만들기 위해서 자전거를 최소 몇 번 옮겨야 하는지 출력한다.

## 예제 입력 1

```
4
3 1 4 2
2 2 3 3

```

## 예제 출력 1

```
2

```

## 예제 입력 2

```
3
1 1 5
4 2 1

```

## 예제 출력 2

```
4

```

## 예제 입력 3

```
2
2 1
2 1

```

## 예제 출력 3

```
0
```
