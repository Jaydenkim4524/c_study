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
* @를 방향키로 움직이기
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define X_END 79
#define Y_END 24

void GotoXY(int x, int y, int i);
void Move_LeftRightUpDown_Key(char chr, int *x, int *y);

int main(){
	char key;
	int x = 0, y = 0;
	int i = 0;
	do{
		GotoXY(x, y, i);
		printf("@");
		key = getch();
		key = getch();
		Move_LeftRightUpDown_Key(key, &x, &y);
		i++;
		if (i > 255){
			i = 0;
		}
	} while (key != 27);
}

void GotoXY(int x, int y, int i){
	COORD Pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void Move_LeftRightUpDown_Key(char key, int *x1, int *y1){
	switch (key){
		case 75:
			*x1 = *x1 - 1;
			if(*x1 < 1) *x1 = X_END;
			break;
		case 72:
			*y1 = *y1 - 1;
			if(*y1 < 1) *y1 = Y_END;
			break;
		case 77:
			*x1 = *x1 + 1;
			if(*x1 > X_END) *x1 = 1;
			break;
		case 80:
			*y1 = *y1 + 1;
			if(*y1 > Y_END) *y1 = 1;
			break;
	}
}
```
* &가 복사되지 않고 지우며 움직이는 프로그램
```c
#include <stdio.h>
#include <windows.h>

void GotoXY(int x, int y);

int main(){
	int x, y = 5;
	
	for (x = 1; x < 80; x += 2){
		system("cls");
		GotoXY(x, y);
		printf("&");
		Sleep(100);
	}
	printf("\n");
}

void GotoXY(int x, int y){
	COORD Pos = {x - 1, y - 1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}
```
* 위의 두 코드를 접목한 코드
```c
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define X_END 79
#define Y_END 24

void GotoXY(int x, int y);
void Move_LeftRightUpDown_Key(char chr, int *x, int *y);

int main(){
	char key;
	int x = 0, y = 0;
	int i = 0;
	do{
		GotoXY(x, y);
		printf("@");
		key = getch();
		key = getch();
		Move_LeftRightUpDown_Key(key, &x, &y);
	} while (key != 27);
}

void GotoXY(int x, int y){
	COORD Pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void Move_LeftRightUpDown_Key(char key, int *x1, int *y1){
	switch (key){
		case 75:
			*x1 = *x1 - 1;
			if(*x1 < 1) *x1 = X_END;
			system("cls");
			break;
		case 72:
			*y1 = *y1 - 1;
			if(*y1 < 1) *y1 = Y_END;
			system("cls");
			break;
		case 77:
			*x1 = *x1 + 1;
			if(*x1 > X_END) *x1 = 1;
			system("cls");
			break;
		case 80:
			*y1 = *y1 + 1;
			if(*y1 > Y_END) *y1 = 1;
			system("cls");
			break;
	}
}
```
