# System Functions
* 정렬 하기
* 문자의 덧셈과 뺄셈, 비교 연산 하기 -> ASCII 코드 이용
* 포인터의 문자열은 -> 주솟값으로 찾기
* 문자열과 배열을 이용한 것은 주소가 다름!!
* 문자열은 NULL 세어주기 항상 기억!!
* 문자열, 배열, 포인터까지 포함한 것은 -> strcmp(글자 비교) 같으면 0, 작으면 -1, 크면 1 출력됨 / strx(Null 포함 x, 글자수 세기) / strcat(뒤 문자를 더해 앞의 것으로 만들기)
```c
#include <stdio.h>
#include <string.h>

int main(void) {
  char start[15] = "C3";
  char end[15] = "coding";
  int len;

  printf("start = %s %d\n", start, strlen(start));
  printf("end = %s %d\n", end, strlen(end));

  strcat(start, end);
  len = strlen(start);
  printf("%s %d\n", start, len);

  return 0;
}
```
* 메모리 영역은 코드, 데이터, 힘, 스택으로 이루어져 있다
```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p;

  p = (int *)malloc(sizeof(int) * 5);

  for (int i = 0; i < 5; i++) {
    p[i] = i;
    printf("%d", p[i]);
  }
  printf("\n");

  for (int i = 0; i < 5; i++) {
    printf("%d ", *p + 1);
  }
  return 0;
}
```
