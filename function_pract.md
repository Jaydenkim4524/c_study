#함스 연습

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
