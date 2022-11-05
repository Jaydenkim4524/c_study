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
