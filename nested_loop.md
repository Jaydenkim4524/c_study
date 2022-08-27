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
