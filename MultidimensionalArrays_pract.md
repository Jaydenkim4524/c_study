#오늘은 4차원 배열 연습을 해볼 것입니다  
*먼저 2차원 배열을 복습합시다!  
*1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12가 4줄로 3개씩 출력됩니다
```c
#include <stdio.h>

int main(void) {
  int ar2[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", ar2[i][j]);
    }
    printf("\n");
  }
  return 0;
}
```
*이번엔 while문!
```c
#include <stdio.h>

int main(void) {
  int ar2[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int i, j;

  while (i<3){
    while (j<4){
      printf("%d ", ar2[i][j]);
      j++;
    }
  }
  printf("\n");
  i++;
  j=0;
  return 0;
}
```
