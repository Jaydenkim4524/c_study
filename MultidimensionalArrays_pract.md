#오늘은 다차원 배열 연습을 해볼 것입니다  
*2차원 배열을 공부합시다!  
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
*do while로도 만들어보자
```c
#include <stdio.h>

int main(void) {
  int ar2[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int i, j;
  do {
    do {
      printf("%d ", ar2[i][j]);
      j++;
    } while (j < 4);
    printf("\n");
    i++;
    j = 0;
  } while (i < 3);
}
```
*기본
```c
#include <stdio.h>

int main(void) {
  int i, j;
  int ar[6][9] = {{0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 2, 0},
                  {0, 0, 0, 0, 1, 0, 0, 0, 0}, {0, 2, 0, 1, 0, 0, 1, 0, 0},
                  {0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 1, 0, 0}};
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 9; j++) {
      printf("%d ", ar[i][j]);
      }
    printf("\n");
    }
}
```
*1개수 세기
```c
#include <stdio.h>   

int main(void) {
  int i, j;
  int k = 0;
  int ar[6][9] = {{0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 2, 0},
                  {0, 0, 0, 0, 1, 0, 0, 0, 0}, {0, 2, 0, 1, 0, 0, 1, 0, 0},
                  {0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 1, 0, 0}};
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 9; j++) {
      if (ar[i][j] == 1) {
        k++;
      }
    }
  }
  printf("%d\n", k);
}
```
*2의 행과 열 출력하기
```c
#include <stdio.h>   

int main(void) {
  int i, j;
  int k = 0;
  int ar[6][9] = {{0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 2, 0},
                  {0, 0, 0, 0, 1, 0, 0, 0, 0}, {0, 2, 0, 1, 0, 0, 1, 0, 0},
                  {0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 1, 0, 0}};
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 9; j++) {
      if (ar[i][j] == 2) {
        printf("행:%d, 열:%d\n", i,j);
      }
    }
  }
}
```
*2주변에 5 세우기
```c
#include <stdio.h>   

int main(void) {
  int i, j;
  int k = 0;
  int ar[6][9] = {{0, 0, 0, 1, 0, 0, 0, 0, 0}, 
                  {0, 0, 0, 0, 0, 0, 0, 2, 0},
                  {0, 0, 0, 0, 1, 0, 0, 0, 0},
                  {0, 2, 0, 1, 0, 0, 1, 0, 0},
                  {0, 0, 0, 1, 0, 0, 0, 0, 0},
                  {0, 0, 1, 0, 0, 0, 1, 0, 0}};
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 9; j++) {
      if (ar[i][j] == 2) {
        ar[i-1][j]=5;
        ar[i+1][j]=5;
        ar[i][j+1]=5;
        ar[i][j-1]=5;
      }
    }
  }

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 9; j++) {
      printf("%d ", ar[i][j]);
      }
    printf("\n");
  }
}
```
