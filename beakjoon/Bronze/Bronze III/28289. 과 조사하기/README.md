# [과 조사하기](https://www.acmicpc.net/problem/28289)

| 시간 제한 | 메모리 제한 | 제출 | 정답 | 맞힌 사람 | 정답 비율 |
| --- | --- | --- | --- | --- | --- |
| 1 초 | 1024 MB | 1184 | 886 | 815 | 77.324% |

## 문제

대구소프트웨어마이스터고에서는 **2학년부터** 각자의 진로에 따라 다른 과를 가지게 된다.

- 프론트엔드, 백엔드, 게임 개발 등 여러 소프트웨어를 만드는 **소프트웨어개발과**.
- 라즈베리파이, 아두이노 등을 이용해 임베디드를 위한 소프트웨어를 개발하는 **임베디드소프트웨어개발과**.
- 그리고 작년부터 새로 생긴 인공지능을 배우며 개발하는 **인공지능소프트웨어개발과**.

학교에서는 학생들을 관리하기 쉽게 **1, 2반**에는 **소프트웨어개발과**, **3반**에는 **임베디드소프트웨어개발과**, **4반**에는 **인공지능소프트웨어개발과**로 나누어 반 편성을 한다.

midori는 동아리 학생들의 과 분포를 알아보기로 했다.

동아리 학생들의 명단이 주어지면 동아리에 소프트웨어개발과, 임베디드소프트웨어개발과, 인공지능소프트웨어개발과가 몇 명 있는지 알아보고 **아무런 과에도 속할 수 없는 1학년** 학생들도 몇 명이 있는지 알아보자.

## 입력

첫째 줄에는 동아리 학생들의 수 P가 주어진다. (1 ≤ P ≤ 100)

둘째 줄부터 P개의 줄에 걸쳐 각 줄마다 학생 한 명의 학년 GP, 반 CP, 번호 NP가 공백으로 구분되어 주어진다. (1 ≤ GP ≤ 3 ; 1 ≤CP ≤ 4; 1 ≤ NP ≤ 20) 학년 반 번호 (GP, CP, NP)가 같은 학생이 두 명 이상 주어지지 않는다.

주어지는 수는 모두 정수이다.

## 출력

첫째 줄에 동아리에 소속된 소프트웨어개발과 학생의 수를 출력한다.

둘째 줄에 동아리에 소속된 임베디드소프트웨어개발과 학생의 수를 출력한다.

셋째 줄에 동아리에 소속된 인공지능소프트웨어개발과 학생의 수를 출력한다.

넷째 줄에 동아리에 소속된 아무런 과에도 속하지 않는 1학년 학생의 수를 출력한다.

## 예제 입력 1

```
5
1 3 5
2 1 10
2 2 12
2 4 8
3 3 10

```

## 예제 출력 1

```
2
1
1
1

```

**소프트웨어개발과**는 2학년 1반, 2학년 2반 학생 각각 1명씩 있기에 **2명**, **임베디드소프트웨어개발과**는 3학년 3반 학생 **1명**, **인공지능소프트웨어개발과**는 2학년 4반 학생 **1명**, 그리고 **아무런 과에도 속하지 않는** 1학년 3반 학생 **1명**이 있다.
