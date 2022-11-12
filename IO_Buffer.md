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

