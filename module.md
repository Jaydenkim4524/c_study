# 모듈 Module
* 모듈을 이용하여 실행코드 예상하기
```c
#include <stdio.h>

int main(void) {
  int a, b;

  a = 12;
  b = 20;
  printf("a=%d, b=%d, c=%d\n", a, b);
  {
    int a, c;

    a = 30;
    c = 50;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    a = 90;
    b = 45;
    c = 75;
  }

  printf("a = %d, b= %d \n", a, b);

  return 0;
}
```
* 함수와 모듈 이용하기
```c
#include <stdio.h>

void PrintFun1(int m, int n);
void PrintFun2(int m, int n);

int main(void) {
  int m, n;

  m = 10;
  n = 30;

  printf("main before : m = %d n = %d\n", m, n);
  PrintFun1(m, n);
  printf("main after : m = %d n = %d\n", m, n);

  return 0;
}

void PrintFun1(int m, int n) {
  printf("fun1 before : m = %d n = %d\n", m, n);
  m = m + 50;
  n = n * 10;
  PrintFun2(m, n);
  printf("fun1 after : m = %d n = %d\n", m, n);
}

void PrintFun2(int m, int n) {
  printf("fun2 before : m = %d n = %d\n", m, n);
  m = m + 50;
  n = n * 10;
  printf("fun2 after : m = %d n = %d\n", m, n);
}
```
* 두 정수 받아와 더하고 빼기
```c
#include <stdio.h>

int ga;
int gb;

void Sum();
void Difference();

int main(void) {
  printf("정수를 2개 입력 입력 : ");
  scanf("%d %d", &ga, &gb);
  Sum();
  Difference();
}

void Sum() { printf("%d + %d = %d\n", ga, gb, ga + gb); }

void Difference() {
  int diff;

  if (ga > gb) {
    diff = ga - gb;
    printf("%d - %d = ", ga, gb);
  } else {
    diff = gb - ga;
    printf("%d - %d = ", gb, ga);
  }
  printf("%d ", diff);
}
```
```c
#include <stdio.h>

void Ccube();
void Coding();

int main(void) {
  Ccube();
  Ccube();
  Ccube();
  Coding();
  Coding();
  Coding();
}

void Ccube() {
  int cnt = 0;

  cnt++;
  printf("%d 씨큐브\n", cnt);
}

void Coding() {
  static int cnt = 0;

  cnt++;
  printf("%d 코딩\n", cnt);
}
```
* static 변수 코드 끝날때 끝남  
* 전역 변수 파일의 모드 위치 사용가능(다른 파일은 불가)  
* 지역 } 괄호 끝날시에 끝남
* define 사용하기
```c
#include <stdio.h>
#define MAX 10
#define PI 3.141592
#define C3C "씨큐브코딩"
#define PRN printf
#define MACRO "## 매크로 상수 ##\n"
#define SUM(n, m) ((n) + (m))
#define SUB(s, b) ((s) - (b))

int main(void) {
  PRN(MACRO);
  PRN("MAX = %d\n", MAX);
  PRN("PI = %lf\n", PI);
  PRN("C3C = %s\n", C3C);
  PRN("%d\n", SUM(3, 8));
  PRN("%lf\n", SUM(3.6, 8.34));
  PRN("%d\n", SUB(13, 5));
  PRN("%lf\n", SUB(4.2, 3.4));
}
```
* 프로그램 파일 나눠서 작성하기  
* 먼저, main file 코드
#include <stdio.h>
#include "MenuModule.h"
#define ERROR "입력오류\n"

int main() {
  int menu = 0;
  int subm = 0;
  double subn = 0;

  while (menu != 3) {
    menu = MainMenu();
    switch (menu) {
    case 1:
      subm = IntMenu();
      printf("%d", subm);
      break;
    case 2:
      subn = IntMenu();
      printf("%lf", subn);
      break;
    }
  }
}
```
* 다음, 메뉴모듈 파일 코드
```c
int MainMenu() {
  int n;

  printf("\t### 사칙연산 ###\n");
  printf("\t1. 정수형 사칙연산\n");
  printf("\t2. 실수형 사칙연산\n");
  printf("\t3. 종료\n");
  printf("메뉴를 선택하세요 : ");
  scanf("%d", &n);

  return n;
}
int IntMenu() {
  int im;

  printf("\t 정수형 계산기 @@\n");
  printf("\t1. 덧셈\n\t2.뺄셈\n\t3.곱셈\n\t4.나눗셈\n\t5.뒤로\n");
  printf("메뉴를 선택하세요 : ");
  scanf("%d", &im);

  return im;
}

int DouMenu() {
  int im;

  printf("\t@@ 실수형 계산기 @@ \n");
  printf("\t1. 덧셈\n\t2.뺄셈\n\t3.곱셈\n\t4.\n\t5.뒤로\n");
  printf("메뉴를 선택하세요");
  scanf("%d", &im);

  return im;
}
```
