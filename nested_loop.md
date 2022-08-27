#중첩 반복문

*1학년 1반부터 6학년 7반까지 모두 프린트하는 프로그램
```c
#include <stdio.h>

int main(void) {
  int i = 1;
  do {
    int j = 1;
    do {
      printf("%d학년 %d반\n", i, j++);
    } while (j < 8);
    ++i;
  } while (i < 7);
  ```
  ```c
#include <stdio.h>

 for (int m = 1; m < 7; ++m) {
    for (int n = 1; n < 8; ++n) {
      printf("%d학년 %d반\n ", m, n);
    }
  }
```
*1~5까지 5번 반복하는 프로그램
```c
#include <stdio.h>

for (int p = 1; p < 6; ++p) {
    for (int q = 1; q < 6; ++q) {
      printf("%d ",q);
    }
      printf("\n");
  }
```
*1,2,3,...,n까지의 수를 직각삼각형 형식으로 나타냄  
*예: n=5  
1  
12  
123  
1234  
12345  
```c
#include <stdio.h>

int main(void) {
  int i; scanf("%d", &i);
  for (int s = 1; s <= i; ++s) {
    for (int f = 1; f <= s; ++f) {
      printf("%d ", f);
    }
    printf("\n");
  }
  return 0;
}
```
```c
  for (int s = i; s >= 1; --s) {
    for (int f = 1; f <= s; ++f) {
      printf("%d ", f);
    }
    printf("\n");
  }

  for (int f = i; f > 0; --f) {
    for (int s = f; s <= i; ++s) {
      printf("%d ", s);
    }
    printf("\n");
  }

  for (int s = i; s >= 1; --s) {
    for (int f = s; f >= 1; --f) {
      printf("%d ", f);
    }
    printf("\n");
  }
```
