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
* 또 다른 예제
```c
#include <stdio.h>
#include <string.h>

struct Person {
  char name[10];
  int age;
  double height;
};

int main(void) {
  struct Person m1;
  struct Person m2 = {"허난설헌", 13, 159.9};

  strcpy(m1.name, "허균");
  m1.age = 19;
  m1.height = 168.34;

  printf("m1:%c, %d, %.2f", m1.name, m1.age, m1.height);
  printf("m2:%c, %d, %.2f", m2.name, m2.age, m2.height);
  return 0;
}
```
* 이번엔 scanf를 이용해보자
```c
#include <stdio.h>
#include <string.h>

struct Person {
  char name[10];
  int age;
  double height;
};

int main(void) {
  struct Person m1;
  struct Person m2 = {"허난설헌", 13, 159.9};
  struct Person m3;
  scanf("%s", m3.name);
  scanf("%d", &m3.age);
  scanf("%lf", &m3.height);

  strcpy(m1.name, "허균");
  m1.age = 19;
  m1.height = 168.34;

  printf("m1:%s, %d, %.2f\n", m1.name, m1.age, m1.height);
  printf("m2:%s, %d, %.2f\n", m2.name, m2.age, m2.height);
  printf("m3:%s, %d, %.2f", m3.name, m3.age, m3.height);
  return 0;
}
```
