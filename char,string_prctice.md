# 문자를 아스키 코드로 나타내기  
* char 연습
```c
#include <stdio.h>

int main(void) {
  char ch1, ch2;
  int a, b;
  scanf("%d %d", &a, &b);
  ch1 = 'A';
  ch2 = 'a';
  printf("%c %c\n", ch1, ch2);
  printf("%d %d\n", ch1, ch2);

  printf("%c %c\n", a, b);
  printf("%d %d\n", a, b);

  return 0;
}
```
* ASCII 코드를 이용한 대소문자 바꾸기 연습
```c

#include <stdio.h>

int main(void) {
  char ch;
  scanf("%c",&ch);
  if (65<=ch && ch<=90){
    printf("%c",ch+32);
  }
  else{
    printf("%c",ch-32);
  }
  return 0;
}
```
* 이번엔 문자열을 바꿔보자!
```c
#include <stdio.h>

int main(void) {
  char ch[15]; 
  scanf("%s",ch);
  int i=0;
  while(ch[i]!='\0'){
    if (65<=ch[i] && ch[i]<=90){
    printf("%c",ch[i]+32);
    }
    else{
      printf("%c",ch[i]-32);
    }
    i++;
  }
  return 0;
}
```
* 이렇게 
