# I/O Buffer
* scanf나 printf가 버퍼를 가지고 있는지 확인하기
```c
#include <stdio.h>

int main(void) {
  int n;

  scanf("%d", &n);
  printf("%d", n);
  return 0;
}
```
* 또 다른 예제 하기
```c
#include <stdio.h>

int main(void) {
  int a, b, c;

  scanf("%d", &a);
  printf("a = %d\n", a);
  scanf("%d%d", &a, &b);
  printf("a = %d b = %d\n", a, b);
  scanf("%d%d%d", &a, &b, &c);
  printf("a = %d b = %d c = %d\n", a, b, c);
  return 0;
}
```
```c
#include <stdio.h>

int main(void) {
  char ch;

  scanf("%c", &ch);
  printf("%c %d", ch, ch);

  return 0;
}
```
* 어? 문자를 사요할땐 tab=9, space=32, Enter=10 이 나온다!  
* 결론은 문자는 ASCII코드를 사용한다
```c
#include <stdio.h>

int main(void) {
  int a;
  char b;

  scanf("%d", &a);
  scanf("%c", &b);
  printf("%d %c", a, b);
}
```
* 문자를 사용할 땐 항상 조심하자! 스페이스나 탭, 엔터도 값이 들어간다!!  
* 해결책은 --> getchar()을 사용하자  
* 한번 확인해보자!! 
* -->
```c
#include <stdio.h>

int main(void) {
  int a;
  char b;

  scanf("%d", &a);
  getchar();
  scanf("%c", &b);
  printf("%d %c", a, b);
}
```
* 이렇듯 문자를 사용할 땐 항상 조심하자! 스페이스나 탭, 엔터도 값이 들어간다!!  getchar()을 사용하자  
* 하지만!! 문자열은 다 생략된다
```c
#include <stdio.h>

int main(void) {
  char str[20];

  scanf("%s", str);
  printf("%s", str);

  return 0;
}
```
```c
#include <stdio.h>

int main(void) {
  char str1[15], str2[15];

  scanf("%s", str1);
  printf("str1 = %s\n", str1);
  scanf("%s%s", str1, str2);
  printf("str1 = %s\n", str1);
  printf("str2 = %s\n", str2);

  return 0;
}
```
* getchar()도 버퍼를 사용한다
```c
#include <stdio.h>

int main(void) {
  char ch1, ch2, ch3;

  ch1 = getchar();
  ch2 = getchar();
  ch3 = getchar();
  printf("ch1 = %d : %c\n", ch1, ch1);
  printf("ch2 = %d : %c\n", ch2, ch2);
  printf("ch3 = %d : %c\n", ch3, ch3);
  return 0;
}
```
* gets 이용하기
```c
#include <stdio.h>
#include <string.h>

int main(void) {
  char str[80];

  gets(str);
  printf("%s\n", str);
  puts(str);

  return 0;
}
```
