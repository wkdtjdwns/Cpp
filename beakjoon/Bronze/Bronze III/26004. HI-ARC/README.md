# [HI-ARC](https://www.acmicpc.net/problem/26004)

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞힌 사람 | 정답 비율 |
| --- | --- | --- | --- | --- | --- |
| 1 초 | 1024 MB | 1047 | 810 | 718 | 77.790% |

## 문제

![image](https://upload.acmicpc.net/0a404cc6-6d02-4bf4-a64f-3d2f6f955e84/-/crop/295x287/151,70/-/preview/)

당신은 𝐇𝐈-𝐀𝐑𝐂의 열렬한 팬이다. 따라서 위의 이모지를 만들고 싶어 한다.

현재 N 길이의 문자열 S를 가지고 있다. 이모지를 하나 만들기 위해선 𝐇 𝐈 𝐀 𝐑 𝐂 각 문자가 하나씩 필요하다. 이모지를 최대 몇 개 만들 수 있는지 구해보자.

## 입력

첫째 줄에 문자열 S의 길이 정수 N이 주어진다. (1 ≤ N ≤ 100000)

둘째 줄에 문자열 S가 주어진다. 문자열 S의 모든 문자는 영어 대문자이다.

## 출력

첫째 줄에 주어진 문자열 S로 만들 수 있는 이모지의 최대 개수를 출력한다.

## 예제 입력 1

```
12
HIARCCRAIHAS

```

## 예제 출력 1

```
2

```

𝐇가 2개 𝐈가 2개 𝐀가 3개 𝐑이 2개 𝐂가 2개로 𝐇𝐈-𝐀𝐑𝐂 ****이모지를 2개 만들 수 있다.

## 예제 입력 2

```
4
HIAR

```

## 예제 출력 2

```
0

```

𝐂가 존재하지 않아 𝐇𝐈-𝐀𝐑𝐂를 만들 수 없다.

## 예제 입력 3

```
5
HIARC

```

## 예제 출력 3

```
1
```