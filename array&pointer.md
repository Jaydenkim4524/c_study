#오늘은 저번에 했던 2차원 배열과 poiter을 접목시키자  
*먼저 %ar[0]과 ar의 값을 비교해보자
```c
#include <stdio.h>

int main(void) {
  int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int br[7];

  printf("배열의 이름 : %d, %d\n", ar, &ar[0]);
  printf("배열의 이름 : %d, %d\n", br, &br[0]);
  return 0;
}
```
*
