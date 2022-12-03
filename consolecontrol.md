# Console Control
* 콘솔을 이용한 다양한 코드
* 1. getch()함수 문자 입력, 16진수 사용
```c
#include <stdio.h>
#include <conio.h>

int main(){
	int ch1, ch2;
	
	ch1 = getch();
	ch2 = getch();
	printf("%d %d\n", ch1, ch2);
	printf("%X %X\n", ch1, ch2);
}
```
* ASCII 코드로 변환하여 16진수로 바꾸기
* unsigned : 양수만 쓰고 싶을 때 쓰기. 다 쓰고 싶을 땐 signed를 쓰는데 그건 생략해도 됨.
* Enter = 13을 알아두고
* 입력한 값의 ASCII 코드와 16진수 숫자 출력하기
```c
#include <stdio.h>
#include <conio.h>

int main(){
	unsigned char ch;
	
	do{
		ch = getch();
		printf("%d %x : %c\n",ch, ch, ch);
	}while (ch != 13);
	return 0;
}
```
