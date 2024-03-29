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
* 또 다른 예제
```c
#include <stdio.h>
#include <string.h>

struct Adress {
  char name[10];
  char phone[20];
  char home[50];
};

int main(void) {
  struct Adress man1;
  struct Adress man2 = {"name", "phone", "home"};
  struct Adress man3;

  scanf("%s %s %s", man3.name, man3.phone, man3.home);
  strcpy(man1.name, "name");
  strcpy(man1.phone, "phone");
  strcpy(man1.home, "home");

  return 0;
}
```
* 똑같은 유형으로 더 연습해 봅시다
```c
#include <stdio.h>
#include <string.h>

struct Circle {
  double r;
  int s;
  int l;
};

int main(void) {
  struct Circle c;
  c.r = 4;
  c.s = c.r * 3.14 * c.r;
  c.l = 2 * 3.14 * c.r;

  printf("원의 넓이 : %d, 원의 둘레 : %d", c.s, c.l);
  return 0;
}
```
* 계속 같은 것으로 연습하니 좀 쉽네요.. ㅎㅎ  
* 이중 구조체 만들기^^
```c
#include <stdio.h>
#include <string.h>

struct Coordi {
  int x;
  int y;
};

struct Circle {
  struct Coordi cen;
  double r;
};
int main(void) {
  struct Circle c1;
  c1.cen.x = 5;
  c1.cen.y = 10;
  c1.r = 4.0;

  struct Circle c2 = {{4, 5}, 12.5};
  struct Circle c3;
  scanf("%d %d %d", &c3.cen.x, &c3.cen.y, &c3.r);

  printf("c1:%d %d %d\n", c1.cen.x, c1.cen.y, c1.r);
  printf("c2:%d %d %d\n", c2.cen.x, c2.cen.y, c2.r);
  printf("c3:%d %d %d", c3.cen.x, c3.cen.y, c3.r);
  return 0;
}
```
