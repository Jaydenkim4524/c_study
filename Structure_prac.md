# Structure 구조체
* 기본 연습코드  
* 변수를 이용한 좌푯값 구하기
```c
#include <stdio.h>

struct Coordi {
  int x;
  int y;
};

int main(void) {
  struct Coordi p1;
  struct Coordi p2 = {5, 9};
  struct Coordi p3;
  struct Coordi p4;

  p1.x = 2;
  p1.y = 3;

  printf("p1 좌표(%d, %d)\n", p1.x, p1.y);
  printf("p2 좌표(%d, %d)\n", p2.x, p2.y);
  return 0;
}
```
