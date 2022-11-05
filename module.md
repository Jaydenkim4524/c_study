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
