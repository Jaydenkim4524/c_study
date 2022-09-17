#간단한 배열 연습  
*a[i]를 이용하여 만들기  
*a[0], a[1]은 직법 쓰고, a[2], a[3]은 scanf로 받아오기
  
```c
#include <stdio.h>

int main(void) {
  int a[4];
  a[0]=12;
  a[1]=32;
  scanf("%d",&a[2]);
  scanf("%d",&a[3]);
  printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
}
```

*for문을 이용하여 값을 받아와 모든 값 출력하기

```c
#include <stdio.h>

int main(void) {
  int a[4];
  for (int i = 0; i < 4; i++) {
    scanf("%d", &a[i]);
  }
  printf("%d %d %d %d", a[0], a[1], a[2], a[3]);
}
```
