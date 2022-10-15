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
*간접 참조의 활용
```c
#include <stdio.h>

int main(void) {
  int ar[10] = {10,20,30,40,50,60,70,80,90,100};
  int i;

  *(ar+0) = 34;
  *(ar+1) = 21;

  printf("%d %d\n", ar[0], *(ar+0));
  printf("%d %d\n", ar[1], *(ar+1));
  printf("%d %d", *(ar+2), *(ar+3));
  return 0;
}
```
* 포인터를 이용하여 주솟값 출력하기
```c
#include <stdio.h>

int main(void) {
  int ar[3] = {1,2,3};
  int ar2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  printf("%d\n",ar);
  printf("%d\n",&ar[0]);

  printf("%d\n",ar2);
  printf("%d\n", &ar2[0][0]);

  printf("%d\n", &ar2[1][0]);
  return 0;
}
```
