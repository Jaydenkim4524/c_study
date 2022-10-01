#포인터 연습 두개  
*포인터는 배열된 값을 지시한다  
*(저장 시 *, 주소 출력 & 쓴다)  
*(또 일반 값을 출력하는 경우에 *pn 깉이 쓴다)
```c
#include <stdio.h>

int main(void) {
  int a; double b; char c;
  int *pa; double *pb; char *pc;

  a=153; b=12.7; c= 'J';
  pa=&a;pb=&b;pc=&c;
  printf("pa=%x pb=%x pc=%x\n",pa,pb,pc);
  printf("&a=%p &b=%p &c=%p\n",&a,&b,&c);

  printf("a=%d b=%d c=%d\n",a,b,c);
  printf("*pa=%d *pb=%lf *pc=%c\n",*pa,*pb,*pc);
  return 0; 
}
```

```c
#include <stdio.h>

int main(void) {
  int n;
  int *pn, *pr;
  int ar[10]={10,20,30,40,50,60,70,80,90,100};

  n=49;
  pn=&n;
  pr=&ar[2];
  printf("%d %d\n",*pn, *pr);

  return 0;
}
```
*그럼 이 긴 코드도 쳐보자
```c
#include <stdio.h>

int main(void) {
  double f1, f2, f3;
  double *p1, *p2, *p3;

  p1=&f1;
  p2=&f2;
  p3=&f3;

  printf("실수 입력: ");
  scanf("%lf",&f1);
  printf("실수 입력: ");
  scanf("%lf",&f2);
  f3=*p1+*p2;
  printf("%lf+%lf=%lf\n",f1,f2,*p3);

  printf("실수 입력: ");
  scanf("%lf",p1);
  printf("실수 입력: ");
  scanf("%lf",p2);
  *p3=f1-f2;
  printf("%lf-%lf=%lf\n",*p1,*p2,f3);

  printf("실수 2개 입력 : ");
  scanf("%lf %lf", p1, &f2);
  *p3=f1* *p2;
  printf("%lf*%lf=%lf\n",f1,*p2,*p3);
  return 0;
}
```
