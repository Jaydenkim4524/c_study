# 함수 연습

* 4가지 종류의 함수 매개변수(o/x), 반환(o/x)  
* 1~n까지 출력하는 프로그램

```c
#include <stdio.h>

// 매개변수 X, 반환 x

void Sum1(){
  int a; scanf("%d", &a);
  int sum = 0;
  
  for (int i = 0; i <= a; i++) {
    sum += i;
  }
  printf("%d\n", sum);
}

//매개변수 o, 반환 x

void Sum2(int a){
  int sum = 0;
  
  for (int i = 0; i <= a; i++) {
    sum += i;
  }
  printf("%d\n", sum);
}

//매개변수 x, 반환 o

int Sum3(){
  int a; scanf("%d", &a);
  int sum = 0;
  
  for (int i = 0; i <= a; i++) {
    sum += i;
  }
  return sum;
}

//매개변수 x, 반환 o

int Sum4(int a){
  int sum = 0;
  
  for (int i = 0; i <= a; i++) {
    sum += i;
  }
  return sum;
}

int main(void) {
  int n;
  scanf("%d", &n);
  Sum1();
  Sum2(n);
  printf("%d\n", Sum3());
  printf("%d\n", Sum4(n));
  return 0;
}
```
#n의 약수를 출력하는 함수
```c
#include <stdio.h>


void Divisor(int n){
    for (int i=1; i<=n;++i){
        if (n%i==0){
            printf("%d ", i);
        }
    }
}

int main(void) {
    int n; scanf("%d",&n);
    Divisor(n);
    return 0;
}
```

#숫자의 자리를 바꾸는 프로그램
* 예:12345-> 54321
```c
#include <stdio.h>


int reverse(int n){
    int res = 0;
    while (n){
        res = res * 10 + n % 10;
        n/=10;
    }
    return res;
}

int main(void) {
    int n; scanf("%d",&n);
    printf("%d",reverse(n));
    
    return 0;
}
```
#n의 절댓값 출력

```c
#include <stdio.h>


int abs(int n){
    if (n<0){
        n*=-1;
    }
    return n;
}

int main(void) {
    int n; scanf("%d",&n);
    int res=abs(n);
    printf("%d",res);
    return 0;
}
```
